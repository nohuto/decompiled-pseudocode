/*
 * XREFs of PnpGetLogString @ 0x14014FF60
 * Callers:
 *     PiDevCfgLogDeviceStarted @ 0x140591B34 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140591DE0 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall PnpGetLogString(__int64 a1)
{
  __int16 *result; // rax

  if ( !a1 )
    return &word_1407506C4;
  result = *(__int16 **)(a1 + 8);
  if ( !result )
    return &word_1407506C4;
  return result;
}
