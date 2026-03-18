/*
 * XREFs of EditionInitiateMouseEventProcessing @ 0x1C00FD9E0
 * Callers:
 *     <none>
 * Callees:
 *     WakeDIT @ 0x1C00FDA3C (WakeDIT.c)
 *     WakeRIT @ 0x1C00FDA94 (WakeRIT.c)
 *     UserBeep @ 0x1C01A1E74 (UserBeep.c)
 */

__int64 __fastcall EditionInitiateMouseEventProcessing(int a1)
{
  __int64 result; // rax

  if ( _InterlockedCompareExchange(&glDitMouseHandling, 1, 1) )
  {
    EtwTraceWakeDIT(64LL);
    result = WakeDIT(64LL);
  }
  else
  {
    EtwTraceWakeRIT(4LL);
    result = WakeRIT(4LL);
  }
  if ( a1 )
    return UserBeep(440LL, 125LL);
  return result;
}
