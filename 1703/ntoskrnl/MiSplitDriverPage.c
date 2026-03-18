/*
 * XREFs of MiSplitDriverPage @ 0x14020D2B4
 * Callers:
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     MmLockLoadedModuleListShared @ 0x14006CF18 (MmLockLoadedModuleListShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall MiSplitDriverPage(unsigned __int64 a1, KIRQL a2)
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
