/*
 * XREFs of ObReferenceObjectSafe @ 0x14000CFD0
 * Callers:
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x140430580 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpQueryRemoteView @ 0x140470DC0 (AlpcpQueryRemoteView.c)
 *     AlpcpFlushMessagesPort @ 0x140473BC0 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14047400C (AlpcpDisconnectPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14047478C (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404748C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14047C970 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x14047ECE0 (AlpcpReferenceConnectedPort.c)
 *     AlpcpDispatchNewMessage @ 0x140524DE0 (AlpcpDispatchNewMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     WmipProcessEvent @ 0x140580EBC (WmipProcessEvent.c)
 *     CmUnRegisterCallback @ 0x140660520 (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x1406ADA00 (KiSwapToUmsThread.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x1406B1DCC (AlpcpReferenceMessageByWaitingThread.c)
 *     AlpcpPortQueryServerInfo @ 0x1406B2164 (AlpcpPortQueryServerInfo.c)
 *     ObpCreateTypeArray @ 0x1406C1DAC (ObpCreateTypeArray.c)
 *     PopEtGetNextEnergyTracker @ 0x1406D2724 (PopEtGetNextEnergyTracker.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406E45F4 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1406E496C (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x140763538 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
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
