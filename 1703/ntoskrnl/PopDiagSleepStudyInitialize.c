/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x1405B9544
 * Callers:
 *     PopDiagInitialize @ 0x140812630 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 */

NTSTATUS PopDiagSleepStudyInitialize()
{
  NTSTATUS result; // eax

  if ( PopDiagSleepStudyHandleRegistered )
    return -1073740008;
  result = EtwRegister(&SLEEPSTUDY_ETW_PROVIDER, 0LL, 0LL, &PopDiagSleepStudyHandle);
  if ( result >= 0 )
    PopDiagSleepStudyHandleRegistered = 1;
  return result;
}
