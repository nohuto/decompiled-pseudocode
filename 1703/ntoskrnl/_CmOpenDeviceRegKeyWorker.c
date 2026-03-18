/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x140483940
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x140483D10 (_CmGetDeviceRegKeyPath.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x1404896A4 (_PnpCtxRegCreateTree.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405C43B4 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
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
  int DeviceRegKeyPath; // eax
  int inited; // ebx
  int v17; // r12d
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 v21; // rax
  int DeviceRegKeySecurityDescriptor; // eax
  int v23; // r14d
  int v24; // ecx
  int v25; // r9d
  int Tree; // eax
  int v27; // eax
  HANDLE v28; // rax
  __int64 v29; // rcx
  size_t v30; // [rsp+38h] [rbp-49h]
  void *v31; // [rsp+48h] [rbp-39h] BYREF
  HANDLE v32; // [rsp+50h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  HANDLE v34; // [rsp+68h] [rbp-19h] BYREF
  __int64 v35; // [rsp+70h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v38; // [rsp+D8h] [rbp+57h] BYREF
  int v39; // [rsp+E0h] [rbp+5Fh]

  v39 = a4;
  LODWORD(v8) = 0;
  v35 = 0LL;
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
  if ( PoolWithTag )
  {
    while ( 1 )
    {
      LODWORD(v30) = v13 >> 1;
      DeviceRegKeyPath = CmGetDeviceRegKeyPath((_DWORD)a1, a6, PoolWithTag, v30, (__int64)&v38);
      inited = DeviceRegKeyPath;
      if ( DeviceRegKeyPath != -1073741789 )
        break;
      ExFreePoolWithTag(PoolWithTag, 0);
      v21 = 2LL * v38;
      PoolWithTag = 0LL;
      if ( v21 > 0xFFFFFFFF )
      {
        inited = -1073741675;
        goto LABEL_19;
      }
      v13 = 2 * v38;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v21, 0x52504E50u);
      if ( !PoolWithTag )
        goto LABEL_67;
    }
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_19;
    if ( (a3 & 0x100) != 0 )
    {
      *(_QWORD *)&DestinationString.Length = PoolWithTag;
      v29 = 0LL;
      if ( a1 )
        v29 = *a1;
      inited = SysCtxRegOpenCurrentUserKey(v29, 0LL, 0x2000000LL, &v34);
      if ( inited >= 0 )
      {
        v17 = (int)v34;
        goto LABEL_15;
      }
    }
    else
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
      if ( inited < 0 )
        goto LABEL_19;
      if ( DestinationString.Length < v13
        && DestinationString.Length > 0x32u
        && RtlPrefixUnicodeString(
             &`_CmOpenDeviceInterfaceRegKeyWorker'::`2'::ObjectPathRootPrefix,
             &DestinationString,
             1u) )
      {
        *(_QWORD *)&DestinationString.Length = PoolWithTag + 25;
        inited = PnpCtxGetCachedContextBaseKey(a1, 4LL, &v35);
        if ( inited < 0 )
          goto LABEL_19;
        v17 = v35;
LABEL_15:
        if ( a1 )
          v18 = *a1;
        else
          LODWORD(v18) = 0;
        v19 = SysCtxRegOpenKey(v18, v17, *(_DWORD *)&DestinationString.Length, 0, a5, (__int64)a7);
        switch ( v19 )
        {
          case 0:
            *a8 = 2;
            goto LABEL_19;
          case -1073741444:
            inited = -1073741595;
            break;
          case -1073741772:
            if ( !a6 )
            {
              if ( (_BYTE)a3 == 16 && (a3 & 0xF00) == 0 )
              {
                inited = -1073741810;
                goto LABEL_19;
              }
LABEL_37:
              inited = -1073741772;
              goto LABEL_19;
            }
            v38 = (unsigned __int8)a3;
            if ( (unsigned __int8)a3 == 16 && (a3 & 0xF00) == 0
              || (inited = CmOpenDeviceRegKey((__int64)a1, a2, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL), inited >= 0) )
            {
              DeviceRegKeySecurityDescriptor = CmGetDeviceRegKeySecurityDescriptor(a1, a3, &v31);
              v11 = v31;
              inited = DeviceRegKeySecurityDescriptor;
              if ( DeviceRegKeySecurityDescriptor >= 0 )
              {
                v23 = a5;
                v24 = a5;
                v25 = 0;
                if ( v31 )
                  v24 = 917510;
                LOBYTE(v25) = v38 == 19;
                LODWORD(v31) = v24;
                Tree = PnpCtxRegCreateTree(
                         (_DWORD)a1,
                         v17,
                         *(_DWORD *)&DestinationString.Length,
                         v25,
                         v24,
                         (__int64)v11,
                         (__int64)&v32,
                         (__int64)a8);
                if ( Tree == -1073741444 )
                {
                  inited = -1073741595;
                }
                else if ( Tree < 0 )
                {
                  inited = Tree;
                }
                else if ( (_DWORD)v31 == v23 )
                {
                  v28 = v32;
                  v32 = 0LL;
                  *a7 = v28;
                }
                else
                {
                  if ( a1 )
                    v8 = *a1;
                  v27 = SysCtxRegOpenKey(v8, (_DWORD)v32, 0, 0, v23, (__int64)a7);
                  if ( v27 == -1073741444 )
                    goto LABEL_37;
                  if ( v27 < 0 )
                    inited = v27;
                }
              }
            }
            break;
          default:
            inited = v19;
            break;
        }
        goto LABEL_19;
      }
      inited = -1073741811;
    }
  }
  else
  {
LABEL_67:
    inited = -1073741801;
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
  return (unsigned int)inited;
}
