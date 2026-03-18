/*
 * XREFs of MiFlushTbListEarly @ 0x14009E7E4
 * Callers:
 *     MiReplenishBitMap @ 0x14009E090 (MiReplenishBitMap.c)
 *     MiResetAccessBitPteWorker @ 0x140259F10 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 */

__int64 __fastcall MiFlushTbListEarly(__int64 a1, char a2)
{
  unsigned __int64 v2; // r8

  v2 = qword_1403CB708;
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0
    && *(_DWORD *)a1 == 1
    && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[16] )
  {
    v2 = -1LL;
  }
  if ( *(_DWORD *)(a1 + 12) < *(_DWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v2 )
    return 0LL;
  if ( (a2 & 2) == 0 )
  {
    if ( v2 < 0x400 || *(_BYTE *)(a1 + 5) )
    {
      if ( (a2 & 1) == 0 )
        return 0LL;
      *(_BYTE *)(a1 + 5) = 1;
    }
    MiFlushTbList(a1);
  }
  return 1LL;
}
