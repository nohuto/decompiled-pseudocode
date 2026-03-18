/*
 * XREFs of ?UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C0121034
 * Callers:
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01204D0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ @ 0x1C0120F78 (-ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ.c)
 *     ?ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z @ 0x1C0120FAC (-ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall InputExtensibilityCallout::UserModeCalloutCompleted(
        InputExtensibilityCallout *this,
        _QWORD *Object,
        char a3)
{
  __int64 v3; // rbx

  v3 = Object[52];
  if ( !*(_BYTE *)(v3 + 75) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, Object);
  if ( *((_QWORD **)gptiCurrent + 165) != Object )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, Object);
  *((_QWORD *)gptiCurrent + 165) = 0LL;
  if ( a3 )
    RIMLockExclusive(v3 + 96);
  if ( InputExtensibilityCallout::ShouldUpdateInputBufferLockState(this, (const struct RawInputManagerObject *)v3) )
    RIMLockExclusive(v3 + 552);
  *(_BYTE *)(v3 + 75) = 0;
  ObfDereferenceObject(Object);
  *((_BYTE *)this + 8) = 0;
  InputExtensibilityCallout::ReleaseMITPnpUserModeCallbackComletionWaiters(this);
}
