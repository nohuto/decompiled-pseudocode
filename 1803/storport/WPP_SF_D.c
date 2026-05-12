/*
 * XREFs of WPP_SF_D @ 0x1C002C028
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000E75C (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidStallDeviceQueue @ 0x1C0010300 (RaidStallDeviceQueue.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C00108F8 (RaidLunQueueWaitForQuiescence.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0010FDC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0012FEC (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013810 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidAdapterHack @ 0x1C0026278 (RaidAdapterHack.c)
 *     RaWmiDispatchIrp @ 0x1C0060794 (RaWmiDispatchIrp.c)
 *     StorpRegisterShim @ 0x1C00677F4 (StorpRegisterShim.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_D(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
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
