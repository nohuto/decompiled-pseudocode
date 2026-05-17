/*
 * XREFs of RtlWakeConditionVariable @ 0x18007C850
 * Callers:
 *     sub_18007C734 @ 0x18007C734 (sub_18007C734.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWakeConditionVariable(volatile signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rdx
  signed __int64 v3; // rtt
  signed __int64 v4; // rtt

  result = *a1;
  while ( result )
  {
    if ( (result & 8) != 0 )
    {
      if ( (result & 7) == 7 )
        return result;
      v4 = result;
      result = _InterlockedCompareExchange64(a1, result + 1, result);
      if ( v4 == result )
        return result;
    }
    else
    {
      v2 = result + 8;
      v3 = result;
      result = _InterlockedCompareExchange64(a1, result + 8, result);
      if ( v3 == result )
        return sub_18007C880(a1, v2, 1LL, a1);
    }
  }
  return result;
}
