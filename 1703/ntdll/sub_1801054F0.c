/*
 * XREFs of sub_1801054F0 @ 0x1801054F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_1801054F0(__int64 a1)
{
  _RTL_SRWLOCK *v1; // rsi
  __int64 **v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8

  v1 = (_RTL_SRWLOCK *)(a1 + 32);
  v2 = (__int64 **)(a1 + 40);
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive(v1);
    if ( *v2 == (__int64 *)v2 )
    {
      v3 = 0LL;
    }
    else
    {
      v3 = *v2;
      v4 = **v2;
      if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
        __fastfail(3u);
      *v2 = (__int64 *)v4;
      *(_QWORD *)(v4 + 8) = v2;
    }
    RtlReleaseSRWLockExclusive(v1);
    if ( !v3 )
      break;
    if ( v3 != (__int64 *)32 )
    {
      v5 = v3[2];
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 3145728, *(PVOID *)v5);
    }
  }
}
