/*
 * XREFs of WPP_SF_ @ 0x1C0001EF4
 * Callers:
 *     CiSchedulerDeepSleep @ 0x1C0002AF8 (CiSchedulerDeepSleep.c)
 *     CiSchedulerThreadFunction @ 0x1C00035A0 (CiSchedulerThreadFunction.c)
 *     CiSchedulerWait @ 0x1C00038B4 (CiSchedulerWait.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C0009770 (CiDispatchCreateMmThreadClient.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C0009A40 (CiDispatchCreateTaskIndexClient.c)
 *     CiDriverUnload @ 0x1C0009E70 (CiDriverUnload.c)
 *     CiTaskIndexCreate @ 0x1C000A594 (CiTaskIndexCreate.c)
 *     CiThreadCreate @ 0x1C000A9F4 (CiThreadCreate.c)
 *     CiConfigInitialize @ 0x1C000C620 (CiConfigInitialize.c)
 *     CiSchedulerInitialize @ 0x1C000D19C (CiSchedulerInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00012D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
