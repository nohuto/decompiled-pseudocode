/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C003AB48
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C0088DD0 (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C0039F00 (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0079900 (AcpiGetIdleWakeInfo.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C008873C (ACPISystemPowerGetDeviceWake.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForPDOs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        int *a7,
        int *a8)
{
  int *v9; // r14
  char v10; // r15
  int v11; // esi
  int v12; // ecx
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // r14d
  KIRQL v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edi
  _DWORD *v20; // rax
  char v22; // cl
  int IdleWakeInfo; // eax
  int *v24; // [rsp+20h] [rbp-68h] BYREF
  __int64 v25; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h]
  __m128i si128; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+48h] [rbp-40h]
  int v29; // [rsp+4Ch] [rbp-3Ch]

  v9 = a5;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v26 = a6;
  v13 = 0;
  v14 = *(_DWORD *)(a1 + 8);
  v25 = a4;
  v24 = a5;
  if ( (*(_QWORD *)&v14 & 0x10000LL) == 0 )
    goto LABEL_10;
  KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v13 = *(_DWORD *)(a1 + 488);
  v15 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1);
  KeReleaseSpinLock(&AcpiPowerLock, v16);
  if ( !v13 )
  {
    v17 = *(_QWORD *)(a1 + 952);
    if ( (v17 & 0x400000000LL) != 0 )
    {
      if ( (AcpiSupportedSystemStates & 0x20) != 0 )
        v13 = 5;
      else
        v13 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
    }
    else
    {
      v13 = (v17 & 0x100000000LL) != 0;
    }
  }
  v18 = AcpiSupportedSystemStates;
  if ( !_bittest(&v18, v13) )
  {
    v9 = v24;
    v12 = 0;
    v13 = 0;
LABEL_10:
    v19 = 0;
    goto LABEL_11;
  }
  if ( v15 )
  {
    v22 = v15;
    v11 = v15;
    v9 = v24;
    v10 = 1;
    *v24 = 1 << v22;
  }
  else
  {
    v9 = v24;
  }
  IdleWakeInfo = AcpiGetIdleWakeInfo(a1, v13, &v24);
  if ( IdleWakeInfo == -1073741275 )
    IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v24);
  if ( IdleWakeInfo >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v28 = 4;
    v29 = 4;
    if ( (unsigned int)v24 > 5 )
      v11 = 0;
    else
      v11 = si128.m128i_i32[(int)v24];
    v10 = 1;
  }
  v12 = v11;
  if ( !v10 )
  {
    v12 = *(_DWORD *)(v25 + 4LL * (int)v13);
    if ( v12 )
      goto LABEL_32;
    v12 = 4;
  }
  if ( !v12 )
    goto LABEL_10;
LABEL_32:
  v19 = 1 << v12;
LABEL_11:
  v20 = (_DWORD *)v26;
  *v9 = v19;
  if ( v20 )
    *v20 = v13;
  if ( a7 )
    *a7 = v12;
  if ( a8 )
    *a8 = v11;
  return 0LL;
}
