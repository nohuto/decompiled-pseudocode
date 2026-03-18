/*
 * XREFs of PopPepRequestWork @ 0x14006A78C
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x140069F14 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x14006A588 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x14013D57C (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x1401459A0 (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x1401650B4 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x140167A04 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x14022E2E8 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x14022E3C4 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x14022E770 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopFxRequestWorker @ 0x1400687D0 (PopFxRequestWorker.c)
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
