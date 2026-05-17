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

char __fastcall RtlPosixBarrier(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  int v6; // ebp
  unsigned int v7; // edi
  unsigned __int64 v8; // rax
  unsigned int v9; // r8d
  unsigned __int64 v10; // rcx
  char v11; // si
  unsigned __int64 v12; // rtt
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v4 )
    return 0;
  v6 = *(_DWORD *)(v4 + 16);
  v7 = (unsigned int)a2 & 0x10000;
  if ( ((unsigned int)a2 & 0x10000) != 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(v4 + 8), a2, a3, a4);
  v8 = *(_QWORD *)v4;
  do
  {
    v9 = v8 + 1;
    v10 = HIDWORD(v8);
    v11 = 0;
    LODWORD(v14) = HIDWORD(v8);
    if ( (_DWORD)v8 + 1 == v6 )
    {
      v9 = 0;
      v11 = 1;
      LODWORD(v10) = HIDWORD(v8) + 1;
      LODWORD(v14) = HIDWORD(v8) + 1;
    }
    v12 = v8;
    v8 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)v4,
           v9 | ((unsigned __int64)(unsigned int)v10 << 32),
           v8);
  }
  while ( v12 != v8 );
  if ( v11 )
  {
    _InterlockedOr(v13, 0);
    RtlpWakeByAddress(v4 + 4, 1);
  }
  else
  {
    while ( (_DWORD)v14 == *(_DWORD *)(v4 + 4) )
      RtlpWaitOnAddress((_QWORD *)(v4 + 4), &v14, 4LL, 0LL, RtlpWaitOnAddressSpinCount);
  }
  if ( v7 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v4 + 8));
  return v11;
}
