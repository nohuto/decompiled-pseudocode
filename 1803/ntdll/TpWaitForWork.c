/*
 * XREFs of TpWaitForWork @ 0x180057E60
 * Callers:
 *     sub_180056DF4 @ 0x180056DF4 (sub_180056DF4.c)
 * Callees:
 *     sub_18002C5FC @ 0x18002C5FC (sub_18002C5FC.c)
 *     sub_180058A10 @ 0x180058A10 (sub_180058A10.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)sub_180058A10(Work, 0LL, 0LL) )
    sub_18002C5FC(Work, CancelPendingCallbacks);
}
