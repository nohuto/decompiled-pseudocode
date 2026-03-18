/*
 * XREFs of sub_140757694 @ 0x140757694
 * Callers:
 *     ExpTimeRefreshWork @ 0x140428DB0 (ExpTimeRefreshWork.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 *     EtwUnregister @ 0x1405726E0 (EtwUnregister.c)
 */

int sub_140757694()
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
