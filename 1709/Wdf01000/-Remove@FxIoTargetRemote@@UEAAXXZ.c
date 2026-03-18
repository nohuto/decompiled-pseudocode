/*
 * XREFs of ?Remove@FxIoTargetRemote@@UEAAXXZ @ 0x1C0013930
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0013B2C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 */

void __fastcall FxIoTargetRemote::Remove(FxIoTargetRemote *this)
{
  FxIoTargetRemote::Close(this, FxIoTargetRemoteCloseReasonDelete);
}
