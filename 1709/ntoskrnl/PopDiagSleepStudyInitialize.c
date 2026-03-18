/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x1405AD454
 * Callers:
 *     PopDiagInitialize @ 0x140827B48 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
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
