/*
 * XREFs of MiProbeAndLockComplete @ 0x1400268F8
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1400B2BF0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiUnlockProbePacketWorkingSet @ 0x140026948 (MiUnlockProbePacketWorkingSet.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiAddMdlTracker @ 0x14020E384 (MiAddMdlTracker.c)
 */

__int64 __fastcall MiProbeAndLockComplete(__int64 a1, int a2)
{
  struct _MDL *v4; // rbx

  MiUnlockProbePacketWorkingSet(a1);
  v4 = *(struct _MDL **)(a1 + 40);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)v4);
  if ( a2 < 0 )
  {
    MmUnlockPages(v4);
    ++dword_14036C9F0;
  }
  return (unsigned int)a2;
}
