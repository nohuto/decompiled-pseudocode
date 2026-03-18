/*
 * XREFs of ExpPartitionCreatePoolDelayed @ 0x14075E898
 * Callers:
 *     ExpWorkQueueManagerThread @ 0x1405D0160 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     ExpPartitionCreatePoolInternal @ 0x1405DDEC0 (ExpPartitionCreatePoolInternal.c)
 */

__int64 __fastcall ExpPartitionCreatePoolDelayed(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax

  v5 = ((unsigned int)*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(a2 + 146)) + 8LL * a3) >> 1) & 0x7F;
  v6 = KeNodeBlock[v5];
  if ( (_UNKNOWN *)v6 == (_UNKNOWN *)((char *)&KiNodeInit + 320 * v5) )
    v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(v6 + 146)) + 8LL * a3);
  if ( (v7 & 1) != 0 )
    v7 = 0LL;
  return ExpPartitionCreatePoolInternal(a1, (2 * *(_DWORD *)(v7 + 716)) >> 1, *(_DWORD *)(v7 + 720), a2, a3);
}
