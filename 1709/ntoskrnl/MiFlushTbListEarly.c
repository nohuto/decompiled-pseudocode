/*
 * XREFs of MiFlushTbListEarly @ 0x1400E94BC
 * Callers:
 *     MiReplenishBitMap @ 0x1400E6290 (MiReplenishBitMap.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiAgePteWorker @ 0x14021CBF0 (MiAgePteWorker.c)
 *     MiResetAccessBitPteWorker @ 0x14021E03C (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 */

__int64 __fastcall MiFlushTbListEarly(__int64 a1, _KPROCESS *Process)
{
  unsigned __int64 v2; // r8
  char v3; // r9

  v2 = qword_140388568;
  v3 = (char)Process;
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0 && *(_DWORD *)a1 == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].ActiveProcessors.Bitmap[16] )
      v2 = -1LL;
  }
  if ( *(_DWORD *)(a1 + 12) < *(_DWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v2 )
    return 0LL;
  if ( (v3 & 2) == 0 )
  {
    if ( v2 < 0x400 || *(_BYTE *)(a1 + 5) )
    {
      if ( (v3 & 1) == 0 )
        return 0LL;
      *(_BYTE *)(a1 + 5) = 1;
    }
    MiFlushTbList(a1, Process);
  }
  return 1LL;
}
