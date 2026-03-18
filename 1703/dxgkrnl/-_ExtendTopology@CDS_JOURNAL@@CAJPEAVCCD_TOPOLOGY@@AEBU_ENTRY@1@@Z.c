/*
 * XREFs of ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01E1C44
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00A8B70 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A87C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A8B8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000BA78 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00ABC54 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDX.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00DFF30 (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E42D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4CB4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C00EA3F8 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C01DE47C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01DE7C4 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::_ExtendTopology(
        struct CCD_TOPOLOGY *this,
        const struct CDS_JOURNAL::_ENTRY *a2,
        __int64 a3,
        __int64 a4)
{
  struct _LUID *v5; // r15
  DXGGLOBAL *Global; // rax
  __int64 v8; // r9
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  struct VIDPN_MGR *v23; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rcx
  struct DMMVIDPNTOPOLOGY *v33; // rdi
  _QWORD *v34; // rax
  unsigned int v35; // r12d
  bool IsPrimaryClonePathByModality; // r13
  __int64 v37; // rax
  unsigned __int16 v38; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v40; // r15
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  unsigned int v49; // r15d
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  char v56; // cl
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v60; // r15
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v67; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v68; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v69[8]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v70[32]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v71[88]; // [rsp+88h] [rbp-1h] BYREF
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v72; // [rsp+F8h] [rbp+6Fh] BYREF
  struct DMMVIDPNTOPOLOGY *v73; // [rsp+100h] [rbp+77h] BYREF
  __int64 v74; // [rsp+108h] [rbp+7Fh] BYREF

  v5 = (struct _LUID *)((char *)a2 + 20);
  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2, a3, a4);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v5, &v68, v8);
  v14 = (__int64)v9;
  if ( !v9 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    v15[3] = this;
    v15[4] = *((_QWORD *)this + 8);
    v15[5] = *((int *)a2 + 6);
    v15[6] = v5->LowPart;
    WdLogEvent5_WdWarning(v15);
    LODWORD(v16) = -1073741810;
    return (unsigned int)v16;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v69, v9, 0LL);
  LODWORD(v16) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v69);
  if ( (int)v16 < 0 )
    goto LABEL_46;
  v21 = *(_QWORD *)(v14 + 2280);
  if ( !v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    LODWORD(v16) = -1073741637;
    v22[3] = *((int *)a2 + 6);
    v22[4] = v5->LowPart;
    v22[5] = -1073741637LL;
    WdLogEvent5_WdWarning(v22);
    goto LABEL_46;
  }
  v72 = *(struct _D3DKMT_PATHMODALITY_DESCRIPTOR **)(v21 + 88);
  v23 = v72;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v67, (__int64)v72, v19, v20);
  v74 = 0LL;
  v26 = VIDPN_MGR::CreateClientVidPn(v23, &v74, v24, v25);
  v16 = v26;
  if ( v26 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
    v31[3] = v16;
    v31[4] = v14;
    v31[5] = *(int *)(v14 + 272);
    v31[6] = *(unsigned int *)(v14 + 268);
    v32 = *((_QWORD *)this + 8);
    goto LABEL_40;
  }
  v33 = (struct DMMVIDPNTOPOLOGY *)(v74 + 96);
  v73 = (struct DMMVIDPNTOPOLOGY *)(v74 + 96);
  if ( v74 == -96 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
    v34[3] = v14;
    v34[4] = *(int *)(v14 + 272);
    v34[5] = *(unsigned int *)(v14 + 268);
    v34[6] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v34);
    LODWORD(v16) = -1073741823;
    goto LABEL_45;
  }
  v35 = 0;
  IsPrimaryClonePathByModality = 1;
  while ( 1 )
  {
    v37 = *((_QWORD *)this + 8);
    v38 = v37 ? *(_WORD *)(v37 + 20) : 0;
    if ( v35 >= v38 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v35, v29, v30);
    v40 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *(_DWORD *)(v14 + 268)
      && *((_DWORD *)PathDescriptor + 5) == *(_DWORD *)(v14 + 272) )
    {
      v41 = VIDPN_MGR::AddPathToVidPnTopology(
              v72,
              v33,
              *((unsigned int *)PathDescriptor + 6),
              *((unsigned int *)PathDescriptor + 7),
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              v35,
              0,
              D3DKMDT_MCC_ENFORCE);
      v16 = v41;
      if ( v41 < 0 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
        v31[3] = v16;
        v31[4] = *((int *)v40 + 5);
        v31[5] = *((unsigned int *)v40 + 4);
        v31[6] = *((unsigned int *)v40 + 6);
        v32 = *((unsigned int *)v40 + 7);
LABEL_40:
        v31[7] = v32;
LABEL_41:
        WdLogEvent5_WdError(v31);
        goto LABEL_45;
      }
      v33 = v73;
    }
    ++v35;
  }
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v33, *((_DWORD *)a2 + 8)) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
    WdLogEvent5_WdAssertion(v48);
  }
  v49 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)(v14 + 2280) + 80LL) )
    goto LABEL_28;
  while ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v33, v49) )
  {
LABEL_27:
    if ( ++v49 >= *(_DWORD *)(*(_QWORD *)(v14 + 2280) + 80LL) )
      goto LABEL_28;
  }
  v50 = VIDPN_MGR::AddPathToVidPnTopology(
          v72,
          v33,
          v49,
          *((unsigned int *)a2 + 8),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_ENFORCE);
  v16 = v50;
  if ( v50 == -1071774975 )
  {
    v33 = v73;
    goto LABEL_27;
  }
  if ( v50 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51);
    v31[3] = v16;
    v31[4] = *(int *)(v14 + 272);
    v53 = *(unsigned int *)(v14 + 268);
    goto LABEL_39;
  }
LABEL_28:
  if ( v49 >= *(_DWORD *)(*(_QWORD *)(v14 + 2280) + 80LL) )
  {
    LODWORD(v16) = -1071774975;
    goto LABEL_45;
  }
  LODWORD(v16) = IsVirtualizationDisabledForTarget(v14, *((unsigned int *)a2 + 8), (bool *)&v72, (bool *)&v73);
  if ( (int)v16 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v55, v54);
    v31[3] = *((unsigned int *)a2 + 8);
    v31[4] = v14;
    goto LABEL_41;
  }
  if ( !(_BYTE)v72 || (v56 = 0, !(_BYTE)v73) )
    v56 = 1;
  v57 = CCD_TOPOLOGY::AddPathDescriptor(
          this,
          (const struct _LUID *)((char *)a2 + 20),
          v49,
          *((_DWORD *)a2 + 8),
          v56,
          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 9),
          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 10),
          &v72,
          0);
  v16 = v57;
  if ( v57 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58);
    v31[3] = v16;
    v31[4] = *((int *)a2 + 6);
    v53 = *((unsigned int *)a2 + 5);
LABEL_39:
    v31[5] = v53;
    v31[6] = v49;
    v32 = *((unsigned int *)a2 + 8);
    goto LABEL_40;
  }
  v60 = v72;
  if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
              this,
              (const struct _LUID *)v72 + 2,
              *((unsigned int *)v72 + 7),
              (unsigned int *)&v72) >= 0 )
  {
    CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(
      (const struct _D3DKMT_GETPATHSMODALITY **)this,
      (unsigned int)v72,
      v61,
      v62);
    IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, (unsigned int)v72);
  }
  LOBYTE(v61) = IsPrimaryClonePathByModality;
  CDS_JOURNAL::_FillPathDescriptor(v60, a2, v61, 0LL, (struct DXGADAPTER *)v14);
LABEL_45:
  auto_rc<DMMVIDPN>::reset(&v74, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v67 + 40), v63, v64, v65);
LABEL_46:
  COREACCESS::~COREACCESS((COREACCESS *)v71);
  COREACCESS::~COREACCESS((COREACCESS *)v70);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v14);
  return (unsigned int)v16;
}
