/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@UISpatialAudioResourceManager@@U?$InterfaceList@UIAudioAppVolumePolicyChange@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180058810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISpatialAudioResourceManager,Microsoft::WRL::Details::InterfaceList<IAudioAppVolumePolicyChange,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(
        __int64 a1)
{
  return CMonitor::CMonitorNotification::AddRef((CMonitor::CMonitorNotification *)(a1 - 8));
}
