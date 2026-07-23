/*
 * XREFs of RtlPosixBarrier @ 0x1800EA420
 * Callers:
 *     RtlBarrier @ 0x1800EA3B0 (RtlBarrier.c)
 *     RtlBarrierForDelete @ 0x1800EA3C0 (RtlBarrierForDelete.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpWaitOnAddress @ 0x18006DA0C (RtlpWaitOnAddress.c)
 *     RtlpWakeByAddress @ 0x18006F6E8 (RtlpWakeByAddress.c)
 */

char __fastcall RtlPosixBarrier(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbx
  int v4; // ebp
  int v5; // edi
  unsigned __int64 v6; // rax
  unsigned int v7; // r8d
  unsigned __int64 v8; // rcx
  char v9; // si
  unsigned __int64 v10; // rtt
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v2 )
    return 0;
  v4 = *(_DWORD *)(v2 + 16);
  v5 = a2 & 0x10000;
  if ( (a2 & 0x10000) != 0 )
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(v2 + 8));
  v6 = *(_QWORD *)v2;
  do
  {
    v7 = v6 + 1;
    v8 = HIDWORD(v6);
    v9 = 0;
    LODWORD(v12) = HIDWORD(v6);
    if ( (_DWORD)v6 + 1 == v4 )
    {
      v7 = 0;
      v9 = 1;
      LODWORD(v8) = HIDWORD(v6) + 1;
      LODWORD(v12) = HIDWORD(v6) + 1;
    }
    v10 = v6;
    v6 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)v2,
           v7 | ((unsigned __int64)(unsigned int)v8 << 32),
           v6);
  }
  while ( v10 != v6 );
  if ( v9 )
  {
    _InterlockedOr(v11, 0);
    RtlpWakeByAddress(v2 + 4, 1);
  }
  else
  {
    while ( (_DWORD)v12 == *(_DWORD *)(v2 + 4) )
      RtlpWaitOnAddress((_QWORD *)(v2 + 4), &v12, 4LL, 0LL, RtlpWaitOnAddressSpinCount);
  }
  if ( v5 )
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v2 + 8));
  return v9;
}
