/*
 * XREFs of sub_1407BE3D4 @ 0x1407BE3D4
 * Callers:
 *     ExpTimeRefreshWork @ 0x1404777B0 (ExpTimeRefreshWork.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwUnregister @ 0x140600D40 (EtwUnregister.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 */

int sub_1407BE3D4()
{
  int result; // eax
  ULONGLONG RegHandle; // [rsp+40h] [rbp+8h] BYREF

  result = EtwRegister(&MS_Windows_LicensingStartServiceTrigger_Provider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    EtwWrite(RegHandle, &LicensingStartServiceTrigger, 0LL, 0, 0LL);
    return EtwUnregister(RegHandle);
  }
  return result;
}
