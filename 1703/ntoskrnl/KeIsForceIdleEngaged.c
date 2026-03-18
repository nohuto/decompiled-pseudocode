/*
 * XREFs of KeIsForceIdleEngaged @ 0x140067DD8
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140067B60 (KePrepareClockTimerForIdle.c)
 *     KiResetForceIdle @ 0x140206078 (KiResetForceIdle.c)
 * Callees:
 *     <none>
 */

bool KeIsForceIdleEngaged()
{
  bool result; // al

  result = 0;
  if ( !KiForceIdleDisabled )
    return KiForceIdleState == 4;
  return result;
}
