/*
 * XREFs of ?ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ @ 0x1C0090950
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C008BCC0 (UserDeactivateMITInputProcessing.c)
 *     ?UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C009A6C0 (-UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z.c)
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
