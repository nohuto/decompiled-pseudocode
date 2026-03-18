/*
 * XREFs of ?ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ @ 0x1C0095FC8
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C0091E24 (UserDeactivateMITInputProcessing.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C00960A0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 * Callees:
 *     <none>
 */

void __fastcall InputExtensibilityCallout::ReleaseMITPnpUserModeCallbackComletionWaiters(
        InputExtensibilityCallout *this)
{
  LONG v1; // r8d

  v1 = *((_DWORD *)this + 3);
  if ( v1 )
  {
    KeReleaseSemaphore(*((PRKSEMAPHORE *)this + 2), 0, v1, 0);
    *((_DWORD *)this + 3) = 0;
  }
}
