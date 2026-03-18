/*
 * XREFs of CmpTrimHive @ 0x1404CC9EC
 * Callers:
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     CmpUpdatePhaseAccessBit @ 0x1405D1534 (CmpUpdatePhaseAccessBit.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     HvpMapEntryIsNewAlloc @ 0x140053008 (HvpMapEntryIsNewAlloc.c)
 *     HvpMapEntryMarkTrimmed @ 0x14007F288 (HvpMapEntryMarkTrimmed.c)
 *     HvpMapEntryIsDiscardable @ 0x14008CFF0 (HvpMapEntryIsDiscardable.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     MmTrimPagedPool @ 0x1404CCAF8 (MmTrimPagedPool.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 */

void __fastcall CmpTrimHive(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ebp
  struct _EX_RUNDOWN_REF *CellMap; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r15
  unsigned __int64 v8; // rcx

  if ( CmpAccessBitForPhase == 2 )
  {
    v2 = *(_DWORD *)(a1 + 6016);
    if ( v2 || (v2 = *(_DWORD *)(a1 + 6020)) != 0 )
    {
      CmpLockRegistry(a1);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      v3 = *(_DWORD *)(a1 + 1400);
      *(_DWORD *)(a1 + 6020) = v2;
      *(_DWORD *)(a1 + 6024) = v3;
      while ( v2 < v3 )
      {
        CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(a1, v2);
        if ( !HvpMapEntryIsDiscardable((__int64)CellMap) )
        {
          if ( (unsigned __int8)HvpMapEntryIsNewAlloc(v5) )
          {
            v7 = *(unsigned int *)(v6 + 32);
            if ( (*(_BYTE *)(a1 + 124) & 4) == 0 )
            {
              v8 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
              if ( v8 )
                MmTrimPagedPool(v8, (unsigned int)v7);
            }
            if ( (CellMap[3].Count & 1) == 0 )
            {
              if ( ExAcquireRundownProtection(CellMap + 3) )
              {
                MmTrimPagedPool(CellMap[2].Count & 0xFFFFFFFFFFFFFFF0uLL, v7);
                ExReleaseRundownProtection(CellMap + 3);
              }
            }
          }
          HvpMapEntryMarkTrimmed((__int64)CellMap);
        }
        v2 += 4096;
      }
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2840));
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
      CmpUnlockRegistry();
    }
  }
}
