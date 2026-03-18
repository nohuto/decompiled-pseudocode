/*
 * XREFs of PpmEventTraceLPIState @ 0x140236770
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void PpmEventTraceLPIState()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+40h] [rbp-48h] BYREF
  int v2; // [rsp+44h] [rbp-44h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-40h] BYREF
  int *v4; // [rsp+58h] [rbp-30h]
  int v5; // [rsp+60h] [rbp-28h]
  int v6; // [rsp+64h] [rbp-24h]

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LPI_RUNDOWN) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      v1 = PpmParkLpiCap;
      v2 = PpmParkLpiEngaged;
      UserData.Ptr = (ULONGLONG)&v1;
      v4 = &v2;
      UserData.Size = 4;
      v5 = 4;
      EtwWriteEx(v0, &PPM_ETW_LPI_RUNDOWN, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
