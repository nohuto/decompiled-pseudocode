/*
 * XREFs of PopPepCountReadyActivities @ 0x1400790A8
 * Callers:
 *     PopPepProcessEvent @ 0x140078F58 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x140166FE0 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x140279154 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x140279230 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x140279314 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x140279408 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x140279820 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepCountReadyActivities(unsigned int *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _DWORD *v5; // rcx

  if ( !a3 )
    return 0LL;
  result = a1[30];
  if ( a3 == 2 )
  {
    if ( a2 )
      return (unsigned int)(*(_DWORD *)(a2 + 104) + result);
  }
  else if ( a3 == 3 )
  {
    v4 = a1[45];
    if ( (_DWORD)v4 )
    {
      v5 = a1 + 72;
      do
      {
        result = (unsigned int)(*v5 + result);
        v5 += 50;
        --v4;
      }
      while ( v4 );
    }
  }
  return result;
}
