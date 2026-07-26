/*
 * XREFs of ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@EPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@4@Z @ 0x1C0078950
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0073678 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0012C84 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C001EF44 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

void __fastcall NdisTraceLoggingCsStateChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_AOAC *a2,
        unsigned __int8 a3,
        struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *a4,
        struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *a5,
        struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *a6,
        struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *a7)
{
  unsigned __int64 *v11; // rcx
  _NDIS_AOAC_COMPONENT_REF_TIME *CsRefTimes; // rdx
  __int64 v13; // r8
  unsigned __int64 TotalRefTime; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  unsigned int LastUnknownWakeReason; // eax
  const GUID *v19; // r8
  const GUID *v20; // r9
  __int64 v21; // r10
  _UNICODE_STRING *pAdapterInstanceName; // rax
  int Length; // ecx
  _NDIS_NIC_ACTIVE_STATE ActiveState; // [rsp+30h] [rbp-D0h] BYREF
  int CsPowerTransitions; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int CsSurpriseWakes; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int CsSpuriousWakes; // [rsp+3Ch] [rbp-C4h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 Value; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  _GUID *p_InterfaceGuid; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  unsigned int *p_IfIndex; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  _NET_LUID_LH *p_NetLuid; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  _NDIS_NIC_ACTIVE_STATE *p_ActiveState; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int64 *p_Value; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *p_TotalCsActiveTime; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  int *p_CsPowerTransitions; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *p_TotalCsResiliencyTime; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  unsigned int *p_CsSurpriseWakes; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  unsigned int *p_CsSpuriousWakes; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  int *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  _DWORD *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  wchar_t *Buffer; // [rsp+150h] [rbp+50h]
  _DWORD v59[2]; // [rsp+158h] [rbp+58h] BYREF
  struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  unsigned __int64 *p_IfOutUnicastPackets; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+178h] [rbp+78h]
  unsigned __int64 *p_IfInMulticastPackets; // [rsp+180h] [rbp+80h]
  __int64 v65; // [rsp+188h] [rbp+88h]
  unsigned __int64 *p_IfOutMulticastPackets; // [rsp+190h] [rbp+90h]
  __int64 v67; // [rsp+198h] [rbp+98h]
  unsigned __int64 *p_IfInBroadcastPackets; // [rsp+1A0h] [rbp+A0h]
  __int64 v69; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 *p_IfOutBroadcastPackets; // [rsp+1B0h] [rbp+B0h]
  __int64 v71; // [rsp+1B8h] [rbp+B8h]
  struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *v72; // [rsp+1C0h] [rbp+C0h]
  __int64 v73; // [rsp+1C8h] [rbp+C8h]
  unsigned __int64 *v74; // [rsp+1D0h] [rbp+D0h]
  __int64 v75; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 *v76; // [rsp+1E0h] [rbp+E0h]
  __int64 v77; // [rsp+1E8h] [rbp+E8h]
  unsigned __int64 *v78; // [rsp+1F0h] [rbp+F0h]
  __int64 v79; // [rsp+1F8h] [rbp+F8h]
  unsigned __int64 *v80; // [rsp+200h] [rbp+100h]
  __int64 v81; // [rsp+208h] [rbp+108h]
  unsigned __int64 *v82; // [rsp+210h] [rbp+110h]
  __int64 v83; // [rsp+218h] [rbp+118h]
  _OWORD *v84; // [rsp+220h] [rbp+120h]
  __int64 v85; // [rsp+228h] [rbp+128h]
  int *ComponentRefCounts; // [rsp+230h] [rbp+130h]
  __int64 v87; // [rsp+238h] [rbp+138h]
  _BYTE *v88; // [rsp+240h] [rbp+140h]
  __int64 v89; // [rsp+248h] [rbp+148h]
  _OWORD v90[4]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v91[144]; // [rsp+290h] [rbp+190h] BYREF

  memset(v91, 0, 0x88uLL);
  memset(v90, 0, sizeof(v90));
  v29 = (MEMORY[0xFFFFF78000000008] - ndisLastCsEntryTime) / 0x2710;
  if ( v29 >= 0x927C0 )
  {
    v11 = (unsigned __int64 *)v91;
    CsRefTimes = a2->CsRefTimes;
    v13 = 17LL;
    do
    {
      TotalRefTime = CsRefTimes->TotalRefTime;
      ++CsRefTimes;
      *v11++ = TotalRefTime;
      --v13;
    }
    while ( v13 );
    v15 = *(_OWORD *)&a4->WakeReasonUnspec;
    v16 = *(_OWORD *)&a4->WakeReasonWlanNLODiscovery;
    DWORD2(v90[2]) = a4->WakeReasonWwanUSSDReceive;
    v90[0] = v15;
    *(_QWORD *)&v90[2] = *(_QWORD *)&a4->WakeReasonWwanRegisterState;
    v17 = *(_OWORD *)&a5->WakeReasonBadIndication;
    LastUnknownWakeReason = a5->LastUnknownWakeReason;
    v90[1] = v16;
    *(_OWORD *)((char *)&v90[2] + 12) = v17;
    HIDWORD(v90[3]) = LastUnknownWakeReason;
    if ( hProvider.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
      {
        v33 = 16LL;
        p_InterfaceGuid = &a1->InterfaceGuid;
        v56 = v59;
        p_IfIndex = &a1->IfIndex;
        p_NetLuid = &a1->NetLuid;
        ActiveState = a2->ActiveState;
        p_ActiveState = &ActiveState;
        Value = a2->StopFlags.Value;
        p_Value = &Value;
        v42 = &v29;
        p_TotalCsActiveTime = &a2->TotalCsActiveTime;
        CsPowerTransitions = a2->CsPowerTransitions;
        p_CsPowerTransitions = &CsPowerTransitions;
        p_TotalCsResiliencyTime = &a2->TotalCsResiliencyTime;
        CsSurpriseWakes = a2->CsSurpriseWakes;
        p_CsSurpriseWakes = &CsSurpriseWakes;
        CsSpuriousWakes = a2->CsSpuriousWakes;
        p_CsSpuriousWakes = &CsSpuriousWakes;
        v28 = a3;
        v54 = &v28;
        pAdapterInstanceName = a1->pAdapterInstanceName;
        v35 = 4LL;
        v37 = v21;
        v39 = 4LL;
        v41 = v21;
        v43 = v21;
        v45 = v21;
        v47 = 4LL;
        v49 = v21;
        v51 = 4LL;
        v53 = 4LL;
        v55 = 4LL;
        v57 = 2LL;
        Length = pAdapterInstanceName->Length;
        Buffer = pAdapterInstanceName->Buffer;
        v59[0] = Length;
        v60 = a6;
        v59[1] = (_DWORD)v20;
        v61 = v21;
        v63 = v21;
        p_IfOutUnicastPackets = &a6->IfOutUnicastPackets;
        p_IfInMulticastPackets = &a6->IfInMulticastPackets;
        p_IfOutMulticastPackets = &a6->IfOutMulticastPackets;
        p_IfInBroadcastPackets = &a6->IfInBroadcastPackets;
        p_IfOutBroadcastPackets = &a6->IfOutBroadcastPackets;
        v65 = v21;
        v67 = v21;
        v69 = v21;
        v74 = &a7->IfOutUnicastPackets;
        v71 = v21;
        v72 = a7;
        v73 = v21;
        v75 = v21;
        v77 = v21;
        v76 = &a7->IfInMulticastPackets;
        v78 = &a7->IfOutMulticastPackets;
        v80 = &a7->IfInBroadcastPackets;
        v82 = &a7->IfOutBroadcastPackets;
        v84 = v90;
        ComponentRefCounts = a2->ComponentRefCounts;
        v88 = v91;
        v79 = v21;
        v81 = v21;
        v83 = v21;
        v85 = 64LL;
        v87 = 68LL;
        v89 = 136LL;
        TlgWrite(&hProvider, &unk_1C0085BFB, v19, v20, 0x1Fu, &pData);
      }
    }
  }
}
