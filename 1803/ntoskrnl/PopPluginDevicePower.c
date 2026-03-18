/*
 * XREFs of PopPluginDevicePower @ 0x140078CD8
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x140077A30 (PopFxCompleteDevicePowerRequired.c)
 *     PopFxProcessWork @ 0x140077B28 (PopFxProcessWork.c)
 * Callees:
 *     PopPepProcessEvent @ 0x140078F58 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x140166FE0 (PopPepUpdateConstraints.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginDevicePower(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  int v5; // edi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  v4 = a3;
  if ( a2 )
  {
    v5 = 0;
    if ( *(int *)(v3 + 132) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 132), 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a3) = 1;
      PopPepUpdateConstraints(v3, 4LL, a3);
    }
  }
  else
  {
    v5 = 4;
  }
  result = PopPepProcessEvent(v3, 0, v5, 6);
  if ( (_BYTE)result )
  {
    if ( !v4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
