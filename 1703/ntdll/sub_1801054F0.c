/*
 * XREFs of sub_1801054F0 @ 0x1801054F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_1801054F0(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  __int64 **v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // rax
  signed __int64 result; // rax
  __int64 v6; // r8

  v1 = (volatile signed __int64 *)(a1 + 32);
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
    result = RtlReleaseSRWLockExclusive(v1);
    if ( !v3 )
      break;
    if ( v3 != (__int64 *)32 )
    {
      v6 = v3[2];
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 3145728, *(_QWORD *)v6);
    }
  }
  return result;
}
