/*
 * XREFs of sub_140718264 @ 0x140718264
 * Callers:
 *     ExpTimeRefreshWork @ 0x14041A8E0 (ExpTimeRefreshWork.c)
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 */

int sub_140718264()
{
  int result; // eax
  int v1; // [rsp+30h] [rbp-29h] BYREF
  int v2; // [rsp+38h] [rbp-21h] BYREF
  int v3; // [rsp+40h] [rbp-19h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[5]; // [rsp+50h] [rbp-9h] BYREF

  v2 = 7190;
  memset(UserData, 0, 0x40uLL);
  v1 = 6;
  v3 = 1;
  result = EtwRegister(&LicensingSqmProvider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    UserData[0].Ptr = (ULONGLONG)&v1;
    *(_QWORD *)&UserData[1].Size = 16LL;
    *(_QWORD *)&UserData[0].Size = 4LL;
    UserData[1].Ptr = (ULONGLONG)qword_14074AB98;
    *(_QWORD *)&UserData[2].Size = 4LL;
    UserData[2].Ptr = (ULONGLONG)&v2;
    UserData[3].Ptr = (ULONGLONG)&v3;
    *(_QWORD *)&UserData[3].Size = 4LL;
    EtwWrite(RegHandle, &LICENSING_SQM_INCREMENT_DWORD, 0LL, 4u, UserData);
    return EtwUnregister(RegHandle);
  }
  return result;
}
