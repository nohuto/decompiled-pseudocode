/*
 * XREFs of CmpTrimHive @ 0x1404E6254
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmpUpdatePhaseAccessBit @ 0x1405EC740 (CmpUpdatePhaseAccessBit.c)
 * Callees:
 *     HvpMapEntryIsNewAlloc @ 0x140016590 (HvpMapEntryIsNewAlloc.c)
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     HvpMapEntryIsDiscardable @ 0x140080F80 (HvpMapEntryIsDiscardable.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     HvpMapEntryMarkTrimmed @ 0x140132264 (HvpMapEntryMarkTrimmed.c)
 *     HvpGetCellMap @ 0x14047D620 (HvpGetCellMap.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     MmTrimPagedPool @ 0x1405D9B2C (MmTrimPagedPool.c)
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
      CmpLockRegistry();
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
          if ( HvpMapEntryIsNewAlloc(v5) )
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
              if ( ExAcquireRundownProtection_0(CellMap + 3) )
              {
                MmTrimPagedPool(CellMap[2].Count & 0xFFFFFFFFFFFFFFF0uLL, v7);
                ExReleaseRundownProtection_0(CellMap + 3);
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
