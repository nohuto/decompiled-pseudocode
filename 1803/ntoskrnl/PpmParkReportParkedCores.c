/*
 * XREFs of PpmParkReportParkedCores @ 0x1400369E0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeAndAffinityEx @ 0x140035310 (KeAndAffinityEx.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x1400A4080 (KeCountSetBitsAffinityEx.c)
 *     PpmPerfQueueAction @ 0x14016BED4 (PpmPerfQueueAction.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char PpmParkReportParkedCores()
{
  __int64 Prcb; // rax
  unsigned int v2; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int16 *v3[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v4; // [rsp+38h] [rbp-D0h]
  _BYTE v5[8]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 *v6; // [rsp+48h] [rbp-C0h]

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
  v3[0] = (unsigned __int16 *)v5;
  v4 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v2, v3) )
  {
    Prcb = KeGetPrcb(v2);
    PpmPerfQueueAction(Prcb, 3LL);
  }
  return 0;
}
