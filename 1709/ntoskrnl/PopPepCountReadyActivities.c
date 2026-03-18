/*
 * XREFs of PopPepCountReadyActivities @ 0x14001B258
 * Callers:
 *     PopPepIdleTimeoutRoutine @ 0x14000C130 (PopPepIdleTimeoutRoutine.c)
 *     PopPepProcessEvent @ 0x14001B108 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x1401235A0 (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x14014749C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14015C184 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x140242498 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x140242574 (PopPepComponentSetWakeHint.c)
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
