/*
 * XREFs of KiResetScb @ 0x1400D23B8
 * Callers:
 *     KiUpdateCpuTargetByWeight @ 0x1400D1DA4 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1400D1F04 (KiUpdateCpuTargetByRate.c)
 * Callees:
 *     KiMoveScbThreadsToNewReadylist @ 0x14000CFA8 (KiMoveScbThreadsToNewReadylist.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400D2A58 (KiRemoveSchedulingGroupQueue.c)
 */

void __fastcall KiResetScb(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // r8

  *(_BYTE *)(a1 + 112) &= 0xF1u;
  v2 = (*(_BYTE *)(a1 + 112) & 0x20) == 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 116) = 0;
  if ( !v2 )
    *(_DWORD *)(a1 + 128) = 0;
  if ( *(_WORD *)(a1 + 114) )
  {
    v5 = a1;
    if ( !*(_DWORD *)(a1 + 116) )
    {
      do
      {
        v6 = *(_QWORD *)(v5 + 408);
        if ( !v6 )
          break;
        v5 = *(_QWORD *)(v5 + 408);
      }
      while ( !*(_DWORD *)(v6 + 116) );
    }
    if ( *(_DWORD *)(v5 + 116) )
    {
      v7 = 0LL;
    }
    else
    {
      v7 = a2;
      v5 = 0LL;
    }
    KiMoveScbThreadsToNewReadylist(a1, v5, v7, 0LL);
    if ( (*(_BYTE *)(a1 + 112) & 1) != 0 && !*(_QWORD *)(a1 + 392) )
      KiRemoveSchedulingGroupQueue(a2, a1, 0LL);
  }
}
