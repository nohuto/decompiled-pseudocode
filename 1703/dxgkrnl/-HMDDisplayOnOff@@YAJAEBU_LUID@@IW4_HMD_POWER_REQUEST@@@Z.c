/*
 * XREFs of ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00A68C0
 * Callers:
 *     DxgkPreSessionDisconnected @ 0x1C00A6870 (DxgkPreSessionDisconnected.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01A9158 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?HMDDisplayOnOffDisplayScenarioJournalFinalize@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@JW4_HMD_DISPLAY_ON_OFF_FAILURE_STAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A69EC (-HMDDisplayOnOffDisplayScenarioJournalFinalize@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@JW4_HMD_DISPLAY.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C00A6A84 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00EA684 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C00EBA90 (-RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C01A9A20 (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     DxgkNotifyDisplayChange @ 0x1C01B1564 (DxgkNotifyDisplayChange.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01DE7C4 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01DE9E0 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 */

__int64 __fastcall HMDDisplayOnOff(const struct _LUID *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edi
  __int64 v7; // rbx
  bool v8; // dl
  bool v9; // cl
  bool v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // esi
  unsigned __int8 v16; // al
  __int64 v17; // r10
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v21; // rax
  unsigned int v22; // ebx
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // bx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int UnusedVidpnSourceId; // esi
  __int64 v30; // rcx
  unsigned int v31; // ebx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // r9d
  unsigned __int8 v44[16]; // [rsp+20h] [rbp-89h] BYREF
  _BYTE v45[64]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v46; // [rsp+70h] [rbp-39h]
  int v47; // [rsp+7Ch] [rbp-2Dh]
  int v48; // [rsp+80h] [rbp-29h]
  int v49; // [rsp+84h] [rbp-25h]
  _QWORD v50[8]; // [rsp+90h] [rbp-19h] BYREF

  v3 = 0;
  LODWORD(v7) = 0;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v45, 8u, 0);
  v49 |= 1u;
  CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(v9, v8, v10, (struct CCD_TOPOLOGY *)v45);
  v44[0] = 1;
  memset(v50, 0, sizeof(v50));
  EtwActivityIdControl(3u, (LPGUID)&v50[1]);
  v50[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v50[3]) = 58;
  LODWORD(v50[4]) = a3;
  DisplayScenarioJournalBegin(0LL, 0LL, 0LL);
  if ( a3 )
  {
    v15 = a3 - 1;
    if ( !v15 )
    {
      if ( v46 )
        LOWORD(v7) = *(_WORD *)(v46 + 20);
      v24 = v7 + 1;
      if ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v45, v24) >= v24 )
      {
        UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v45, a1);
        if ( UnusedVidpnSourceId != 16 )
        {
          v31 = v24 - 1;
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v45, v31);
          *((struct _LUID *)PathDescriptor + 2) = *a1;
          *((_DWORD *)PathDescriptor + 22) = 5;
          *((_DWORD *)PathDescriptor + 23) = 5;
          *(_QWORD *)PathDescriptor = 0x8F01000000000LL;
          *((_DWORD *)PathDescriptor + 6) = UnusedVidpnSourceId;
          *((_DWORD *)PathDescriptor + 7) = a2;
          *((_BYTE *)PathDescriptor + 129) = 1;
          ++*(_WORD *)(v46 + 20);
          CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v45, v31);
          goto LABEL_10;
        }
        v30 = WdLogNewEntry5_WdEvent(v28);
        if ( v46 )
          LOWORD(v3) = *(_WORD *)(v46 + 20);
        *(_QWORD *)(v30 + 24) = (unsigned __int16)v3;
        *(_QWORD *)(v30 + 32) = 16LL;
        WdLogEvent5_WdEvent(v30);
        v18 = 2LL;
      }
      else
      {
        v26 = WdLogNewEntry5_WdLowResource(v25);
        *(_QWORD *)(v26 + 24) = v24;
        WdLogEvent5_WdLowResource(v26);
        v18 = 1LL;
      }
      LODWORD(v7) = -1073741823;
LABEL_20:
      v19 = v46;
      goto LABEL_8;
    }
    if ( v15 != 1 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v21 + 24) = 7864LL;
      WdLogEvent5_WdAssertion(v21);
      goto LABEL_10;
    }
    v44[0] = 0;
    CCD_TOPOLOGY::RemoveAllHMDPaths((CCD_TOPOLOGY *)v45, v44);
    v16 = v44[0];
  }
  else
  {
    if ( (unsigned int)CCD_TOPOLOGY::RemovePathByTarget((CCD_TOPOLOGY *)v45, a1, a2) != -1073741275 )
      goto LABEL_10;
    v16 = 0;
    v44[0] = 0;
  }
  if ( !v16 )
    goto LABEL_6;
LABEL_10:
  v47 = 1;
  v22 = 0;
  v48 = 1;
  while ( 1 )
  {
    v23 = v46 ? *(_WORD *)(v46 + 20) : 0;
    if ( v22 >= v23 )
      break;
    v33 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v45, v22);
    v34 = *(_QWORD *)v33;
    if ( (*(_QWORD *)v33 & 0x1000000000LL) == 0 )
    {
      if ( (v34 & 0x100) != 0 )
        *((_QWORD *)v33 + 1) |= 0x100uLL;
      if ( (v34 & 0x87) != 0 )
        *((_QWORD *)v33 + 1) |= 0x87uLL;
    }
    ++v22;
  }
  v35 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v45, 0x20000u);
  v7 = v35;
  if ( v35 < 0 )
  {
    v38 = WdLogNewEntry5_WdError(v37, v36);
    *(_QWORD *)(v38 + 24) = v7;
    *(_QWORD *)(v38 + 32) = v46;
    WdLogEvent5_WdError(v38);
    v18 = 3LL;
    goto LABEL_20;
  }
  v39 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)v45, 0x20000u, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v50);
  v7 = v39;
  if ( v39 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v41, v40);
    *(_QWORD *)(v27 + 24) = v7;
    *(_QWORD *)(v27 + 32) = v46;
    WdLogEvent5_WdError(v27);
    v18 = 4LL;
    goto LABEL_20;
  }
  v17 = v46;
  v42 = *(_QWORD *)(v46 + 40);
  if ( !v42 )
    goto LABEL_7;
  v43 = *(_DWORD *)(v46 + 36);
  if ( !v43 )
    goto LABEL_7;
  while ( ((*(_DWORD *)(216LL * v3 + v42 + 84) | *(_DWORD *)(216LL * v3 + v42 + 88)) & ~*(_DWORD *)(216LL * v3
                                                                                                  + v42
                                                                                                  + 212)) == 0 )
  {
    if ( ++v3 >= v43 )
      goto LABEL_7;
  }
  DxgkNotifyDisplayChange(0LL);
LABEL_6:
  v17 = v46;
LABEL_7:
  v18 = 0LL;
  v19 = v17;
LABEL_8:
  HMDDisplayOnOffDisplayScenarioJournalFinalize(v19, (unsigned int)v7, v18, v50);
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v45);
  return (unsigned int)v7;
}
