/*
 * XREFs of RtlBarrier_0 @ 0x1800EB020
 * Callers:
 *     RtlBarrier @ 0x1800EAFB0 (RtlBarrier.c)
 *     RtlBarrierForDelete @ 0x1800EAFC0 (RtlBarrierForDelete.c)
 * Callees:
 *     sub_18000A978 @ 0x18000A978 (sub_18000A978.c)
 *     sub_18000B51C @ 0x18000B51C (sub_18000B51C.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 */

BOOLEAN __cdecl RtlBarrier_0(PRTL_BARRIER Barrier, ULONG Flags)
{
  unsigned __int64 v2; // rbx
  int v4; // ebp
  ULONG v5; // edi
  unsigned __int64 v6; // rax
  unsigned int v7; // r8d
  unsigned __int64 v8; // rcx
  BOOLEAN v9; // si
  unsigned __int64 v10; // rtt
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = ((unsigned __int64)&Barrier->Reserved2 + 3) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v2 )
    return 0;
  v4 = *(_DWORD *)(v2 + 16);
  v5 = Flags & 0x10000;
  if ( (Flags & 0x10000) != 0 )
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
    sub_18000A978(v2 + 4, 1);
  }
  else
  {
    while ( (_DWORD)v12 == *(_DWORD *)(v2 + 4) )
      sub_18000B51C((_QWORD *)(v2 + 4), &v12, 4LL, 0LL, dword_180158680);
  }
  if ( v5 )
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v2 + 8));
  return v9;
}
