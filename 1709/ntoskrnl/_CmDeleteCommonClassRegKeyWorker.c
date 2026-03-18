/*
 * XREFs of _CmDeleteCommonClassRegKeyWorker @ 0x14077E748
 * Callers:
 *     _CmDeleteCommonClassRegKey @ 0x14077E5F8 (_CmDeleteCommonClassRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmGetCommonClassRegKeyPath @ 0x14051D9E4 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14057EC84 (_RegRtlDeleteKeyTransacted.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140785700 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteCommonClassRegKeyWorker(_QWORD *a1, const WCHAR *a2, __int16 a3, int a4, char a5)
{
  unsigned int v9; // r14d
  SIZE_T i; // rdx
  signed int CommonClassRegKeyPath; // ebx
  unsigned __int64 v12; // rcx
  wchar_t *pszDest; // rsi
  const WCHAR *v14; // r14
  char *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  signed int v18; // eax
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  char *v24; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+40h] BYREF

  v24 = 0LL;
  Handle = 0LL;
  v9 = (a3 & 0x200) != 0 ? 320 : 200;
  for ( i = v9; ; i = v9 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = v9 >> 1;
    CommonClassRegKeyPath = CmGetCommonClassRegKeyPath(v9 >> 1, a2, a3, a4, v21, pszDest, cchDest, (unsigned int *)&v26);
    if ( CommonClassRegKeyPath != -1073741789 )
      goto LABEL_9;
    ExFreePoolWithTag(pszDest, 0);
    v12 = 2LL * (unsigned int)v26;
    pszDest = 0LL;
    v9 = -1;
    if ( v12 <= 0xFFFFFFFF )
      v9 = 2 * v26;
    CommonClassRegKeyPath = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v12 > 0xFFFFFFFF )
      goto LABEL_9;
  }
  CommonClassRegKeyPath = -1073741801;
LABEL_9:
  if ( CommonClassRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) == 0 )
    {
      CommonClassRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
      if ( CommonClassRegKeyPath < 0 )
        goto LABEL_36;
      if ( DestinationString.Length >= v9
        || DestinationString.Length <= 0x32u
        || !RtlPrefixUnicodeString(
              &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
              &DestinationString,
              1u) )
      {
        CommonClassRegKeyPath = -1073741811;
        goto LABEL_36;
      }
      v14 = pszDest + 25;
      CommonClassRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v24);
      if ( CommonClassRegKeyPath < 0 )
        goto LABEL_36;
      v15 = v24;
      goto LABEL_22;
    }
    v14 = pszDest;
    v16 = 0LL;
    if ( a1 )
      v16 = *a1;
    CommonClassRegKeyPath = SysCtxRegOpenCurrentUserKey(v16, 0LL, 0x2000000LL, &Handle);
    if ( CommonClassRegKeyPath >= 0 )
    {
      v15 = (char *)Handle;
LABEL_22:
      if ( a5 )
      {
        if ( a1 && *a1 )
          v17 = *(_QWORD *)(*a1 + 8LL);
        else
          v17 = 0LL;
        v18 = RegRtlDeleteTreeInternal(v15, v14, v17, 0);
      }
      else
      {
        if ( a1 && *a1 )
          v19 = *(_QWORD *)(*a1 + 8LL);
        else
          v19 = 0LL;
        v18 = RegRtlDeleteKeyTransacted(v15, v14, v19);
      }
      if ( (int)(v18 + 0x80000000) >= 0 && v18 != -1073741444 )
        CommonClassRegKeyPath = v18;
    }
  }
LABEL_36:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)CommonClassRegKeyPath;
}
