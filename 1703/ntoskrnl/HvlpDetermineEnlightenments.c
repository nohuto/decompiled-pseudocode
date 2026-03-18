/*
 * XREFs of HvlpDetermineEnlightenments @ 0x1401E9D50
 * Callers:
 *     HvlPhase0Initialize @ 0x1405A8F40 (HvlPhase0Initialize.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140130000 (HvcallpNoHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x140155D10 (HviGetHypervisorFeatures.c)
 *     VslGetNestedPageProtectionFlags @ 0x140159240 (VslGetNestedPageProtectionFlags.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1401E5364 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401E5D98 (HvlpReleaseHypercallPage.c)
 *     HvlpQueryExtendedCapabilities @ 0x1401EA12C (HvlpQueryExtendedCapabilities.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1401EA1C4 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlpGetRegister128 @ 0x1401EB658 (HvlpGetRegister128.c)
 *     HviGetEnlightenmentInformation @ 0x140261890 (HviGetEnlightenmentInformation.c)
 */

__int64 (__fastcall *HvlpDetermineEnlightenments())(_DWORD *a1)
{
  __int16 v0; // si
  __int64 v1; // r8
  int v2; // r9d
  __int16 v3; // r15
  unsigned __int64 v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // r9d
  __int64 v9; // rcx
  int v10; // edi
  PHYSICAL_ADDRESS v11; // rbx
  char v12; // al
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // r14d
  __int64 *v18; // rdi
  int v19; // ecx
  int v20; // edi
  int v21; // ebx
  char NestedPageProtectionFlags; // al
  int v23; // ecx
  __int64 (__fastcall *result)(_DWORD *); // rax
  int v25[4]; // [rsp+20h] [rbp-60h] BYREF
  PHYSICAL_ADDRESS v26[3]; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v27[3]; // [rsp+50h] [rbp-30h] BYREF
  int v28; // [rsp+5Ch] [rbp-24h]
  _BYTE v29[16]; // [rsp+60h] [rbp-20h] BYREF

  HvlEnableIdleYield = 0;
  HviGetEnlightenmentInformation(v25);
  HviGetHypervisorFeatures(v26);
  HviGetHypervisorFeatures(v27);
  v0 = v25[0];
  v1 = (unsigned int)HvlpFlags;
  v2 = v25[0] & 1;
  if ( (v25[0] & 8) != 0 )
  {
    v2 |= 0x10u;
    v1 = HvlpFlags | 1u;
    HvlpFlags |= 1u;
  }
  if ( (v25[0] & 0x200) != 0 )
  {
    v2 |= 0x1000u;
    v1 = (unsigned int)v1 | 0x10;
    HvlpFlags = v1;
  }
  v3 = v28;
  if ( (v28 & 0x40000) != 0 )
  {
    v4 = __readmsr(0x40000001u);
    if ( (v4 & 2) == 0 )
      __writemsr(0x40000001u, v4 | 2);
    v2 |= 0x100000u;
  }
  v5 = v2 | 0x80;
  if ( (v28 & 0x10) == 0 )
    v5 = v2;
  if ( (v25[0] & 0x800) != 0 )
  {
    LODWORD(v1) = v1 | 0x80;
    HvlpFlags = v1;
  }
  v6 = v5 | 2;
  if ( (v25[0] & 2) == 0 )
    v6 = v5;
  v7 = v6 | 4;
  if ( (v25[0] & 4) == 0 )
    v7 = v6;
  v8 = v7 | 0x20;
  if ( (v25[0] & 0x20) == 0 )
    v8 = v7;
  v9 = v8;
  LODWORD(v9) = v8 | 0x4000;
  if ( (v25[0] & 0x400) == 0 )
    v9 = v8;
  v10 = v9 | 0x200;
  if ( (v28 & 0x20) == 0 )
    v10 = v9;
  if ( v25[1] > 0 )
  {
    _BitScanReverse((unsigned int *)&v9, v25[1]);
    v10 |= 0x40u;
    HvlLongSpinCountMask = v25[1] | ((1 << v9) - 1);
  }
  v11 = v26[0];
  if ( (v26[0].QuadPart & 0x100000000000LL) != 0 )
  {
    v12 = HvlpTryToLockCpuManagementVersion(v9, (unsigned int)v25[1], v1);
    LODWORD(v1) = HvlpFlags;
    if ( v12 )
    {
      LODWORD(v1) = HvlpFlags | 2;
      HvlpFlags |= 2u;
    }
  }
  if ( (v1 & 2) != 0 )
  {
    HvlpGetRegister128(516LL, v25);
    v13 = v10 | 0x400;
    if ( (v25[1] & 1) == 0 )
      v13 = v10;
    v14 = v13 | 0x20000;
    v15 = HvlpRootFlags;
    if ( (v25[1] & 2) == 0 )
      v14 = v13;
    v10 = v14 | 0x40000;
    if ( (v25[1] & 4) == 0 )
      v10 = v14;
    if ( (v25[0] & 1) != 0 )
    {
      v15 = HvlpRootFlags | 0x20;
      HvlpRootFlags |= 0x20u;
    }
    if ( (v25[0] & 2) != 0 )
    {
      v15 |= 0x40u;
      HvlpRootFlags = v15;
    }
    if ( v25[0] < 0 )
    {
      v10 |= 0x10008u;
      HvlHyperVRootPartition = 1;
      v15 |= 0x187u;
      HvlpRootFlags = v15;
    }
    if ( (v15 & 1) != 0 && (v25[0] & 4) != 0 )
    {
      v15 |= 0x200u;
      HvlpRootFlags = v15;
    }
    if ( (v11.QuadPart & 0x10000000000LL) != 0 )
    {
      v15 |= 0x10u;
      HvlpRootFlags = v15;
    }
    LODWORD(v1) = HvlpFlags;
    if ( (v0 & 0x1000) != 0 )
      HvlpRootFlags = v15 | 0x400;
  }
  v16 = v10 | 0x800;
  if ( (v3 & 0x80u) == 0 )
    v16 = v10;
  if ( (v3 & 8) == 0 )
  {
    LODWORD(v1) = v1 | 4;
    HvlpFlags = v1;
  }
  v17 = v16 | 0x100;
  if ( (v11.LowPart & 0x202) != 0x202LL )
    v17 = v16;
  if ( (v11.QuadPart & 0x200000000LL) != 0 )
  {
    v18 = (__int64 *)HvlpAcquireHypercallPage(v26, 2, (__int64)v29, 8LL);
    HvcallCodeVa();
    HvlpReleaseHypercallPage((__int64)v26);
    LODWORD(v1) = HvlpFlags;
    HvlPartitionId = *v18;
  }
  v19 = v17 | 0x2000;
  if ( (v3 & 0x400) == 0 )
    v19 = v17;
  if ( (v11.LowPart & 4) != 0 )
  {
    LODWORD(v1) = v1 | 0x20;
    HvlpFlags = v1;
  }
  if ( (v3 & 0x4000) == 0 )
  {
    LODWORD(v1) = v1 | 0x2000;
    HvlpFlags = v1;
  }
  if ( (v11.QuadPart & 0x1000000000000LL) != 0 )
  {
    LODWORD(v1) = v1 | 0x40;
    HvlpFlags = v1;
  }
  v20 = v19 | 0x8000;
  if ( (v11.QuadPart & 0x20000000000000LL) == 0 )
    v20 = v19;
  v21 = v20;
  if ( (v0 & 0x2000) != 0 )
  {
    NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
    LODWORD(v1) = HvlpFlags;
    if ( (NestedPageProtectionFlags & 2) != 0 )
      v21 = v20 | 0x80000;
  }
  if ( v0 < 0 && (v21 & 0x100) != 0 )
    HvlpFlags = v1 | 0x4000;
  *(_QWORD *)v25 = 0LL;
  HvlpQueryExtendedCapabilities(v25);
  v23 = v21 | 0x200000;
  if ( (v25[0] & 2) == 0 )
    v23 = v21;
  result = HvlGetEnlightenmentInfo;
  qword_14033B420 = (__int64)HvlGetEnlightenmentInfo;
  HvlpEnlightenments = ~HvlpRescindedEnlightenments & v23 & 0x3FFFFF;
  HvlEnlightenments = ~HvlpRescindedEnlightenments & v23 & 0x3FFFFF;
  return result;
}
