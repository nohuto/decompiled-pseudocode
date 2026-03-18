/*
 * XREFs of _CmDeleteDeviceRegKeyWorker @ 0x14077F360
 * Callers:
 *     _CmDeleteDeviceRegKey @ 0x14077F224 (_CmDeleteDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     wcsrchr @ 0x140160610 (wcsrchr.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x140521A38 (_CmGetDeviceRegKeyPath.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14052210C (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 *     _CmSetDeviceRegProp @ 0x140551244 (_CmSetDeviceRegProp.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14057EC84 (_RegRtlDeleteKeyTransacted.c)
 *     _CmDeleteDeviceRegKey @ 0x14077F224 (_CmDeleteDeviceRegKey.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x14078340C (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140785700 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall CmDeleteDeviceRegKeyWorker(_QWORD *a1, __int64 a2, int a3, int a4, char a5)
{
  wchar_t *PoolWithTag; // r15
  unsigned int v10; // esi
  SIZE_T i; // rdx
  signed int DeviceRegKeyPath; // ebx
  unsigned __int64 v13; // rcx
  const WCHAR *v14; // rsi
  char *v15; // r14
  __int64 v16; // rcx
  int v17; // r13d
  int *p_DestinationString; // rax
  unsigned int v19; // r13d
  signed int v20; // eax
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r8
  wchar_t *v24; // rax
  wchar_t *v25; // r12
  __int64 v26; // r8
  __int64 v27; // r8
  signed int v28; // ecx
  size_t v30; // [rsp+30h] [rbp-51h]
  char *v31; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-39h] BYREF
  HANDLE v33; // [rsp+50h] [rbp-31h] BYREF
  UNICODE_STRING *v34; // [rsp+58h] [rbp-29h]
  __int64 v35; // [rsp+60h] [rbp-21h]
  HANDLE Handle; // [rsp+68h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-11h] BYREF

  v35 = a2;
  v31 = 0LL;
  v33 = 0LL;
  Handle = 0LL;
  PoolWithTag = 0LL;
  if ( !a3 || (a3 & 0xFFFFFCE8) != 0 )
    goto LABEL_72;
  v10 = (a3 & 0x200) != 0 ? 360 : 240;
  for ( i = v10; ; i = v10 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, i, 0x52504E50u);
    if ( !PoolWithTag )
      break;
    LODWORD(v30) = v10 >> 1;
    DeviceRegKeyPath = CmGetDeviceRegKeyPath((__int64)a1, a2, a3, a4, 0, PoolWithTag, v30, (__int64)&v32);
    if ( DeviceRegKeyPath != -1073741789 )
      goto LABEL_11;
    ExFreePoolWithTag(PoolWithTag, 0);
    v13 = 2LL * v32;
    v10 = -1;
    PoolWithTag = 0LL;
    if ( v13 <= 0xFFFFFFFF )
      v10 = 2 * v32;
    DeviceRegKeyPath = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_11;
  }
  DeviceRegKeyPath = -1073741801;
LABEL_11:
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_73;
  if ( (a3 & 0x100) != 0 )
  {
    v14 = PoolWithTag;
    v16 = 0LL;
    if ( a1 )
      v16 = *a1;
    DeviceRegKeyPath = SysCtxRegOpenCurrentUserKey(v16, 0LL, 0x2000000LL, &v33);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_73;
    v15 = (char *)v33;
    goto LABEL_23;
  }
  DeviceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_73;
  if ( DestinationString.Length >= v10
    || DestinationString.Length <= 0x32u
    || !RtlPrefixUnicodeString(
          &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
          &DestinationString,
          1u) )
  {
LABEL_72:
    DeviceRegKeyPath = -1073741811;
    goto LABEL_73;
  }
  v14 = PoolWithTag + 25;
  DeviceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, 4, &v31);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_73;
  v15 = v31;
LABEL_23:
  DeviceRegKeyPath = CmOpenDeviceRegKey((__int64)a1, a2, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( DeviceRegKeyPath < 0 )
    goto LABEL_73;
  v17 = (unsigned __int8)a3;
  LODWORD(v31) = (unsigned __int8)a3;
  if ( (unsigned __int8)a3 == 18 && (a3 & 0xF00) == 0 )
  {
    p_DestinationString = (int *)&DestinationString;
    *(_DWORD *)&DestinationString.Length = 786;
    v34 = &DestinationString;
    v19 = 0;
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = 530;
    LODWORD(DestinationString.Buffer) = 274;
    while ( 1 )
    {
      v20 = CmDeleteDeviceRegKey((__int64)a1, v35, *p_DestinationString, 0);
      if ( v20 )
      {
        if ( v20 != -1073741772 && v20 != -1073741811 && v20 != -1073741637 )
          break;
      }
      ++v19;
      p_DestinationString = (int *)(&v34->MaximumLength + 1);
      v34 = (UNICODE_STRING *)((char *)v34 + 4);
      if ( v19 >= 3 )
        goto LABEL_34;
    }
    DeviceRegKeyPath = v20;
LABEL_34:
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_73;
    CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues(a1, v35);
    v21 = CmSetDeviceRegProp((__int64)a1, v35, 0LL, 0xAu, 1u, 0LL, 0, 0);
    if ( v21 && v21 != -1073741275 && v21 != -1073741810 )
      goto LABEL_38;
    v17 = (int)v31;
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
    goto LABEL_73;
  if ( v21 < 0 )
    goto LABEL_38;
  if ( v17 != 18 && (v17 != 17 || (a3 & 0xF00) != 0) )
  {
    v24 = wcsrchr(v14, 0x5Cu);
    if ( !v24 || (*v24 = 0, (v25 = wcsrchr(v14, 0x5Cu)) == 0LL) )
    {
      DeviceRegKeyPath = -1073741595;
      goto LABEL_73;
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
        goto LABEL_73;
      }
LABEL_38:
      DeviceRegKeyPath = v21;
    }
  }
LABEL_73:
  if ( Handle )
    ZwClose(Handle);
  if ( v33 )
    ZwClose(v33);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceRegKeyPath;
}
