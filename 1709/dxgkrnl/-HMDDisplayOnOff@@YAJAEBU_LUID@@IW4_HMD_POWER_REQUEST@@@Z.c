/*
 * XREFs of ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00F9C30
 * Callers:
 *     DxgkPreSessionDisconnected @ 0x1C00F9BE0 (DxgkPreSessionDisconnected.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01C3E48 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DB8E8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DBC2C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DBCCC (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C00DBF50 (-RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?HMDDisplayOnOffDisplayScenarioJournalFinalize@@YAXPEAUD3DKMT_GETPATHSMODALITY@@JW4_HMD_DISPLAY_ON_OFF_FAILURE_STAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F9D70 (-HMDDisplayOnOffDisplayScenarioJournalFinalize@@YAXPEAUD3DKMT_GETPATHSMODALITY@@JW4_HMD_DISPLAY_.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C00F9E08 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C01C43F0 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     DxgkNotifyDisplayChange @ 0x1C01CB324 (DxgkNotifyDisplayChange.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01F78F4 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01F7B28 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 */

__int64 __fastcall HMDDisplayOnOff(const struct _LUID *a1, unsigned int a2, int a3)
{
  bool v6; // dl
  bool v7; // cl
  bool v8; // r8
  int ActiveTopologyNoRetryNeeded; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // esi
  unsigned __int8 v15; // al
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // ebx
  unsigned __int16 v23; // cx
  __int16 v24; // bx
  unsigned __int16 v25; // bx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int UnusedVidpnSourceId; // esi
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  unsigned int v35; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int v45; // r9d
  unsigned __int8 v46[16]; // [rsp+20h] [rbp-99h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v47[8]; // [rsp+30h] [rbp-89h] BYREF
  __int64 v48; // [rsp+70h] [rbp-49h]
  int v49; // [rsp+7Ch] [rbp-3Dh]
  int v50; // [rsp+80h] [rbp-39h]
  int v51; // [rsp+84h] [rbp-35h]
  _QWORD v52[10]; // [rsp+90h] [rbp-29h] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v47, 8u, 0);
  v51 |= 1u;
  ActiveTopologyNoRetryNeeded = CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(v7, v6, v8, (struct CCD_TOPOLOGY *)v47);
  v11 = 0;
  v12 = ActiveTopologyNoRetryNeeded;
  if ( ActiveTopologyNoRetryNeeded < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v20 + 24) = v12;
    WdLogEvent5_WdError(v20);
    goto LABEL_10;
  }
  v46[0] = 1;
  memset(v52, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v52[1]);
  v52[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v52[3]) = 58;
  LOBYTE(v52[6]) = -1;
  LODWORD(v52[4]) = a3;
  DisplayScenarioJournalBegin(0LL, 0LL, 0LL);
  if ( a3 )
  {
    v14 = a3 - 1;
    if ( !v14 )
    {
      if ( v48 )
        v24 = *(_WORD *)(v48 + 20);
      else
        v24 = 0;
      v25 = v24 + 1;
      if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v47, v25) >= v25 )
      {
        UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v47, a1);
        if ( UnusedVidpnSourceId != 16 )
        {
          v35 = v25 - 1;
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v47, v35);
          *((struct _LUID *)PathDescriptor + 2) = *a1;
          *((_DWORD *)PathDescriptor + 22) = 5;
          *((_DWORD *)PathDescriptor + 23) = 5;
          *(_QWORD *)PathDescriptor = 0x8F01000000000LL;
          *((_DWORD *)PathDescriptor + 6) = UnusedVidpnSourceId;
          *((_DWORD *)PathDescriptor + 7) = a2;
          *((_BYTE *)PathDescriptor + 129) = 0;
          ++*(_WORD *)(v48 + 20);
          CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v47, v35);
          goto LABEL_13;
        }
        v34 = WdLogNewEntry5_WdEvent(v30, v29, v32, v33);
        if ( v48 )
          LOWORD(v11) = *(_WORD *)(v48 + 20);
        *(_QWORD *)(v34 + 24) = (unsigned __int16)v11;
        *(_QWORD *)(v34 + 32) = 16LL;
        WdLogEvent5_WdEvent(v34);
        v17 = 2LL;
      }
      else
      {
        v27 = WdLogNewEntry5_WdLowResource(v26);
        *(_QWORD *)(v27 + 24) = v25;
        WdLogEvent5_WdLowResource(v27);
        v17 = 1LL;
      }
      LODWORD(v12) = -1073741823;
LABEL_24:
      v18 = v48;
      goto LABEL_9;
    }
    if ( v14 != 1 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v21 + 24) = 7886LL;
      WdLogEvent5_WdAssertion(v21);
      goto LABEL_13;
    }
    v46[0] = 0;
    CCD_TOPOLOGY::RemoveAllHMDPaths((__int64)v47, v46);
    v15 = v46[0];
  }
  else
  {
    if ( (unsigned int)CCD_TOPOLOGY::RemovePathByTarget((CCD_TOPOLOGY *)v47, a1, a2) != -1073741275 )
      goto LABEL_13;
    v15 = 0;
    LODWORD(v12) = 0;
    v46[0] = 0;
  }
  if ( !v15 )
    goto LABEL_7;
LABEL_13:
  v49 = 1;
  v22 = 0;
  v50 = 1;
  while ( 1 )
  {
    v23 = v48 ? *(_WORD *)(v48 + 20) : 0;
    if ( v22 >= v23 )
      break;
    v37 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v47, v22);
    v38 = *(_QWORD *)v37;
    if ( (*(_QWORD *)v37 & 0x1000000000LL) == 0 )
    {
      if ( (v38 & 0x100) != 0 )
        *((_QWORD *)v37 + 1) |= 0x100uLL;
      if ( (v38 & 0x87) != 0 )
        *((_QWORD *)v37 + 1) |= 0x87uLL;
    }
    ++v22;
  }
  v39 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v47, 0x20000u);
  v12 = v39;
  if ( v39 < 0 )
  {
    v41 = WdLogNewEntry5_WdError(v40);
    *(_QWORD *)(v41 + 24) = v12;
    *(_QWORD *)(v41 + 32) = v48;
    WdLogEvent5_WdError(v41);
    v17 = 3LL;
    goto LABEL_24;
  }
  v42 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)v47, 0x20000u, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v52);
  v12 = v42;
  if ( v42 < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v43);
    *(_QWORD *)(v28 + 24) = v12;
    *(_QWORD *)(v28 + 32) = v48;
    WdLogEvent5_WdError(v28);
    v17 = 4LL;
    goto LABEL_24;
  }
  v16 = v48;
  v44 = *(_QWORD *)(v48 + 40);
  if ( !v44 )
    goto LABEL_8;
  v45 = *(_DWORD *)(v48 + 36);
  if ( !v45 )
    goto LABEL_8;
  while ( ((*(_DWORD *)(224LL * v11 + v44 + 84) | *(_DWORD *)(224LL * v11 + v44 + 88)) & ~*(_DWORD *)(224LL * v11 + v44 + 220)) == 0 )
  {
    if ( ++v11 >= v45 )
      goto LABEL_8;
  }
  DxgkNotifyDisplayChange(0LL);
LABEL_7:
  v16 = v48;
LABEL_8:
  v17 = 0LL;
  v18 = v16;
LABEL_9:
  HMDDisplayOnOffDisplayScenarioJournalFinalize(v18, (unsigned int)v12, v17, v52);
LABEL_10:
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v47);
  return (unsigned int)v12;
}
