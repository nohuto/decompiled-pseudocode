/*
 * XREFs of ?HMDDisplayOnOff@@YAJPEAVDXGADAPTER@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C01C5780
 * Callers:
 *     DxgkPreSessionDisconnected @ 0x1C01A1DE0 (DxgkPreSessionDisconnected.c)
 *     ?DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z @ 0x1C01C4C24 (-DxgkHMDDisplayControlInternal@@YAJAEBU_LUID@@IW4D3DKMT_HMD_DISPLAY_REQUEST@@PEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00AB1D4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00B36B8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B39EC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B3A8C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z @ 0x1C01C561C (-GetUnusedVidpnSourceId@@YAIPEAVCCD_TOPOLOGY@@AEBU_LUID@@@Z.c)
 *     ?HMDDisplayOnOffDisplayScenarioJournalFinalize@@YAXPEAUD3DKMT_GETPATHSMODALITY@@JW4_HMD_DISPLAY_ON_OFF_FAILURE_STAGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5BA4 (-HMDDisplayOnOffDisplayScenarioJournalFinalize@@YAXPEAUD3DKMT_GETPATHSMODALITY@@JW4_HMD_DISPLAY_.c)
 *     DxgkNotifyDisplayChange @ 0x1C01D1198 (DxgkNotifyDisplayChange.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02254C4 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C02255A8 (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 *     ?RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C0225824 (-RemovePathByTarget@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C0227A28 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 */

__int64 __fastcall HMDDisplayOnOff(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r15
  unsigned int v4; // edi
  bool v7; // dl
  bool v8; // cl
  bool v9; // r8
  int ActiveTopologyNoRetryNeeded; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  __int64 v20; // rax
  unsigned __int8 v21; // al
  __int16 v22; // bx
  unsigned __int16 v23; // bx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int UnusedVidpnSourceId; // esi
  __int64 v31; // rdx
  unsigned int v32; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  DWORD LowPart; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v35; // r14
  int VideoOutputTechnology; // eax
  __int64 v37; // rcx
  unsigned int v38; // ebx
  unsigned __int16 v39; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v40; // rax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r10
  __int64 v49; // r8
  unsigned int v50; // r9d
  unsigned __int8 v51[8]; // [rsp+20h] [rbp-A9h] BYREF
  struct _LUID v52; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v53[64]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v54; // [rsp+70h] [rbp-59h]
  int v55; // [rsp+7Ch] [rbp-4Dh]
  int v56; // [rsp+80h] [rbp-49h]
  int v57; // [rsp+84h] [rbp-45h]
  _QWORD v58[10]; // [rsp+90h] [rbp-39h] BYREF

  v3 = a2;
  v4 = 0;
  v52 = 0LL;
  if ( a1 )
  {
    v52 = *(struct _LUID *)(a1 + 268);
  }
  else if ( a3 != 2 )
  {
    v14 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v14 + 24) = 8010LL;
    WdLogEvent5_WdError(v14);
    return 87LL;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v53, 8u, 0);
  v57 |= 1u;
  ActiveTopologyNoRetryNeeded = CCD_BTL::RetrieveActiveTopologyNoRetryNeeded(v8, v7, v9, (struct CCD_TOPOLOGY *)v53);
  v12 = ActiveTopologyNoRetryNeeded;
  if ( ActiveTopologyNoRetryNeeded >= 0 )
  {
    v51[0] = 1;
    memset(v58, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v58[1]);
    v58[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v58[3]) = 58;
    LOBYTE(v58[6]) = -1;
    LODWORD(v58[4]) = a3;
    DisplayScenarioJournalBegin(0LL, 0LL, 0LL);
    if ( a3 )
    {
      v19 = a3 - 1;
      if ( !v19 )
      {
        if ( v54 )
          v22 = *(_WORD *)(v54 + 20);
        else
          v22 = 0;
        v23 = v22 + 1;
        if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v53, v23, v17, v18) >= v23 )
        {
          UnusedVidpnSourceId = GetUnusedVidpnSourceId((struct CCD_TOPOLOGY *)v53, &v52);
          if ( UnusedVidpnSourceId != 16 )
          {
            v32 = v23 - 1;
            PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v53, v32);
            LowPart = v52.LowPart;
            v35 = PathDescriptor;
            *((struct _LUID *)PathDescriptor + 2) = v52;
            *((_DWORD *)PathDescriptor + 6) = UnusedVidpnSourceId;
            *((_DWORD *)PathDescriptor + 7) = v3;
            VideoOutputTechnology = DmmGetVideoOutputTechnology(
                                      (DXGADAPTER *)a1,
                                      v3,
                                      (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)PathDescriptor + 22,
                                      (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)PathDescriptor + 23);
            v12 = VideoOutputTechnology;
            if ( VideoOutputTechnology < 0 )
            {
              v13 = (_QWORD *)WdLogNewEntry5_WdError(v37);
              v13[4] = v52.HighPart;
              v13[5] = LowPart;
              v13[3] = v3;
              v13[6] = v12;
              goto LABEL_25;
            }
            *((_DWORD *)v35 + 53) = 1;
            *((_BYTE *)v35 + 129) = 0;
            *(_QWORD *)v35 = 0x8F01000000000LL;
            ++*(_WORD *)(v54 + 20);
            CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath((CCD_TOPOLOGY *)v53, v32);
            goto LABEL_30;
          }
          v31 = WdLogNewEntry5_WdEvent(v29, v28);
          if ( v54 )
            LOWORD(v4) = *(_WORD *)(v54 + 20);
          *(_QWORD *)(v31 + 24) = (unsigned __int16)v4;
          *(_QWORD *)(v31 + 32) = 16LL;
          WdLogEvent5_WdEvent(v31);
          v26 = 2LL;
        }
        else
        {
          v25 = WdLogNewEntry5_WdLowResource(v24);
          *(_QWORD *)(v25 + 24) = v23;
          WdLogEvent5_WdLowResource(v25);
          v26 = 1LL;
        }
        LODWORD(v12) = -1073741823;
LABEL_18:
        v27 = v54;
LABEL_53:
        HMDDisplayOnOffDisplayScenarioJournalFinalize(v27, (unsigned int)v12, v26, v58);
        goto LABEL_54;
      }
      if ( v19 != 1 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v20 + 24) = 8125LL;
        WdLogEvent5_WdAssertion(v20);
        goto LABEL_30;
      }
      v51[0] = 0;
      CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)v53, v51);
      v21 = v51[0];
    }
    else
    {
      if ( (unsigned int)CCD_TOPOLOGY::RemovePathByTarget((CCD_TOPOLOGY *)v53, &v52, v3) != -1073741275 )
      {
LABEL_30:
        v55 = 1;
        v38 = 0;
        v56 = 1;
        while ( 1 )
        {
          v39 = v54 ? *(_WORD *)(v54 + 20) : 0;
          if ( v38 >= v39 )
            break;
          v40 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v53, v38);
          v41 = *(_QWORD *)v40;
          if ( (*(_QWORD *)v40 & 0x1000000000LL) == 0 )
          {
            if ( (v41 & 0x100) != 0 )
              *((_QWORD *)v40 + 1) |= 0x100uLL;
            if ( (v41 & 0x87) != 0 )
              *((_QWORD *)v40 + 1) |= 0x87uLL;
          }
          ++v38;
        }
        v42 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v53, 0x20000u);
        v12 = v42;
        if ( v42 < 0 )
        {
          v44 = WdLogNewEntry5_WdError(v43);
          *(_QWORD *)(v44 + 24) = v12;
          *(_QWORD *)(v44 + 32) = v54;
          WdLogEvent5_WdError(v44);
          v26 = 3LL;
          goto LABEL_18;
        }
        v45 = CCD_TOPOLOGY::ApplyTopology((CCD_TOPOLOGY *)v53, 0x20000u, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v58);
        v12 = v45;
        if ( v45 < 0 )
        {
          v47 = WdLogNewEntry5_WdError(v46);
          *(_QWORD *)(v47 + 24) = v12;
          *(_QWORD *)(v47 + 32) = v54;
          WdLogEvent5_WdError(v47);
          v26 = 4LL;
          goto LABEL_18;
        }
        v48 = v54;
        v49 = *(_QWORD *)(v54 + 40);
        if ( !v49 || (v50 = *(_DWORD *)(v54 + 36)) == 0 )
        {
LABEL_52:
          v26 = 0LL;
          v27 = v48;
          goto LABEL_53;
        }
        while ( ((*(_DWORD *)(316LL * v4 + v49 + 84) | *(_DWORD *)(316LL * v4 + v49 + 88)) & ~*(_DWORD *)(316LL * v4 + v49 + 220)) == 0 )
        {
          if ( ++v4 >= v50 )
            goto LABEL_52;
        }
        DxgkNotifyDisplayChange(0LL);
LABEL_51:
        v48 = v54;
        goto LABEL_52;
      }
      v21 = 0;
      LODWORD(v12) = 0;
      v51[0] = 0;
    }
    if ( !v21 )
      goto LABEL_51;
    goto LABEL_30;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
  v13[3] = v12;
LABEL_25:
  WdLogEvent5_WdError(v13);
LABEL_54:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v53);
  return (unsigned int)v12;
}
