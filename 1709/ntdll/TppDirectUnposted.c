/*
 * XREFs of TppDirectUnposted @ 0x18010AAD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall TppDirectUnposted(_RTL_SRWLOCK *a1)
{
  _RTL_SRWLOCK *v1; // rsi
  _RTL_SRWLOCK *v2; // rdi
  unsigned __int64 *Value; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8

  v1 = a1 + 4;
  v2 = a1 + 5;
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive(v1);
    if ( (_RTL_SRWLOCK *)v2->Value == v2 )
    {
      Value = 0LL;
    }
    else
    {
      Value = (unsigned __int64 *)v2->Value;
      if ( *(_RTL_SRWLOCK **)(v2->Value + 8) != v2 || (v4 = *Value, *(unsigned __int64 **)(*Value + 8) != Value) )
        __fastfail(3u);
      v2->Value = v4;
      *(_QWORD *)(v4 + 8) = v2;
    }
    RtlReleaseSRWLockExclusive(v1);
    if ( !Value )
      break;
    if ( Value != (unsigned __int64 *)32 )
    {
      v5 = Value[2];
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v5);
    }
  }
}
