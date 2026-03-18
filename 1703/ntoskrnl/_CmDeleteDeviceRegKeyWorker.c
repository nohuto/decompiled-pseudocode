/*
 * XREFs of _CmDeleteDeviceRegKeyWorker @ 0x14073AC6C
 * Callers:
 *     _CmDeleteDeviceRegKey @ 0x14073AB30 (_CmDeleteDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     wcsrchr @ 0x14016BD30 (wcsrchr.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x140483D10 (_CmGetDeviceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     _CmSetDeviceRegProp @ 0x1404DE39C (_CmSetDeviceRegProp.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405AA36C (_RegRtlDeleteKeyTransacted.c)
 *     _CmDeleteDeviceRegKey @ 0x14073AB30 (_CmDeleteDeviceRegKey.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x14073EEB8 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14074178C (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceRegKeyWorker(_QWORD *a1, __int64 a2, int a3, int a4, char a5)
{
  wchar_t *PoolWithTag; // r15
  unsigned int v10; // esi
  SIZE_T i; // rdx
  int DeviceRegKeyPath; // ebx
  unsigned __int64 v13; // rax
  const WCHAR *v14; // rsi
  char *v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // r13d
  int *p_DestinationString; // rax
  unsigned int v19; // r13d
  int v20; // eax
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r8
  wchar_t *v24; // rax
  wchar_t *v25; // r12
  __int64 v26; // r8
  __int64 v27; // r8
  int v28; // ecx
  size_t v30; // [rsp+30h] [rbp-50h]
  unsigned int v31; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING *v32; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v33; // [rsp+50h] [rbp-30h] BYREF
  int v34[2]; // [rsp+58h] [rbp-28h]
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)v34 = a2;
  v32 = 0LL;
  v33 = 0LL;
  Handle = 0LL;
  PoolWithTag = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    goto LABEL_71;
  v10 = (a3 & 0x200) != 0 ? 360 : 240;
  for ( i = v10; ; i = (unsigned int)v13 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !PoolWithTag )
      break;
    LODWORD(v30) = v10 >> 1;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath((int)a1, a2, a3, a4, 0, PoolWithTag, v30, (__int64)&v31);
    if ( DeviceRegKeyPath != -1073741789 )
      goto LABEL_10;
    ExFreePoolWithTag(PoolWithTag, 0);
    v13 = 2LL * v31;
    PoolWithTag = 0LL;
    if ( v13 > 0xFFFFFFFF )
    {
      DeviceRegKeyPath = -1073741675;
      goto LABEL_72;
    }
    v10 = 2 * v31;
  }
  DeviceRegKeyPath = -1073741801;
LABEL_10:
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_72;
  if ( (a3 & 0x100) != 0 )
  {
    v14 = PoolWithTag;
    v16 = 0LL;
    if ( a1 )
      v16 = *a1;
    DeviceRegKeyPath = SysCtxRegOpenCurrentUserKey(v16, 0LL, 0x2000000LL, &v33);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_72;
    v15 = (char *)v33;
    goto LABEL_22;
  }
  DeviceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_72;
  if ( DestinationString.Length >= v10
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_71:
    DeviceRegKeyPath = -1073741811;
    goto LABEL_72;
  }
  v14 = PoolWithTag + 25;
  DeviceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v32);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_72;
  v15 = (char *)v32;
LABEL_22:
  DeviceRegKeyPath = CmOpenDeviceRegKey((__int64)a1, a2, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_72;
  v17 = (unsigned __int8)a3;
  v31 = (unsigned __int8)a3;
  if ( (unsigned __int8)a3 == 18 && (a3 & 0xF00) == 0 )
  {
    p_DestinationString = (int *)&DestinationString;
    *(_DWORD *)&DestinationString.Length = 786;
    v32 = &DestinationString;
    v19 = 0;
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = 530;
    LODWORD(DestinationString.Buffer) = 274;
    while ( 1 )
    {
      v20 = CmDeleteDeviceRegKey((__int64)a1, *(__int64 *)v34, *p_DestinationString, 0);
      if ( v20 )
      {
        if ( v20 != -1073741772 && v20 != -1073741811 && v20 != -1073741637 )
          break;
      }
      ++v19;
      p_DestinationString = (int *)(&v32->MaximumLength + 1);
      v32 = (UNICODE_STRING *)((char *)v32 + 4);
      if ( v19 >= 3 )
        goto LABEL_33;
    }
    DeviceRegKeyPath = v20;
LABEL_33:
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_72;
    CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues((int)a1, v34[0]);
    v21 = CmSetDeviceRegProp((__int64)a1, *(__int64 *)v34, 0LL, 0xAu, 1u, 0LL, 0, 0);
    if ( v21 && v21 != -1073741275 && v21 != -1073741810 )
      goto LABEL_37;
    v17 = v31;
  }
  if ( a5 )
  {
    if ( a1 && *a1 )
      v22 = *(_QWORD *)(*a1 + 8LL);
    else
      v22 = 0LL;
    v21 = RegRtlDeleteTreeInternal(v15, v14, v22, 0);
  }
  else
  {
    if ( a1 && *a1 )
      v23 = *(_QWORD *)(*a1 + 8LL);
    else
      v23 = 0LL;
    v21 = RegRtlDeleteKeyTransacted(v15, v14, v23);
  }
  if ( v21 == -1073741444 )
    goto LABEL_72;
  if ( v21 < 0 )
    goto LABEL_37;
  if ( v17 != 18 && (v17 != 17 || (a3 & 0xF00) != 0) )
  {
    v24 = wcsrchr(v14, 0x5Cu);
    if ( !v24 || (*v24 = 0, (v25 = wcsrchr(v14, 0x5Cu)) == 0LL) )
    {
      DeviceRegKeyPath = -1073741595;
      goto LABEL_72;
    }
    v26 = a1 && *a1 ? *(_QWORD *)(*a1 + 8LL) : 0LL;
    v21 = RegRtlDeleteKeyTransacted(v15, v14, v26);
    if ( v21 != -1073741535 )
    {
      if ( v21 >= 0 )
      {
        *v25 = 0;
        if ( a1 && *a1 )
          v27 = *(_QWORD *)(*a1 + 8LL);
        else
          v27 = 0LL;
        v28 = RegRtlDeleteKeyTransacted(v15, v14, v27);
        if ( (int)(v28 + 0x80000000) >= 0 && v28 != -1073741535 )
          DeviceRegKeyPath = v28;
        goto LABEL_72;
      }
LABEL_37:
      DeviceRegKeyPath = v21;
    }
  }
LABEL_72:
  if ( Handle )
    ZwClose(Handle);
  if ( v33 )
    ZwClose(v33);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceRegKeyPath;
}
