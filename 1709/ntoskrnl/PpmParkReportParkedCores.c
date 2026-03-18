/*
 * XREFs of PpmParkReportParkedCores @ 0x14008F710
 * Callers:
 *     <none>
 * Callees:
 *     KeAndAffinityEx @ 0x14008CC70 (KeAndAffinityEx.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeCountSetBitsAffinityEx @ 0x1400D3180 (KeCountSetBitsAffinityEx.c)
 *     PpmPerfQueueAction @ 0x14014DC18 (PpmPerfQueueAction.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char PpmParkReportParkedCores()
{
  __int64 Prcb; // rax
  ULONG v2; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v3[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v4; // [rsp+38h] [rbp-D0h]
  _BYTE v5[8]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+48h] [rbp-C0h]

  if ( !PpmIsParkingEnabled
    || !(unsigned int)KeAndAffinityEx(
                        (unsigned __int16 *)&PpmPerfChangedCoreParkingMask,
                        (unsigned __int16 *)&PpmPerfNewCoreParkingMask,
                        v5) )
  {
    return 1;
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(v5);
  v3[1] = v6;
  v3[0] = v5;
  v4 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v2, v3) )
  {
    Prcb = KeGetPrcb(v2);
    PpmPerfQueueAction(Prcb, 3LL);
  }
  return 0;
}
