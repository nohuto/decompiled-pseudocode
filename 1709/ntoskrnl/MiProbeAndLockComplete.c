/*
 * XREFs of MiProbeAndLockComplete @ 0x1401002BC
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140100140 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14010030C (MiUnlockProbePacketWorkingSet.c)
 *     MiAddMdlTracker @ 0x140215AE4 (MiAddMdlTracker.c)
 */

__int64 __fastcall MiProbeAndLockComplete(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct _MDL *v4; // rbx

  v2 = a2;
  MiUnlockProbePacketWorkingSet(a1, a2);
  v4 = *(struct _MDL **)(a1 + 40);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)v4);
  if ( v2 < 0 )
  {
    MmUnlockPages(v4);
    ++dword_140388BE8;
  }
  return (unsigned int)v2;
}
