/*
 * XREFs of DwmAsyncNotifyDigitizerActiveContacts @ 0x1C024B93C
 * Callers:
 *     DwmAsyncNotifyDigitizerActiveContactsWrap @ 0x1C01A6B10 (DwmAsyncNotifyDigitizerActiveContactsWrap.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifyDigitizerActiveContacts(PVOID Object, int a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[14]; // [rsp+20h] [rbp-58h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset((char *)v8 + 2, 0, 0x32uLL);
    v8[0] = 3407884;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741911;
    v8[11] = a2;
    v8[12] = a3;
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
