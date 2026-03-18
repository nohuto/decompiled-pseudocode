/*
 * XREFs of ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C0229D54
 * Callers:
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00D79BC (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0003290 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000452C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004564 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B6B4C (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1W4_D3DK.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B7644 (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B9938 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA1BC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00D7CD4 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C0225120 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02254C4 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::_ExtendTopology(struct CCD_TOPOLOGY *this, const struct CDS_JOURNAL::_ENTRY *a2)
{
  struct _LUID *v3; // r15
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rax
  struct VIDPN_MGR *v18; // rdi
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  struct DMMVIDPNTOPOLOGY *v23; // rdi
  _QWORD *v24; // rax
  unsigned int v25; // r12d
  char IsPrimaryClonePathByModality; // r13
  __int64 v27; // rax
  unsigned __int16 v28; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v30; // r15
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // r15d
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  char v40; // cl
  int v41; // eax
  __int64 v42; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v43; // r15
  __int64 v44; // r8
  __int64 v46; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v47; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v48[8]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v49[32]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v50[88]; // [rsp+88h] [rbp-1h] BYREF
  VIDPN_MGR *v51; // [rsp+F8h] [rbp+6Fh] BYREF
  struct DMMVIDPNTOPOLOGY *v52; // [rsp+100h] [rbp+77h] BYREF
  __int64 v53; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = (struct _LUID *)((char *)a2 + 20);
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v3, &v47);
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
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v48, v6, 0LL);
  LODWORD(v12) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v48);
  if ( (int)v12 < 0 )
    goto LABEL_46;
  v16 = *((_QWORD *)v10 + 307);
  if ( !v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    LODWORD(v12) = -1073741637;
    v17[3] = *((int *)a2 + 6);
    v17[4] = v3->LowPart;
    v17[5] = -1073741637LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_46;
  }
  v51 = *(VIDPN_MGR **)(v16 + 88);
  v18 = v51;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v46, (__int64)v51);
  v53 = 0LL;
  v19 = VIDPN_MGR::CreateClientVidPn(v18, &v53);
  v12 = v19;
  if ( v19 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v21[3] = v12;
    v21[4] = v10;
    v21[5] = *((int *)v10 + 68);
    v21[6] = *((unsigned int *)v10 + 67);
    v22 = *((_QWORD *)this + 8);
    goto LABEL_40;
  }
  v23 = (struct DMMVIDPNTOPOLOGY *)(v53 + 96);
  v52 = (struct DMMVIDPNTOPOLOGY *)(v53 + 96);
  if ( v53 == -96 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v24[3] = v10;
    v24[4] = *((int *)v10 + 68);
    v24[5] = *((unsigned int *)v10 + 67);
    v24[6] = *((_QWORD *)this + 8);
    WdLogEvent5_WdError(v24);
    LODWORD(v12) = -1073741823;
    goto LABEL_45;
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
              v51,
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
LABEL_40:
        v21[7] = v22;
LABEL_41:
        WdLogEvent5_WdError(v21);
        goto LABEL_45;
      }
      v23 = v52;
    }
    ++v25;
  }
  if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v23, *((_DWORD *)a2 + 8)) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v33);
    WdLogEvent5_WdAssertion(v34);
  }
  v35 = 0;
  if ( !*(_DWORD *)(*((_QWORD *)v10 + 307) + 80LL) )
    goto LABEL_28;
  while ( DMMVIDPNTOPOLOGY::IsSourceInTopology(v23, v35) )
  {
LABEL_27:
    if ( ++v35 >= *(_DWORD *)(*((_QWORD *)v10 + 307) + 80LL) )
      goto LABEL_28;
  }
  v36 = VIDPN_MGR::AddPathToVidPnTopology(
          v51,
          v23,
          v35,
          *((_DWORD *)a2 + 8),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_ENFORCE);
  v12 = v36;
  if ( v36 == -1071774975 )
  {
    v23 = v52;
    goto LABEL_27;
  }
  if ( v36 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v37);
    v21[3] = v12;
    v21[4] = *((int *)v10 + 68);
    v38 = *((unsigned int *)v10 + 67);
    goto LABEL_39;
  }
LABEL_28:
  if ( v35 >= *(_DWORD *)(*((_QWORD *)v10 + 307) + 80LL) )
  {
    LODWORD(v12) = -1071774975;
    goto LABEL_45;
  }
  LODWORD(v12) = IsVirtualizationDisabledForTarget(v10, *((_DWORD *)a2 + 8), (bool *)&v51, (bool *)&v52);
  if ( (int)v12 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    v21[3] = *((unsigned int *)a2 + 8);
    v21[4] = v10;
    goto LABEL_41;
  }
  if ( !(_BYTE)v51 || (v40 = 0, !(_BYTE)v52) )
    v40 = 1;
  v41 = CCD_TOPOLOGY::AddPathDescriptor(
          (__int64)this,
          (const struct CDS_JOURNAL::_ENTRY *)((char *)a2 + 20),
          v35,
          *((_DWORD *)a2 + 8),
          v40,
          *((_DWORD *)a2 + 9),
          *((_DWORD *)a2 + 10),
          0,
          (__int64 *)&v51);
  v12 = v41;
  if ( v41 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v42);
    v21[3] = v12;
    v21[4] = *((int *)a2 + 6);
    v38 = *((unsigned int *)a2 + 5);
LABEL_39:
    v21[5] = v38;
    v21[6] = v35;
    v22 = *((unsigned int *)a2 + 8);
    goto LABEL_40;
  }
  v43 = v51;
  if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
              this,
              (const struct _LUID *)v51 + 2,
              *((_DWORD *)v51 + 7),
              (unsigned int *)&v51) >= 0 )
  {
    CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, (unsigned int)v51);
    IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, (unsigned int)v51);
  }
  LOBYTE(v44) = IsPrimaryClonePathByModality;
  CDS_JOURNAL::_FillPathDescriptor(v43, a2, v44, 0, v10);
LABEL_45:
  auto_rc<DMMVIDPN>::reset(&v53, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v46 + 40));
LABEL_46:
  COREACCESS::~COREACCESS((COREACCESS *)v50);
  COREACCESS::~COREACCESS((COREACCESS *)v49);
  DXGADAPTER::ReleaseReferenceNoTracking(v10);
  return (unsigned int)v12;
}
