/*
 * XREFs of sub_1407BE6B4 @ 0x1407BE6B4
 * Callers:
 *     ExpTimeRefreshWork @ 0x1404777B0 (ExpTimeRefreshWork.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwUnregister @ 0x140600D40 (EtwUnregister.c)
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 */

int sub_1407BE6B4()
{
  int result; // eax
  int v1; // [rsp+30h] [rbp-19h] BYREF
  int v2; // [rsp+38h] [rbp-11h] BYREF
  int v3; // [rsp+40h] [rbp-9h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+50h] [rbp+7h] BYREF

  v2 = 7190;
  memset(UserData, 0, sizeof(UserData));
  v1 = 6;
  v3 = 1;
  result = EtwRegister(&LicensingSqmProvider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    UserData[0].Ptr = (ULONGLONG)&v1;
    *(_QWORD *)&UserData[1].Size = 16LL;
    *(_QWORD *)&UserData[0].Size = 4LL;
    UserData[1].Ptr = (ULONGLONG)qword_1407F9990;
    *(_QWORD *)&UserData[2].Size = 4LL;
    UserData[2].Ptr = (ULONGLONG)&v2;
    UserData[3].Ptr = (ULONGLONG)&v3;
    *(_QWORD *)&UserData[3].Size = 4LL;
    EtwWrite(RegHandle, &LICENSING_SQM_INCREMENT_DWORD, 0LL, 4u, UserData);
    return EtwUnregister(RegHandle);
  }
  return result;
}
