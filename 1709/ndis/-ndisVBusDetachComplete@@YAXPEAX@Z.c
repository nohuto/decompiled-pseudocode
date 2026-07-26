/*
 * XREFs of ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x1C00F4560
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00B5080 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 */

void __fastcall ndisVBusDetachComplete(void *a1)
{
  LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) = 0;
  ndisBindEnumerateProtocolDrivers(
    (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_727c6594aeeec297d735c04587a6780c_::_lambda_invoker_cdecl_,
    0LL);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&WPP_MAIN_CB.Reserved);
  NmrClientDetachProviderComplete(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink);
  *(_QWORD *)&WPP_MAIN_CB.SectorSize = 0LL;
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead = 0LL;
}
