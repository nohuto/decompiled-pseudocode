/*
 * XREFs of ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0073678
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C0050860 (ndisWnfPdcCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ?ComputeRoundedAverage@@YA_K_K0@Z @ 0x1C0043010 (-ComputeRoundedAverage@@YA_K_K0@Z.c)
 *     ndisNicAutoPowerSaverResetTelemetryData @ 0x1C0070BA4 (ndisNicAutoPowerSaverResetTelemetryData.c)
 *     ndisTraceNicAutoPowerSaver @ 0x1C0072308 (ndisTraceNicAutoPowerSaver.c)
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00734E4 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C0074E5C (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     McTemplateK0cjjp @ 0x1C007540C (McTemplateK0cjjp.c)
 *     McTemplateK0cjqzr2jx @ 0x1C00754AC (McTemplateK0cjqzr2jx.c)
 *     McTemplateK0qxxq @ 0x1C007556C (McTemplateK0qxxq.c)
 *     McTemplateK0xqx @ 0x1C0075894 (McTemplateK0xqx.c)
 *     ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@EPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@4@Z @ 0x1C0078950 (-NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@EPEAU_NDIS.c)
 *     ?NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0079760 (-NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z @ 0x1C00F60C8 (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x1C00F6224 (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIO.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1@Z @ 0x1C00F62C8 (-ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1.c)
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C00F680C (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z.c)
 */

void __fastcall ndisCsStateChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  unsigned __int8 v3; // r15
  unsigned __int8 v4; // r13
  int v5; // edx
  int v6; // r9d
  unsigned __int64 *p_CurrentRefStartTime; // rsi
  int *ComponentRefCounts; // rcx
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  _NDIS_NIC_ACTIVE_STATE ActiveState; // eax
  __int64 v14; // rcx
  int v15; // ecx
  __int128 v16; // xmm1
  unsigned int WakeReasonWwanUSSDReceive; // eax
  unsigned int LastUnknownWakeReason; // eax
  __int128 v19; // xmm0
  int CsPowerTransitions; // eax
  unsigned int i; // r15d
  unsigned __int64 TotalRefTime; // rcx
  wchar_t *v23; // rdx
  int v24; // r8d
  unsigned __int64 TotalCsResiliencyTime; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  int v28; // [rsp+28h] [rbp-E0h]
  unsigned __int8 NewIrql; // [rsp+58h] [rbp-B0h]
  KIRQL NewIrql_1; // [rsp+59h] [rbp-AFh]
  unsigned __int64 v31; // [rsp+5Ch] [rbp-ACh]
  unsigned int CsSpuriousWakes; // [rsp+64h] [rbp-A4h]
  int v33; // [rsp+68h] [rbp-A0h]
  wchar_t *v34; // [rsp+70h] [rbp-98h]
  struct _GUID InterfaceGuid; // [rsp+78h] [rbp-90h] BYREF
  GUID v36; // [rsp+88h] [rbp-80h] BYREF
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX v37; // [rsp+98h] [rbp-70h] BYREF
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS v38; // [rsp+B0h] [rbp-58h] BYREF
  struct _NDIS_MINIPORT_CS_TRAFFIC_STATS v39; // [rsp+E0h] [rbp-28h] BYREF
  struct _NDIS_MINIPORT_CS_TRAFFIC_STATS v40; // [rsp+110h] [rbp+8h] BYREF

  AoAc = a1->AoAc;
  v3 = ndisConnectedStandby;
  v4 = ndisLastCsScenarioInstanceId;
  NewIrql = ndisConnectedStandby;
  memset(&v40, 0, sizeof(v40));
  memset(&v39, 0, sizeof(v39));
  *(_QWORD *)&InterfaceGuid.Data1 = 0LL;
  *(_QWORD *)InterfaceGuid.Data4 = 0LL;
  CsSpuriousWakes = 0;
  v31 = 0LL;
  memset(&v38, 0, sizeof(v38));
  memset(&v37, 0, sizeof(v37));
  NewIrql_1 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  ndisAoAcWriteRefcountRundown(a1, AoAc);
  p_CurrentRefStartTime = &AoAc->CsRefTimes[0].CurrentRefStartTime;
  if ( v3 )
  {
    ndisTraceNicAutoPowerSaver(a1, 1u);
    ComponentRefCounts = AoAc->ComponentRefCounts;
    v9 = 17LL;
    v10 = MEMORY[0xFFFFF78000000008];
    do
    {
      *(p_CurrentRefStartTime - 1) = 0LL;
      v11 = 0LL;
      if ( *ComponentRefCounts++ > 0 )
        v11 = v10;
      *p_CurrentRefStartTime = v11;
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
    AoAc->WakeIrpCount = 0;
    AoAc->WakeIrpStartTime = 0LL;
    AoAc->LastWakeIrpLatencyMs = 0LL;
    AoAc->MaxWakeIrpLatencyMs = 0LL;
    AoAc->TotalWakeIrpLatencyMs = 0LL;
    AoAc->SetPowerOidCount = 0;
    AoAc->LastSetPowerOidLatencyMs = 0LL;
    AoAc->MaxSetPowerOidLatencyMs = 0LL;
    AoAc->TotalSetPowerOidLatencyMs = 0LL;
    memset(&AoAc->CsTrafficStats[1], 0, 0xA0uLL);
    ActiveState = AoAc->ActiveState;
    if ( (ActiveState & 0xFFFFFFFC) == 0 && ActiveState != NdisNicQuiet )
      AoAc->CurrentActiveStartTime = v10;
  }
  else
  {
    v14 = 17LL;
    do
    {
      if ( *p_CurrentRefStartTime )
      {
        *(p_CurrentRefStartTime - 1) += MEMORY[0xFFFFF78000000008] - *p_CurrentRefStartTime;
        *p_CurrentRefStartTime = 0LL;
      }
      p_CurrentRefStartTime += 2;
      --v14;
    }
    while ( v14 );
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
    v15 = -444972355;
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      McTemplateK0qxxq(
        -444972355,
        AoAc->TotalCsActiveTime / 0x989680,
        (_DWORD)a1 + 4032,
        a1->IfIndex,
        a1->NetLuid.Value,
        AoAc->TotalCsActiveTime / 0x989680,
        AoAc->CsPowerTransitions);
    v40 = AoAc->CsTrafficStats[1];
    v39 = AoAc->CsTrafficStats[2];
    InterfaceGuid = a1->InterfaceGuid;
    HIDWORD(v31) = AoAc->CsSurpriseWakes;
    v16 = *(_OWORD *)&AoAc->CsSpuriousWakeStats.WakeReasonWlanNLODiscovery;
    CsSpuriousWakes = AoAc->CsSpuriousWakes;
    WakeReasonWwanUSSDReceive = AoAc->CsSpuriousWakeStats.WakeReasonWwanUSSDReceive;
    *(_OWORD *)&v38.WakeReasonUnspec = *(_OWORD *)&AoAc->CsSpuriousWakeStats.WakeReasonUnspec;
    v38.WakeReasonWwanUSSDReceive = WakeReasonWwanUSSDReceive;
    LastUnknownWakeReason = AoAc->CsSpuriousWakeStatsEx.LastUnknownWakeReason;
    *(_QWORD *)&v38.WakeReasonWwanRegisterState = *(_QWORD *)&AoAc->CsSpuriousWakeStats.WakeReasonWwanRegisterState;
    v19 = *(_OWORD *)&AoAc->CsSpuriousWakeStatsEx.WakeReasonBadIndication;
    v37.LastUnknownWakeReason = LastUnknownWakeReason;
    CsPowerTransitions = AoAc->CsPowerTransitions;
    *(_OWORD *)&v37.WakeReasonBadIndication = v19;
    LODWORD(v31) = CsPowerTransitions;
    *(_OWORD *)&v38.WakeReasonWlanNLODiscovery = v16;
    if ( AoAc->TotalCsResiliencyTime )
    {
      v36 = (GUID)0LL;
      if ( (dword_1C009AF04 & 0x1000) != 0 )
      {
        LOBYTE(v6) = v4;
        McTemplateK0cjjp(
          v15,
          v5,
          (_DWORD)a1 + 4032,
          v6,
          v28,
          (__int64)&a1->InterfaceGuid,
          (char)a1->PhysicalDeviceObject);
      }
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      {
        LOBYTE(v6) = v4;
        McTemplateK0cjqzr2jx(
          a1->pAdapterInstanceName,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (_DWORD)a1 + 4032,
          v6,
          (__int64)&GUID_SLEEPSTUDY_BLOCKER_PARENT_NETWORKING,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (__int64)a1->pAdapterInstanceName->Buffer,
          (__int64)&a1->InterfaceGuid,
          AoAc->TotalCsResiliencyTime);
      }
      for ( i = 0; i < 0x11; ++i )
      {
        TotalRefTime = AoAc->CsRefTimes[i].TotalRefTime;
        if ( TotalRefTime )
        {
          v36 = GUID_CS_BLOCKER_GEN;
          v36.Data4[0] = i;
          v23 = (&off_1C0081030)[2 * (int)i];
          v24 = *((_DWORD *)&off_1C0081030 + 4 * (int)i + 2);
          v36.Data3 = a1->IfIndex;
          TotalCsResiliencyTime = AoAc->TotalCsResiliencyTime;
          v34 = v23;
          v33 = v24;
          if ( TotalRefTime > TotalCsResiliencyTime )
          {
            AoAc->CsRefTimes[i].TotalRefTime = TotalCsResiliencyTime;
            TotalRefTime = TotalCsResiliencyTime;
          }
          if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
          {
            McTemplateK0xqx(
              TotalRefTime,
              TotalRefTime / 0x989680,
              (_DWORD)a1 + 4032,
              a1->NetLuid.Value,
              i,
              TotalRefTime / 0x989680);
            v23 = v34;
            v24 = v33;
          }
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
          {
            LOBYTE(v6) = v4;
            McTemplateK0cjqzr2jx(
              TotalRefTime,
              (_DWORD)v23,
              (_DWORD)a1 + 4032,
              v6,
              (__int64)&a1->InterfaceGuid,
              v24,
              (__int64)v23,
              (__int64)&v36,
              AoAc->CsRefTimes[i].TotalRefTime);
          }
        }
      }
      v3 = NewIrql;
    }
    ndisTraceNicAutoPowerSaver(a1, 0);
    NdisTraceLoggingPowerOnStatistics(a1);
    NdisTraceLoggingCsStateChange(a1, AoAc, v4, &v38, &v37, &v40, &v39);
  }
  KeReleaseSpinLock(&AoAc->Lock, NewIrql_1);
  if ( v3 )
  {
    ndisUpdateMiniportCsTrafficStatistics(a1, NdisCSTrafficLatest);
  }
  else
  {
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Power Transitions", (unsigned int)v31);
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Surprise Wakes", HIDWORD(v31));
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Spurious Wakes", CsSpuriousWakes);
    ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(v4, &InterfaceGuid, &v38, &v37);
    ndisPublishSleepStudyCustomDataCsTraffic(v4, &InterfaceGuid, &v40, &v39);
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Last Wake IRP Latency (ms)", AoAc->LastWakeIrpLatencyMs);
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Max Wake IRP Latency (ms)", AoAc->MaxWakeIrpLatencyMs);
    v26 = ComputeRoundedAverage(AoAc->TotalWakeIrpLatencyMs, AoAc->WakeIrpCount);
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Avg Wake IRP Latency (ms)", v26);
    ndisPublishSleepStudyCustomData(
      v4,
      &InterfaceGuid,
      L"Last SetPowerOid Latency (ms)",
      AoAc->LastSetPowerOidLatencyMs);
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Max SetPowerOid Latency (ms)", AoAc->MaxSetPowerOidLatencyMs);
    v27 = ComputeRoundedAverage(AoAc->TotalSetPowerOidLatencyMs, AoAc->SetPowerOidCount);
    ndisPublishSleepStudyCustomData(v4, &InterfaceGuid, L"Avg SetPowerOid Latency (ms)", v27);
    ndisPublishSleepStudyNicAutoPowerSaverStats(a1, v4, &InterfaceGuid);
  }
  ndisNicAutoPowerSaverResetTelemetryData((__int64)a1);
}
