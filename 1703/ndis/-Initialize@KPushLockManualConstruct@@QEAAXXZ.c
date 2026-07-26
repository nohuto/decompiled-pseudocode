/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00A8CE8
 * Callers:
 *     ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C0111008 (-ndisInitializeWatchdogSubsystem@@YAXXZ.c)
 *     ?ndisSetupDeviceInitialize@@YAXXZ @ 0x1C0111038 (-ndisSetupDeviceInitialize@@YAXXZ.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C01128C4 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     NetPacketPoolInitialize @ 0x1C0112980 (NetPacketPoolInitialize.c)
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}
