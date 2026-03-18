/*
 * XREFs of PpmParkReportUnparkedCores @ 0x14008F6E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSubtractAffinityEx @ 0x14005CAE0 (KeSubtractAffinityEx.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeCountSetBitsAffinityEx @ 0x1400D3180 (KeCountSetBitsAffinityEx.c)
 *     PpmPerfQueueAction @ 0x14014DC18 (PpmPerfQueueAction.c)
 */

char PpmParkReportUnparkedCores()
{
  __int64 Prcb; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  ULONG v4; // [rsp+50h] [rbp+8h] BYREF

  if ( !PpmIsParkingEnabled
    || !(unsigned int)KeSubtractAffinityEx(
                        (char *)&PpmPerfChangedCoreParkingMask,
                        (char *)&PpmPerfNewCoreParkingMask,
                        &PpmPerfNewUnparkedMask) )
  {
    return 1;
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&PpmPerfNewUnparkedMask);
  v2[1] = qword_140359028;
  v3 = 0;
  v2[0] = &PpmPerfNewUnparkedMask;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v4, v2) )
  {
    Prcb = KeGetPrcb(v4);
    PpmPerfQueueAction(Prcb, 1LL);
  }
  return 0;
}
