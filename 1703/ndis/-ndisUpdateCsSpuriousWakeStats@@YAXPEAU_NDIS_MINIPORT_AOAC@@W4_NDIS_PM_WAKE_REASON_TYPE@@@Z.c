/*
 * XREFs of ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C00729D0
 * Callers:
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0071040 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisUpdateCsSpuriousWakeStats(struct _NDIS_MINIPORT_AOAC *a1, unsigned int a2)
{
  if ( a2 <= 0x1002 )
  {
    switch ( a2 )
    {
      case 0x1002u:
        ++a1->CsSpuriousWakeStats.WakeReasonWlanGTKHandshakeError;
        return;
      case 0u:
        ++a1->CsSpuriousWakeStats.WakeReasonUnspec;
        return;
      case 1u:
        ++a1->CsSpuriousWakeStats.WakeReasonPacket;
        return;
      case 2u:
        ++a1->CsSpuriousWakeStats.WakeReasonMediaDisconnect;
        return;
      case 3u:
        ++a1->CsSpuriousWakeStats.WakeReasonMediaConnect;
        return;
      case 0x1000u:
        ++a1->CsSpuriousWakeStats.WakeReasonWlanNLODiscovery;
        return;
      case 0x1001u:
        ++a1->CsSpuriousWakeStats.WakeReasonWlanApAssociationLost;
        return;
    }
    goto LABEL_22;
  }
  switch ( a2 )
  {
    case 0x1003u:
      ++a1->CsSpuriousWakeStats.WakeReasonWlan4WayHandshakeRequest;
      break;
    case 0x2000u:
      ++a1->CsSpuriousWakeStats.WakeReasonWwanRegisterState;
      break;
    case 0x2001u:
      ++a1->CsSpuriousWakeStats.WakeReasonWwanSMSReceive;
      break;
    case 0x2002u:
      ++a1->CsSpuriousWakeStats.WakeReasonWwanUSSDReceive;
      break;
    case 0xFFFEu:
      ++a1->CsSpuriousWakeStatsEx.WakeReasonNoIndication;
      break;
    case 0xFFFFu:
      ++a1->CsSpuriousWakeStatsEx.WakeReasonBadIndication;
      break;
    default:
LABEL_22:
      ++a1->CsSpuriousWakeStatsEx.WakeReasonUnknown;
      a1->CsSpuriousWakeStatsEx.LastUnknownWakeReason = a2;
      return;
  }
}
