/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00C8480
 * Callers:
 *     ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C011A078 (-ndisInitializeWatchdogSubsystem@@YAXXZ.c)
 *     ?ndisSetupDeviceInitialize@@YAXXZ @ 0x1C011A0A8 (-ndisSetupDeviceInitialize@@YAXXZ.c)
 *     DriverEntry @ 0x1C011A0D0 (DriverEntry.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C011B528 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     NetPacketPoolInitialize @ 0x1C011B5E0 (NetPacketPoolInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}
