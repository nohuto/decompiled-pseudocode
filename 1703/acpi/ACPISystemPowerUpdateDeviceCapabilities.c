/*
 * XREFs of ACPISystemPowerUpdateDeviceCapabilities @ 0x1C0008EB0
 * Callers:
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C008E730 (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     ACPISystemPowerDetermineSupportedSystemState @ 0x1C00575D0 (ACPISystemPowerDetermineSupportedSystemState.c)
 *     ACPISystemPowerUpdateWakeCapabilities @ 0x1C008E1BC (ACPISystemPowerUpdateWakeCapabilities.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C008EA40 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerGetSxD @ 0x1C008FAA4 (ACPISystemPowerGetSxD.c)
 */

__int64 __fastcall ACPISystemPowerUpdateDeviceCapabilities(ULONG_PTR BugCheckParameter2, __m128i *a2, __int64 a3)
{
  __int32 v3; // eax
  char v4; // di
  __int64 v5; // xmm1_8
  __int64 v7; // r13
  int v8; // eax
  void *v9; // rsi
  __int64 v10; // rdx
  int v11; // r14d
  unsigned int v12; // r14d
  int updated; // r13d
  unsigned int v14; // ecx
  __int64 *v15; // r13
  int v16; // eax
  int SxD; // eax
  unsigned int v18; // r13d
  CCHAR LeastSignificantBit; // al
  ULONG_PTR BugCheckParameter4; // r15
  int v21; // eax
  KIRQL v22; // al
  __int32 v23; // ecx
  KIRQL v24; // r8
  unsigned int v25; // eax
  __int64 v26; // xmm1_8
  int v27; // edx
  void *v29; // rdx
  __int64 v30; // rcx
  void *v31; // rcx
  int v32; // r9d
  char v33; // r8
  void *v34; // r10
  void *v35; // rdx
  __int64 v36; // rcx
  KIRQL v37; // r10
  char v38; // al
  void *v39; // rcx
  __int64 v40; // rax
  void *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // [rsp+40h] [rbp-59h]
  __int64 v44; // [rsp+40h] [rbp-59h]
  __int64 v45; // [rsp+40h] [rbp-59h]
  char v46; // [rsp+50h] [rbp-49h]
  int v47; // [rsp+54h] [rbp-45h]
  int v48; // [rsp+58h] [rbp-41h] BYREF
  int v49; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v50; // [rsp+60h] [rbp-39h]
  int v51; // [rsp+64h] [rbp-35h] BYREF
  int v52; // [rsp+68h] [rbp-31h] BYREF
  __int64 *v53; // [rsp+70h] [rbp-29h]
  int v54; // [rsp+78h] [rbp-21h]
  int v55; // [rsp+7Ch] [rbp-1Dh] BYREF
  int v56; // [rsp+80h] [rbp-19h]
  __int64 v57; // [rsp+88h] [rbp-11h]
  __m128i v58; // [rsp+90h] [rbp-9h] BYREF
  __int64 v59; // [rsp+A0h] [rbp+7h]
  __int32 v60; // [rsp+A8h] [rbp+Fh]

  v3 = a2[2].m128i_i32[2];
  v4 = 0;
  v5 = a2[2].m128i_i64[0];
  v58 = a2[1];
  v60 = v3;
  v7 = a3;
  v57 = a3;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v58, 4));
  v52 = 0;
  v51 = 0;
  if ( v58.m128i_i32[1] != 1 )
    v8 = 1;
  v48 = 0;
  v58.m128i_i32[1] = v8;
  v50 = 0;
  v54 = 0;
  v49 = 0;
  v59 = v5;
  v9 = &unk_1C0066CD0;
  v11 = ACPIDevicePowerDetermineSupportedDeviceStates(BugCheckParameter2);
  if ( v11 >= 0 )
  {
    v12 = v50 | v54;
    if ( !(v50 | v54) )
    {
      LODWORD(v10) = *(_DWORD *)(v7 + 4);
      if ( (*(_BYTE *)(BugCheckParameter2 + 8) & 0x60) == 64 && (v10 & 3) == 0 )
        goto LABEL_20;
      v12 = 4 * (*(_DWORD *)(v7 + 4) & 1) + 18;
      if ( (v10 & 2) != 0 )
        v12 |= 8u;
    }
    updated = ACPISystemPowerUpdateWakeCapabilities(
                BugCheckParameter2,
                v10,
                v7,
                (unsigned int)&v58,
                (unsigned int)&v49,
                (unsigned int)&v48,
                (unsigned int)&v52,
                (__int64)&v51);
    if ( updated < 0 )
    {
      v9 = &unk_1C0066CD0;
      v31 = &unk_1C0066CD0;
      if ( BugCheckParameter2 )
      {
        v10 = *(_QWORD *)(BugCheckParameter2 + 8);
        v4 = BugCheckParameter2;
        if ( (v10 & 0x200000000000LL) != 0 )
        {
          v9 = *(void **)(BugCheckParameter2 + 560);
          if ( (v10 & 0x400000000000LL) != 0 )
            v31 = *(void **)(BugCheckParameter2 + 568);
        }
      }
      v32 = 21;
      goto LABEL_42;
    }
    v14 = 2;
    v15 = &v58.m128i_i64[1];
    v47 = 2;
    v53 = &v58.m128i_i64[1];
LABEL_10:
    v16 = AcpiSupportedSystemStates;
    if ( !_bittest(&v16, v14) )
      goto LABEL_17;
    SxD = ACPISystemPowerGetSxD(BugCheckParameter2, v14, &v55);
    if ( SxD >= 0 )
    {
      if ( v55 > *(_DWORD *)v15 )
        *(_DWORD *)v15 = v55;
      goto LABEL_17;
    }
    if ( SxD != -1073741772 )
    {
      v33 = 0;
      v34 = &unk_1C0066CD0;
      v35 = &unk_1C0066CD0;
      if ( BugCheckParameter2 )
      {
        v36 = *(_QWORD *)(BugCheckParameter2 + 8);
        v33 = BugCheckParameter2;
        if ( (v36 & 0x200000000000LL) != 0 )
        {
          v34 = *(void **)(BugCheckParameter2 + 560);
          if ( (v36 & 0x400000000000LL) != 0 )
            v35 = *(void **)(BugCheckParameter2 + 568);
        }
      }
      v44 = (__int64)v35;
      LOBYTE(v35) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v35,
        15,
        22,
        (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
        SxD,
        v33,
        (__int64)v34,
        v44);
    }
    v46 = 0;
    v18 = v12 & ~((1 << *(_DWORD *)v15) - 1);
    if ( !v18 )
      goto LABEL_54;
    while ( 1 )
    {
      LeastSignificantBit = RtlFindLeastSignificantBit(v18);
      BugCheckParameter4 = LeastSignificantBit;
      v55 = LeastSignificantBit;
      v18 &= ~(1 << LeastSignificantBit);
      if ( v47 > v48 )
        goto LABEL_15;
      if ( (v18 & v49) == 0 )
        break;
LABEL_51:
      if ( !v18 )
      {
        v15 = v53;
        v38 = v46;
LABEL_53:
        if ( !v38 )
        {
LABEL_54:
          v39 = &unk_1C0066CD0;
          if ( BugCheckParameter2 )
          {
            v40 = *(_QWORD *)(BugCheckParameter2 + 8);
            v4 = BugCheckParameter2;
            if ( (v40 & 0x200000000000LL) != 0 )
            {
              v9 = *(void **)(BugCheckParameter2 + 560);
              if ( (v40 & 0x400000000000LL) != 0 )
                v39 = *(void **)(BugCheckParameter2 + 568);
            }
          }
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            15,
            24,
            (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
            v47 - 1,
            v4,
            (__int64)v9,
            (__int64)v39);
          KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 1uLL, v47);
        }
LABEL_17:
        v15 = (__int64 *)((char *)v15 + 4);
        v21 = v47 + 1;
        v53 = v15;
        v47 = v21;
        if ( v21 <= 6 )
        {
          v14 = v21;
          goto LABEL_10;
        }
        LODWORD(v7) = v57;
LABEL_20:
        updated = ACPISystemPowerUpdateWakeCapabilities(
                    BugCheckParameter2,
                    v10,
                    v7,
                    (unsigned int)&v58,
                    (unsigned int)&v49,
                    (unsigned int)&v48,
                    (unsigned int)&v52,
                    (__int64)&v51);
        if ( updated >= 0 )
        {
          v22 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v23 = v60;
          v24 = v22;
          v25 = *(_DWORD *)(BugCheckParameter2 + 552) & 0xFFFFFFC0;
          v26 = v59;
          v27 = 2 * (v49 & 0x1E);
          *(__m128i *)(BugCheckParameter2 + 460) = v58;
          *(_QWORD *)(BugCheckParameter2 + 476) = v26;
          *(_DWORD *)(BugCheckParameter2 + 484) = v23;
          *(_DWORD *)(BugCheckParameter2 + 492) = v52;
          *(_DWORD *)(BugCheckParameter2 + 488) = v48;
          *(_DWORD *)(BugCheckParameter2 + 552) = v25 | (v12 >> 2) & 3 | v27;
          KeReleaseSpinLock(&AcpiPowerLock, v24);
          if ( (*(_QWORD *)(BugCheckParameter2 + 8) & 0x8000000000000LL) == 0 )
            _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x100000000000000uLL);
          return 0LL;
        }
        v31 = &unk_1C0066CD0;
        if ( BugCheckParameter2 )
        {
          v10 = *(_QWORD *)(BugCheckParameter2 + 8);
          v4 = BugCheckParameter2;
          if ( (v10 & 0x200000000000LL) != 0 )
          {
            v9 = *(void **)(BugCheckParameter2 + 560);
            if ( (v10 & 0x400000000000LL) != 0 )
              v31 = *(void **)(BugCheckParameter2 + 568);
          }
        }
        v32 = 25;
LABEL_42:
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          15,
          v32,
          (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
          updated,
          v4,
          (__int64)v9,
          (__int64)v31);
        return (unsigned int)updated;
      }
    }
    if ( LeastSignificantBit == v51 )
    {
      v46 = 1;
      *(_DWORD *)v53 = LeastSignificantBit;
    }
LABEL_15:
    if ( LeastSignificantBit == 4 )
    {
      v15 = v53;
      *(_DWORD *)v53 = 4;
      goto LABEL_17;
    }
    if ( !v50 )
    {
      v15 = v53;
      *(_DWORD *)v53 = LeastSignificantBit;
      goto LABEL_17;
    }
    KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v56 = ACPISystemPowerDetermineSupportedSystemState(BugCheckParameter2, (unsigned int)BugCheckParameter4);
    if ( !v56 )
    {
      v41 = &unk_1C0066CD0;
      if ( BugCheckParameter2 )
      {
        v42 = *(_QWORD *)(BugCheckParameter2 + 8);
        v4 = BugCheckParameter2;
        if ( (v42 & 0x200000000000LL) != 0 )
        {
          v9 = *(void **)(BugCheckParameter2 + 560);
          if ( (v42 & 0x400000000000LL) != 0 )
            v41 = *(void **)(BugCheckParameter2 + 568);
        }
      }
      v45 = (__int64)v41;
      LOBYTE(v41) = 2;
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v41,
        15,
        23,
        (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
        BugCheckParameter4 - 1,
        v4,
        (__int64)v9,
        v45);
      KeBugCheckEx(0xA5u, 0x10uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
    }
    KeReleaseSpinLock(&AcpiPowerLock, v37);
    if ( v56 >= v47 )
    {
      v15 = v53;
      v38 = 1;
      *(_DWORD *)v53 = BugCheckParameter4;
      goto LABEL_53;
    }
    goto LABEL_51;
  }
  v29 = &unk_1C0066CD0;
  if ( BugCheckParameter2 )
  {
    v30 = *(_QWORD *)(BugCheckParameter2 + 8);
    v4 = BugCheckParameter2;
    if ( (v30 & 0x200000000000LL) != 0 )
    {
      v9 = *(void **)(BugCheckParameter2 + 560);
      if ( (v30 & 0x400000000000LL) != 0 )
        v29 = *(void **)(BugCheckParameter2 + 568);
    }
  }
  v43 = (__int64)v29;
  LOBYTE(v29) = 2;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v29,
    15,
    20,
    (__int64)&WPP_8b8c03efb04f38a3ba95add672d747f9_Traceguids,
    v11,
    v4,
    (__int64)v9,
    v43);
  return (unsigned int)v11;
}
