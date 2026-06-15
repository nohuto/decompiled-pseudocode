/*
 * XREFs of ?AddRef@CMonitorNotification@CMonitor@@EEAAKXZ @ 0x18002F960
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UISpatialAudioResourceManager@@U?$InterfaceList@UIAudioAppVolumePolicyChange@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180058810 (-AddRef@-$RuntimeClass@U-$InterfaceList@UISpatialAudioResourceManager@@U-$InterfaceList@UIAudioA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitor::CMonitorNotification::AddRef(CMonitor::CMonitorNotification *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 5);
}
