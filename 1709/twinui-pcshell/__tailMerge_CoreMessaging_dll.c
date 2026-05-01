/*
 * XREFs of __tailMerge_CoreMessaging_dll @ 0x1801E3D8D
 * Callers:
 *     __imp_load_MsgRelease @ 0x1801E3D81 (__imp_load_MsgRelease.c)
 *     __imp_load_MsgStringCreateStack @ 0x1801E3E06 (__imp_load_MsgStringCreateStack.c)
 *     __imp_load_CoreUICreate @ 0x1801E3E12 (__imp_load_CoreUICreate.c)
 *     __imp_load_MsgStringCreateShared @ 0x1801E3E4E (__imp_load_MsgStringCreateShared.c)
 *     __imp_load_CoreUICallCreateEndpointHost @ 0x1801E58E6 (__imp_load_CoreUICallCreateEndpointHost.c)
 *     __imp_load_CoreUICallSend @ 0x1801E58F2 (__imp_load_CoreUICallSend.c)
 *     __imp_load_CoreUICallReceive @ 0x1801E58FE (__imp_load_CoreUICallReceive.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801DFA40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_CoreMessaging_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_CoreMessaging_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
