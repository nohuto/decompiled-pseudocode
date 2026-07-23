/*
 * XREFs of TpWaitForWork @ 0x1800110D0
 * Callers:
 *     sub_18001A9B4 @ 0x18001A9B4 (sub_18001A9B4.c)
 * Callees:
 *     sub_18001434C @ 0x18001434C (sub_18001434C.c)
 *     sub_180014918 @ 0x180014918 (sub_180014918.c)
 */

void __cdecl TpWaitForWork(PTP_WORK Work, LOGICAL CancelPendingCallbacks)
{
  if ( (unsigned int)sub_180014918(Work, 0LL, 0LL) )
    sub_18001434C(Work, CancelPendingCallbacks);
}
