/*
 * XREFs of ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00A8CB8
 * Callers:
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00A8930 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0101B68 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0003A50 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000BA78 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C00A8EC4 (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_D3DKMT_AUGMENT_CDS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00DFF30 (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E42D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4CB4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C00EA3F8 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C0101554 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C01DE47C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01DE7C4 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01DE884 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01E1984 (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKM.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(
        struct CCD_TOPOLOGY *this,
        struct _D3DKMT_AUGMENT_CDSJ *a2,
        char a3)
{
  unsigned int v3; // edi
  unsigned int i; // ebx
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v10; // rax
  _DWORD *v11; // rcx
  unsigned int v12; // r8d
  int v13; // eax
  _DWORD *v14; // rcx
  bool v15; // r9
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // r11
  unsigned int *v18; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGADAPTER *v25; // r13
  _QWORD *v26; // rax
  int v27; // r15d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  struct VIDPN_MGR *v34; // rbx
  int ClientVidPn; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct DMMVIDPNTOPOLOGY *v38; // rbx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // r12d
  bool j; // r15
  __int64 v43; // rax
  unsigned __int16 v44; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v46; // r15
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  VIDPN_MGR *v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // r12d
  _QWORD *v55; // rax
  __int64 v56; // rdx
  char v57; // cl
  bool v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // [rsp+50h] [rbp-59h] BYREF
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v63; // [rsp+58h] [rbp-51h] BYREF
  __int64 v64; // [rsp+60h] [rbp-49h] BYREF
  struct DXGADAPTER *v65; // [rsp+68h] [rbp-41h]
  unsigned __int64 v66; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v67[8]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v68[32]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v69[88]; // [rsp+A8h] [rbp-1h] BYREF
  VIDPN_MGR *v70; // [rsp+110h] [rbp+67h] BYREF
  struct DMMVIDPNTOPOLOGY *v71; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned int v72; // [rsp+128h] [rbp+7Fh] BYREF

  *((_DWORD *)a2 + 4) = -1;
  v3 = 0;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 6) = -2;
  if ( (*(_DWORD *)a2 & 8) != 0 )
    CCD_TOPOLOGY::DisableDWMCloneAndDWMVirtualMode(this, (struct _LUID *)((char *)a2 + 4), *((_DWORD *)a2 + 3));
  for ( i = 0; ; ++i )
  {
    v8 = *((_QWORD *)this + 8);
    if ( v8 )
      v9 = *(_WORD *)(v8 + 20);
    else
      v9 = 0;
    if ( i >= v9 )
    {
      if ( !a3 )
        return 3223192377LL;
      v18 = (unsigned int *)((char *)a2 + 4);
      Global = DXGGLOBAL::GetGlobal();
      v20 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a2 + 4), &v66);
      v65 = v20;
      v25 = v20;
      if ( !v20 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
        v26[3] = this;
        v26[4] = *((_QWORD *)this + 8);
        v26[5] = *((int *)a2 + 2);
        v26[6] = *v18;
        WdLogEvent5_WdWarning(v26);
        return (unsigned int)-1073741810;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v67, v20, 0LL);
      v27 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v67);
      if ( v27 < 0 )
      {
LABEL_54:
        COREACCESS::~COREACCESS((COREACCESS *)v69);
        COREACCESS::~COREACCESS((COREACCESS *)v68);
        DXGADAPTER::ReleaseReference(v25);
        return (unsigned int)v27;
      }
      v32 = *((_QWORD *)v25 + 285);
      if ( !v32 )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
        v27 = -1073741637;
        v33[3] = *((int *)a2 + 2);
        v33[4] = *v18;
        v33[5] = -1073741637LL;
        WdLogEvent5_WdWarning(v33);
        goto LABEL_54;
      }
      v70 = *(VIDPN_MGR **)(v32 + 88);
      v34 = v70;
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v64, (__int64)v70, v30, v31);
      v62 = 0LL;
      ClientVidPn = VIDPN_MGR::CreateClientVidPn(v34);
      v38 = (struct DMMVIDPNTOPOLOGY *)ClientVidPn;
      if ( ClientVidPn >= 0 )
      {
        v38 = (struct DMMVIDPNTOPOLOGY *)(v62 + 96);
        v71 = (struct DMMVIDPNTOPOLOGY *)(v62 + 96);
        v41 = 0;
        v72 = 0;
        for ( j = 1; ; j = 1 )
        {
          v43 = *((_QWORD *)this + 8);
          v44 = v43 ? *(_WORD *)(v43 + 20) : 0;
          if ( v41 >= v44 )
            break;
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v41);
          v46 = PathDescriptor;
          if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v25 + 67)
            && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v25 + 68) )
          {
            v47 = VIDPN_MGR::AddPathToVidPnTopology(
                    v70,
                    v38,
                    *((_DWORD *)PathDescriptor + 6),
                    *((_DWORD *)PathDescriptor + 7),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    v41,
                    0,
                    D3DKMDT_MCC_IGNORE);
            v38 = (struct DMMVIDPNTOPOLOGY *)v47;
            if ( v47 < 0 )
            {
              v39 = (_QWORD *)WdLogNewEntry5_WdError(v49, v48);
              v39[3] = v38;
              v39[4] = *((int *)v46 + 5);
              v39[5] = *((unsigned int *)v46 + 4);
              v39[6] = *((unsigned int *)v46 + 6);
              v40 = *((unsigned int *)v46 + 7);
              goto LABEL_40;
            }
            v38 = v71;
          }
          v72 = ++v41;
        }
        LODWORD(v38) = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(v38, a2);
        if ( (int)v38 >= 0 )
        {
          v50 = v70;
          _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v70 + 10) + 72LL), 1u);
          v51 = *((_QWORD *)v50 + 10);
          v25 = v65;
          v54 = IsVirtualizationDisabledForTarget(v65, *((unsigned int *)a2 + 4), &v70, &v71);
          if ( v54 >= 0 )
          {
            if ( !(_BYTE)v70 || (v57 = 0, !(_BYTE)v71) )
              v57 = 1;
            v54 = CCD_TOPOLOGY::AddPathDescriptor(
                    this,
                    (const struct _LUID *)((char *)a2 + 4),
                    *((_DWORD *)a2 + 3),
                    *((_DWORD *)a2 + 4),
                    v57,
                    (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 5),
                    (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 6),
                    &v63,
                    0);
            if ( v54 >= 0 )
            {
              if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                          this,
                          (const struct _LUID *)v63 + 2,
                          *((_DWORD *)v63 + 7),
                          &v72) >= 0 )
              {
                CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, v72);
                j = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v72);
              }
              CDS_JOURNAL::FillPathDescriptor(v63, a2, j, v58, v25);
            }
          }
          else
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdError(v53, v52);
            v55[3] = *((unsigned int *)a2 + 4);
            v55[4] = *((int *)a2 + 2);
            v55[5] = *((unsigned int *)a2 + 1);
            WdLogEvent5_WdError(v55);
          }
          v27 = v54;
          if ( v51 )
            ReferenceCounted::Release((ReferenceCounted *)(v51 + 64), v56);
          goto LABEL_53;
        }
      }
      else
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
        v39[3] = v38;
        v39[4] = *((int *)v25 + 68);
        v39[5] = *((unsigned int *)v25 + 67);
        v39[6] = this;
        v40 = *((_QWORD *)this + 8);
LABEL_40:
        v39[7] = v40;
        WdLogEvent5_WdError(v39);
      }
      v27 = (int)v38;
LABEL_53:
      auto_rc<DMMVIDPN>::reset(&v62, 0LL);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v64 + 40), v59, v60, v61);
      goto LABEL_54;
    }
    v10 = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( CCD_TOPOLOGY::IsMatchingSource(v10, (const struct _LUID *)((char *)a2 + 4), *((_DWORD *)a2 + 3)) )
      break;
  }
  *((_DWORD *)a2 + 4) = v11[7];
  *((_DWORD *)a2 + 5) = v11[22];
  v13 = v11[23];
  v14 = (_DWORD *)*((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 6) = v13;
  if ( !v14 )
    return v3;
  if ( (v14[18] & 0x180000) == 0x180000 && !v14[43] && !v14[44] )
    return (unsigned int)CCD_TOPOLOGY::RemoveCloneGroupByModality(this, (const struct _LUID *)((char *)a2 + 4), v12);
  if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
  {
    CDS_JOURNAL::FillPathDescriptor(v16, a2, 1, v15, 0LL);
    return v3;
  }
  return 3223192371LL;
}
