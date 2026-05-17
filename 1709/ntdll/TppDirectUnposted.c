/*
 * XREFs of TppDirectUnposted @ 0x18010AAD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall TppDirectUnposted(__int64 a1, unsigned __int64 a2, __int64 *a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  __int64 **v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // rax
  signed __int64 result; // rax

  v4 = (volatile signed __int64 *)(a1 + 32);
  v5 = (__int64 **)(a1 + 40);
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)v4, a2, (unsigned __int64 *)a3, a4);
    if ( *v5 == (__int64 *)v5 )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = *v5;
      if ( (__int64 **)(*v5)[1] != v5 || (v7 = (__int64 *)*v6, *(__int64 **)(*v6 + 8) != v6) )
        __fastfail(3u);
      *v5 = v7;
      v7[1] = (__int64)v5;
    }
    result = RtlReleaseSRWLockExclusive(v4);
    if ( !v6 )
      break;
    a3 = v6 - 4;
    if ( v6 != (__int64 *)32 )
    {
      a3 = (__int64 *)a3[6];
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a3 + 2, 0xFFFFFFFF) == 1 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *a3);
    }
  }
  return result;
}
