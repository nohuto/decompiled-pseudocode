/*
 * XREFs of MiSplitDriverPage @ 0x140214314
 * Callers:
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MmLockLoadedModuleListShared @ 0x1400D5670 (MmLockLoadedModuleListShared.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiLookupDataTableEntry @ 0x1400DCDF4 (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MiSplitDriverPage(unsigned __int64 a1, unsigned __int8 a2)
{
  PVOID *v4; // rdi
  unsigned __int8 v6; // [rsp+40h] [rbp+8h] BYREF

  MmLockLoadedModuleListShared(&v6);
  v4 = MiLookupDataTableEntry((__int64)(a1 << 25) >> 16, 1);
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  __writecr8(v6);
  if ( v4 )
    return MiMakeDriverPagesPrivate((__int64)v4, a1, a1, a2, 0);
  else
    return 3221225497LL;
}
