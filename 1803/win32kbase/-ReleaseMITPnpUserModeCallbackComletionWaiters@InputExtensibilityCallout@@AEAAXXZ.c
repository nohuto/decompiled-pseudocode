/*
 * XREFs of ?ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ @ 0x1C0120F78
 * Callers:
 *     ?UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C0121034 (-UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0130F14 (UserDeactivateMITInputProcessing.c)
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
