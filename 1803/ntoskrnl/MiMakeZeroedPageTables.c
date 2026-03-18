/*
 * XREFs of MiMakeZeroedPageTables @ 0x1400490A0
 * Callers:
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiSplitBitmapPages @ 0x1400465B8 (MiSplitBitmapPages.c)
 *     MiExpandPtes @ 0x14004A560 (MiExpandPtes.c)
 *     MiExpandSystemCache @ 0x1400C2710 (MiExpandSystemCache.c)
 *     MiMapWithLargePages @ 0x140177EDC (MiMapWithLargePages.c)
 *     MiExpandSpecialPool @ 0x14025C0AC (MiExpandSpecialPool.c)
 *     MiReserveDriverPtes @ 0x1405F6850 (MiReserveDriverPtes.c)
 *     MiMapSystemImage @ 0x1405FB30C (MiMapSystemImage.c)
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x14060AC60 (MiInitializeDynamicBitmap.c)
 *     MiMapNewPfns @ 0x14074AF30 (MiMapNewPfns.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x14075408C (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiExpandPartitionIds @ 0x140757314 (MiExpandPartitionIds.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 *     MiMapBBTMemory @ 0x14089D6E4 (MiMapBBTMemory.c)
 *     MiCreateTopLevelUltraMappings @ 0x1408C43B8 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiCleanupPageTablePages @ 0x1400493E0 (MiCleanupPageTablePages.c)
 *     MiInitializeColorBase @ 0x1400494D0 (MiInitializeColorBase.c)
 *     MiDeleteSystemPageTables @ 0x14004975C (MiDeleteSystemPageTables.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiGetLargePagesForSystemMapping @ 0x14074D840 (MiGetLargePagesForSystemMapping.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v8; // eax
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  __int64 v11; // r12
  unsigned __int64 v12; // rsi
  unsigned int v13; // edx
  unsigned __int16 *AnyMultiplexedVm; // rbx
  __int64 v15; // r9
  unsigned int v16; // r10d
  __int64 v17; // r11
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r11
  __int64 v22; // r8
  int v24; // ecx
  int SystemRegionType; // eax
  int v26; // ecx
  __int64 SharedVm; // rax
  _QWORD v28[36]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v29[22]; // [rsp+150h] [rbp+50h] BYREF

  memset(v29, 0, sizeof(v29));
  memset(v28, 0, 0x118uLL);
  if ( (a3 & 4) != 0 )
  {
    LODWORD(v28[7]) = 3;
    v8 = 3;
  }
  else if ( (a3 & 2) != 0 )
  {
    LODWORD(v28[7]) = 2;
    v8 = 2;
  }
  else
  {
    v8 = 0;
    if ( (a3 & 0x20) == 0 )
    {
      LODWORD(v28[7]) = 1;
      v8 = 1;
    }
  }
  v9 = a3 & 0xFFFFFF7F;
  BYTE2(v29[1]) = v28[7];
  if ( !v8 )
    v9 = a3;
  v10 = 0;
  v11 = (a2 << 25 >> 16) + 4095;
  v12 = a1 << 25 >> 16;
  LODWORD(v28[6]) = a4;
  AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(5LL);
  v18 = 8LL;
  if ( a4 == 9 )
    goto LABEL_15;
  if ( a4 > 9 )
  {
    if ( a4 == 11 )
    {
      SystemRegionType = MiGetSystemRegionType(v12);
      if ( SystemRegionType != (_DWORD)v15 )
        goto LABEL_17;
      goto LABEL_33;
    }
    v24 = a4 - 11 - v15;
    if ( !v24 )
    {
LABEL_29:
      v19 = (unsigned int)v15;
      goto LABEL_16;
    }
    v26 = v24 - v13;
    if ( v26 )
    {
      if ( v26 == (_DWORD)v15 )
      {
        v19 = 4LL;
        goto LABEL_16;
      }
      goto LABEL_17;
    }
LABEL_15:
    v19 = v16;
LABEL_16:
    AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(v19);
    goto LABEL_17;
  }
  if ( a4 == (_DWORD)v15 )
  {
LABEL_33:
    v10 = v13;
    AnyMultiplexedVm = (unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    goto LABEL_17;
  }
  if ( a4 != v13 )
  {
    if ( a4 != v16 )
    {
      if ( a4 <= 5 )
        goto LABEL_17;
      if ( a4 > 7 )
        v19 = 0LL;
      else
        v19 = v13;
      goto LABEL_16;
    }
    goto LABEL_29;
  }
  v10 = v15;
  AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
LABEL_17:
  v28[3] = *(_QWORD *)(qword_1403CBD88 + 8LL * AnyMultiplexedVm[87]);
  v20 = -1LL;
  HIDWORD(v28[6]) = v9;
  v28[34] = -1LL;
  if ( (v9 & 0x40) != 0 )
  {
    do
    {
      v20 = (v20 << 8) | 0xA;
      v18 -= v15;
    }
    while ( v18 );
  }
  else
  {
    if ( v12 < (MmPfnDatabase & 0xFFFFFFFFFFFFF000uLL) )
      goto LABEL_19;
    if ( v12 < 48 * qword_1403CB780 - 0x57FFFFFFFD0LL )
      v20 = v17;
  }
  v28[34] = v20;
LABEL_19:
  MiInitializeColorBase(v12, &v28[32], v18);
  if ( (v9 & 0x80u) != 0 )
  {
    MiGetLargePagesForSystemMapping(v28, v12, v11);
    v21 = 0LL;
  }
  WORD2(v28[8]) = 0;
  v29[19] = MiCreateSystemPageTable;
  LODWORD(v29[0]) = 18439;
  v29[20] = MiCreateSystemPageTableTail;
  v29[21] = v28;
  v29[4] = v12;
  v29[5] = v11;
  v28[9] = 20LL;
  LODWORD(v28[8]) = v10;
  v28[10] = v21;
  v28[11] = v21;
  v29[3] = AnyMultiplexedVm;
  BYTE4(v29[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables((int *)v29);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE4(v29[0]), v22);
  if ( (v9 & 0x40) != 0 && LODWORD(v28[6]) != 2 )
  {
    SharedVm = MiGetSharedVm(AnyMultiplexedVm);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(SharedVm + 56), v28[5]);
  }
  MiCleanupPageTablePages(v28);
  if ( SLODWORD(v28[31]) >= 0 )
    return 1LL;
  if ( (v9 & 0x100) == 0 )
    MiDeleteSystemPageTables((_DWORD)AnyMultiplexedVm, a4, v12, v11, 0, (__int64)&v28[8]);
  return 0LL;
}
