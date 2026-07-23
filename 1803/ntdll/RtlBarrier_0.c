/*
 * XREFs of RtlBarrier_0 @ 0x1800E65E0
 * Callers:
 *     RtlBarrier @ 0x1800E6570 (RtlBarrier.c)
 *     RtlBarrierForDelete @ 0x1800E6580 (RtlBarrierForDelete.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18004A8A8 @ 0x18004A8A8 (sub_18004A8A8.c)
 *     sub_18004AABC @ 0x18004AABC (sub_18004AABC.c)
 */

BOOLEAN __cdecl RtlBarrier_0(PRTL_BARRIER Barrier, ULONG Flags)
{
  unsigned __int64 v2; // rbx
  int v4; // edi
  ULONG v5; // esi
  unsigned __int64 v6; // rax
  unsigned int v7; // r8d
  unsigned __int64 v8; // rcx
  BOOLEAN v9; // bp
  unsigned __int64 v10; // rtt
  _DWORD *v11; // rdi
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

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
    LODWORD(v13) = HIDWORD(v6);
    if ( (_DWORD)v6 + 1 == v4 )
    {
      v7 = 0;
      v9 = 1;
      LODWORD(v8) = HIDWORD(v6) + 1;
      LODWORD(v13) = HIDWORD(v6) + 1;
    }
    v10 = v6;
    v6 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)v2,
           v7 | ((unsigned __int64)(unsigned int)v8 << 32),
           v6);
  }
  while ( v10 != v6 );
  v11 = (_DWORD *)(v2 + 4);
  if ( v9 )
  {
    _InterlockedOr(v12, 0);
    sub_18004A8A8(v2 + 4, 1);
  }
  else
  {
    while ( (_DWORD)v13 == *v11 )
      sub_18004AABC((_QWORD *)(v2 + 4), &v13, 4LL, 0LL, dword_1801596D8);
  }
  if ( v5 )
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v2 + 8));
  return v9;
}
