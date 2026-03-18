/*
 * XREFs of ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01FC31C
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00E1628 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000596C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00059A8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000BD9C (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A80A8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8950 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C00DEE60 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00E4674 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C01F755C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01F78F4 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::_ExtendTopology(struct CCD_TOPOLOGY *this, const struct CDS_JOURNAL::_ENTRY *a2)
{
  struct _LUID *v3; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rax
  struct VIDPN_MGR *v18; // rsi
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  struct DMMVIDPNTOPOLOGY *v23; // rbx
  _QWORD *v24; // rax
  unsigned int v25; // r12d
  char IsPrimaryClonePathByModality; // r15
  __int64 v27; // rax
  unsigned __int16 v28; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v30; // rsi
  int v31; // eax
  __int64 v32; // rcx
  struct DMMVIDPNTOPOLOGY *v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // r12d
  VIDPN_MGR *v36; // rsi
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  struct _FAST_MUTEX *v46; // rcx
  __int64 v47; // rax
  char v48; // si
  int MonitorInstance; // eax
  __int64 v50; // rax
  struct DXGMONITOR *v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rax
  char IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v55; // rcx
  char v56; // al
  __int64 v57; // rax
  char v58; // cl
  int v59; // eax
  __int64 v60; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v61; // rsi
  __int64 v62; // r8
  __int64 v64; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v65; // [rsp+58h] [rbp-31h] BYREF
  char v66[8]; // [rsp+60h] [rbp-29h] BYREF
  char v67[32]; // [rsp+68h] [rbp-21h] BYREF
  char v68[88]; // [rsp+88h] [rbp-1h] BYREF
  struct DXGMONITOR *v69; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v70; // [rsp+100h] [rbp+77h] BYREF
  struct DMMVIDPNTOPOLOGY *v71; // [rsp+108h] [rbp+7Fh]

  v3 = (struct _LUID *)((char *)a2 + 20);
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v3, &v65);
  v10 = v6;
  if ( !v6 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v11[3] = this;
    v11[4] = *((_QWORD *)this + 8);
    v11[5] = *((int *)a2 + 6);
    v11[6] = v3->LowPart;
    WdLogEvent5_WdWarning(v11);
    LODWORD(v12) = -1073741810;
    return (unsigned int)v12;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v6, 0LL);
  LODWORD(v12) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v66);
  if ( (int)v12 < 0 )
    goto LABEL_80;
  v16 = *((_QWORD *)v10 + 288);
  if ( !v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    LODWORD(v12) = -1073741637;
    v17[3] = *((int *)a2 + 6);
    v17[4] = v3->LowPart;
    v17[5] = -1073741637LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_80;
  }
  v69 = *(struct DXGMONITOR **)(v16 + 88);
  v18 = v69;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v64, (__int64)v69);
  v70 = 0LL;
  v19 = VIDPN_MGR::CreateClientVidPn(v18, &v70);
  v12 = v19;
  if ( v19 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v21[3] = v12;
    v21[4] = v10;
    v21[5] = *((int *)v10 + 68);
    v21[6] = *((unsigned int *)v10 + 67);
    v22 = *((_QWORD *)this + 8);
    goto LABEL_74;
  }
  v23 = (struct DMMVIDPNTOPOLOGY *)(v70 + 96);
  v71 = (struct DMMVIDPNTOPOLOGY *)(v70 + 96);
  if ( v70 == -96 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v24[3] = v10;
    v24[4] = *((int *)v10 + 68);
    v24[5] = *((unsigned int *)v10 + 67);
    v24[6] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v24);
    LODWORD(v12) = -1073741823;
    goto LABEL_79;
  }
  v25 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v27 = *((_QWORD *)this + 8);
    v28 = v27 ? *(_WORD *)(v27 + 20) : 0;
    if ( v25 >= v28 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v25);
    v30 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v10 + 67)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v10 + 68) )
    {
      v31 = VIDPN_MGR::AddPathToVidPnTopology(
              v69,
              v23,
              *((_DWORD *)PathDescriptor + 6),
              *((_DWORD *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v25,
              0,
              D3DKMDT_MCC_ENFORCE);
      v12 = v31;
      if ( v31 < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v32);
        v21[3] = v12;
        v21[4] = *((int *)v30 + 5);
        v21[5] = *((unsigned int *)v30 + 4);
        v21[6] = *((unsigned int *)v30 + 6);
        v22 = *((unsigned int *)v30 + 7);
LABEL_74:
        v21[7] = v22;
LABEL_75:
        WdLogEvent5_WdError(v21);
        goto LABEL_79;
      }
      v23 = v71;
    }
    ++v25;
  }
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v23, *((_DWORD *)a2 + 8)) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v33);
    WdLogEvent5_WdAssertion(v34);
  }
  v35 = 0;
  if ( !*(_DWORD *)(*((_QWORD *)v10 + 288) + 80LL) )
    goto LABEL_29;
  v36 = v69;
  while ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v23, v35) )
  {
LABEL_28:
    if ( ++v35 >= *(_DWORD *)(*((_QWORD *)v10 + 288) + 80LL) )
      goto LABEL_29;
  }
  v37 = VIDPN_MGR::AddPathToVidPnTopology(
          v36,
          v23,
          v35,
          *((_DWORD *)a2 + 8),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_ENFORCE);
  v12 = v37;
  if ( v37 == -1071774975 )
  {
    v23 = v71;
    goto LABEL_28;
  }
  if ( v37 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v21[3] = v12;
    v21[4] = *((int *)v10 + 68);
    v38 = *((unsigned int *)v10 + 67);
    goto LABEL_73;
  }
LABEL_29:
  if ( v35 >= *(_DWORD *)(*((_QWORD *)v10 + 288) + 80LL) )
  {
    LODWORD(v12) = -1071774975;
    goto LABEL_79;
  }
  v39 = *((unsigned int *)a2 + 8);
  if ( (_DWORD)v39 == -1 )
  {
    LODWORD(v12) = -1073741811;
    goto LABEL_64;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v40);
    *(_QWORD *)(v41 + 24) = 7392LL;
    WdLogEvent5_WdAssertion(v41);
  }
  v71 = (struct DMMVIDPNTOPOLOGY *)*((_QWORD *)v10 + 288);
  if ( !v71 )
  {
    v42 = WdLogNewEntry5_WdError(v40);
    *(_QWORD *)(v42 + 24) = 7397LL;
    WdLogEvent5_WdError(v42);
    LODWORD(v12) = -1073741811;
    goto LABEL_66;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v43);
    WdLogEvent5_WdAssertion(v44);
  }
  if ( !*((_QWORD *)v10 + 288) )
  {
    v45 = WdLogNewEntry5_WdAssertion(v43);
    WdLogEvent5_WdAssertion(v45);
  }
  v46 = *(struct _FAST_MUTEX **)(*((_QWORD *)v10 + 288) + 96LL);
  if ( !v46 )
  {
    v47 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v47 + 24) = v10;
    WdLogEvent5_WdError(v47);
    v48 = (char)v69;
    MonitorInstance = -1073741811;
    goto LABEL_56;
  }
  v69 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v46, v39, 1, (ULONG **)&v69);
  if ( MonitorInstance == -1073741275 )
  {
    v50 = WdLogNewEntry5_WdDmmEvent(v33);
    *(_QWORD *)(v50 + 24) = v39;
    *(_QWORD *)(v50 + 32) = v10;
    WdLogEvent5_WdDmmEvent(v50);
    MonitorInstance = -1073741632;
    goto LABEL_55;
  }
  if ( MonitorInstance >= 0 )
  {
    v51 = v69;
    if ( !v69 || *((_DWORD *)v69 + 104) != 1 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v33);
      WdLogEvent5_WdAssertion(v52);
    }
    if ( !v51 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v33);
      WdLogEvent5_WdAssertion(v53);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v51 + 280), 1u);
    IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v51);
    v55 = (struct _ERESOURCE *)((char *)v51 + 280);
    v48 = IsVirtualModeSuportDisabled;
    ExReleaseResourceLite(v55);
    KeLeaveCriticalRegion();
    MonitorInstance = 0;
  }
  else
  {
    v48 = (char)v69;
  }
  if ( MonitorInstance == -1073741632 )
LABEL_55:
    v48 = 0;
LABEL_56:
  LODWORD(v12) = 0;
  if ( MonitorInstance != -1073741632 )
    LODWORD(v12) = MonitorInstance;
  if ( (int)v12 < 0 )
  {
    v57 = WdLogNewEntry5_WdAssertion(v33);
    *(_QWORD *)(v57 + 24) = (int)v12;
    WdLogEvent5_WdAssertion(v57);
LABEL_64:
    v56 = (char)v69;
    LOBYTE(v33) = (_BYTE)v69;
    goto LABEL_65;
  }
  if ( v48 )
  {
    v56 = 1;
    LOBYTE(v33) = 1;
  }
  else
  {
    v33 = v71;
    v56 = *((_BYTE *)v71 + 132) == 0;
    LOBYTE(v33) = *((_BYTE *)v71 + 133) == 0;
  }
LABEL_65:
  if ( (int)v12 < 0 )
  {
LABEL_66:
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v33);
    v21[3] = *((unsigned int *)a2 + 8);
    v21[4] = v10;
    goto LABEL_75;
  }
  v58 = !v56 || !(_BYTE)v33;
  v59 = CCD_TOPOLOGY::AddPathDescriptor(
          this,
          (const struct _LUID *)((char *)a2 + 20),
          v35,
          *((_DWORD *)a2 + 8),
          v58,
          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 9),
          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 10),
          &v69,
          0);
  v12 = v59;
  if ( v59 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v60);
    v21[3] = v12;
    v21[4] = *((int *)a2 + 6);
    v38 = *((unsigned int *)a2 + 5);
LABEL_73:
    v21[5] = v38;
    v21[6] = v35;
    v22 = *((unsigned int *)a2 + 8);
    goto LABEL_74;
  }
  v61 = v69;
  if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
              this,
              (const struct _LUID *)v69 + 2,
              *((_DWORD *)v69 + 7),
              (unsigned int *)&v69) >= 0 )
  {
    CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, (unsigned int)v69);
    IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, (unsigned int)v69);
  }
  LOBYTE(v62) = IsPrimaryClonePathByModality;
  CDS_JOURNAL::_FillPathDescriptor(v61, a2, v62, 0, v10);
LABEL_79:
  auto_rc<DMMVIDPN>::reset(&v70, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v64 + 40));
LABEL_80:
  COREACCESS::~COREACCESS((COREACCESS *)v68);
  COREACCESS::~COREACCESS((COREACCESS *)v67);
  DXGADAPTER::ReleaseReferenceNoTracking(v10);
  return (unsigned int)v12;
}
