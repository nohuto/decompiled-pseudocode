/*
 * XREFs of WPP_SF_d @ 0x1C00022D8
 * Callers:
 *     CiSchedulerWait @ 0x1C0003944 (CiSchedulerWait.c)
 *     CiNdisOpenDevice @ 0x1C000903C (CiNdisOpenDevice.c)
 *     CiNdisThrottle @ 0x1C00090E0 (CiNdisThrottle.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C00093B4 (CiCreateTaskIndexClientFromThread.c)
 *     CiTaskIndexCreate @ 0x1C000A598 (CiTaskIndexCreate.c)
 *     CiTaskAllocate @ 0x1C000C344 (CiTaskAllocate.c)
 *     CiTaskDump @ 0x1C000C444 (CiTaskDump.c)
 *     CiThreadInitialize @ 0x1C000C5C4 (CiThreadInitialize.c)
 *     CiConfigInitialize @ 0x1C000C620 (CiConfigInitialize.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000CA58 (CiConfigInitializeFromRegistry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001300 (_guard_dispatch_icall_nop.c)
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
