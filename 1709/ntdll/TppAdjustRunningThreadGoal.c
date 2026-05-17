/*
 * XREFs of TppAdjustRunningThreadGoal @ 0x18010AA10
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 *     TpStartAsyncIoOperation @ 0x18000F900 (TpStartAsyncIoOperation.c)
 *     TppGetCurrentThreadNumaNode @ 0x180036CF8 (TppGetCurrentThreadNumaNode.c)
 *     TpPostTask @ 0x180046308 (TpPostTask.c)
 * Callees:
 *     TppPoolUpdateNodeRelation @ 0x18000B078 (TppPoolUpdateNodeRelation.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     NtSetInformationWorkerFactory @ 0x1800A3350 (NtSetInformationWorkerFactory.c)
 */

signed __int64 __fastcall TppAdjustRunningThreadGoal(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // edi
  int v6; // eax
  __int16 v7; // r8
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 v11; // [rsp+38h] [rbp+10h]

  v4 = MEMORY[0x7FFE03C0];
  RtlAcquireSRWLockExclusive(a1 + 72, a2, a3, a4);
  v6 = *(_DWORD *)(a1 + 424);
  if ( v4 != v6 )
  {
    *(_DWORD *)(a1 + 424) = v4;
    v7 = v4 - v6;
    _m_prefetchw((const void *)(a1 + 8));
    v8 = *(_QWORD *)(a1 + 8);
    v11 = v8;
    do
    {
      LODWORD(v11) = (unsigned __int16)(v11 ^ (v11 + v7)) ^ (unsigned int)v11;
      v9 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v11, v8);
      v11 = v8;
    }
    while ( v9 != v8 );
    NtSetInformationWorkerFactory();
    TppPoolUpdateNodeRelation(a1);
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
}
