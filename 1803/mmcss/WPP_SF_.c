/*
 * XREFs of WPP_SF_ @ 0x1C0001EC4
 * Callers:
 *     CiSchedulerDeepSleep @ 0x1C0002AE8 (CiSchedulerDeepSleep.c)
 *     CiSchedulerThreadFunction @ 0x1C0003610 (CiSchedulerThreadFunction.c)
 *     CiSchedulerWait @ 0x1C0003944 (CiSchedulerWait.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C0009760 (CiDispatchCreateMmThreadClient.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C0009A30 (CiDispatchCreateTaskIndexClient.c)
 *     CiDriverUnload @ 0x1C0009E80 (CiDriverUnload.c)
 *     CiTaskIndexCreate @ 0x1C000A598 (CiTaskIndexCreate.c)
 *     CiThreadCreate @ 0x1C000AA4C (CiThreadCreate.c)
 *     CiConfigInitialize @ 0x1C000C620 (CiConfigInitialize.c)
 *     CiSchedulerInitialize @ 0x1C000D1A8 (CiSchedulerInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
