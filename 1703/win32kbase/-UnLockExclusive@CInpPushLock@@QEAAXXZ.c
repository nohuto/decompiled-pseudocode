/*
 * XREFs of ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0053FC0
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00885AC (RawInputManagerObjectDelete.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C008FB70 (RIMRegisterForInputWithCallbacks.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0093F10 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0096010 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0100090 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01005F0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01008F0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C010F970 (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpPushLock::UnLockExclusive(CInpPushLock *this)
{
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
