/*
 * XREFs of RtlWakeConditionVariable @ 0x18007C850
 * Callers:
 *     sub_18007C734 @ 0x18007C734 (sub_18007C734.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlWakeConditionVariable(PRTL_CONDITION_VARIABLE ConditionVariable)
{
  signed __int64 Ptr; // rax
  signed __int64 v2; // rdx
  signed __int64 v3; // rtt
  signed __int64 v4; // rtt

  Ptr = (signed __int64)ConditionVariable->Ptr;
  while ( Ptr )
  {
    if ( (Ptr & 8) != 0 )
    {
      if ( (Ptr & 7) == 7 )
        return;
      v4 = Ptr;
      Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, Ptr + 1, Ptr);
      if ( v4 == Ptr )
        return;
    }
    else
    {
      v2 = Ptr + 8;
      v3 = Ptr;
      Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, Ptr + 8, Ptr);
      if ( v3 == Ptr )
      {
        sub_18007C880(ConditionVariable, v2, 1LL, ConditionVariable);
        return;
      }
    }
  }
}
