/*
 * XREFs of MiUnmapVad @ 0x1404D72FC
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x1400C2218 (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiCleanVad @ 0x140595BD8 (MiCleanVad.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     PfCheckDeprioritizeFile @ 0x14054FA08 (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x140749E78 (MiLogMapFileEvent.c)
 */

int __fastcall MiUnmapVad(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rbx
  ULONG_PTR v7; // rax
  __int64 v8; // r14
  _KPROCESS *Process; // rcx

  if ( (*(_DWORD *)(a1 + 64) & 0x2000000) != 0 )
  {
    v6 = **(_QWORD **)(a1 + 72);
    v7 = MiReferenceControlAreaFile(v6);
    v8 = *(_QWORD *)(v7 + 24);
    MiDereferenceControlAreaFile(v6, v7);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
      && (unsigned int)PfCheckDeprioritizeFile(
                         Process[1].ThreadSeed[1],
                         v8,
                         (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
                       - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                       + 1) == 1 )
    {
      a3 |= 0x80000000;
    }
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && *(_QWORD *)(a1 + 72) )
    MiLogMapFileEvent(a1, 1062LL);
  return MiDeleteVad((unsigned int *)a1, a2, a3);
}
