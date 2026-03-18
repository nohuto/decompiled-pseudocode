/*
 * XREFs of HvlpSetRegister64 @ 0x14022DC60
 * Callers:
 *     HvlEnlightenProcessor @ 0x140171EBC (HvlEnlightenProcessor.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1402267F8 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlLogGuestCrashInformation @ 0x140226B58 (HvlLogGuestCrashInformation.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x14022E444 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x140717B9C (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x140286F30 (RtlRaiseException.c)
 */

void __fastcall HvlpSetRegister64(int a1, unsigned __int64 a2)
{
  unsigned int v2; // ecx

  if ( a1 >= 528 )
  {
    if ( a1 <= 532 )
    {
      v2 = a1 + 1073741552;
      goto LABEL_16;
    }
    switch ( a1 )
    {
      case 533:
        v2 = 1073742085;
        goto LABEL_16;
      case 624:
        v2 = 1073742102;
        goto LABEL_16;
      case 589826:
        v2 = 0x40000000;
        goto LABEL_16;
      case 589831:
        v2 = 1073741828;
        goto LABEL_16;
      case 589843:
        v2 = 1073741939;
        goto LABEL_16;
    }
    if ( (unsigned int)(a1 - 655360) <= 0xF )
    {
      v2 = a1 + 1073086608;
LABEL_16:
      __writemsr(v2, a2);
      return;
    }
  }
  RtlRaiseException(&ExceptionRecord);
}
