/*
 * XREFs of HvlpDetermineEnlightenments @ 0x14022DF7C
 * Callers:
 *     HvlPhase0Initialize @ 0x140628830 (HvlPhase0Initialize.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140140870 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     HviGetHypervisorFeatures @ 0x1401722C0 (HviGetHypervisorFeatures.c)
 *     VslGetNestedPageProtectionFlags @ 0x14017D610 (VslGetNestedPageProtectionFlags.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvlpGetRegister128 @ 0x14022DB10 (HvlpGetRegister128.c)
 *     HvlpQueryExtendedCapabilities @ 0x14022E3AC (HvlpQueryExtendedCapabilities.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x14022E444 (HvlpTryToLockCpuManagementVersion.c)
 *     HviGetEnlightenmentInformation @ 0x1402C0B60 (HviGetEnlightenmentInformation.c)
 *     HviGetHardwareFeatures @ 0x1402C0BB0 (HviGetHardwareFeatures.c)
 */

__int64 (__fastcall *HvlpDetermineEnlightenments())(_DWORD *a1)
{
  int v0; // edi
  __int16 v1; // si
  __int64 v2; // rbx
  __int16 v3; // r15
  unsigned __int64 v4; // rax
  int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rcx
  int v8; // edi
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // r14d
  __int64 *v14; // rdi
  int v15; // ecx
  int v16; // edi
  int v17; // ebx
  char v18; // al
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  __int64 (__fastcall *result)(_DWORD *); // rax
  __int64 v23; // [rsp+28h] [rbp-49h] BYREF
  PHYSICAL_ADDRESS v24[3]; // [rsp+30h] [rbp-41h] BYREF
  int v25; // [rsp+50h] [rbp-21h] BYREF
  signed int v26; // [rsp+54h] [rbp-1Dh]
  int v27; // [rsp+60h] [rbp-11h] BYREF
  int v28; // [rsp+64h] [rbp-Dh]
  __int64 v29; // [rsp+70h] [rbp-1h] BYREF
  _DWORD v30[3]; // [rsp+80h] [rbp+Fh] BYREF
  int v31; // [rsp+8Ch] [rbp+1Bh]
  _DWORD v32[4]; // [rsp+90h] [rbp+1Fh] BYREF
  _BYTE v33[16]; // [rsp+A0h] [rbp+2Fh] BYREF

  v0 = 0;
  HvlEnableIdleYield = 0;
  HviGetEnlightenmentInformation(&v25);
  HviGetHypervisorFeatures(&v29);
  HviGetHypervisorFeatures(v30);
  HviGetHardwareFeatures(v32);
  v1 = v25;
  if ( (v25 & 1) != 0 )
  {
    v0 = 8388615;
  }
  else if ( (v25 & 2) != 0 )
  {
    v0 = 8388614;
  }
  else if ( (v25 & 4) != 0 )
  {
    if ( (v25 & 0x20000) != 0 || (v0 = 8388612, v1 = v25, KeGetCurrentPrcb()->CpuVendor == 2) )
      v0 = 4;
  }
  v2 = v29;
  if ( (v29 & 0x10) != 0 )
    HvlpFlags |= 0x100000u;
  if ( (v1 & 8) != 0 )
  {
    v0 |= 0x10u;
    HvlpFlags |= 1u;
  }
  if ( (v1 & 0x200) != 0 )
  {
    v0 |= 0x1000u;
    HvlpFlags |= 0x10u;
  }
  v3 = v31;
  if ( (v31 & 0x40000) != 0 )
  {
    v4 = __readmsr(0x40000001u);
    if ( (v4 & 2) == 0 )
      __writemsr(0x40000001u, v4 | 2);
    v0 |= 0x100000u;
  }
  v5 = v0 | 0x80;
  if ( (v31 & 0x10) == 0 )
    v5 = v0;
  if ( (v1 & 0x800) != 0 )
    HvlpFlags |= 0x80u;
  v6 = v5 | 0x20;
  if ( (v1 & 0x20) == 0 )
    v6 = v5;
  v7 = v6;
  LODWORD(v7) = v6 | 0x4000;
  if ( (v1 & 0x400) == 0 )
    v7 = v6;
  v8 = v7 | 0x200;
  if ( (v31 & 0x20) == 0 )
    v8 = v7;
  if ( v26 > 0 )
  {
    _BitScanReverse((unsigned int *)&v7, v26);
    v8 |= 0x40u;
    HvlLongSpinCountMask = v26 | ((1 << v7) - 1);
  }
  if ( (v29 & 0x100000000000LL) != 0
    && (unsigned __int8)HvlpTryToLockCpuManagementVersion(v7, (unsigned int)v26, 0x100000LL) )
  {
    HvlpFlags |= 2u;
  }
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlpGetRegister128(516, &v27);
    v9 = v8 | 0x400;
    if ( (v28 & 1) == 0 )
      v9 = v8;
    v10 = v9 | 0x20000;
    if ( (v28 & 2) == 0 )
      v10 = v9;
    v8 = v10 | 0x40000;
    if ( (v28 & 4) == 0 )
      v8 = v10;
    if ( (v27 & 1) != 0 )
      HvlpRootFlags |= 0x20u;
    if ( (v27 & 2) != 0 )
      HvlpRootFlags |= 0x40u;
    if ( v27 < 0 )
    {
      v8 |= 0x10008u;
      HvlHyperVRootPartition = 1;
      HvlpRootFlags |= 0x187u;
    }
    v11 = HvlpRootFlags;
    if ( (HvlpRootFlags & 1) != 0 && (v27 & 4) != 0 )
    {
      v11 = HvlpRootFlags | 0x200;
      HvlpRootFlags |= 0x200u;
    }
    if ( (v2 & 0x10000000000LL) != 0 )
    {
      v11 |= 0x10u;
      HvlpRootFlags = v11;
    }
    if ( (v1 & 0x1000) != 0 )
      HvlpRootFlags = v11 | 0x400;
  }
  v12 = v8 | 0x800;
  if ( (v3 & 0x80u) == 0 )
    v12 = v8;
  if ( (v3 & 8) == 0 )
    HvlpFlags |= 4u;
  v13 = v12 | 0x100;
  if ( (v2 & 0x202) != 0x202 )
    v13 = v12;
  if ( (v2 & 0x200000000LL) != 0 )
  {
    v14 = (__int64 *)HvlpAcquireHypercallPage(v24, 2, (__int64)v33, 8LL);
    HvcallCodeVa();
    HvlpReleaseHypercallPage((__int64)v24);
    HvlPartitionId = *v14;
  }
  v15 = v13 | 0x2000;
  if ( (v3 & 0x400) == 0 )
    v15 = v13;
  if ( (v2 & 4) != 0 )
    HvlpFlags |= 0x20u;
  if ( (v3 & 0x4000) == 0 )
    HvlpFlags |= 0x2000u;
  if ( (v2 & 0x1000000000000LL) != 0 )
    HvlpFlags |= 0x40u;
  v16 = v15 | 0x8000;
  if ( (v2 & 0x20000000000000LL) == 0 )
    v16 = v15;
  if ( (v1 & 0x2000) != 0 )
  {
    v17 = v16 | 0x80000;
    if ( (VslGetNestedPageProtectionFlags() & 2) == 0 )
      v17 = v16;
  }
  else
  {
    v17 = v16;
    if ( (HvlpFlags & 0x40) != 0 )
      HvlpFlags |= 0x20000u;
  }
  if ( v1 < 0 && (v17 & 0x100) != 0 )
    HvlpFlags |= 0x4000u;
  if ( (v32[0] & 0x10000) != 0 )
    HvlpFlags |= 0x40000u;
  v18 = HvlpQueryExtendedCapabilities(&v23);
  v19 = v23 & -(__int64)(v18 != 0);
  if ( (v19 & 0x10) != 0 )
    HvlpFlags |= 0x8000u;
  if ( (v19 & 0x20) != 0 )
    HvlpFlags |= 0x10000u;
  if ( (v19 & 8) != 0 )
    HvlpFlags |= 0x200000u;
  v20 = v17 | 0x200000;
  if ( (v19 & 2) == 0 )
    v20 = v17;
  v21 = v20 | 0x400000;
  if ( (v19 & 4) == 0 )
    v21 = v20;
  result = HvlGetEnlightenmentInfo;
  qword_1403987F0 = (__int64)HvlGetEnlightenmentInfo;
  HvlpEnlightenments = ~HvlpRescindedEnlightenments & v21;
  HvlEnlightenments = ~HvlpRescindedEnlightenments & v21;
  return result;
}
