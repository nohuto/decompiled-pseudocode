/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x1405055A0
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 *     _CmGetDeviceRegKeyPath @ 0x140505AF4 (_CmGetDeviceRegKeyPath.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140506374 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegCreateTree @ 0x140586F54 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405E09D4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407F0408 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmOpenDeviceRegKeyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        _QWORD *a7,
        _DWORD *a8)
{
  int v11; // ebx
  wchar_t *v12; // r15
  PVOID v13; // rsi
  unsigned int v14; // r12d
  unsigned int v15; // esi
  wchar_t *PoolWithTag; // rax
  signed int DeviceRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  int v19; // esi
  HANDLE v20; // rdx
  __int64 v21; // rcx
  int v22; // r13d
  int Tree; // eax
  unsigned __int64 v25; // rcx
  int v26; // r12d
  int v27; // r14d
  __int64 v28; // rcx
  HANDLE v29; // rax
  __int64 v30; // rcx
  size_t v31; // [rsp+30h] [rbp-50h]
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v33; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v34; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v35; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v39; // [rsp+D0h] [rbp+50h] BYREF

  v35 = 0LL;
  v11 = a2;
  v34 = 0LL;
  v12 = 0LL;
  v33 = 0LL;
  v13 = 0LL;
  Handle = 0LL;
  v14 = 4;
  P = 0LL;
  if ( a3 && (a3 & 0xFFFFFCE8) == 0 )
  {
    v15 = (a3 & 0x200) != 0 ? 360 : 240;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v15, 0x52504E50u);
    while ( 1 )
    {
      v12 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      LODWORD(v31) = v15 >> 1;
      DeviceRegKeyPath = CmGetDeviceRegKeyPath(a1, v11, a3, a4, a6, PoolWithTag, v31, (__int64)&v39);
      if ( DeviceRegKeyPath != -1073741789 )
        goto LABEL_6;
      ExFreePoolWithTag(v12, 0);
      v25 = 2LL * v39;
      v12 = 0LL;
      v15 = -1;
      if ( v25 <= 0xFFFFFFFF )
        v15 = 2 * v39;
      DeviceRegKeyPath = v25 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v25 > 0xFFFFFFFF )
        goto LABEL_6;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v15, 0x52504E50u);
      v11 = a2;
    }
    DeviceRegKeyPath = -1073741801;
LABEL_6:
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_20;
    if ( (a3 & 0x100) != 0 )
    {
      v19 = (int)v12;
      if ( a1 )
        v30 = *(_QWORD *)(a1 + 224);
      else
        v30 = 0LL;
      DeviceRegKeyPath = SysCtxRegOpenCurrentUserKey(v30, 0LL, 0x2000000LL, &v34);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_20;
      v20 = v34;
LABEL_16:
      v35 = v20;
      if ( a1 )
        v21 = *(_QWORD *)(a1 + 224);
      else
        LODWORD(v21) = 0;
      v22 = a5;
      Tree = SysCtxRegOpenKey(v21, (_DWORD)v20, v19, 0, a5, (__int64)a7);
      if ( !Tree )
      {
        *a8 = 2;
        goto LABEL_20;
      }
      if ( Tree == -1073741444 )
        goto LABEL_71;
      if ( Tree != -1073741772 )
      {
LABEL_57:
        DeviceRegKeyPath = Tree;
        goto LABEL_20;
      }
      v26 = (unsigned __int8)a3;
      if ( !a6 )
      {
        if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
          DeviceRegKeyPath = -1073741772;
        else
          DeviceRegKeyPath = -1073741810;
        goto LABEL_20;
      }
      if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
      {
        DeviceRegKeyPath = CmOpenDeviceRegKey(a1, a2, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
        if ( DeviceRegKeyPath < 0 )
          goto LABEL_20;
      }
      DeviceRegKeyPath = CmGetDeviceRegKeySecurityDescriptor(a1, a3, &P);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_20;
      v27 = v22;
      if ( P )
        v27 = 917510;
      Tree = PnpCtxRegCreateTree(a1, (_DWORD)v35, v19, v26 == 19, v27, (__int64)P, (__int64)&v33, (__int64)a8);
      if ( Tree == -1073741444 )
      {
LABEL_71:
        DeviceRegKeyPath = -1073741595;
        goto LABEL_20;
      }
      if ( Tree < 0 )
        goto LABEL_57;
      if ( v27 == v22 )
      {
        v29 = v33;
        v33 = 0LL;
        *a7 = v29;
        goto LABEL_20;
      }
      if ( a1 )
        v28 = *(_QWORD *)(a1 + 224);
      else
        LODWORD(v28) = 0;
      Tree = SysCtxRegOpenKey(v28, (_DWORD)v33, 0, 0, v22, (__int64)a7);
      if ( Tree == -1073741444 )
      {
        DeviceRegKeyPath = -1073741772;
        goto LABEL_20;
      }
      if ( Tree < 0 )
        goto LABEL_57;
LABEL_20:
      v13 = P;
      goto LABEL_21;
    }
    DeviceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, v12);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_20;
    Length = DestinationString.Length;
    if ( DestinationString.Length < v15
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v19 = (_DWORD)v12 + 50;
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = v12 + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&`_CmOpenDeviceRegKeyWorker'::`2'::EnumKeyPrefix, &DestinationString, 1u) )
      {
        v14 = 5;
        v19 = (_DWORD)v12 + 60;
      }
      else if ( RtlPrefixUnicodeString(
                  &`_CmOpenDeviceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                  &DestinationString,
                  1u) )
      {
        v14 = 14;
        v19 = (_DWORD)v12 + 86;
      }
      DeviceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v14, &v35);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_20;
      v20 = v35;
      goto LABEL_16;
    }
    v13 = P;
  }
  DeviceRegKeyPath = -1073741811;
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  if ( v34 )
    ZwClose(v34);
  if ( v33 )
    ZwClose(v33);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)DeviceRegKeyPath;
}
