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

void __fastcall TppAdjustRunningThreadGoal(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // eax
  __int16 v4; // r8
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v8; // [rsp+38h] [rbp+10h]

  v1 = MEMORY[0x7FFE03C0];
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  v3 = *(_DWORD *)(a1 + 424);
  if ( v1 != v3 )
  {
    *(_DWORD *)(a1 + 424) = v1;
    v4 = v1 - v3;
    _m_prefetchw((const void *)(a1 + 8));
    v5 = *(_QWORD *)(a1 + 8);
    v8 = v5;
    do
    {
      LODWORD(v8) = (unsigned __int16)(v8 ^ (v8 + v4)) ^ (unsigned int)v8;
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v8, v5);
      v8 = v5;
    }
    while ( v6 != v5 );
    if ( v1 < 4 )
      WorkerFactoryInformation = 4;
    else
      WorkerFactoryInformation = v1 + 1;
    NtSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryAdjustThreadGoal, &WorkerFactoryInformation, 4u);
    TppPoolUpdateNodeRelation(a1);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
}
