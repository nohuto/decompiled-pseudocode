/*
 * XREFs of _CmDeleteDeviceContainerRegKeyWorker @ 0x140780B78
 * Callers:
 *     _CmDeleteDeviceContainerRegKey @ 0x140780A48 (_CmDeleteDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140550F88 (_CmGetDeviceContainerRegKeyPath.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14057EC84 (_RegRtlDeleteKeyTransacted.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140785700 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceContainerRegKeyWorker(_QWORD *a1, __int64 a2, unsigned int a3, int a4, char a5)
{
  wchar_t *pszDest; // rdi
  SIZE_T v9; // r15
  signed int DeviceContainerRegKeyPath; // ebx
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  const WCHAR *v13; // r14
  char *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  signed int v17; // eax
  __int64 v18; // r8
  int v20; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  char *v23; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v25) = a4;
  pszDest = 0LL;
  v23 = 0LL;
  Handle = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_37;
  v9 = 260LL;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v9 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v9 >> 1,
                                  a2,
                                  a3,
                                  v12,
                                  v20,
                                  pszDest,
                                  cchDest,
                                  (unsigned int *)&v25);
    if ( DeviceContainerRegKeyPath == -1073741789 )
    {
      ExFreePoolWithTag(pszDest, 0);
      v11 = 2LL * (unsigned int)v25;
      pszDest = 0LL;
      v9 = 0xFFFFFFFFLL;
      if ( v11 <= 0xFFFFFFFF )
        v9 = (unsigned int)v11;
      DeviceContainerRegKeyPath = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v11 <= 0xFFFFFFFF )
        continue;
    }
    goto LABEL_10;
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_10:
  if ( DeviceContainerRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v13 = pszDest;
      if ( a1 )
        v15 = *a1;
      else
        v15 = 0LL;
      DeviceContainerRegKeyPath = SysCtxRegOpenCurrentUserKey(v15, 0LL, 0x2000000LL, &Handle);
      if ( DeviceContainerRegKeyPath < 0 )
        goto LABEL_38;
      v14 = (char *)Handle;
      goto LABEL_23;
    }
    DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_38;
    if ( DestinationString.Length < (unsigned int)v9
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v13 = pszDest + 25;
      DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v23);
      if ( DeviceContainerRegKeyPath < 0 )
        goto LABEL_38;
      v14 = v23;
LABEL_23:
      if ( a5 )
      {
        if ( a1 && *a1 )
          v16 = *(_QWORD *)(*a1 + 8LL);
        else
          v16 = 0LL;
        v17 = RegRtlDeleteTreeInternal(v14, v13, v16, 0);
      }
      else
      {
        if ( a1 && *a1 )
          v18 = *(_QWORD *)(*a1 + 8LL);
        else
          v18 = 0LL;
        v17 = RegRtlDeleteKeyTransacted(v14, v13, v18);
      }
      if ( (int)(v17 + 0x80000000) >= 0 && v17 != -1073741444 )
        DeviceContainerRegKeyPath = v17;
      goto LABEL_38;
    }
LABEL_37:
    DeviceContainerRegKeyPath = -1073741811;
  }
LABEL_38:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
