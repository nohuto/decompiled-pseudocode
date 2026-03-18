/*
 * XREFs of ACPISystemPowerUpdateDeviceCapabilities @ 0x1C003A1F0
 * Callers:
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0088B20 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x1C0039F50 (ACPISystemPowerDetermineSupportedSystemState.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C00795B8 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerGetSxD @ 0x1C00887F4 (ACPISystemPowerGetSxD.c)
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C0088DD0 (ACPISystemPowerUpdateWakeCapabilities.c)
 */

__int64 __fastcall ACPISystemPowerUpdateDeviceCapabilities(ULONG_PTR BugCheckParameter2, __m128i *a2, __int64 a3)
{
  __int32 v3; // eax
  char v4; // di
  __int64 v5; // xmm1_8
  __int64 v7; // r13
  int v8; // eax
  const char *v9; // rsi
  int v10; // edx
  int v11; // r14d
  const char *v12; // rdx
  __int64 v13; // rcx
  unsigned int v15; // r14d
  int updated; // r13d
  const char *v17; // rcx
  __int64 v18; // rdx
  unsigned __int16 v19; // r9
  unsigned int v20; // ecx
  __int64 *v21; // r13
  int v22; // eax
  int SxD; // eax
  char v24; // r8
  const char *v25; // r10
  const char *v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // r13d
  CCHAR LeastSignificantBit; // al
  ULONG_PTR BugCheckParameter4; // r15
  KIRQL v31; // r10
  char v32; // al
  const char *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  const char *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  KIRQL v39; // al
  __int32 v40; // ecx
  KIRQL v41; // r8
  unsigned int v42; // eax
  __int64 v43; // xmm1_8
  int v44; // edx
  char v45; // [rsp+50h] [rbp-49h]
  int v46; // [rsp+54h] [rbp-45h]
  int v47; // [rsp+58h] [rbp-41h] BYREF
  int v48; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v49; // [rsp+60h] [rbp-39h]
  int v50; // [rsp+64h] [rbp-35h] BYREF
  int v51; // [rsp+68h] [rbp-31h] BYREF
  __int64 *v52; // [rsp+70h] [rbp-29h]
  int v53; // [rsp+78h] [rbp-21h]
  int v54; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v55; // [rsp+80h] [rbp-19h]
  __int64 v56; // [rsp+88h] [rbp-11h]
  __m128i v57; // [rsp+90h] [rbp-9h] BYREF
  __int64 v58; // [rsp+A0h] [rbp+7h]
  __int32 v59; // [rsp+A8h] [rbp+Fh]

  v3 = a2[2].m128i_i32[2];
  v4 = 0;
  v5 = a2[2].m128i_i64[0];
  v57 = a2[1];
  v59 = v3;
  v7 = a3;
  v56 = a3;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v57, 4));
  v51 = 0;
  v50 = 0;
  if ( v57.m128i_i32[1] != 1 )
    v8 = 1;
  v47 = 0;
  v57.m128i_i32[1] = v8;
  v49 = 0;
  v53 = 0;
  v48 = 0;
  v58 = v5;
  v9 = (const char *)&unk_1C005B1F0;
  v11 = ACPIDevicePowerDetermineSupportedDeviceStates(BugCheckParameter2);
  if ( v11 < 0 )
  {
    v12 = (const char *)&unk_1C005B1F0;
    if ( BugCheckParameter2 )
    {
      v13 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v9 = *(const char **)(BugCheckParameter2 + 560);
        if ( (v13 & 0x400000000000LL) != 0 )
          v12 = *(const char **)(BugCheckParameter2 + 568);
      }
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xFu,
      0x14u,
      (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
      v11,
      v4,
      v9,
      v12);
    return (unsigned int)v11;
  }
  v15 = v49 | v53;
  if ( !(v49 | v53) )
  {
    v10 = *(_DWORD *)(v7 + 4);
    if ( (*(_BYTE *)(BugCheckParameter2 + 8) & 0x60) == 64 && (v10 & 3) == 0 )
      goto LABEL_58;
    v15 = 4 * (*(_DWORD *)(v7 + 4) & 1) + 18;
    if ( (v10 & 2) != 0 )
      v15 |= 8u;
  }
  updated = ACPISystemPowerUpdateWakeCapabilities(
              BugCheckParameter2,
              v10,
              v7,
              (unsigned int)&v57,
              (__int64)&v48,
              (__int64)&v47,
              (__int64)&v51,
              (__int64)&v50);
  if ( updated < 0 )
  {
    v9 = (const char *)&unk_1C005B1F0;
    v17 = (const char *)&unk_1C005B1F0;
    if ( BugCheckParameter2 )
    {
      v18 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v18 & 0x200000000000LL) != 0 )
      {
        v9 = *(const char **)(BugCheckParameter2 + 560);
        if ( (v18 & 0x400000000000LL) != 0 )
          v17 = *(const char **)(BugCheckParameter2 + 568);
      }
    }
    v19 = 21;
    goto LABEL_19;
  }
  v20 = 2;
  v21 = &v57.m128i_i64[1];
  v46 = 2;
  v52 = &v57.m128i_i64[1];
  while ( 2 )
  {
    v22 = AcpiSupportedSystemStates;
    if ( !_bittest(&v22, v20) )
      goto LABEL_50;
    SxD = ACPISystemPowerGetSxD(BugCheckParameter2, v20, &v54);
    if ( SxD >= 0 )
    {
      if ( v54 > *(_DWORD *)v21 )
        *(_DWORD *)v21 = v54;
      goto LABEL_50;
    }
    if ( SxD != -1073741772 )
    {
      v24 = 0;
      v25 = (const char *)&unk_1C005B1F0;
      v26 = (const char *)&unk_1C005B1F0;
      if ( BugCheckParameter2 )
      {
        v27 = *(_QWORD *)(BugCheckParameter2 + 8);
        v24 = BugCheckParameter2;
        if ( (v27 & 0x200000000000LL) != 0 )
        {
          v25 = *(const char **)(BugCheckParameter2 + 560);
          if ( (v27 & 0x400000000000LL) != 0 )
            v26 = *(const char **)(BugCheckParameter2 + 568);
        }
      }
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x16u,
        (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
        SxD,
        v24,
        v25,
        v26);
    }
    v45 = 0;
    v28 = v15 & ~((1 << *(_DWORD *)v21) - 1);
    if ( !v28 )
      goto LABEL_44;
    while ( 1 )
    {
      LeastSignificantBit = RtlFindLeastSignificantBit(v28);
      BugCheckParameter4 = LeastSignificantBit;
      v54 = LeastSignificantBit;
      v28 &= ~(1 << LeastSignificantBit);
      if ( v46 <= v47 )
      {
        if ( (v28 & v48) != 0 )
          goto LABEL_40;
        if ( LeastSignificantBit == v50 )
        {
          v45 = 1;
          *(_DWORD *)v52 = LeastSignificantBit;
        }
      }
      if ( LeastSignificantBit == 4 || !v49 )
      {
        v21 = v52;
        *(_DWORD *)v52 = LeastSignificantBit;
        goto LABEL_50;
      }
      KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v55 = ACPISystemPowerDetermineSupportedSystemState(BugCheckParameter2, BugCheckParameter4);
      if ( !v55 )
      {
        v36 = (const char *)&unk_1C005B1F0;
        if ( BugCheckParameter2 )
        {
          v37 = *(_QWORD *)(BugCheckParameter2 + 8);
          v4 = BugCheckParameter2;
          if ( (v37 & 0x200000000000LL) != 0 )
          {
            v9 = *(const char **)(BugCheckParameter2 + 560);
            if ( (v37 & 0x400000000000LL) != 0 )
              v36 = *(const char **)(BugCheckParameter2 + 568);
          }
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0x17u,
          (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
          BugCheckParameter4 - 1,
          v4,
          v9,
          v36);
        KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
      }
      KeReleaseSpinLock(&AcpiPowerLock, v31);
      if ( v55 >= v46 )
        break;
LABEL_40:
      if ( !v28 )
      {
        v21 = v52;
        v32 = v45;
        goto LABEL_43;
      }
    }
    v21 = v52;
    v32 = 1;
    *(_DWORD *)v52 = BugCheckParameter4;
LABEL_43:
    if ( !v32 )
    {
LABEL_44:
      v33 = (const char *)&unk_1C005B1F0;
      if ( BugCheckParameter2 )
      {
        v34 = *(_QWORD *)(BugCheckParameter2 + 8);
        v4 = BugCheckParameter2;
        if ( (v34 & 0x200000000000LL) != 0 )
        {
          v9 = *(const char **)(BugCheckParameter2 + 560);
          if ( (v34 & 0x400000000000LL) != 0 )
            v33 = *(const char **)(BugCheckParameter2 + 568);
        }
      }
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x18u,
        (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
        v46 - 1,
        v4,
        v9,
        v33);
      KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 1uLL, v46);
    }
LABEL_50:
    v21 = (__int64 *)((char *)v21 + 4);
    v35 = v46 + 1;
    v52 = v21;
    v46 = v35;
    if ( v35 <= 6 )
    {
      v20 = v35;
      continue;
    }
    break;
  }
  LODWORD(v7) = v56;
LABEL_58:
  updated = ACPISystemPowerUpdateWakeCapabilities(
              BugCheckParameter2,
              v10,
              v7,
              (unsigned int)&v57,
              (__int64)&v48,
              (__int64)&v47,
              (__int64)&v51,
              (__int64)&v50);
  if ( updated >= 0 )
  {
    v39 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v40 = v59;
    v41 = v39;
    v42 = *(_DWORD *)(BugCheckParameter2 + 552) & 0xFFFFFFC0;
    v43 = v58;
    v44 = 2 * (v48 & 0x1E);
    *(__m128i *)(BugCheckParameter2 + 460) = v57;
    *(_QWORD *)(BugCheckParameter2 + 476) = v43;
    *(_DWORD *)(BugCheckParameter2 + 484) = v40;
    *(_DWORD *)(BugCheckParameter2 + 492) = v51;
    *(_DWORD *)(BugCheckParameter2 + 488) = v47;
    *(_DWORD *)(BugCheckParameter2 + 552) = v42 | (v15 >> 2) & 3 | v44;
    KeReleaseSpinLock(&AcpiPowerLock, v41);
    if ( (*(_QWORD *)(BugCheckParameter2 + 8) & 0x8000000000000LL) == 0 )
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x100000000000000uLL);
    return 0LL;
  }
  else
  {
    v17 = (const char *)&unk_1C005B1F0;
    if ( BugCheckParameter2 )
    {
      v38 = *(_QWORD *)(BugCheckParameter2 + 8);
      v4 = BugCheckParameter2;
      if ( (v38 & 0x200000000000LL) != 0 )
      {
        v9 = *(const char **)(BugCheckParameter2 + 560);
        if ( (v38 & 0x400000000000LL) != 0 )
          v17 = *(const char **)(BugCheckParameter2 + 568);
      }
    }
    v19 = 25;
LABEL_19:
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xFu,
      v19,
      (__int64)&WPP_a6d1c3eb229d327e9216ca93c2afdfed_Traceguids,
      updated,
      v4,
      v9,
      v17);
    return (unsigned int)updated;
  }
}
