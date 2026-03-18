/*
 * XREFs of HvlpGetRegister64 @ 0x14022DB9C
 * Callers:
 *     HvlGetReferenceTime @ 0x1401579C8 (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x1401579F0 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlEnlightenProcessor @ 0x140171EBC (HvlEnlightenProcessor.c)
 *     HvlLogGuestCrashInformation @ 0x140226B58 (HvlLogGuestCrashInformation.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x14022E444 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x140717B9C (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x140286F30 (RtlRaiseException.c)
 */

void __fastcall HvlpGetRegister64(int a1, _QWORD *a2)
{
  unsigned int v2; // ecx

  if ( a1 > 589827 )
  {
    switch ( a1 )
    {
      case 589828:
        v2 = 1073741856;
        goto LABEL_22;
      case 589831:
        v2 = 1073741828;
        goto LABEL_22;
      case 589843:
        v2 = 1073741939;
        goto LABEL_22;
    }
    if ( (unsigned int)(a1 - 655360) <= 0xF )
    {
      v2 = a1 + 1073086608;
      goto LABEL_22;
    }
    goto LABEL_18;
  }
  if ( a1 == 589827 )
  {
    v2 = 1073741826;
    goto LABEL_22;
  }
  if ( a1 < 528 )
    goto LABEL_18;
  if ( a1 <= 532 )
  {
    v2 = a1 + 1073741552;
    goto LABEL_22;
  }
  if ( a1 == 533 )
  {
    v2 = 1073742085;
    goto LABEL_22;
  }
  if ( a1 == 624 )
  {
    v2 = 1073742102;
    goto LABEL_22;
  }
  if ( a1 != 589826 )
  {
LABEL_18:
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  v2 = 0x40000000;
LABEL_22:
  *a2 = __readmsr(v2);
}
