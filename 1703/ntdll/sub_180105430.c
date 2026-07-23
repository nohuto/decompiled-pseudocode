/*
 * XREFs of sub_180105430 @ 0x180105430
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_180017034 @ 0x180017034 (sub_180017034.c)
 *     TpStartAsyncIoOperation @ 0x180017660 (TpStartAsyncIoOperation.c)
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     sub_180028830 @ 0x180028830 (sub_180028830.c)
 * Callees:
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 */

void __fastcall sub_180105430(__int64 a1)
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
    ZwSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryAdjustThreadGoal, &WorkerFactoryInformation, 4u);
    sub_1800114C0(a1);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
}
