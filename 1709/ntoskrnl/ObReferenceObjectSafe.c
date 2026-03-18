/*
 * XREFs of ObReferenceObjectSafe @ 0x140108160
 * Callers:
 *     PopEtGetNextEnergyTracker @ 0x14045790C (PopEtGetNextEnergyTracker.c)
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x14046370C (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpReceiveLegacyMessage @ 0x140464260 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpFlushMessagesPort @ 0x1404647A4 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x140464BE0 (AlpcpDisconnectPort.c)
 *     AlpcpDispatchConnectionRequest @ 0x140467354 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpQueryRemoteView @ 0x140468A5C (AlpcpQueryRemoteView.c)
 *     AlpcpReferenceConnectedPort @ 0x14049D6B0 (AlpcpReferenceConnectedPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404A0D90 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpPortQueryServerInfo @ 0x1405611F4 (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140561398 (AlpcpReferenceMessageByWaitingThread.c)
 *     WmipProcessEvent @ 0x140567EA4 (WmipProcessEvent.c)
 *     CmUnRegisterCallback @ 0x140689490 (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x1406D8E40 (KiSwapToUmsThread.c)
 *     ObpCreateTypeArray @ 0x1406F0828 (ObpCreateTypeArray.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14071C9D4 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14071CD5C (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x1407A523C (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 */

char __fastcall ObReferenceObjectSafe(__int64 a1)
{
  signed __int64 *v1; // rcx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (signed __int64 *)(a1 - 48);
  _m_prefetchw(v1);
  v2 = *v1;
  if ( !*v1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
      break;
    if ( !v2 )
      return 0;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v1);
  return 1;
}
