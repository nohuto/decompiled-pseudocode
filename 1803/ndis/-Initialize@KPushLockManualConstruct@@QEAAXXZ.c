/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00AC490
 * Callers:
 *     ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C011C078 (-ndisInitializeWatchdogSubsystem@@YAXXZ.c)
 *     NetPacketPoolInitialize @ 0x1C011C1B0 (NetPacketPoolInitialize.c)
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C011E508 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}
