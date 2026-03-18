/*
 * XREFs of ACPISystemPowerUpdateDeviceCapabilities @ 0x1C001F30C
 * Callers:
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C008639C (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0003B6C (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x1C00581D0 (ACPISystemPowerDetermineSupportedSystemState.c)
 *     ACPISystemPowerGetSxD @ 0x1C0090110 (ACPISystemPowerGetSxD.c)
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C00901E0 (ACPISystemPowerUpdateWakeCapabilities.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C009027C (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 */

__int64 __fastcall ACPISystemPowerUpdateDeviceCapabilities(ULONG_PTR BugCheckParameter2, __m128i *a2, __int64 a3)
{
  __int32 v3; // eax
  char v4; // di
  __int64 v5; // xmm1_8
  __int64 v7; // r15
  int v8; // eax
  const char *v9; // rsi
  unsigned int v10; // edx
  int v11; // r14d
  unsigned int v12; // r14d
  int updated; // r15d
  unsigned int v14; // ecx
  __int64 *v15; // r15
  int v16; // eax
  int SxD; // eax
  CCHAR LeastSignificantBit; // al
  ULONG_PTR BugCheckParameter4; // r15
  __int64 *v20; // rax
  int v21; // eax
  KIRQL v22; // al
  __int32 v23; // ecx
  KIRQL v24; // r8
  unsigned int v25; // eax
  __int64 v26; // xmm1_8
  int v27; // edx
  const char *v29; // rdx
  __int64 v30; // rcx
  const char *v31; // rcx
  __int64 v32; // rdx
  unsigned __int16 v33; // r9
  char v34; // r8
  const char *v35; // r10
  const char *v36; // rdx
  __int64 v37; // rcx
  KIRQL v38; // r10
  const char *v39; // rcx
  __int64 v40; // rax
  const char *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  char v44; // [rsp+50h] [rbp-49h]
  int v45; // [rsp+54h] [rbp-45h]
  int v46; // [rsp+58h] [rbp-41h] BYREF
  int v47; // [rsp+5Ch] [rbp-3Dh] BYREF
  __int64 *v48; // [rsp+60h] [rbp-39h]
  int v49; // [rsp+68h] [rbp-31h]
  unsigned int v50; // [rsp+6Ch] [rbp-2Dh]
  int v51; // [rsp+70h] [rbp-29h] BYREF
  int v52; // [rsp+74h] [rbp-25h] BYREF
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
  v52 = 0;
  v51 = 0;
  if ( v57.m128i_i32[1] != 1 )
    v8 = 1;
  v46 = 0;
  v57.m128i_i32[1] = v8;
  v49 = 0;
  v53 = 0;
  v47 = 0;
  v58 = v5;
  v9 = (const char *)&unk_1C0067B08;
  v11 = ACPIDevicePowerDetermineSupportedDeviceStates(BugCheckParameter2);
  if ( v11 >= 0 )
  {
    v12 = v49 | v53;
    if ( !(v49 | v53) )
    {
      v10 = *(_DWORD *)(v7 + 4);
      if ( (*(_BYTE *)(BugCheckParameter2 + 8) & 0x60) == 64 && (v10 & 3) == 0 )
        goto LABEL_21;
      v12 = 4 * (*(_DWORD *)(v7 + 4) & 1) + 18;
      if ( (v10 & 2) != 0 )
        v12 |= 8u;
    }
    updated = ACPISystemPowerUpdateWakeCapabilities(
                BugCheckParameter2,
                v10,
                v7,
                (unsigned int)&v57,
                (__int64)&v47,
                (__int64)&v46,
                (__int64)&v52,
                (__int64)&v51);
    if ( updated < 0 )
    {
      v9 = (const char *)&unk_1C0067B08;
      v31 = (const char *)&unk_1C0067B08;
      if ( BugCheckParameter2 )
      {
        v32 = *(_QWORD *)(BugCheckParameter2 + 8);
        v4 = BugCheckParameter2;
        if ( (v32 & 0x200000000000LL) != 0 )
        {
          v9 = *(const char **)(BugCheckParameter2 + 560);
          if ( (v32 & 0x400000000000LL) != 0 )
            v31 = *(const char **)(BugCheckParameter2 + 568);
        }
      }
      v33 = 21;
      goto LABEL_44;
    }
    v14 = 2;
    v15 = &v57.m128i_i64[1];
    v45 = 2;
    v48 = &v57.m128i_i64[1];
LABEL_10:
    v16 = AcpiSupportedSystemStates;
    if ( !_bittest(&v16, v14) )
      goto LABEL_18;
    SxD = ACPISystemPowerGetSxD(BugCheckParameter2, v14, &v54);
    if ( SxD >= 0 )
    {
      if ( v54 > *(_DWORD *)v15 )
        *(_DWORD *)v15 = v54;
      goto LABEL_18;
    }
    if ( SxD != -1073741772 )
    {
      v34 = 0;
      v35 = (const char *)&unk_1C0067B08;
      v36 = (const char *)&unk_1C0067B08;
      if ( BugCheckParameter2 )
      {
        v37 = *(_QWORD *)(BugCheckParameter2 + 8);
        v34 = BugCheckParameter2;
        if ( (v37 & 0x200000000000LL) != 0 )
        {
          v35 = *(const char **)(BugCheckParameter2 + 560);
          if ( (v37 & 0x400000000000LL) != 0 )
            v36 = *(const char **)(BugCheckParameter2 + 568);
        }
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x16u,
        (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
        SxD,
        v34,
        v35,
        v36);
    }
    v44 = 0;
    v10 = v12 & ~((1 << *(_DWORD *)v15) - 1);
    v50 = v10;
    if ( !v10 )
      goto LABEL_57;
    while ( 1 )
    {
      LeastSignificantBit = RtlFindLeastSignificantBit(v10);
      BugCheckParameter4 = LeastSignificantBit;
      v54 = LeastSignificantBit;
      v10 = ~(1 << LeastSignificantBit) & v50;
      v50 = v10;
      if ( v45 <= v46 )
      {
        if ( (v10 & v47) != 0 )
          goto LABEL_53;
        v20 = v48;
        if ( (_DWORD)BugCheckParameter4 == v51 )
        {
          v44 = 1;
          *(_DWORD *)v48 = BugCheckParameter4;
        }
      }
      else
      {
        v20 = v48;
      }
      if ( (_DWORD)BugCheckParameter4 == 4 )
      {
        v15 = v48;
        *(_DWORD *)v48 = 4;
        goto LABEL_18;
      }
      if ( !v49 )
      {
        *(_DWORD *)v20 = BugCheckParameter4;
        goto LABEL_30;
      }
      KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v55 = ACPISystemPowerDetermineSupportedSystemState(BugCheckParameter2, (unsigned int)BugCheckParameter4);
      if ( !v55 )
      {
        v41 = (const char *)&unk_1C0067B08;
        if ( BugCheckParameter2 )
        {
          v42 = *(_QWORD *)(BugCheckParameter2 + 8);
          v4 = BugCheckParameter2;
          if ( (v42 & 0x200000000000LL) != 0 )
          {
            v9 = *(const char **)(BugCheckParameter2 + 560);
            if ( (v42 & 0x400000000000LL) != 0 )
              v41 = *(const char **)(BugCheckParameter2 + 568);
          }
        }
        WPP_RECORDER_SF_Dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0x17u,
          (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
          BugCheckParameter4 - 1,
          v4,
          v9,
          v41);
        KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
      }
      KeReleaseSpinLock(&AcpiPowerLock, v38);
      if ( v55 >= v45 )
      {
        v44 = 1;
        *(_DWORD *)v48 = BugCheckParameter4;
LABEL_56:
        if ( !v44 )
        {
LABEL_57:
          v39 = (const char *)&unk_1C0067B08;
          if ( BugCheckParameter2 )
          {
            v40 = *(_QWORD *)(BugCheckParameter2 + 8);
            v4 = BugCheckParameter2;
            if ( (v40 & 0x200000000000LL) != 0 )
            {
              v9 = *(const char **)(BugCheckParameter2 + 560);
              if ( (v40 & 0x400000000000LL) != 0 )
                v39 = *(const char **)(BugCheckParameter2 + 568);
            }
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xFu,
            0x18u,
            (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
            v45 - 1,
            v4,
            v9,
            v39);
          KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 1uLL, v45);
        }
LABEL_30:
        v15 = v48;
LABEL_18:
        v15 = (__int64 *)((char *)v15 + 4);
        v21 = v45 + 1;
        v48 = v15;
        v45 = v21;
        if ( v21 <= 6 )
        {
          v14 = v21;
          goto LABEL_10;
        }
        LODWORD(v7) = v56;
LABEL_21:
        updated = ACPISystemPowerUpdateWakeCapabilities(
                    BugCheckParameter2,
                    v10,
                    v7,
                    (unsigned int)&v57,
                    (__int64)&v47,
                    (__int64)&v46,
                    (__int64)&v52,
                    (__int64)&v51);
        if ( updated >= 0 )
        {
          v22 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v23 = v59;
          v24 = v22;
          v25 = *(_DWORD *)(BugCheckParameter2 + 552) & 0xFFFFFFC0;
          v26 = v58;
          v27 = 2 * (v47 & 0x1E);
          *(__m128i *)(BugCheckParameter2 + 460) = v57;
          *(_QWORD *)(BugCheckParameter2 + 476) = v26;
          *(_DWORD *)(BugCheckParameter2 + 484) = v23;
          *(_DWORD *)(BugCheckParameter2 + 492) = v52;
          *(_DWORD *)(BugCheckParameter2 + 488) = v46;
          *(_DWORD *)(BugCheckParameter2 + 552) = v25 | (v12 >> 2) & 3 | v27;
          KeReleaseSpinLock(&AcpiPowerLock, v24);
          if ( (*(_QWORD *)(BugCheckParameter2 + 8) & 0x8000000000000LL) == 0 )
            _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x100000000000000uLL);
          return 0LL;
        }
        v31 = (const char *)&unk_1C0067B08;
        if ( BugCheckParameter2 )
        {
          v43 = *(_QWORD *)(BugCheckParameter2 + 8);
          v4 = BugCheckParameter2;
          if ( (v43 & 0x200000000000LL) != 0 )
          {
            v9 = *(const char **)(BugCheckParameter2 + 560);
            if ( (v43 & 0x400000000000LL) != 0 )
              v31 = *(const char **)(BugCheckParameter2 + 568);
          }
        }
        v33 = 25;
LABEL_44:
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          v33,
          (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
          updated,
          v4,
          v9,
          v31);
        return (unsigned int)updated;
      }
      v10 = v50;
LABEL_53:
      if ( !v10 )
        goto LABEL_56;
    }
  }
  v29 = (const char *)&unk_1C0067B08;
  if ( BugCheckParameter2 )
  {
    v30 = *(_QWORD *)(BugCheckParameter2 + 8);
    v4 = BugCheckParameter2;
    if ( (v30 & 0x200000000000LL) != 0 )
    {
      v9 = *(const char **)(BugCheckParameter2 + 560);
      if ( (v30 & 0x400000000000LL) != 0 )
        v29 = *(const char **)(BugCheckParameter2 + 568);
    }
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    0xFu,
    0x14u,
    (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
    v11,
    v4,
    v9,
    v29);
  return (unsigned int)v11;
}
