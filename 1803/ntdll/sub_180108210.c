/*
 * XREFs of sub_180108210 @ 0x180108210
 * Callers:
 *     sub_180024854 @ 0x180024854 (sub_180024854.c)
 *     TpStartAsyncIoOperation @ 0x180025840 (TpStartAsyncIoOperation.c)
 *     sub_180026138 @ 0x180026138 (sub_180026138.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_180027E0C @ 0x180027E0C (sub_180027E0C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800593D8 @ 0x1800593D8 (sub_1800593D8.c)
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 */

void __fastcall sub_180108210(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // eax
  __int16 v4; // r8
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  bool v7; // cf
  int v8; // edi
  void *v9; // rcx
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v11; // [rsp+38h] [rbp+10h]

  v1 = MEMORY[0x7FFE03C0];
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  v3 = *(_DWORD *)(a1 + 424);
  if ( v1 != v3 )
  {
    *(_DWORD *)(a1 + 424) = v1;
    v4 = v1 - v3;
    _m_prefetchw((const void *)(a1 + 8));
    v5 = *(_QWORD *)(a1 + 8);
    v11 = v5;
    do
    {
      LODWORD(v11) = v5 ^ (unsigned __int16)(v5 ^ (v5 + v4));
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v11, v5);
      v11 = v5;
    }
    while ( v6 != v5 );
    v7 = v1 < 4;
    v8 = v1 + 1;
    if ( v7 )
      v8 = 4;
    v9 = *(void **)(a1 + 56);
    WorkerFactoryInformation = v8;
    ZwSetInformationWorkerFactory(v9, WorkerFactoryAdjustThreadGoal, &WorkerFactoryInformation, 4u);
    sub_1800593D8(a1);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
}
