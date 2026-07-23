/*
 * XREFs of EtwpTraceLpacAccessFailure @ 0x140246678
 * Callers:
 *     SepLogLpacAccessFailure @ 0x140246C14 (SepLogLpacAccessFailure.c)
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     RtlGetSystemTimePrecise @ 0x140110620 (RtlGetSystemTimePrecise.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceLpacAccessFailure(int a1)
{
  LARGE_INTEGER SystemTimePrecise; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+48h] [rbp-30h]
  int v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+54h] [rbp-24h]
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
    EtwWrite(EtwLpacProvRegHandle, &LpacAccessFailureLog, 0LL, 2u, &UserData);
  }
}
