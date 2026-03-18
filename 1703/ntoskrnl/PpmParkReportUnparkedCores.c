/*
 * XREFs of PpmParkReportUnparkedCores @ 0x1400457F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSubtractAffinityEx @ 0x140044C00 (KeSubtractAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x140120AD0 (KeCountSetBitsAffinityEx.c)
 *     PpmPerfQueueAction @ 0x140147208 (PpmPerfQueueAction.c)
 */

char PpmParkReportUnparkedCores()
{
  __int64 Prcb; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF

  if ( !PpmIsParkingEnabled
    || !(unsigned int)KeSubtractAffinityEx(
                        (unsigned __int16 *)&PpmPerfChangedCoreParkingMask,
                        (unsigned __int16 *)&PpmPerfNewCoreParkingMask,
                        &PpmPerfNewUnparkedMask) )
  {
    return 1;
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&PpmPerfNewUnparkedMask);
  v2[1] = qword_1403408D8;
  v3 = 0;
  v2[0] = &PpmPerfNewUnparkedMask;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v4, v2) )
  {
    Prcb = KeGetPrcb(v4);
    PpmPerfQueueAction(Prcb, 1LL);
  }
  return 0;
}
