/*
 * XREFs of ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D7B0C
 * Callers:
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00D78B0 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0111678 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C0003290 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
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
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C00D7C2C (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C010A128 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C0225120 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C02254C4 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C02256CC (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0229A7C (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(
        struct CCD_TOPOLOGY *this,
        struct D3DKMT_AUGMENT_CDSJ *a2,
        char a3)
{
  unsigned int v3; // edi
  unsigned int i; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v10; // rax
  unsigned int v11; // r8d
  const struct _LUID *v12; // rdx
  _DWORD *v13; // rcx
  bool v14; // r9
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // r11
  unsigned int *v17; // rbx
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  DXGADAPTER *v23; // r13
  _QWORD *v24; // rax
  int v25; // r15d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  _QWORD *v30; // rax
  struct VIDPN_MGR *v31; // r15
  int v32; // eax
  __int64 v33; // rcx
  struct DMMVIDPNTOPOLOGY *v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  unsigned int v38; // r12d
  __int64 v39; // rax
  unsigned __int16 v40; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v42; // r15
  int v43; // eax
  __int64 v44; // rcx
  VIDPN_MGR *v45; // rcx
  char IsPrimaryClonePathByModality; // r12
  __int64 v47; // rbx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  char v50; // cl
  bool v51; // r9
  __int64 v52; // [rsp+50h] [rbp-59h] BYREF
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v53; // [rsp+58h] [rbp-51h] BYREF
  __int64 v54; // [rsp+60h] [rbp-49h] BYREF
  DXGADAPTER *v55; // [rsp+68h] [rbp-41h]
  unsigned __int64 v56; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v57[8]; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v58[32]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v59[88]; // [rsp+A8h] [rbp-1h] BYREF
  VIDPN_MGR *v60; // [rsp+110h] [rbp+67h] BYREF
  struct DMMVIDPNTOPOLOGY *v61; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned int j; // [rsp+128h] [rbp+7Fh] BYREF

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
      v9 = *(unsigned __int16 *)(v8 + 20);
    else
      v9 = 0LL;
    if ( i >= (unsigned __int16)v9 )
    {
      if ( !a3 )
        return 3223192377LL;
      v17 = (unsigned int *)((char *)a2 + 4);
      Global = DXGGLOBAL::GetGlobal(v9);
      v19 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a2 + 4), &v56);
      v55 = v19;
      v23 = v19;
      if ( !v19 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
        v24[3] = this;
        v24[4] = *((_QWORD *)this + 8);
        v24[5] = *((int *)a2 + 2);
        v24[6] = *v17;
        WdLogEvent5_WdWarning(v24);
        return (unsigned int)-1073741810;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v57, v19, 0LL);
      v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v57);
      if ( v25 < 0 )
      {
LABEL_58:
        COREACCESS::~COREACCESS((COREACCESS *)v59);
        COREACCESS::~COREACCESS((COREACCESS *)v58);
        DXGADAPTER::ReleaseReferenceNoTracking(v23);
        return (unsigned int)v25;
      }
      v29 = *((_QWORD *)v23 + 307);
      if ( !v29 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
        v25 = -1073741637;
        v30[3] = *((int *)a2 + 2);
        v30[4] = *v17;
        v30[5] = -1073741637LL;
        WdLogEvent5_WdWarning(v30);
        goto LABEL_58;
      }
      v60 = *(VIDPN_MGR **)(v29 + 88);
      v31 = v60;
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v54, (__int64)v60);
      v52 = 0LL;
      v32 = VIDPN_MGR::CreateClientVidPn(v31, &v52);
      v34 = (struct DMMVIDPNTOPOLOGY *)v32;
      if ( v32 >= 0 )
      {
        v34 = (struct DMMVIDPNTOPOLOGY *)(v52 + 96);
        v61 = (struct DMMVIDPNTOPOLOGY *)(v52 + 96);
        if ( v52 == -96 )
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdError(v33);
          v37[3] = v23;
          v37[4] = *((int *)v23 + 68);
          v37[5] = *((unsigned int *)v23 + 67);
          v37[6] = this;
          v37[7] = *((_QWORD *)this + 8);
          WdLogEvent5_WdError(v37);
          LODWORD(v34) = -1073741823;
        }
        else
        {
          v38 = 0;
          for ( j = 0; ; j = v38 )
          {
            v39 = *((_QWORD *)this + 8);
            v40 = v39 ? *(_WORD *)(v39 + 20) : 0;
            if ( v38 >= v40 )
              break;
            PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v38);
            v42 = PathDescriptor;
            if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v23 + 67)
              && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v23 + 68) )
            {
              v43 = VIDPN_MGR::AddPathToVidPnTopology(
                      v60,
                      v34,
                      *((_DWORD *)PathDescriptor + 6),
                      *((_DWORD *)PathDescriptor + 7),
                      (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                      v38,
                      0,
                      D3DKMDT_MCC_IGNORE);
              v34 = (struct DMMVIDPNTOPOLOGY *)v43;
              if ( v43 < 0 )
              {
                v35 = (_QWORD *)WdLogNewEntry5_WdError(v44);
                v35[3] = v34;
                v35[4] = *((int *)v42 + 5);
                v35[5] = *((unsigned int *)v42 + 4);
                v35[6] = *((unsigned int *)v42 + 6);
                v36 = *((unsigned int *)v42 + 7);
                goto LABEL_44;
              }
              v34 = v61;
            }
            ++v38;
          }
          LODWORD(v34) = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(v34, a2);
          if ( (int)v34 >= 0 )
          {
            v45 = v60;
            IsPrimaryClonePathByModality = 1;
            _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v60 + 10) + 72LL), 1u);
            v47 = *((_QWORD *)v45 + 10);
            v23 = v55;
            v25 = IsVirtualizationDisabledForTarget(v55, *((_DWORD *)a2 + 4), (bool *)&v60, (bool *)&v61);
            if ( v25 >= 0 )
            {
              if ( !(_BYTE)v60 || (v50 = 0, !(_BYTE)v61) )
                v50 = 1;
              v25 = CCD_TOPOLOGY::AddPathDescriptor(
                      (__int64)this,
                      (struct D3DKMT_AUGMENT_CDSJ *)((char *)a2 + 4),
                      *((_DWORD *)a2 + 3),
                      *((_DWORD *)a2 + 4),
                      v50,
                      *((_DWORD *)a2 + 5),
                      *((_DWORD *)a2 + 6),
                      0,
                      (__int64 *)&v53);
              if ( v25 >= 0 )
              {
                if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                            this,
                            (const struct _LUID *)v53 + 2,
                            *((_DWORD *)v53 + 7),
                            &j) >= 0 )
                {
                  CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, j);
                  IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j);
                }
                CDS_JOURNAL::FillPathDescriptor(v53, a2, IsPrimaryClonePathByModality, v51, v23);
              }
            }
            else
            {
              v49 = (_QWORD *)WdLogNewEntry5_WdError(v48);
              v49[3] = *((unsigned int *)a2 + 4);
              v49[4] = *((int *)a2 + 2);
              v49[5] = *((unsigned int *)a2 + 1);
              WdLogEvent5_WdError(v49);
            }
            if ( v47 )
              ReferenceCounted::Release((ReferenceCounted *)(v47 + 64));
            goto LABEL_57;
          }
        }
      }
      else
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v33);
        v35[3] = v34;
        v35[4] = *((int *)v23 + 68);
        v35[5] = *((unsigned int *)v23 + 67);
        v35[6] = this;
        v36 = *((_QWORD *)this + 8);
LABEL_44:
        v35[7] = v36;
        WdLogEvent5_WdError(v35);
      }
      v25 = (int)v34;
LABEL_57:
      auto_rc<DMMVIDPN>::reset(&v52, 0LL);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v54 + 40));
      goto LABEL_58;
    }
    v10 = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v11 = *((_DWORD *)a2 + 3);
    v12 = (const struct _LUID *)((char *)a2 + 4);
    if ( *((_DWORD *)v10 + 6) == v11
      && *((_DWORD *)v10 + 4) == v12->LowPart
      && *((_DWORD *)v10 + 5) == *((_DWORD *)a2 + 2) )
    {
      break;
    }
  }
  v13 = (_DWORD *)*((_QWORD *)a2 + 4);
  *((_DWORD *)a2 + 4) = *((_DWORD *)v10 + 7);
  *((_DWORD *)a2 + 5) = *((_DWORD *)v10 + 22);
  *((_DWORD *)a2 + 6) = *((_DWORD *)v10 + 23);
  if ( !v13 )
    return v3;
  if ( (v13[18] & 0x180000) == 0x180000 && !v13[43] && !v13[44] )
    return (unsigned int)CCD_TOPOLOGY::RemoveCloneGroupByModality(this, v12, v11);
  if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
  {
    CDS_JOURNAL::FillPathDescriptor(v15, a2, 1, v14, 0LL);
    return v3;
  }
  return 3223192371LL;
}
