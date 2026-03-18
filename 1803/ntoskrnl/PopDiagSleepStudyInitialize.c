/*
 * XREFs of PopDiagSleepStudyInitialize @ 0x1406249EC
 * Callers:
 *     PopDiagInitialize @ 0x1408A5C04 (PopDiagInitialize.c)
 * Callees:
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
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
