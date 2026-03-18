/*
 * XREFs of ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C003A81C
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C0088DD0 (ACPISystemPowerUpdateWakeCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1C0039F00 (ACPISystemPowerDetermineSupportedDeviceWakeState.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0079900 (AcpiGetIdleWakeInfo.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C008873C (ACPISystemPowerGetDeviceWake.c)
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
  signed int v9; // edi
  signed int v11; // ebx
  int v12; // ecx
  int v13; // eax
  signed int v14; // r13d
  signed int v15; // r12d
  KIRQL v16; // r9
  __int64 v17; // rax
  int IdleWakeInfo; // eax
  unsigned int v19; // ecx
  int v20; // eax
  char v21; // al
  bool v22; // zf
  int v23; // eax
  int v24; // esi
  int DeviceWake; // eax
  signed int v26; // ecx
  int v27; // eax
  bool v28; // zf
  signed int *v29; // rdx
  int v30; // eax
  signed int v31; // ecx
  int v32; // eax
  char v34; // [rsp+20h] [rbp-50h]
  char v35; // [rsp+21h] [rbp-4Fh]
  unsigned int v36; // [rsp+24h] [rbp-4Ch] BYREF
  __int64 v37; // [rsp+28h] [rbp-48h]
  signed int *v38; // [rsp+30h] [rbp-40h]
  signed int *v39; // [rsp+38h] [rbp-38h]
  signed int *v40; // [rsp+40h] [rbp-30h]
  __m128i si128; // [rsp+48h] [rbp-28h]
  int v42; // [rsp+58h] [rbp-18h]
  int v43; // [rsp+5Ch] [rbp-14h]

  v9 = a3[12];
  v11 = a3[11];
  v38 = a6;
  v39 = a7;
  *a5 = 0;
  v12 = a3[1];
  v40 = a8;
  v13 = 0;
  v37 = a4;
  v35 = 0;
  v34 = 0;
  if ( (v12 & 0x400) != 0 )
  {
    v13 = 2;
    *a5 = 2;
    v12 = a3[1];
  }
  if ( (v12 & 0x800) != 0 )
  {
    v13 |= 4u;
    *a5 = v13;
    v12 = a3[1];
  }
  if ( (v12 & 0x1000) != 0 )
  {
    v13 |= 8u;
    *a5 = v13;
    v12 = a3[1];
  }
  if ( (v12 & 0x2000) != 0 )
    *a5 = v13 | 0x10;
  if ( !v9 || !v11 )
  {
    v35 = 1;
    v9 = 0;
    v11 = 0;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x10000LL) != 0 )
  {
    KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v14 = *(_DWORD *)(a1 + 488);
    v15 = ACPISystemPowerDetermineSupportedDeviceWakeState(a1);
    KeReleaseSpinLock(&AcpiPowerLock, v16);
    if ( v14 < v11 || v35 )
      v11 = v14;
    if ( !v11 )
    {
      v17 = *(_QWORD *)(a1 + 952);
      if ( (v17 & 0x400000000LL) != 0 )
      {
        if ( (AcpiSupportedSystemStates & 0x20) != 0 )
          v11 = 5;
        else
          v11 = (AcpiSupportedSystemStates & 0x10) != 0 ? 4 : 1;
      }
      else
      {
        v11 = (v17 & 0x100000000LL) != 0;
      }
    }
    if ( v15 )
    {
      v34 = 1;
      v9 = v15;
    }
    IdleWakeInfo = AcpiGetIdleWakeInfo(a1, (unsigned int)v14, &v36);
    if ( IdleWakeInfo == -1073741275 )
    {
      IdleWakeInfo = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v36);
      if ( IdleWakeInfo == -1073741275 )
        IdleWakeInfo = ACPISystemPowerGetDeviceWake(a1, &v36);
    }
    if ( IdleWakeInfo >= 0
      && ((si128 = _mm_load_si128((const __m128i *)&_xmm), v42 = 4, v43 = 4, v36 > 5)
        ? (v19 = 0)
        : (v19 = si128.m128i_u32[v36]),
          v20 = *a5,
          _bittest(&v20, v19)) )
    {
      v21 = 1;
      v9 = v19;
    }
    else
    {
      v21 = v34;
    }
    if ( !v21 )
    {
      if ( (unsigned int)v11 > 6 )
        v11 = 0;
      v9 = *(_DWORD *)(v37 + 4LL * v11);
      if ( !v9 )
        v9 = 4;
    }
    if ( !v35 )
    {
      v22 = v9 == 5;
      if ( v9 >= 5 )
        goto LABEL_44;
      do
      {
        v23 = *a5;
        if ( _bittest(&v23, v9) )
          break;
        ++v9;
      }
      while ( v9 < 5 );
    }
    v22 = v9 == 5;
LABEL_44:
    if ( v22 || !v9 )
    {
      v9 = 0;
      v11 = 0;
      v24 = 0;
    }
    else
    {
      v24 = 1 << v9;
    }
    *a5 = v24;
    goto LABEL_72;
  }
  DeviceWake = AcpiGetIdleWakeInfo(a1, (unsigned int)v11, &v36);
  if ( DeviceWake == -1073741275 )
    DeviceWake = ACPISystemPowerGetDeviceWake(a1, &v36);
  if ( DeviceWake >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v42 = 4;
    v43 = 4;
    v26 = v36 > 5 ? 0 : si128.m128i_i32[v36];
    if ( v26 > 0 )
    {
      while ( 1 )
      {
        v27 = *a5;
        if ( _bittest(&v27, v26) )
          break;
        if ( --v26 <= 0 )
          goto LABEL_60;
      }
      v9 = v26;
    }
  }
LABEL_60:
  v28 = v11 == 0;
  if ( v11 > 0 )
  {
    v29 = (signed int *)(a4 + 4LL * v11);
    while ( 1 )
    {
      v30 = AcpiSupportedSystemStates;
      if ( _bittest(&v30, v11) )
      {
        v31 = *v29;
        if ( *v29 )
        {
          if ( v31 <= v9 )
            goto LABEL_69;
          v32 = *a5;
          if ( _bittest(&v32, v31) )
            break;
        }
      }
      --v11;
      --v29;
      if ( v11 <= 0 )
        goto LABEL_69;
    }
    v9 = *v29;
LABEL_69:
    v28 = v11 == 0;
  }
  if ( v28 )
  {
    v9 = 0;
    *a5 = 0;
  }
LABEL_72:
  if ( v38 )
    *v38 = v11;
  if ( v39 )
    *v39 = v9;
  if ( v40 )
    *v40 = v9;
  return 0LL;
}
