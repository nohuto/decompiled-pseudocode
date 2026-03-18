/*
 * XREFs of PopPepRequestWork @ 0x14007915C
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400788E8 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x140078F58 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x1401550C0 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x140166FE0 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x140279154 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x140279230 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x140279314 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x140279408 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x140279820 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopFxRequestWorker @ 0x140079D50 (PopFxRequestWorker.c)
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
