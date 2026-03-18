/*
 * XREFs of ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0062B5C
 * Callers:
 *     ?DoPreDispatchProcessing@CHidInput@@EEAAJXZ @ 0x1C000EEF0 (-DoPreDispatchProcessing@CHidInput@@EEAAJXZ.c)
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C009F5F0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C00B55E0 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C00B56B0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0117E90 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01195AC (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ @ 0x1C012CC88 (-PalmRejectTimerProcStatic@DelayZonePalmRejection@@SAXXZ.c)
 *     AddEdgePalmRejectionZone @ 0x1C012D880 (AddEdgePalmRejectionZone.c)
 *     RemoveAllEdgePalmRejectionZonesForDevice @ 0x1C012D8E0 (RemoveAllEdgePalmRejectionZonesForDevice.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C012C9F8 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 */

struct DelayZonePalmRejection *DelayZonePalmRejection::GetInstance(void)
{
  struct DelayZonePalmRejection *result; // rax
  DelayZonePalmRejection *v1; // rcx

  if ( DelayZonePalmRejection::s_instance )
    return DelayZonePalmRejection::s_instance;
  result = (struct DelayZonePalmRejection *)Win32AllocPoolZInit(0xB0uLL, 0x7A647355u);
  DelayZonePalmRejection::s_instance = result;
  if ( result )
  {
    DelayZonePalmRejection::Initialize(v1);
    return DelayZonePalmRejection::s_instance;
  }
  return result;
}
