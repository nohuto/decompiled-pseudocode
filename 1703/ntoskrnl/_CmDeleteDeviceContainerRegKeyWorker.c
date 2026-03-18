/*
 * XREFs of _CmDeleteDeviceContainerRegKeyWorker @ 0x14073C458
 * Callers:
 *     _CmDeleteDeviceContainerRegKey @ 0x14073C328 (_CmDeleteDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1404E00C8 (_CmGetDeviceContainerRegKeyPath.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405AA36C (_RegRtlDeleteKeyTransacted.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceContainerRegKeyWorker(_QWORD *a1, __int64 a2, unsigned int a3, int a4, char a5)
{
  wchar_t *pszDest; // rsi
  unsigned int v9; // r15d
  SIZE_T i; // rdx
  int DeviceContainerRegKeyPath; // ebx
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  const WCHAR *v14; // r14
  char *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  char *v24; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v26) = a4;
  pszDest = 0LL;
  v24 = 0LL;
  Handle = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_37;
  v9 = 260;
  for ( i = 260LL; ; i = (unsigned int)v12 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = v9 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(v9 >> 1, a2, a3, v13, v21, pszDest, cchDest, &v26);
    if ( DeviceContainerRegKeyPath != -1073741789 )
      goto LABEL_9;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v12 = 2LL * (unsigned int)v26;
    if ( v12 > 0xFFFFFFFF )
    {
      DeviceContainerRegKeyPath = -1073741675;
      goto LABEL_38;
    }
    v9 = 2 * v26;
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_9:
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_38;
  if ( (a3 & 0x100) == 0 )
  {
    DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_38;
    if ( DestinationString.Length < v9
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v14 = pszDest + 25;
      DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v24);
      if ( DeviceContainerRegKeyPath < 0 )
        goto LABEL_38;
      v15 = v24;
      goto LABEL_23;
    }
LABEL_37:
    DeviceContainerRegKeyPath = -1073741811;
    goto LABEL_38;
  }
  v14 = pszDest;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  DeviceContainerRegKeyPath = SysCtxRegOpenCurrentUserKey(v16, 0LL, 0x2000000LL, &Handle);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_38;
  v15 = (char *)Handle;
LABEL_23:
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
    DeviceContainerRegKeyPath = v18;
LABEL_38:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
