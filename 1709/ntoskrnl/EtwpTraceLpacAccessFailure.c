/*
 * XREFs of EtwpTraceLpacAccessFailure @ 0x14025DDB4
 * Callers:
 *     SepLogLpacAccessFailure @ 0x14025E34C (SepLogLpacAccessFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     RtlGetSystemTimePrecise @ 0x140155590 (RtlGetSystemTimePrecise.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceLpacAccessFailure(int a1)
{
  LARGE_INTEGER SystemTimePrecise; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]
  int v6; // [rsp+80h] [rbp+8h] BYREF

  v6 = a1;
  if ( EtwLpacProvRegHandle )
  {
    UserData.Reserved = 0;
    v5 = 0;
    SystemTimePrecise = RtlGetSystemTimePrecise();
    UserData.Ptr = (ULONGLONG)&SystemTimePrecise;
    v3 = &v6;
    UserData.Size = 8;
    v4 = 4;
    EtwWriteEx(EtwLpacProvRegHandle, &LpacAccessFailureLog, 0LL, 0, 0LL, 0LL, 2u, &UserData);
  }
}
