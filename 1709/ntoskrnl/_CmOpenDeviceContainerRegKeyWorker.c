/*
 * XREFs of _CmOpenDeviceContainerRegKeyWorker @ 0x140550AC4
 * Callers:
 *     _CmOpenDeviceContainerRegKey @ 0x1405509AC (_CmOpenDeviceContainerRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x140533240 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140550F88 (_CmGetDeviceContainerRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140785700 (_SysCtxRegOpenCurrentUserKey.c)
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
  SIZE_T v12; // r15
  int v13; // r9d
  signed int DeviceContainerRegKeyPath; // ebx
  __int64 v15; // r14
  HANDLE v16; // rdx
  __int64 v17; // rcx
  int Tree; // ecx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-40h]
  size_t cchDest; // [rsp+30h] [rbp-30h]
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  void *v25; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF

  LODWORD(v27) = a4;
  pszDest = 0LL;
  v25 = 0LL;
  Handle = 0LL;
  if ( !a3 || (a3 & 0xFFFFFEAF) != 0 )
    goto LABEL_40;
  v12 = 260LL;
  while ( 1 )
  {
    pszDest = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x52504E50u);
    if ( !pszDest )
      break;
    LODWORD(cchDest) = (unsigned int)v12 >> 1;
    DeviceContainerRegKeyPath = CmGetDeviceContainerRegKeyPath(
                                  (unsigned int)v12 >> 1,
                                  a2,
                                  a3,
                                  v13,
                                  v22,
                                  pszDest,
                                  cchDest,
                                  (__int64)&v27);
    if ( DeviceContainerRegKeyPath == -1073741789 )
    {
      ExFreePoolWithTag(pszDest, 0);
      v20 = 2LL * (unsigned int)v27;
      pszDest = 0LL;
      v12 = 0xFFFFFFFFLL;
      if ( v20 <= 0xFFFFFFFF )
        v12 = (unsigned int)v20;
      DeviceContainerRegKeyPath = v20 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v20 <= 0xFFFFFFFF )
        continue;
    }
    goto LABEL_6;
  }
  DeviceContainerRegKeyPath = -1073741801;
LABEL_6:
  if ( DeviceContainerRegKeyPath >= 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v15 = (__int64)pszDest;
      if ( a1 )
        v21 = *a1;
      else
        v21 = 0LL;
      DeviceContainerRegKeyPath = SysCtxRegOpenCurrentUserKey(v21, 0LL, 0x2000000LL, &Handle);
      if ( DeviceContainerRegKeyPath < 0 )
        goto LABEL_22;
      v16 = Handle;
      goto LABEL_14;
    }
    DeviceContainerRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( DeviceContainerRegKeyPath < 0 )
      goto LABEL_22;
    if ( DestinationString.Length < (unsigned int)v12
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v15 = (__int64)(pszDest + 25);
      DeviceContainerRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v25);
      if ( DeviceContainerRegKeyPath < 0 )
        goto LABEL_22;
      v16 = v25;
LABEL_14:
      if ( a6 )
      {
        Tree = PnpCtxRegCreateTree(a1, (__int64)v16, v15, 0LL, a5, 0LL);
      }
      else
      {
        if ( a1 )
          v17 = *a1;
        else
          v17 = 0LL;
        Tree = SysCtxRegOpenKey(v17, (__int64)v16, v15, 0, a5, a7);
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
      goto LABEL_22;
    }
LABEL_40:
    DeviceContainerRegKeyPath = -1073741811;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  if ( pszDest )
    ExFreePoolWithTag(pszDest, 0);
  return (unsigned int)DeviceContainerRegKeyPath;
}
