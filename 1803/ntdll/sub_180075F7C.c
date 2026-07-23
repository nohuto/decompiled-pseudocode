/*
 * XREFs of sub_180075F7C @ 0x180075F7C
 * Callers:
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_180075F7C(__int64 a1)
{
  _RTL_SRWLOCK *v1; // rax
  _QWORD *v2; // rbx
  _RTL_SRWLOCK *v3; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rax

  v1 = *(_RTL_SRWLOCK **)(a1 + 16);
  v2 = (_QWORD *)(a1 + 40);
  if ( (_QWORD *)*v2 != v2 )
  {
    v3 = v1 + 1;
    RtlAcquireSRWLockExclusive(v1 + 1);
    v4 = *v2;
    v5 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v5 != v2 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    RtlReleaseSRWLockExclusive(v3);
  }
}
