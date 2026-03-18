/*
 * XREFs of MiUnmapVad @ 0x140499B30
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x14000EC64 (MiUnmapLockedPagesInUserSpace.c)
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 *     MiCleanVad @ 0x1404D3230 (MiCleanVad.c)
 * Callees:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     PfCheckDeprioritizeFile @ 0x14043EBAC (PfCheckDeprioritizeFile.c)
 *     MiLogMapFileEvent @ 0x1406DEFF0 (MiLogMapFileEvent.c)
 */

void __fastcall MiUnmapVad(__int64 a1, int a2)
{
  __int64 v4; // rdi
  ULONG_PTR v5; // rax
  __int64 v6; // rbp
  _KPROCESS *Process; // rcx

  if ( (*(_DWORD *)(a1 + 64) & 0x2000000) != 0 )
  {
    v4 = **(_QWORD **)(a1 + 72);
    v5 = MiReferenceControlAreaFile(v4);
    v6 = *(_QWORD *)(v5 + 24);
    MiDereferenceControlAreaFile(v4, v5);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
      && (unsigned int)PfCheckDeprioritizeFile(
                         Process[1].ThreadSeed[1],
                         v6,
                         *(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 24) + 1) == 1 )
    {
      a2 |= 0x80000000;
    }
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 && *(_QWORD *)(a1 + 72) )
    MiLogMapFileEvent(a1, 1062LL);
  MiDeleteVad(a1, a2);
}
