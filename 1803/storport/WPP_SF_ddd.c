/*
 * XREFs of WPP_SF_ddd @ 0x1C002C0BC
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0003730 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResumeUnit @ 0x1C0003820 (RaidAdapterResumeUnit.c)
 *     StorPortPauseDevice @ 0x1C0003880 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0003C30 (StorPortResumeDevice.c)
 *     RaidPnPPassToMiniPort @ 0x1C0011C6C (RaidPnPPassToMiniPort.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0012FEC (RaidBusEnumeratorVisitUnit.c)
 *     RaidAdapterDeviceBusy @ 0x1C0025D00 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0025DC8 (RaidAdapterDeviceReady.c)
 *     StorPortCompleteRequest @ 0x1C0030010 (StorPortCompleteRequest.c)
 *     StorPortDeviceReady @ 0x1C0030440 (StorPortDeviceReady.c)
 *     StorpLogSystemEvent @ 0x1C00333E8 (StorpLogSystemEvent.c)
 *     RaidUnitRequestTimeout @ 0x1C003D4D0 (RaidUnitRequestTimeout.c)
 *     RaWmiPassToMiniPort @ 0x1C0060A04 (RaWmiPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_ddd(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL);
}
