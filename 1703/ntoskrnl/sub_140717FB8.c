/*
 * XREFs of sub_140717FB8 @ 0x140717FB8
 * Callers:
 *     ExpTimeRefreshWork @ 0x14041A8E0 (ExpTimeRefreshWork.c)
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 */

int sub_140717FB8()
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
