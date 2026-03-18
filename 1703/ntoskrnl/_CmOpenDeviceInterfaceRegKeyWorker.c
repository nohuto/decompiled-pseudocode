/*
 * XREFs of _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404E1878
 * Callers:
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404E175C (_CmOpenDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x1404896A4 (_PnpCtxRegCreateTree.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404E175C (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404E1AF0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKeyWorker(
        __int64 *a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  PVOID PoolWithTag; // rdi
  int v11; // ebx
  SIZE_T v13; // r15
  int DeviceInterfaceRegKeyPath; // ebx
  __int64 v15; // r12
  HANDLE v16; // r15
  __int64 v17; // rcx
  int Tree; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-50h]
  size_t cchDest; // [rsp+30h] [rbp-40h]
  HANDLE v24; // [rsp+40h] [rbp-30h] BYREF
  void *v25; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+50h] BYREF

  PoolWithTag = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v11 = a2;
  Handle = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCCC) != 0 )
    goto LABEL_50;
  v13 = (a3 & 0x200) != 0 ? 600 : 480;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x52504E50u);
  if ( PoolWithTag )
  {
    while ( 1 )
    {
      LODWORD(cchDest) = (unsigned int)v13 >> 1;
      DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                    (unsigned int)v13 >> 1,
                                    v11,
                                    a3,
                                    a4,
                                    v22,
                                    (__int64)PoolWithTag,
                                    cchDest,
                                    (__int64)&v29);
      if ( DeviceInterfaceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
      v20 = 2LL * (unsigned int)v29;
      if ( v20 > 0xFFFFFFFF )
      {
        DeviceInterfaceRegKeyPath = -1073741675;
        goto LABEL_17;
      }
      LODWORD(v13) = 2 * v29;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v20, 0x52504E50u);
      if ( !PoolWithTag )
        goto LABEL_36;
      v11 = a2;
    }
  }
  else
  {
LABEL_36:
    DeviceInterfaceRegKeyPath = -1073741801;
  }
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_17;
  if ( (a3 & 0x100) != 0 )
  {
    v15 = (__int64)PoolWithTag;
    if ( a1 )
      v21 = *a1;
    else
      v21 = 0LL;
    DeviceInterfaceRegKeyPath = SysCtxRegOpenCurrentUserKey(v21, 0LL, 0x2000000LL, &v24);
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_17;
    v16 = v24;
    goto LABEL_13;
  }
  DeviceInterfaceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_17;
  if ( DestinationString.Length >= (unsigned int)v13
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(&`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
  {
LABEL_50:
    DeviceInterfaceRegKeyPath = -1073741811;
    goto LABEL_17;
  }
  v15 = (__int64)PoolWithTag + 50;
  DeviceInterfaceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v25);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_17;
  v16 = v25;
LABEL_13:
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  Tree = SysCtxRegOpenKey(v17, (__int64)v16, v15, 0, a5, a7);
  if ( !Tree )
  {
    *a8 = 2;
    goto LABEL_17;
  }
  if ( Tree == -1073741444 )
  {
LABEL_43:
    DeviceInterfaceRegKeyPath = -1073741595;
    goto LABEL_17;
  }
  if ( Tree != -1073741772 )
  {
LABEL_31:
    DeviceInterfaceRegKeyPath = Tree;
    goto LABEL_17;
  }
  if ( a6 )
  {
    if ( (_BYTE)a3 == 48 && (a3 & 0xF00) == 0
      || (Tree = CmOpenDeviceInterfaceRegKey((__int64)a1, a2, 0x30u, 0LL, 1, 0, (__int64)&Handle, 0LL), Tree >= 0) )
    {
      Tree = PnpCtxRegCreateTree(a1, (__int64)v16, v15, 0LL, a5, 0LL);
      if ( Tree != -1073741444 )
      {
        if ( Tree >= 0 )
          goto LABEL_17;
        goto LABEL_31;
      }
      goto LABEL_43;
    }
    goto LABEL_31;
  }
  if ( (_BYTE)a3 != 48 || (a3 & 0xF00) != 0 )
    DeviceInterfaceRegKeyPath = -1073741772;
  else
    DeviceInterfaceRegKeyPath = -1073741127;
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( v24 )
    ZwClose(v24);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInterfaceRegKeyPath;
}
