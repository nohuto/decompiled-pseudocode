/*
 * XREFs of TpWaitForWork @ 0x18000ABD0
 * Callers:
 *     LdrpDetectDetour @ 0x180006720 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkWait @ 0x18000C5D0 (TppWorkWait.c)
 *     TppWorkpValidateWork @ 0x18000C9A8 (TppWorkpValidateWork.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)TppWorkpValidateWork(Work, 0LL, 0LL) )
    TppWorkWait(Work, CancelPendingCallbacks);
}
