/*
 * XREFs of ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0071484
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C0051340 (ndisWnfPdcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ndisNicAutoPowerSaverResetTelemetryData @ 0x1C006EBE4 (ndisNicAutoPowerSaverResetTelemetryData.c)
 *     ndisTraceNicAutoPowerSaver @ 0x1C00702EC (ndisTraceNicAutoPowerSaver.c)
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00712F4 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C0072A90 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     Template_cjjp @ 0x1C00731A0 (Template_cjjp.c)
 *     Template_cjqzr2jx @ 0x1C0073244 (Template_cjqzr2jx.c)
 *     Template_qxxq @ 0x1C007330C (Template_qxxq.c)
 *     Template_xqx @ 0x1C0073638 (Template_xqx.c)
 *     ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@EPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@4@Z @ 0x1C0076620 (-NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@EPEAU_NDIS.c)
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z @ 0x1C00E9F64 (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x1C00EA0C8 (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIO.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1@Z @ 0x1C00EA160 (-ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1.c)
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C00EA690 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z.c)
 */

void __fastcall ndisCsStateChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  unsigned __int8 v3; // r13
  unsigned __int8 v4; // r12
  unsigned int CsSurpriseWakes; // esi
  unsigned int CsSpuriousWakes; // r14d
  int v7; // r9d
  unsigned __int64 *p_CurrentRefStartTime; // rcx
  __int64 v9; // rdx
  _NDIS_NIC_ACTIVE_STATE ActiveState; // eax
  unsigned __int64 *v11; // rcx
  __int64 v12; // rdx
  int v13; // ecx
  _GUID InterfaceGuid; // xmm1
  bool v15; // zf
  __int128 v16; // xmm1
  unsigned int WakeReasonWwanUSSDReceive; // eax
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX CsSpuriousWakeStatsEx; // xmm0
  unsigned int i; // r14d
  unsigned __int64 TotalRefTime; // rcx
  wchar_t *v21; // r13
  int v22; // edx
  unsigned __int64 TotalCsResiliencyTime; // rax
  int v24; // [rsp+28h] [rbp-E0h]
  unsigned __int8 NewIrql; // [rsp+58h] [rbp-B0h]
  KIRQL NewIrql_1; // [rsp+59h] [rbp-AFh]
  int v27; // [rsp+5Ch] [rbp-ACh]
  unsigned int v28; // [rsp+64h] [rbp-A4h]
  struct _GUID v29; // [rsp+68h] [rbp-A0h] BYREF
  GUID v30; // [rsp+78h] [rbp-90h] BYREF
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX v31; // [rsp+88h] [rbp-80h] BYREF
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS v32; // [rsp+98h] [rbp-70h] BYREF
  _BYTE hProvider[96]; // [rsp+C8h] [rbp-40h] BYREF

  AoAc = a1->AoAc;
  v3 = ndisConnectedStandby;
  v4 = ndisLastCsScenarioInstanceId;
  NewIrql = ndisConnectedStandby;
  memset(hProvider, 0, sizeof(hProvider));
  CsSurpriseWakes = 0;
  *(_QWORD *)&v29.Data1 = 0LL;
  CsSpuriousWakes = 0;
  *(_QWORD *)v29.Data4 = 0LL;
  memset(&v32, 0, sizeof(v32));
  *(_QWORD *)&v31.WakeReasonBadIndication = 0LL;
  *(_QWORD *)&v31.WakeReasonUnknown = 0LL;
  NewIrql_1 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ndisAoAcWriteRefcountRundown(a1, AoAc);
  if ( v3 )
  {
    ndisTraceNicAutoPowerSaver(a1, 1u);
    p_CurrentRefStartTime = &AoAc->CsRefTimes[0].CurrentRefStartTime;
    v9 = 16LL;
    do
    {
      *(p_CurrentRefStartTime - 1) = 0LL;
      *p_CurrentRefStartTime = 0LL;
      p_CurrentRefStartTime += 2;
      --v9;
    }
    while ( v9 );
    AoAc->TotalCsActiveTime = 0LL;
    AoAc->CsPowerTransitions = 0;
    *(_QWORD *)&AoAc->CsSurpriseWakes = 0LL;
    AoAc->TotalCsResiliencyTime = 0LL;
    AoAc->CurrentActiveStartTime = 0LL;
    AoAc->CurrentCsResiliencyStartTime = 0LL;
    memset(&AoAc->CsTrafficStats[1], 0, 0x9CuLL);
    ActiveState = AoAc->ActiveState;
    if ( (ActiveState & 0xFFFFFFFC) == 0 && ActiveState != NdisNicQuiet )
      AoAc->CurrentActiveStartTime = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    v11 = &AoAc->CsRefTimes[0].CurrentRefStartTime;
    v12 = 16LL;
    do
    {
      if ( *v11 )
      {
        *(v11 - 1) += MEMORY[0xFFFFF78000000008] - *v11;
        *v11 = 0LL;
      }
      v11 += 2;
      --v12;
    }
    while ( v12 );
    if ( AoAc->CurrentCsResiliencyStartTime )
    {
      AoAc->TotalCsResiliencyTime += MEMORY[0xFFFFF78000000008] - AoAc->CurrentCsResiliencyStartTime;
      AoAc->CurrentCsResiliencyStartTime = 0LL;
    }
    if ( AoAc->CurrentActiveStartTime )
    {
      AoAc->TotalCsActiveTime += MEMORY[0xFFFFF78000000008] - AoAc->CurrentActiveStartTime;
      AoAc->CurrentActiveStartTime = 0LL;
    }
    v13 = -444972355;
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      Template_qxxq(
        -444972355,
        AoAc->TotalCsActiveTime / 0x989680,
        (_DWORD)a1 + 4032,
        a1->IfIndex,
        a1->NetLuid.Value,
        AoAc->TotalCsActiveTime / 0x989680,
        AoAc->CsPowerTransitions);
    *(_OWORD *)&hProvider[48] = *(_OWORD *)&AoAc->CsTrafficStats[1].IfInUnicastPackets;
    *(_OWORD *)&hProvider[64] = *(_OWORD *)&AoAc->CsTrafficStats[1].IfInMulticastPackets;
    *(_OWORD *)&hProvider[80] = *(_OWORD *)&AoAc->CsTrafficStats[1].IfInBroadcastPackets;
    *(_OWORD *)hProvider = *(_OWORD *)&AoAc->CsTrafficStats[2].IfInUnicastPackets;
    *(_OWORD *)&hProvider[16] = *(_OWORD *)&AoAc->CsTrafficStats[2].IfInMulticastPackets;
    InterfaceGuid = a1->InterfaceGuid;
    *(_OWORD *)&hProvider[32] = *(_OWORD *)&AoAc->CsTrafficStats[2].IfInBroadcastPackets;
    v29 = InterfaceGuid;
    v15 = AoAc->TotalCsResiliencyTime == 0;
    CsSurpriseWakes = AoAc->CsSurpriseWakes;
    v16 = *(_OWORD *)&AoAc->CsSpuriousWakeStats.WakeReasonWlanNLODiscovery;
    CsSpuriousWakes = AoAc->CsSpuriousWakes;
    WakeReasonWwanUSSDReceive = AoAc->CsSpuriousWakeStats.WakeReasonWwanUSSDReceive;
    *(_OWORD *)&v32.WakeReasonUnspec = *(_OWORD *)&AoAc->CsSpuriousWakeStats.WakeReasonUnspec;
    *(_QWORD *)&v32.WakeReasonWwanRegisterState = *(_QWORD *)&AoAc->CsSpuriousWakeStats.WakeReasonWwanRegisterState;
    CsSpuriousWakeStatsEx = AoAc->CsSpuriousWakeStatsEx;
    v28 = CsSpuriousWakes;
    *(_OWORD *)&v32.WakeReasonWlanNLODiscovery = v16;
    v32.WakeReasonWwanUSSDReceive = WakeReasonWwanUSSDReceive;
    v31 = CsSpuriousWakeStatsEx;
    if ( !v15 )
    {
      v30 = (GUID)0LL;
      if ( (Microsoft_Windows_NDISEnableBits & 0x100000000000LL) != 0 )
      {
        LOBYTE(v7) = v4;
        Template_cjjp(v13, v12, (_DWORD)a1 + 4032, v7, v24, (__int64)&a1->InterfaceGuid, (char)a1->PhysicalDeviceObject);
      }
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      {
        LOBYTE(v7) = v4;
        Template_cjqzr2jx(
          a1->pAdapterInstanceName,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (_DWORD)a1 + 4032,
          v7,
          (__int64)&GUID_SLEEPSTUDY_BLOCKER_PARENT_NETWORKING,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (__int64)a1->pAdapterInstanceName->Buffer,
          (__int64)&a1->InterfaceGuid,
          AoAc->TotalCsResiliencyTime);
      }
      for ( i = 0; i < 0x10; ++i )
      {
        TotalRefTime = AoAc->CsRefTimes[i].TotalRefTime;
        if ( TotalRefTime )
        {
          v30 = GUID_CS_BLOCKER_GEN;
          v30.Data4[0] = i;
          v21 = (&off_1C007BED0)[2 * (int)i];
          v22 = *((_DWORD *)&off_1C007BED0 + 4 * (int)i + 2);
          v30.Data3 = a1->IfIndex;
          TotalCsResiliencyTime = AoAc->TotalCsResiliencyTime;
          v27 = v22;
          if ( TotalRefTime > TotalCsResiliencyTime )
            AoAc->CsRefTimes[i].TotalRefTime = TotalCsResiliencyTime;
          if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
          {
            Template_xqx(
              TotalRefTime,
              AoAc->CsRefTimes[i].TotalRefTime / 0x989680,
              (_DWORD)a1 + 4032,
              a1->NetLuid.Value,
              i,
              AoAc->CsRefTimes[i].TotalRefTime / 0x989680);
            v22 = v27;
          }
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
          {
            LOBYTE(v7) = v4;
            Template_cjqzr2jx(
              TotalRefTime,
              v22,
              (_DWORD)a1 + 4032,
              v7,
              (__int64)&a1->InterfaceGuid,
              v22,
              (__int64)v21,
              (__int64)&v30,
              AoAc->CsRefTimes[i].TotalRefTime);
          }
        }
      }
      CsSpuriousWakes = v28;
      v3 = NewIrql;
    }
    ndisTraceNicAutoPowerSaver(a1, 0);
    NdisTraceLoggingCsStateChange(
      a1,
      AoAc,
      v4,
      &v32,
      &v31,
      (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&hProvider[48],
      (TraceLoggingHProvider)hProvider);
  }
  KeReleaseSpinLock(&AoAc->Lock, NewIrql_1);
  if ( v3 )
  {
    ndisUpdateMiniportCsTrafficStatistics(a1, NdisCSTrafficLatest);
  }
  else
  {
    ndisPublishSleepStudyCustomData(v4, &v29, L"Surprise Wakes", CsSurpriseWakes);
    ndisPublishSleepStudyCustomData(v4, &v29, L"Spurious Wakes", CsSpuriousWakes);
    ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(v4, &v29, &v32, &v31);
    ndisPublishSleepStudyCustomDataCsTraffic(
      v4,
      &v29,
      (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&hProvider[48],
      (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)hProvider);
    ndisPublishSleepStudyNicAutoPowerSaverStats(a1, v4, &v29);
  }
  ndisNicAutoPowerSaverResetTelemetryData((__int64)a1);
}
