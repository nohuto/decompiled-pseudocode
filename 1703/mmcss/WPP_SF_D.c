/*
 * XREFs of WPP_SF_d @ 0x1C00048B4
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0002030 (CiSchedulerThreadFunction.c)
 *     CiTaskIndexCreate @ 0x1C000AD40 (CiTaskIndexCreate.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000B0C0 (CiCreateTaskIndexClientFromThread.c)
 *     CiSystemThrottleNdis @ 0x1C000B760 (CiSystemThrottleNdis.c)
 *     CiSystemOpenNdisDevice @ 0x1C000B850 (CiSystemOpenNdisDevice.c)
 *     CsInitialize @ 0x1C000D050 (CsInitialize.c)
 *     CiConfigInitialize @ 0x1C000D300 (CiConfigInitialize.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D670 (CiConfigInitializeFromRegistry.c)
 *     CiTaskDump @ 0x1C000D8D0 (CiTaskDump.c)
 *     CiTaskAllocate @ 0x1C000D950 (CiTaskAllocate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_d(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
