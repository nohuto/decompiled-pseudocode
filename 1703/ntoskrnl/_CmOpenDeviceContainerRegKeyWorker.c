/*
 * XREFs of _CmOpenDeviceContainerRegKeyWorker @ 0x1404DFC1C
 * Callers:
 *     _CmOpenDeviceContainerRegKey @ 0x1404DFB04 (_CmOpenDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x1404896A4 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1404E00C8 (_CmGetDeviceContainerRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceContainerRegKeyWorker(
        __int64 *a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  wchar_t *pszDest; // rdi
  unsigned int v12; // r15d
  SIZE_T i; // rdx
  int v14; // r9d
  int DeviceContainerRegKeyPath; // ebx
  __int64 v16; // r14
  HANDLE v17; // rdx
  __int64 v18; // rcx
  int Tree; // ecx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v26; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v28) = a4;
  pszDest = 0LL;
  v26 = 0LL;
  Handle = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_39;
  v12 = 260;
  for ( i = 260LL; ; i = (unsigned int)v21 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = v12 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  v12 >> 1,
                                  a2,
                                  a3,
                                  v14,
                                  v23,
                                  pszDest,
                                  cchDest,
                                  (__int64)&v28);
    if ( DeviceContainerRegKeyPath != -1073741789 )
      goto LABEL_6;
    ExFreePoolWithTag(pszDest, 0);
    pszDest = 0LL;
    v21 = 2LL * (unsigned int)v28;
    if ( v21 > 0xFFFFFFFF )
    {
      DeviceContainerRegKeyPath = -1073741675;
      goto LABEL_22;
    }
    v12 = 2 * v28;
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_6:
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_22;
  if ( (a3 & 0x100) == 0 )
  {
    DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_22;
    if ( DestinationString.Length < v12
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v16 = (__int64)(pszDest + 25);
      DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v26);
      if ( DeviceContainerRegKeyPath < 0 )
        goto LABEL_22;
      v17 = v26;
      goto LABEL_14;
    }
LABEL_39:
    DeviceContainerRegKeyPath = -1073741811;
    goto LABEL_22;
  }
  v16 = (__int64)pszDest;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  DeviceContainerRegKeyPath = SysCtxRegOpenCurrentUserKey(v22, 0LL, 0x2000000LL, &Handle);
  if ( DeviceContainerRegKeyPath < 0 )
    goto LABEL_22;
  v17 = Handle;
LABEL_14:
  if ( a6 )
  {
    Tree = PnpCtxRegCreateTree(a1, (__int64)v17, v16, 0LL, a5, 0LL);
  }
  else
  {
    if ( a1 )
      v18 = *a1;
    else
      v18 = 0LL;
    Tree = SysCtxRegOpenKey(v18, (__int64)v17, v16, 0, a5, a7);
    if ( Tree >= 0 )
      *a8 = 2;
  }
  if ( Tree == -1073741444 )
  {
    DeviceContainerRegKeyPath = -1073741595;
  }
  else if ( Tree < 0 )
  {
    DeviceContainerRegKeyPath = Tree;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
