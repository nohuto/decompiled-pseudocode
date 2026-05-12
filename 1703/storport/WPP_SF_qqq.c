/*
 * XREFs of WPP_SF_qqq @ 0x1C0030650
 * Callers:
 *     StorpRequestTimer @ 0x1C000C9F4 (StorpRequestTimer.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D4B4 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidPowerPassToMiniPort @ 0x1C000EB28 (RaidPowerPassToMiniPort.c)
 *     RaidPnPPassToMiniPort @ 0x1C001AFBC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DDE0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E28C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorpQueueWorkItem @ 0x1C0034BB8 (StorpQueueWorkItem.c)
 *     RaWmiPassToMiniPort @ 0x1C0061B64 (RaWmiPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qqq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           8LL,
           0LL);
}
