/*
 * XREFs of __tailMerge_coremessaging_dll @ 0x18009A0A1
 * Callers:
 *     __imp_load_MsgRelease @ 0x18009A095 (__imp_load_MsgRelease.c)
 *     __imp_load_MsgStringCreateShared @ 0x18009A11A (__imp_load_MsgStringCreateShared.c)
 *     __imp_load_MsgStringCreateStack @ 0x18009A126 (__imp_load_MsgStringCreateStack.c)
 *     __imp_load_CoreUICreate @ 0x18009A132 (__imp_load_CoreUICreate.c)
 *     __imp_load_CoreUICallCreateEndpointHost @ 0x18009BEE6 (__imp_load_CoreUICallCreateEndpointHost.c)
 *     __imp_load_CoreUICallSend @ 0x18009BEF2 (__imp_load_CoreUICallSend.c)
 *     __imp_load_CoreUICallReceive @ 0x18009BEFE (__imp_load_CoreUICallReceive.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180095E90 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_coremessaging_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_CoreMessaging_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
