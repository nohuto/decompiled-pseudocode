/*
 * XREFs of WPP_SF_ @ 0x1C000467C
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0002030 (CiSchedulerThreadFunction.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000A670 (CiDispatchCreateMmThreadClient.c)
 *     CiThreadCreate @ 0x1C000A7C0 (CiThreadCreate.c)
 *     CiTaskIndexCreate @ 0x1C000AD40 (CiTaskIndexCreate.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C000AFA0 (CiDispatchCreateTaskIndexClient.c)
 *     CiDriverUnload @ 0x1C000C0E0 (CiDriverUnload.c)
 *     CiSchedulerInitialize @ 0x1C000D200 (CiSchedulerInitialize.c)
 *     CiConfigInitialize @ 0x1C000D300 (CiConfigInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(a1, 43LL, a3, a2, 0LL);
}
