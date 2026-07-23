/*
 * XREFs of EtwpTraceAdminlessAccessFailure @ 0x14029F68C
 * Callers:
 *     SepLogAdminlessAccessFailure @ 0x14029FCE0 (SepLogAdminlessAccessFailure.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     RtlGetSystemTimePrecise @ 0x140132A80 (RtlGetSystemTimePrecise.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceAdminlessAccessFailure(int a1)
{
  LARGE_INTEGER SystemTimePrecise; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]
  int v6; // [rsp+80h] [rbp+8h] BYREF

  v6 = a1;
  if ( EtwAdminlessProvRegHandle )
  {
    UserData.Reserved = 0;
    v5 = 0;
    SystemTimePrecise = RtlGetSystemTimePrecise();
    UserData.Ptr = (ULONGLONG)&SystemTimePrecise;
    v3 = &v6;
    UserData.Size = 8;
    v4 = 4;
    EtwWriteEx(EtwAdminlessProvRegHandle, &LpacAccessFailureLog, 0LL, 0, 0LL, 0LL, 2u, &UserData);
  }
}
