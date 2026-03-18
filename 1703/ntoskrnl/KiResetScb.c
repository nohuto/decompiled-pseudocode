/*
 * XREFs of KiResetScb @ 0x14001D5B8
 * Callers:
 *     KiUpdateCpuTargetByWeight @ 0x14001D010 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x14001D164 (KiUpdateCpuTargetByRate.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x140114D04 (KiRemoveSchedulingGroupQueue.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14011F5AC (KiMoveScbThreadsToNewReadylist.c)
 */

void __fastcall KiResetScb(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9

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
      KiRemoveSchedulingGroupQueue(a2, a1, 0LL, v8);
  }
}
