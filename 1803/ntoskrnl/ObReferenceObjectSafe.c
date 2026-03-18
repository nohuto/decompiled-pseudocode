/*
 * XREFs of ObReferenceObjectSafe @ 0x1400A9D20
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpDispatchNewMessage @ 0x1404CCD20 (AlpcpDispatchNewMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x1404CF2BC (AlpcpReferenceConnectedPort.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404D0660 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpFlushMessagesPort @ 0x1404DAC6C (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1404DB034 (AlpcpDisconnectPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404DB880 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404DDDF4 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x1404DF134 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpQueryRemoteView @ 0x1404DFC7C (AlpcpQueryRemoteView.c)
 *     WmipProcessEvent @ 0x1405FF418 (WmipProcessEvent.c)
 *     CmUnRegisterCallback @ 0x1406ED880 (CmUnRegisterCallback.c)
 *     KiSwapToUmsThread @ 0x140742F20 (KiSwapToUmsThread.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x1407488C8 (AlpcpReferenceMessageByWaitingThread.c)
 *     AlpcpPortQueryServerInfo @ 0x140748D94 (AlpcpPortQueryServerInfo.c)
 *     ObpCreateTypeArray @ 0x140759BF8 (ObpCreateTypeArray.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1407801FC (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14078057C (PspRundownUmsThreadForApcDelivery.c)
 *     IovpBuildDriverObjectList @ 0x14081220C (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
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
