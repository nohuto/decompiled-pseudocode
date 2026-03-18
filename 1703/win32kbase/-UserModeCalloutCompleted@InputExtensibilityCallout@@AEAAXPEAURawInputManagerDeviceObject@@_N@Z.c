/*
 * XREFs of ?UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C009A6C0
 * Callers:
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C009A820 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z @ 0x1C009A6A0 (-ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z.c)
 */

void __fastcall InputExtensibilityCallout::UserModeCalloutCompleted(
        InputExtensibilityCallout *this,
        _QWORD *Object,
        char a3)
{
  __int64 v4; // rbx

  v4 = Object[51];
  *((_QWORD *)gptiCurrent + 151) = 0LL;
  if ( a3 )
    RIMLockExclusive(v4 + 96);
  if ( (unsigned __int8)InputExtensibilityCallout::ShouldUpdateInputBufferLockState(
                          this,
                          (const struct RawInputManagerObject *)v4) )
    RIMLockExclusive(v4 + 696);
  *(_BYTE *)(v4 + 75) = 0;
  ObfDereferenceObject(Object);
  *((_BYTE *)this + 8) = 0;
  InputExtensibilityCallout::ReleaseMITPnpUserModeCallbackComletionWaiters(this);
}
