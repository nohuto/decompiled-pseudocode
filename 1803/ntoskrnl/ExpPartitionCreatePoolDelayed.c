/*
 * XREFs of ExpPartitionCreatePoolDelayed @ 0x1407C5608
 * Callers:
 *     ExpWorkQueueManagerThread @ 0x140636B70 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     ExpPartitionCreatePoolInternal @ 0x140647550 (ExpPartitionCreatePoolInternal.c)
 */

__int64 __fastcall ExpPartitionCreatePoolDelayed(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  v4 = ((unsigned int)*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(a2 + 146)) + 8LL * a3) >> 1) & 0x7F;
  v5 = 0LL;
  if ( (_UNKNOWN *)KeNodeBlock[v4] != (_UNKNOWN *)((char *)&KiNodeInit + 384 * v4) )
    v5 = KeNodeBlock[v4];
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(v5 + 146)) + 8LL * a3);
  if ( (v6 & 1) != 0 )
    v6 = 0LL;
  return ExpPartitionCreatePoolInternal(a1, (2 * *(_DWORD *)(v6 + 716)) >> 1, *(_DWORD *)(v6 + 720), a2, a3);
}
