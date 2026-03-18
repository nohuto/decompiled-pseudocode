/*
 * XREFs of HvlpGetRegister64 @ 0x1401F0A40
 * Callers:
 *     HvlEnlightenProcessor @ 0x140139EB4 (HvlEnlightenProcessor.c)
 *     HvlGetReferenceTime @ 0x14014B144 (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x14014B170 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlLogGuestCrashInformation @ 0x1401E9994 (HvlLogGuestCrashInformation.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1401EF3F8 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x1406B3034 (HvlDeleteProcessor.c)
 * Callees:
 *     RtlRaiseException @ 0x140251460 (RtlRaiseException.c)
 */

void __fastcall HvlpGetRegister64(int a1, _QWORD *a2)
{
  unsigned int v2; // ecx

  if ( a1 > 589828 )
  {
    if ( a1 == 589831 )
    {
      v2 = 1073741828;
      goto LABEL_20;
    }
    if ( a1 == 589843 )
    {
      v2 = 1073741939;
      goto LABEL_20;
    }
    if ( (unsigned int)(a1 - 655360) <= 0xF )
    {
      v2 = a1 + 1073086608;
      goto LABEL_20;
    }
    goto LABEL_17;
  }
  if ( a1 == 589828 )
  {
    v2 = 1073741856;
    goto LABEL_20;
  }
  if ( a1 < 528 )
    goto LABEL_17;
  if ( a1 <= 532 )
  {
    v2 = a1 + 1073741552;
    goto LABEL_20;
  }
  if ( a1 == 533 )
  {
    v2 = 1073742085;
    goto LABEL_20;
  }
  if ( a1 == 589826 )
  {
    v2 = 0x40000000;
    goto LABEL_20;
  }
  if ( a1 != 589827 )
  {
LABEL_17:
    RtlRaiseException(&ExceptionRecord);
    return;
  }
  v2 = 1073741826;
LABEL_20:
  *a2 = __readmsr(v2);
}
