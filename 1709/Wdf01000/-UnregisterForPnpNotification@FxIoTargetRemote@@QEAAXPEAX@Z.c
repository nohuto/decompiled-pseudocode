/*
 * XREFs of ?UnregisterForPnpNotification@FxIoTargetRemote@@QEAAXPEAX@Z @ 0x1C0013658
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0013B2C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0013D88 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoTargetRemote::UnregisterForPnpNotification(FxIoTargetRemote *this, void *Handle)
{
  if ( Handle )
  {
    if ( FxLibraryGlobals.IoUnregisterPlugPlayNotificationEx )
      FxLibraryGlobals.IoUnregisterPlugPlayNotificationEx(Handle);
    else
      IoUnregisterPlugPlayNotification(Handle);
  }
}
