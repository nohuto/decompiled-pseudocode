/*
 * XREFs of WPP_SF_D @ 0x1C00307A4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B3F0 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000E778 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidLunQueueWaitForQuiescence @ 0x1C000F1F8 (RaidLunQueueWaitForQuiescence.c)
 *     RaidStallDeviceQueue @ 0x1C000F934 (RaidStallDeviceQueue.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0014154 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C001489C (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterHack @ 0x1C0019CA0 (RaidAdapterHack.c)
 *     StorpRegisterShim @ 0x1C0060B48 (StorpRegisterShim.c)
 *     RaWmiDispatchIrp @ 0x1C0061824 (RaWmiDispatchIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_D(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int *, __int64, _QWORD))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           0LL);
}
