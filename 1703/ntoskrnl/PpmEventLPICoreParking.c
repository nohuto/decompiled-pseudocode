/*
 * XREFs of PpmEventLPICoreParking @ 0x140235964
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x140046CD0 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventLPICoreParking(__int64 a1, int a2)
{
  BOOLEAN result; // al
  REGHANDLE v3; // rbx
  int v4; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-40h] BYREF
  int *v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+64h] [rbp-24h]
  int v9; // [rsp+98h] [rbp+10h] BYREF

  v9 = a2;
  result = PpmParkLpiCap;
  v4 = PpmParkLpiCap;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LPI_CORE_PARK);
    if ( result )
    {
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 4;
      v6 = &v9;
      v7 = 4;
      return EtwWriteEx(v3, &PPM_ETW_LPI_CORE_PARK, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
