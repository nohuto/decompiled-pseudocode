/*
 * XREFs of ?AddRef@CMonitorNotification@CMonitor@@EEAAKXZ @ 0x180031D80
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioResourceManager@@UIAudioAppVolumePolicyChange@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180037360 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioReso.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitor::CMonitorNotification::AddRef(CMonitor::CMonitorNotification *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 5);
}
