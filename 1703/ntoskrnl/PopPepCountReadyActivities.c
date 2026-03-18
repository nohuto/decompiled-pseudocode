/*
 * XREFs of PopPepCountReadyActivities @ 0x14006A6D8
 * Callers:
 *     PopPepProcessEvent @ 0x14006A588 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x1401459A0 (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x1401650B4 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x140167A04 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x14022E2E8 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x14022E3C4 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x14022E770 (PopPepIdleTimeoutRoutine.c)
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
    v4 = a1[42];
    if ( (_DWORD)v4 )
    {
      v5 = a1 + 70;
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
