/*
 * XREFs of sub_1800711F0 @ 0x1800711F0
 * Callers:
 *     RtlSleepConditionVariableSRW @ 0x180071060 (RtlSleepConditionVariableSRW.c)
 *     RtlSleepConditionVariableCS @ 0x180071240 (RtlSleepConditionVariableCS.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_1800711F0(volatile signed __int64 *a1, signed __int64 a2)
{
  signed __int64 result; // rax
  unsigned __int64 v4; // rdx
  _QWORD *v5; // r8
  _QWORD *v6; // rcx
  signed __int64 v7; // rtt

  result = a2;
  while ( 1 )
  {
    v4 = a2 & 0xFFFFFFFFFFFFFFF0uLL;
    v5 = (_QWORD *)v4;
    if ( !*(_QWORD *)(v4 + 8) )
    {
      do
      {
        v6 = v5;
        v5 = (_QWORD *)*v5;
        v5[2] = v6;
      }
      while ( !v5[1] );
    }
    *(_QWORD *)(v4 + 8) = v5[1];
    v7 = result;
    result = _InterlockedCompareExchange64(a1, v4, result);
    a2 = result;
    if ( v7 == result )
      break;
    if ( (result & 7) != 0 )
      return sub_180071630(a1, result, 0LL);
  }
  return result;
}
