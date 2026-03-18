/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C0007554
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C008E1BC (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C0006C1C (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C008C3DC (ACPISystemPowerGetDeviceWake.c)
 *     AcpiGetIdleWakeInfo @ 0x1C008C830 (AcpiGetIdleWakeInfo.c)
 */

__int64 __fastcall ACPISystemPowerUpdateWakeCapabilitiesForFilters(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int *a5,
        signed int *a6,
        signed int *a7,
        signed int *a8)
{
  signed int v9; // ebx
  signed int v11; // edi
  int v12; // eax
  int IdleWakeInfo; // eax
  bool v14; // zf
  int v15; // r8d
  signed int *v16; // rdx
  signed int v17; // ecx
  signed int v18; // r13d
  signed int v19; // r12d
  KIRQL v20; // r9
  int DeviceWake; // eax
  char v22; // al
  bool v23; // zf
  __int64 v25; // rax
  unsigned int v26; // ecx
  int v27; // eax
  int v28; // eax
  signed int v29; // ecx
  int v30; // eax
  int v31; // eax
  char v32; // [rsp+20h] [rbp-50h]
  char v33; // [rsp+21h] [rbp-4Fh]
  unsigned int v34; // [rsp+24h] [rbp-4Ch] BYREF
  __int64 v35; // [rsp+28h] [rbp-48h]
  signed int *v36; // [rsp+30h] [rbp-40h]
  signed int *v37; // [rsp+38h] [rbp-38h]
  signed int *v38; // [rsp+40h] [rbp-30h]
  __m128i si128; // [rsp+48h] [rbp-28h]
  int v40; // [rsp+58h] [rbp-18h]
  int v41; // [rsp+5Ch] [rbp-14h]

  v9 = a3[12];
  v11 = a3[11];
  v36 = a6;
  v37 = a7;
  *a5 = 0;
  v14 = (a3[1] & 0x400) == 0;
  v38 = a8;
  v12 = 0;
  if ( !v14 )
    v12 = 2;
  v35 = a4;
  *a5 = v12;
  v33 = 0;
  v32 = 0;
  if ( (a3[1] & 0x800) != 0 )
    *a5 |= 4u;
  if ( (a3[1] & 0x1000) != 0 )
    *a5 |= 8u;
  if ( (a3[1] & 0x2000) != 0 )
    *a5 |= 0x10u;
  if ( !v9 || !v11 )
  {
    v33 = 1;
    v9 = 0;
    v11 = 0;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x10000LL) == 0 )
  {
    IdleWakeInfo = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v34);
    if ( IdleWakeInfo == -1073741275 )
      IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v34);
    if ( IdleWakeInfo >= 0 )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v40 = 4;
      v41 = 4;
      v29 = v34 > 5 ? 0 : si128.m128i_i32[v34];
      if ( v29 > 0 )
      {
        while ( 1 )
        {
          v30 = *a5;
          if ( _bittest(&v30, v29) )
            break;
          if ( --v29 <= 0 )
            goto LABEL_15;
        }
        v9 = v29;
      }
    }
LABEL_15:
    v14 = v11 == 0;
    if ( v11 > 0 )
    {
      v15 = AcpiSupportedSystemStates;
      v16 = (signed int *)(a4 + 4LL * v11);
      while ( 1 )
      {
        if ( _bittest(&v15, v11) )
        {
          v17 = *v16;
          if ( *v16 )
          {
            if ( v17 <= v9 )
              goto LABEL_20;
            v31 = *a5;
            if ( _bittest(&v31, v17) )
              break;
          }
        }
        --v11;
        --v16;
        if ( v11 <= 0 )
          goto LABEL_20;
      }
      v9 = *v16;
LABEL_20:
      v14 = v11 == 0;
    }
    if ( v14 )
      goto LABEL_22;
    goto LABEL_43;
  }
  KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v18 = *(_DWORD *)(a1 + 488);
  v19 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1);
  KeReleaseSpinLock(&AcpiPowerLock, v20);
  if ( v33 || v18 < v11 )
    v11 = v18;
  if ( !v11 )
  {
    v25 = *(_QWORD *)(a1 + 952);
    if ( (v25 & 0x400000000LL) != 0 )
    {
      if ( (AcpiSupportedSystemStates & 0x20) != 0 )
        v11 = 5;
      else
        v11 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
    }
    else
    {
      v11 = (v25 & 0x100000000LL) != 0;
    }
  }
  if ( v19 )
  {
    v32 = 1;
    v9 = v19;
  }
  DeviceWake = AcpiGetIdleWakeInfo(a1, (unsigned int)v18, &v34);
  if ( DeviceWake == -1073741275 )
  {
    DeviceWake = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v34);
    if ( DeviceWake == -1073741275 )
      DeviceWake = ACPISystemPowerGetDeviceWake(a1, &v34);
  }
  if ( DeviceWake >= 0
    && ((si128 = _mm_load_si128((const __m128i *)&_xmm), v40 = 4, v41 = 4, v34 > 5)
      ? (v26 = 0)
      : (v26 = si128.m128i_u32[v34]),
        v27 = *a5,
        _bittest(&v27, v26)) )
  {
    v22 = 1;
    v9 = v26;
  }
  else
  {
    v22 = v32;
  }
  if ( !v22 )
  {
    if ( (unsigned int)v11 > 6 )
      v11 = 0;
    v9 = *(_DWORD *)(v35 + 4LL * v11);
    if ( !v9 )
      v9 = 4;
  }
  if ( v33 )
    goto LABEL_39;
  v23 = v9 == 5;
  if ( v9 < 5 )
  {
    do
    {
      v28 = *a5;
      if ( _bittest(&v28, v9) )
        break;
      ++v9;
    }
    while ( v9 < 5 );
LABEL_39:
    v23 = v9 == 5;
  }
  if ( v23 || !v9 )
  {
    v11 = 0;
LABEL_22:
    *a5 = 0;
    v9 = 0;
    goto LABEL_43;
  }
  *a5 = 1 << v9;
LABEL_43:
  if ( v36 )
    *v36 = v11;
  if ( v37 )
    *v37 = v9;
  if ( v38 )
    *v38 = v9;
  return 0LL;
}
