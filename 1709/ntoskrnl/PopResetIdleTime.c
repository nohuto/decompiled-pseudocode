/*
 * XREFs of PopResetIdleTime @ 0x14012EC3C
 * Callers:
 *     PopSetSystemState @ 0x14015B574 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x14015B5B8 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x14015D5BC (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x1404E8080 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x1405B9968 (PopInitSIdle.c)
 * Callees:
 *     PopTraceSystemIdleTimeReset @ 0x14012EC88 (PopTraceSystemIdleTimeReset.c)
 */

__int64 __fastcall PopResetIdleTime(int a1)
{
  KeGetCurrentIrql();
  if ( !PopPlatformAoAc || (unsigned int)(a1 - 3) > 1 )
  {
    dword_140365708 = 0;
    byte_140365750 = 0;
  }
  if ( !PopPlatformAoAc )
    PopIsAboutToSleep = 0;
  dword_140365740 = 0;
  return PopTraceSystemIdleTimeReset();
}
