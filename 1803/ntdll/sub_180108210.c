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

signed __int64 __fastcall sub_180108210(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
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
    HIDWORD(v11) = HIDWORD(v8);
    do
    {
      LODWORD(v11) = v8 ^ (unsigned __int16)(v8 ^ (v8 + v7));
      v9 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v11, v8);
      HIDWORD(v11) = HIDWORD(v8);
    }
    while ( v9 != v8 );
    ZwSetInformationWorkerFactory();
    sub_1800593D8(a1);
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
}
