/*
 * XREFs of ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01F9C90
 * Callers:
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01F9C54 (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000596C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00059A8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00A42F8 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A80A8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8950 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8A58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1E@Z @ 0x1C01FA770 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C01FBA2C (-_GetFirstBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBVDMMVIDE.c)
 *     ?_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C01FBAC8 (-_GetNextBestSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CAPEBVDMMVIDEOPRESENTTARGET@@AEBV2@AEBVDM.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        struct DXGADAPTER *a2)
{
  BTL_TOPOLOGY_CONSTRUCTOR *v3; // r12
  VIDPN_MGR *v4; // r13
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  unsigned int i; // r14d
  __int64 v16; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // r14d
  volatile signed __int32 *v22; // rbx
  const struct DMMVIDEOPRESENTTARGET *FirstBestSecondaryTarget; // r15
  char IsVirtualModeSuportDisabled; // r13
  __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  struct _FAST_MUTEX *v33; // rcx
  __int64 v34; // rax
  int MonitorInstance; // eax
  __int64 v36; // rax
  struct DXGMONITOR *v37; // r14
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int PathSourceFromTarget; // eax
  __int64 v42; // r14
  struct DMMVIDPNTOPOLOGY *v43; // r11
  int v44; // eax
  __int64 v45; // rcx
  char v46; // r8
  int v47; // eax
  int v48; // r14d
  char v49; // r13
  __int64 v50; // r14
  DMMVIDPNTOPOLOGY *v51; // r11
  __int64 v52; // rax
  __int64 v53; // r12
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  struct _FAST_MUTEX *v57; // rcx
  __int64 v58; // rax
  int v59; // eax
  _QWORD *v60; // rax
  __int64 v61; // rax
  struct DXGMONITOR *v62; // r14
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // r14d
  int v67; // eax
  __int64 v68; // rcx
  void (__fastcall ***v69)(_QWORD, __int64); // rcx
  int v70; // ebx
  char v71; // r8
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rcx
  char v76; // [rsp+40h] [rbp-39h]
  int v77; // [rsp+44h] [rbp-35h]
  struct DMMVIDPNTOPOLOGY *v78; // [rsp+48h] [rbp-31h]
  __int64 v79; // [rsp+50h] [rbp-29h] BYREF
  __int64 v80; // [rsp+58h] [rbp-21h] BYREF
  struct DXGMONITOR *v81; // [rsp+60h] [rbp-19h] BYREF
  DMMVIDPNTOPOLOGY *v82; // [rsp+68h] [rbp-11h]
  struct DXGMONITOR *v83; // [rsp+70h] [rbp-9h] BYREF
  VIDPN_MGR *v84; // [rsp+78h] [rbp-1h]
  _QWORD v85[10]; // [rsp+80h] [rbp+7h] BYREF
  bool v87; // [rsp+E8h] [rbp+6Fh]
  bool v88; // [rsp+F0h] [rbp+77h]
  char v89; // [rsp+F8h] [rbp+7Fh]

  v3 = this;
  v4 = *(VIDPN_MGR **)(*((_QWORD *)a2 + 288) + 88LL);
  v84 = v4;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v85, (__int64)v4);
  v5 = *((_QWORD *)a2 + 288);
  v80 = 0LL;
  v6 = 0LL;
  v82 = 0LL;
  if ( *(_BYTE *)(v5 + 133)
    && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn((const struct DMMVIDPN **)v4, &v80) >= 0 )
  {
    v8 = v80;
    if ( !v80 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v9);
    }
    v6 = v8 + 96;
    v82 = (DMMVIDPNTOPOLOGY *)(v8 + 96);
  }
  v79 = 0LL;
  v10 = VIDPN_MGR::CreateClientVidPn(v4, &v79);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = v12;
    v13[4] = a2;
    v13[5] = *((int *)a2 + 68);
    v13[6] = *((unsigned int *)a2 + 67);
    goto LABEL_145;
  }
  v78 = (struct DMMVIDPNTOPOLOGY *)(v79 + 96);
  if ( v79 == -96 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v14[3] = -96LL;
    v14[4] = a2;
    v14[5] = *((int *)a2 + 68);
    v14[6] = *((unsigned int *)a2 + 67);
    WdLogEvent5_WdError(v14);
    LODWORD(v12) = -1073741823;
    goto LABEL_146;
  }
  for ( i = 0; ; ++i )
  {
    v16 = *(_QWORD *)(*(_QWORD *)v3 + 64LL);
    if ( v16 )
      LOWORD(v16) = *(_WORD *)(v16 + 20);
    if ( i >= (unsigned __int16)v16 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)v3, i);
    v18 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)a2 + 67)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a2 + 68) )
    {
      v19 = VIDPN_MGR::AddPathToVidPnTopology(
              v4,
              v78,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v12 = v19;
      if ( v19 < 0 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v13[3] = v12;
        v13[4] = *((int *)v18 + 5);
        v13[5] = *((unsigned int *)v18 + 4);
        v13[6] = *((unsigned int *)v18 + 6);
        v13[7] = *((unsigned int *)v18 + 7);
        goto LABEL_145;
      }
    }
  }
  v21 = -1071774975;
  v77 = -1071774975;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 10) + 72LL));
  v22 = (volatile signed __int32 *)*((_QWORD *)v4 + 10);
  v85[1] = v22;
  if ( v6 )
  {
    FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget((const struct DMMVIDEOPRESENTTARGETSET *)v22);
    if ( FirstBestSecondaryTarget )
    {
      IsVirtualModeSuportDisabled = v89;
      while ( 1 )
      {
        v25 = *((unsigned int *)FirstBestSecondaryTarget + 6);
        if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology(v78, *((_DWORD *)FirstBestSecondaryTarget + 6))
          && ((_DWORD)v25 != *((_DWORD *)v3 + 6)
           || *((_DWORD *)a2 + 67) != *((_DWORD *)v3 + 3)
           || *((_DWORD *)a2 + 68) != *((_DWORD *)v3 + 4))
          && *((_QWORD *)FirstBestSecondaryTarget + 13)
          && !*((_BYTE *)FirstBestSecondaryTarget + 404) )
        {
          break;
        }
LABEL_73:
        FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
                                     FirstBestSecondaryTarget,
                                     (const struct DMMVIDEOPRESENTTARGETSET *)v22);
        if ( !FirstBestSecondaryTarget )
        {
          v21 = v77;
          goto LABEL_75;
        }
      }
      if ( (_DWORD)v25 == -1 )
      {
        LODWORD(v12) = -1073741811;
LABEL_58:
        if ( (int)v12 < 0 )
          goto LABEL_140;
        if ( *((_BYTE *)v3 + 10) && v87
          || (PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                       v82,
                                       *((unsigned int *)FirstBestSecondaryTarget + 6)),
              v42 = PathSourceFromTarget,
              PathSourceFromTarget == -1)
          || DMMVIDPNTOPOLOGY::IsSourceInTopology(v78, PathSourceFromTarget)
          || (v44 = VIDPN_MGR::AddPathToVidPnTopology(
                      v84,
                      v43,
                      v42,
                      *((_DWORD *)FirstBestSecondaryTarget + 6),
                      (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                      0xFFFFu,
                      0,
                      D3DKMDT_MCC_IGNORE),
              v12 = v44,
              v44 == -1071774975) )
        {
          v3 = this;
        }
        else
        {
          if ( v44 < 0 )
          {
            v60 = (_QWORD *)WdLogNewEntry5_WdError(v45);
            v60[3] = v12;
            v60[4] = *((int *)a2 + 68);
            v60[5] = *((unsigned int *)a2 + 67);
            v60[6] = v42;
            goto LABEL_93;
          }
          v46 = !v88 || !v87;
          v3 = this;
          v47 = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                  this,
                  (const struct _LUID *)((char *)a2 + 268),
                  v42,
                  *((_DWORD *)FirstBestSecondaryTarget + 6),
                  (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)FirstBestSecondaryTarget + 20),
                  (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)FirstBestSecondaryTarget + 21),
                  v46);
          v48 = v77;
          LODWORD(v12) = v47;
          if ( v47 >= 0 )
            v48 = v47;
          v77 = v48;
        }
        goto LABEL_73;
      }
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v27);
        *(_QWORD *)(v28 + 24) = 7392LL;
        WdLogEvent5_WdAssertion(v28);
      }
      v29 = *((_QWORD *)a2 + 288);
      if ( !v29 )
      {
LABEL_139:
        v73 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v73 + 24) = 7397LL;
        WdLogEvent5_WdError(v73);
        LODWORD(v12) = -1073741811;
LABEL_140:
        v60 = (_QWORD *)WdLogNewEntry5_WdError(v26);
        v74 = *((unsigned int *)FirstBestSecondaryTarget + 6);
        v60[4] = a2;
        v60[3] = v74;
        goto LABEL_141;
      }
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
      {
        v31 = WdLogNewEntry5_WdAssertion(v30);
        WdLogEvent5_WdAssertion(v31);
      }
      if ( !*((_QWORD *)a2 + 288) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v30);
        WdLogEvent5_WdAssertion(v32);
      }
      v33 = *(struct _FAST_MUTEX **)(*((_QWORD *)a2 + 288) + 96LL);
      if ( v33 )
      {
        v81 = 0LL;
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v33, v25, 1, (ULONG **)&v81);
        if ( MonitorInstance == -1073741275 )
        {
          v36 = WdLogNewEntry5_WdDmmEvent(v26);
          *(_QWORD *)(v36 + 24) = v25;
          *(_QWORD *)(v36 + 32) = a2;
          WdLogEvent5_WdDmmEvent(v36);
          MonitorInstance = -1073741632;
        }
        else
        {
          if ( MonitorInstance >= 0 )
          {
            v37 = v81;
            if ( !v81 || *((_DWORD *)v81 + 104) != 1 )
            {
              v38 = WdLogNewEntry5_WdAssertion(v26);
              WdLogEvent5_WdAssertion(v38);
            }
            if ( !v37 )
            {
              v39 = WdLogNewEntry5_WdAssertion(v26);
              WdLogEvent5_WdAssertion(v39);
            }
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)((char *)v37 + 280), 1u);
            IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v37);
            ExReleaseResourceLite((PERESOURCE)((char *)v37 + 280));
            KeLeaveCriticalRegion();
            MonitorInstance = 0;
          }
          if ( MonitorInstance != -1073741632 )
            goto LABEL_49;
        }
        IsVirtualModeSuportDisabled = 0;
      }
      else
      {
        v34 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v34 + 24) = a2;
        WdLogEvent5_WdError(v34);
        MonitorInstance = -1073741811;
      }
LABEL_49:
      LODWORD(v12) = 0;
      if ( MonitorInstance != -1073741632 )
        LODWORD(v12) = MonitorInstance;
      if ( (int)v12 < 0 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v40 + 24) = (int)v12;
        WdLogEvent5_WdAssertion(v40);
      }
      else if ( IsVirtualModeSuportDisabled )
      {
        v88 = 1;
        v87 = 1;
      }
      else
      {
        v88 = *(_BYTE *)(v29 + 132) == 0;
        v87 = *(_BYTE *)(v29 + 133) == 0;
      }
      v3 = this;
      goto LABEL_58;
    }
  }
LABEL_75:
  FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetFirstBestSecondaryTarget((const struct DMMVIDEOPRESENTTARGETSET *)v22);
  if ( !FirstBestSecondaryTarget )
  {
LABEL_125:
    if ( (_DWORD)v12 == -1071774975 )
      LODWORD(v12) = v21;
    goto LABEL_127;
  }
  v49 = v76;
  while ( 2 )
  {
    v50 = *((unsigned int *)FirstBestSecondaryTarget + 6);
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v78, *((_DWORD *)FirstBestSecondaryTarget + 6))
      || (_DWORD)v50 == *((_DWORD *)v3 + 6)
      && *((_DWORD *)a2 + 67) == *((_DWORD *)v3 + 3)
      && *((_DWORD *)a2 + 68) == *((_DWORD *)v3 + 4)
      || !*((_QWORD *)FirstBestSecondaryTarget + 13) )
    {
      goto LABEL_123;
    }
    if ( (_DWORD)v50 != -1 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
      {
        v52 = WdLogNewEntry5_WdAssertion(v27);
        *(_QWORD *)(v52 + 24) = 7392LL;
        WdLogEvent5_WdAssertion(v52);
      }
      v53 = *((_QWORD *)a2 + 288);
      if ( !v53 )
        goto LABEL_139;
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
      {
        v55 = WdLogNewEntry5_WdAssertion(v54);
        WdLogEvent5_WdAssertion(v55);
      }
      if ( !*((_QWORD *)a2 + 288) )
      {
        v56 = WdLogNewEntry5_WdAssertion(v54);
        WdLogEvent5_WdAssertion(v56);
      }
      v57 = *(struct _FAST_MUTEX **)(*((_QWORD *)a2 + 288) + 96LL);
      if ( v57 )
      {
        v83 = 0LL;
        v59 = MONITOR_MGR::_GetMonitorInstance(v57, v50, 1, (ULONG **)&v83);
        if ( v59 == -1073741275 )
        {
          v61 = WdLogNewEntry5_WdDmmEvent(v26);
          *(_QWORD *)(v61 + 24) = v50;
          *(_QWORD *)(v61 + 32) = a2;
          WdLogEvent5_WdDmmEvent(v61);
          v59 = -1073741632;
        }
        else
        {
          if ( v59 >= 0 )
          {
            v62 = v83;
            if ( !v83 || *((_DWORD *)v83 + 104) != 1 )
            {
              v63 = WdLogNewEntry5_WdAssertion(v26);
              WdLogEvent5_WdAssertion(v63);
            }
            if ( !v62 )
            {
              v64 = WdLogNewEntry5_WdAssertion(v26);
              WdLogEvent5_WdAssertion(v64);
            }
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)((char *)v62 + 280), 1u);
            v49 = DXGMONITOR::_IsVirtualModeSuportDisabled(v62);
            ExReleaseResourceLite((PERESOURCE)((char *)v62 + 280));
            KeLeaveCriticalRegion();
            v59 = 0;
          }
          if ( v59 != -1073741632 )
            goto LABEL_105;
        }
        v49 = 0;
      }
      else
      {
        v58 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v58 + 24) = a2;
        WdLogEvent5_WdError(v58);
        v59 = -1073741811;
      }
LABEL_105:
      LODWORD(v12) = 0;
      if ( v59 != -1073741632 )
        LODWORD(v12) = v59;
      if ( (int)v12 < 0 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v26);
        *(_QWORD *)(v65 + 24) = (int)v12;
        WdLogEvent5_WdAssertion(v65);
      }
      else if ( v49 )
      {
        v88 = 1;
        v87 = 1;
      }
      else
      {
        v88 = *(_BYTE *)(v53 + 132) == 0;
        v87 = *(_BYTE *)(v53 + 133) == 0;
      }
      v3 = this;
      v51 = v78;
      goto LABEL_114;
    }
    LODWORD(v12) = -1073741811;
LABEL_114:
    if ( (int)v12 < 0 )
      goto LABEL_140;
    if ( *((_BYTE *)v3 + 10) && v87 || (v66 = 0, !*(_DWORD *)(*((_QWORD *)a2 + 288) + 80LL)) )
    {
LABEL_122:
      v3 = this;
      goto LABEL_123;
    }
    while ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v51, v66) )
    {
LABEL_121:
      if ( ++v66 >= *(_DWORD *)(*((_QWORD *)a2 + 288) + 80LL) )
        goto LABEL_122;
    }
    v67 = VIDPN_MGR::AddPathToVidPnTopology(
            v84,
            v51,
            v66,
            *((_DWORD *)FirstBestSecondaryTarget + 6),
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu,
            0,
            D3DKMDT_MCC_IGNORE);
    v12 = v67;
    if ( v67 == -1071774975 )
    {
      v51 = v78;
      goto LABEL_121;
    }
    if ( v67 >= 0 )
    {
      v71 = !v88 || !v87;
      v3 = this;
      LODWORD(v12) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                       this,
                       (const struct _LUID *)((char *)a2 + 268),
                       v66,
                       *((_DWORD *)FirstBestSecondaryTarget + 6),
                       (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)FirstBestSecondaryTarget + 20),
                       (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)FirstBestSecondaryTarget + 21),
                       v71);
      v72 = v77;
      if ( (int)v12 >= 0 )
        v72 = v12;
      v77 = v72;
LABEL_123:
      FirstBestSecondaryTarget = BTL_TOPOLOGY_CONSTRUCTOR::_GetNextBestSecondaryTarget(
                                   FirstBestSecondaryTarget,
                                   (const struct DMMVIDEOPRESENTTARGETSET *)v22);
      if ( !FirstBestSecondaryTarget )
      {
        v21 = v77;
        goto LABEL_125;
      }
      continue;
    }
    break;
  }
  v60 = (_QWORD *)WdLogNewEntry5_WdError(v68);
  v60[3] = v12;
  v60[4] = *((int *)a2 + 68);
  v60[5] = *((unsigned int *)a2 + 67);
  v60[6] = v66;
LABEL_93:
  v60[7] = *((unsigned int *)FirstBestSecondaryTarget + 6);
LABEL_141:
  WdLogEvent5_WdError(v60);
LABEL_127:
  if ( v22 )
  {
    v69 = (void (__fastcall ***)(_QWORD, __int64))(v22 + 16);
    v70 = _InterlockedDecrement(v22 + 18);
    if ( !v70 )
    {
      if ( v69 )
        (**v69)(v69, 1LL);
      goto LABEL_146;
    }
    if ( v70 >= 0 )
      goto LABEL_146;
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v69);
    v13[3] = v70;
LABEL_145:
    WdLogEvent5_WdError(v13);
  }
LABEL_146:
  auto_rc<DMMVIDPN>::reset(&v79, 0LL);
  auto_rc<DMMVIDPN>::reset(&v80, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v85[0] + 40LL));
  return (unsigned int)v12;
}
