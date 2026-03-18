/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x140521660
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x140521A38 (_CmGetDeviceRegKeyPath.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x140533240 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405D6474 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140785700 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceRegKeyWorker(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        _QWORD *a7,
        _DWORD *a8)
{
  __int64 v8; // rsi
  void *v11; // r13
  unsigned int v12; // eax
  unsigned int v13; // r12d
  wchar_t *PoolWithTag; // rdi
  int DeviceRegKeyPath; // ebx
  int v16; // r12d
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int64 v20; // rcx
  int DeviceRegKeySecurityDescriptor; // eax
  int v22; // r14d
  int v23; // ecx
  int v24; // r9d
  int Tree; // eax
  int v26; // eax
  HANDLE v27; // rax
  __int64 v28; // rcx
  size_t v29; // [rsp+38h] [rbp-49h]
  __int64 v30; // [rsp+48h] [rbp-39h] BYREF
  void *v31; // [rsp+50h] [rbp-31h] BYREF
  HANDLE v32; // [rsp+58h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  HANDLE v34; // [rsp+70h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v37; // [rsp+D8h] [rbp+57h] BYREF
  int v38; // [rsp+E0h] [rbp+5Fh]

  v38 = a4;
  LODWORD(v8) = 0;
  v30 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v31 = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    return 3221225485LL;
  v12 = 360;
  if ( (a3 & 0x200) == 0 )
    v12 = 240;
  v13 = v12;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x52504E50u);
  if ( !PoolWithTag )
  {
LABEL_68:
    DeviceRegKeyPath = -1073741801;
    goto LABEL_19;
  }
  while ( 1 )
  {
    LODWORD(v29) = v13 >> 1;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath((_DWORD)a1, a2, a6, PoolWithTag, v29, (__int64)&v37);
    if ( DeviceRegKeyPath != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0);
    v20 = 2LL * v37;
    v13 = -1;
    PoolWithTag = 0LL;
    if ( v20 > 0xFFFFFFFF )
    {
      DeviceRegKeyPath = -1073741675;
      break;
    }
    v13 = 2 * v37;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v20, 0x52504E50u);
    if ( !PoolWithTag )
      goto LABEL_68;
  }
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_19;
  if ( (a3 & 0x100) != 0 )
  {
    *(_QWORD *)&DestinationString.Length = PoolWithTag;
    v28 = 0LL;
    if ( a1 )
      v28 = *a1;
    DeviceRegKeyPath = SysCtxRegOpenCurrentUserKey(v28, 0LL, 0x2000000LL, &v34);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_19;
    v16 = (int)v34;
  }
  else
  {
    DeviceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_19;
    if ( DestinationString.Length >= v13
      || DestinationString.Length <= 0x32u
      || !RtlPrefixUnicodeString(
            &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
            &DestinationString,
            1u) )
    {
      DeviceRegKeyPath = -1073741811;
      goto LABEL_19;
    }
    *(_QWORD *)&DestinationString.Length = PoolWithTag + 25;
    DeviceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4LL, &v30);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_19;
    v16 = v30;
  }
  if ( a1 )
    v17 = *a1;
  else
    LODWORD(v17) = 0;
  v18 = SysCtxRegOpenKey(v17, v16, *(_DWORD *)&DestinationString.Length, 0, a5, (__int64)a7);
  if ( v18 )
  {
    if ( v18 == -1073741444 )
    {
      DeviceRegKeyPath = -1073741595;
      goto LABEL_19;
    }
    if ( v18 != -1073741772 )
    {
      DeviceRegKeyPath = v18;
      goto LABEL_19;
    }
    if ( a6 )
    {
      LODWORD(v30) = (unsigned __int8)a3;
      if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
      {
        DeviceRegKeyPath = CmOpenDeviceRegKey((__int64)a1, a2, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
        if ( DeviceRegKeyPath < 0 )
          goto LABEL_19;
      }
      DeviceRegKeySecurityDescriptor = CmGetDeviceRegKeySecurityDescriptor(a1, a3, &v31);
      v11 = v31;
      DeviceRegKeyPath = DeviceRegKeySecurityDescriptor;
      if ( DeviceRegKeySecurityDescriptor < 0 )
        goto LABEL_19;
      v22 = a5;
      v23 = a5;
      v24 = 0;
      if ( v31 )
        v23 = 917510;
      LOBYTE(v24) = (_DWORD)v30 == 19;
      LODWORD(v31) = v23;
      Tree = PnpCtxRegCreateTree(
               (_DWORD)a1,
               v16,
               *(_DWORD *)&DestinationString.Length,
               v24,
               v23,
               (__int64)v11,
               (__int64)&v32,
               (__int64)a8);
      if ( Tree == -1073741444 )
      {
        DeviceRegKeyPath = -1073741595;
        goto LABEL_19;
      }
      if ( Tree < 0 )
      {
        DeviceRegKeyPath = Tree;
        goto LABEL_19;
      }
      if ( (_DWORD)v31 == v22 )
      {
        v27 = v32;
        v32 = 0LL;
        *a7 = v27;
        goto LABEL_19;
      }
      if ( a1 )
        v8 = *a1;
      v26 = SysCtxRegOpenKey(v8, (_DWORD)v32, 0, 0, v22, (__int64)a7);
      if ( v26 != -1073741444 )
      {
        if ( v26 < 0 )
          DeviceRegKeyPath = v26;
        goto LABEL_19;
      }
    }
    else if ( (_BYTE)a3 == 16 && (a3 & 0xF00) == 0 )
    {
      DeviceRegKeyPath = -1073741810;
      goto LABEL_19;
    }
    DeviceRegKeyPath = -1073741772;
  }
  else
  {
    *a8 = 2;
  }
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  if ( v34 )
    ZwClose(v34);
  if ( v32 )
    ZwClose(v32);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceRegKeyPath;
}
