/*
 * XREFs of PopPepRequestWork @ 0x14001B30C
 * Callers:
 *     PopPepIdleTimeoutRoutine @ 0x14000C130 (PopPepIdleTimeoutRoutine.c)
 *     PopPepProcessEvent @ 0x14001B108 (PopPepProcessEvent.c)
 *     PopPepUpdateConstraints @ 0x1401235A0 (PopPepUpdateConstraints.c)
 *     PopPepTryPowerDownDevice @ 0x1401258AC (PopPepTryPowerDownDevice.c)
 *     PopPepComponentSetLatency @ 0x14014749C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14015C184 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x140242498 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x140242574 (PopPepComponentSetWakeHint.c)
 *     PopPepSurprisePowerOn @ 0x1402433C0 (PopPepSurprisePowerOn.c)
 * Callees:
 *     PopFxRequestWorker @ 0x1401276D0 (PopFxRequestWorker.c)
 */

__int64 __fastcall PopPepRequestWork(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a2 > a1 )
  {
    v2 = a2 - a1;
    if ( v2 )
    {
      v3 = v2;
      do
      {
        result = PopFxRequestWorker(0LL);
        --v3;
      }
      while ( v3 );
    }
  }
  return result;
}
