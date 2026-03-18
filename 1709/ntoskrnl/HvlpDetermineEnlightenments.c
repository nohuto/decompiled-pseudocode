/*
 * XREFs of HvlpDetermineEnlightenments @ 0x1401EEFA8
 * Callers:
 *     HvlPhase0Initialize @ 0x1405ABC98 (HvlPhase0Initialize.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x1401348B0 (HviGetHypervisorFeatures.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 *     VslGetNestedPageProtectionFlags @ 0x140143BC0 (VslGetNestedPageProtectionFlags.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvlpQueryExtendedCapabilities @ 0x1401EF360 (HvlpQueryExtendedCapabilities.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1401EF3F8 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlpGetRegister128 @ 0x1401F09B4 (HvlpGetRegister128.c)
 *     HviGetEnlightenmentInformation @ 0x14028B470 (HviGetEnlightenmentInformation.c)
 */

__int64 (__fastcall *HvlpDetermineEnlightenments())(_DWORD *a1)
{
  __int16 v0; // si
  int v1; // r8d
  __int16 v2; // r15
  unsigned __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // r8d
  int v8; // ecx
  int v9; // edi
  unsigned int v10; // ecx
  PHYSICAL_ADDRESS v11; // rbx
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // r14d
  __int64 *v17; // rdi
  int v18; // ecx
  int v19; // edi
  int v20; // ebx
  int v21; // edx
  int v22; // ecx
  __int64 (__fastcall *result)(_DWORD *); // rax
  int v24[4]; // [rsp+20h] [rbp-60h] BYREF
  PHYSICAL_ADDRESS v25[3]; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v26[3]; // [rsp+50h] [rbp-30h] BYREF
  int v27; // [rsp+5Ch] [rbp-24h]
  _BYTE v28[16]; // [rsp+60h] [rbp-20h] BYREF

  HvlEnableIdleYield = 0;
  HviGetEnlightenmentInformation(v24);
  HviGetHypervisorFeatures(v25);
  HviGetHypervisorFeatures(v26);
  v0 = v24[0];
  v1 = v24[0] & 1;
  if ( (v24[0] & 8) != 0 )
  {
    v1 |= 0x10u;
    HvlpFlags |= 1u;
  }
  if ( (v24[0] & 0x200) != 0 )
  {
    v1 |= 0x1000u;
    HvlpFlags |= 0x10u;
  }
  v2 = v27;
  if ( (v27 & 0x40000) != 0 )
  {
    v3 = __readmsr(0x40000001u);
    if ( (v3 & 2) == 0 )
      __writemsr(0x40000001u, v3 | 2);
    v1 |= 0x100000u;
  }
  v4 = v1 | 0x80;
  if ( (v27 & 0x10) == 0 )
    v4 = v1;
  if ( (v24[0] & 0x800) != 0 )
    HvlpFlags |= 0x80u;
  v5 = v4 | 2;
  if ( (v24[0] & 2) == 0 )
    v5 = v4;
  v6 = v5 | 4;
  if ( (v24[0] & 4) == 0 )
    v6 = v5;
  v7 = v6 | 0x20;
  if ( (v24[0] & 0x20) == 0 )
    v7 = v6;
  v8 = v7 | 0x4000;
  if ( (v24[0] & 0x400) == 0 )
    v8 = v7;
  v9 = v8 | 0x200;
  if ( (v27 & 0x20) == 0 )
    v9 = v8;
  if ( v24[1] > 0 )
  {
    _BitScanReverse(&v10, v24[1]);
    v9 |= 0x40u;
    HvlLongSpinCountMask = v24[1] | ((1 << v10) - 1);
  }
  v11 = v25[0];
  if ( (v25[0].QuadPart & 0x100000000000LL) != 0 && (unsigned __int8)HvlpTryToLockCpuManagementVersion() )
    HvlpFlags |= 2u;
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlpGetRegister128(516LL, v24);
    v12 = v9 | 0x400;
    if ( (v24[1] & 1) == 0 )
      v12 = v9;
    v13 = v12 | 0x20000;
    if ( (v24[1] & 2) == 0 )
      v13 = v12;
    v9 = v13 | 0x40000;
    if ( (v24[1] & 4) == 0 )
      v9 = v13;
    if ( (v24[0] & 1) != 0 )
      HvlpRootFlags |= 0x20u;
    if ( (v24[0] & 2) != 0 )
      HvlpRootFlags |= 0x40u;
    if ( v24[0] < 0 )
    {
      v9 |= 0x10008u;
      HvlHyperVRootPartition = 1;
      HvlpRootFlags |= 0x187u;
    }
    v14 = HvlpRootFlags;
    if ( (HvlpRootFlags & 1) != 0 && (v24[0] & 4) != 0 )
    {
      v14 = HvlpRootFlags | 0x200;
      HvlpRootFlags |= 0x200u;
    }
    if ( (v11.QuadPart & 0x10000000000LL) != 0 )
    {
      v14 |= 0x10u;
      HvlpRootFlags = v14;
    }
    if ( (v0 & 0x1000) != 0 )
      HvlpRootFlags = v14 | 0x400;
  }
  v15 = v9 | 0x800;
  if ( (v2 & 0x80u) == 0 )
    v15 = v9;
  if ( (v2 & 8) == 0 )
    HvlpFlags |= 4u;
  v16 = v15 | 0x100;
  if ( (v11.LowPart & 0x202) != 0x202LL )
    v16 = v15;
  if ( (v11.QuadPart & 0x200000000LL) != 0 )
  {
    v17 = (__int64 *)HvlpAcquireHypercallPage(v25, 2, (__int64)v28, 8LL);
    HvcallCodeVa();
    HvlpReleaseHypercallPage((__int64)v25);
    HvlPartitionId = *v17;
  }
  v18 = v16 | 0x2000;
  if ( (v2 & 0x400) == 0 )
    v18 = v16;
  if ( (v11.LowPart & 4) != 0 )
    HvlpFlags |= 0x20u;
  if ( (v2 & 0x4000) == 0 )
    HvlpFlags |= 0x2000u;
  if ( (v11.QuadPart & 0x1000000000000LL) != 0 )
    HvlpFlags |= 0x40u;
  v19 = v18 | 0x8000;
  if ( (v11.QuadPart & 0x20000000000000LL) == 0 )
    v19 = v18;
  v20 = v19;
  if ( (v0 & 0x2000) != 0 && (VslGetNestedPageProtectionFlags() & 2) != 0 )
    v20 = v19 | 0x80000;
  if ( v0 < 0 && (v20 & 0x100) != 0 )
    HvlpFlags |= 0x4000u;
  *(_QWORD *)v24 = 0LL;
  HvlpQueryExtendedCapabilities(v24);
  if ( (v24[0] & 0x10) != 0 )
    HvlpFlags |= 0x8000u;
  if ( (v24[0] & 0x20) != 0 )
    HvlpFlags |= 0x10000u;
  v21 = v20 | 0x200000;
  if ( (v24[0] & 2) == 0 )
    v21 = v20;
  v22 = v21 | 0x400000;
  if ( (v24[0] & 4) == 0 )
    v22 = v21;
  result = HvlGetEnlightenmentInfo;
  qword_140353450 = (__int64)HvlGetEnlightenmentInfo;
  HvlpEnlightenments = ~HvlpRescindedEnlightenments & v22;
  HvlEnlightenments = ~HvlpRescindedEnlightenments & v22;
  return result;
}
