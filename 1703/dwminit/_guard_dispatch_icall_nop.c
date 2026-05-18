/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1800072F0
 * Callers:
 *     _TlgEnableCallback @ 0x180001000 (_TlgEnableCallback.c)
 *     ?FallBackToBDD@@YA_NXZ @ 0x180002550 (-FallBackToBDD@@YA_NXZ.c)
 *     ??1?$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAA@XZ @ 0x180003598 (--1-$CAggregateTelemetry@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A.c)
 *     ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x180003B3C (-EnsureStackCaptureRegisteredWithWER@@YAXXZ.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x1800045D0 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004658 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004790 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000491C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG0@Z @ 0x180004CF8 (-ConnectWithName@CPortClient@@QEAAJPEBG0@Z.c)
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x180004D60 (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x180004D7C (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmInitEventType@DwmInitAsimov@@@2@IIIII@Z @ 0x180005A4C (-ProcessEvent@-$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimo_ea_180005A4C.c)
 *     _onexit_0 @ 0x180006290 (_onexit_0.c)
 *     _CRT_INIT @ 0x180006BC4 (_CRT_INIT.c)
 *     __DllMainCRTStartup @ 0x180006E40 (__DllMainCRTStartup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
