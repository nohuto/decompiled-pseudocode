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

char __fastcall RtlBarrier_0(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  int v6; // edi
  unsigned int v7; // esi
  unsigned __int64 v8; // rax
  unsigned int v9; // r8d
  unsigned __int64 v10; // rcx
  char v11; // bp
  unsigned __int64 v12; // rtt
  _DWORD *v13; // rdi
  signed __int32 v14[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

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
    LODWORD(v15) = HIDWORD(v8);
    if ( (_DWORD)v8 + 1 == v6 )
    {
      v9 = 0;
      v11 = 1;
      LODWORD(v10) = HIDWORD(v8) + 1;
      LODWORD(v15) = HIDWORD(v8) + 1;
    }
    v12 = v8;
    v8 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)v4,
           v9 | ((unsigned __int64)(unsigned int)v10 << 32),
           v8);
  }
  while ( v12 != v8 );
  v13 = (_DWORD *)(v4 + 4);
  if ( v11 )
  {
    _InterlockedOr(v14, 0);
    sub_18004A8A8(v4 + 4, 1);
  }
  else
  {
    while ( (_DWORD)v15 == *v13 )
      sub_18004AABC((_QWORD *)(v4 + 4), &v15, 4LL, 0LL, dword_1801596D8);
  }
  if ( v7 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v4 + 8));
  return v11;
}
