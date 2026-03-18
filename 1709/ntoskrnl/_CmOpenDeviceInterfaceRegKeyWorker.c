/*
 * XREFs of _CmOpenDeviceInterfaceRegKeyWorker @ 0x14051CAB4
 * Callers:
 *     _CmOpenDeviceInterfaceRegKey @ 0x14051C998 (_CmOpenDeviceInterfaceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14051C998 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14051CD1C (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x140533240 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140785700 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceInterfaceRegKeyWorker(
        __int64 *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  PVOID PoolWithTag; // rdi
  int v11; // ebx
  unsigned int v13; // r15d
  NTSTATUS DeviceInterfaceRegKeyPath; // ebx
  int v15; // r12d
  int v16; // r15d
  __int64 v17; // rcx
  __int64 v18; // r13
  int Tree; // eax
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-50h]
  size_t cchDest; // [rsp+30h] [rbp-40h]
  HANDLE v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  __int64 v30; // [rsp+C0h] [rbp+50h] BYREF

  PoolWithTag = 0LL;
  v26 = 0LL;
  v25 = 0LL;
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
      LODWORD(cchDest) = v13 >> 1;
      DeviceInterfaceRegKeyPath = CmGetDeviceInterfaceRegKeyPath(
                                    v13 >> 1,
                                    v11,
                                    a3,
                                    a4,
                                    v23,
                                    (__int64)PoolWithTag,
                                    cchDest,
                                    (__int64)&v30);
      if ( DeviceInterfaceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
      v21 = 2LL * (unsigned int)v30;
      v13 = -1;
      if ( v21 <= 0xFFFFFFFF )
        v13 = 2 * v30;
      DeviceInterfaceRegKeyPath = v21 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v21 > 0xFFFFFFFF )
        break;
      v11 = a2;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x52504E50u);
      if ( !PoolWithTag )
        goto LABEL_40;
    }
  }
  else
  {
LABEL_40:
    DeviceInterfaceRegKeyPath = -1073741801;
  }
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_17;
  if ( (a3 & 0x100) != 0 )
  {
    v15 = (int)PoolWithTag;
    if ( a1 )
      v22 = *a1;
    else
      v22 = 0LL;
    DeviceInterfaceRegKeyPath = SysCtxRegOpenCurrentUserKey(v22, 0LL, 0x2000000LL, &v25);
    if ( DeviceInterfaceRegKeyPath < 0 )
      goto LABEL_17;
    v16 = (int)v25;
    goto LABEL_13;
  }
  DeviceInterfaceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_17;
  if ( DestinationString.Length >= v13
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(&`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix, &DestinationString, 1u) )
  {
LABEL_50:
    DeviceInterfaceRegKeyPath = -1073741811;
    goto LABEL_17;
  }
  v15 = (_DWORD)PoolWithTag + 50;
  DeviceInterfaceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4LL, &v26);
  if ( DeviceInterfaceRegKeyPath < 0 )
    goto LABEL_17;
  v16 = v26;
LABEL_13:
  if ( a1 )
    v17 = *a1;
  else
    LODWORD(v17) = 0;
  v18 = a7;
  Tree = SysCtxRegOpenKey(v17, v16, v15, 0, a5, a7);
  if ( !Tree )
  {
    *a8 = 2;
    goto LABEL_17;
  }
  if ( Tree == -1073741444 )
  {
LABEL_47:
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
      Tree = PnpCtxRegCreateTree((_DWORD)a1, v16, v15, 0, a5, 0LL, v18, (__int64)a8);
      if ( Tree != -1073741444 )
      {
        if ( Tree >= 0 )
          goto LABEL_17;
        goto LABEL_31;
      }
      goto LABEL_47;
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
  if ( v25 )
    ZwClose(v25);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceInterfaceRegKeyPath;
}
