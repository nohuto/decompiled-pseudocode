/*
 * XREFs of ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00E5108
 * Callers:
 *     ?_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00E5360 (-_FillTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01009D8 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x1C000BD9C (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A80A8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8950 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C00DEE60 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C00E4F5C (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z @ 0x1C01005D8 (-DisableDWMCloneAndDWMVirtualMode@CCD_TOPOLOGY@@QEAAJPEAU_LUID@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C01F755C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x1C01F78F4 (-RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x1C01F79D8 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01FC05C (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(
        struct CCD_TOPOLOGY *this,
        struct D3DKMT_AUGMENT_CDSJ *a2,
        char a3)
{
  unsigned int v3; // esi
  unsigned int i; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v10; // rax
  unsigned int v11; // r8d
  const struct _LUID *v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // r9
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // r11
  unsigned int *v17; // rbx
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  DXGADAPTER *v23; // r14
  _QWORD *v24; // rax
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  _QWORD *v30; // rax
  struct VIDPN_MGR *v31; // rdi
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
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v42; // rdi
  int v43; // eax
  __int64 v44; // rcx
  VIDPN_MGR *v45; // rcx
  __int64 v46; // r12
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rax
  char *v50; // rdi
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  struct _FAST_MUTEX *v56; // rcx
  __int64 v57; // rax
  int MonitorInstance; // eax
  __int64 v59; // rax
  struct DXGMONITOR *v60; // r12
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  char v64; // cl
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v65; // r12
  __int64 v66; // r9
  char IsPrimaryClonePathByModality; // al
  void (__fastcall ***v68)(_QWORD, __int64); // rcx
  int v69; // ebx
  __int64 v70; // rax
  unsigned int j; // [rsp+54h] [rbp-75h] BYREF
  __int64 v72; // [rsp+58h] [rbp-71h] BYREF
  char *v73; // [rsp+60h] [rbp-69h]
  struct DXGMONITOR *v74; // [rsp+68h] [rbp-61h] BYREF
  DXGADAPTER *v75; // [rsp+70h] [rbp-59h]
  unsigned __int64 v76; // [rsp+78h] [rbp-51h] BYREF
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v77; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v78[3]; // [rsp+88h] [rbp-41h] BYREF
  char v79[8]; // [rsp+A0h] [rbp-29h] BYREF
  char v80[32]; // [rsp+A8h] [rbp-21h] BYREF
  char v81[88]; // [rsp+C8h] [rbp-1h] BYREF
  VIDPN_MGR *v82; // [rsp+130h] [rbp+67h]
  struct DMMVIDPNTOPOLOGY *v83; // [rsp+138h] [rbp+6Fh]
  bool v84; // [rsp+148h] [rbp+7Fh]

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
      v19 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)a2 + 4), &v76);
      v75 = v19;
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
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v79, v19, 0LL);
      v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v79);
      if ( v25 < 0 )
      {
LABEL_94:
        COREACCESS::~COREACCESS((COREACCESS *)v81);
        COREACCESS::~COREACCESS((COREACCESS *)v80);
        DXGADAPTER::ReleaseReferenceNoTracking(v23);
        return (unsigned int)v25;
      }
      v29 = *((_QWORD *)v23 + 288);
      v73 = (char *)v23 + 2304;
      if ( !v29 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
        v25 = -1073741637;
        v30[3] = *((int *)a2 + 2);
        v30[4] = *v17;
        v30[5] = -1073741637LL;
        WdLogEvent5_WdWarning(v30);
        goto LABEL_94;
      }
      v31 = *(struct VIDPN_MGR **)(v29 + 88);
      v82 = v31;
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v78, (__int64)v31);
      v72 = 0LL;
      v32 = VIDPN_MGR::CreateClientVidPn(v31, &v72);
      v34 = (struct DMMVIDPNTOPOLOGY *)v32;
      if ( v32 < 0 )
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
        goto LABEL_32;
      }
      v34 = (struct DMMVIDPNTOPOLOGY *)(v72 + 96);
      v83 = (struct DMMVIDPNTOPOLOGY *)(v72 + 96);
      if ( v72 == -96 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdError(v33);
        v37[3] = v23;
        v37[4] = *((int *)v23 + 68);
        v37[5] = *((unsigned int *)v23 + 67);
        v37[6] = this;
        v37[7] = *((_QWORD *)this + 8);
        WdLogEvent5_WdError(v37);
        LODWORD(v34) = -1073741823;
LABEL_32:
        v25 = (int)v34;
LABEL_93:
        auto_rc<DMMVIDPN>::reset(&v72, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v78[0] + 40LL));
        goto LABEL_94;
      }
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
                  v82,
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
          v34 = v83;
        }
        ++v38;
      }
      LODWORD(v34) = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(v34, a2);
      if ( (int)v34 < 0 )
        goto LABEL_32;
      v45 = v82;
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v82 + 10) + 72LL));
      v46 = *((unsigned int *)a2 + 4);
      v47 = *((_QWORD *)v82 + 10);
      v23 = v75;
      v78[1] = v47;
      if ( (_DWORD)v46 == -1 )
      {
        v25 = -1073741811;
        goto LABEL_77;
      }
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v75) )
      {
        v49 = WdLogNewEntry5_WdAssertion(v48);
        *(_QWORD *)(v49 + 24) = 7392LL;
        WdLogEvent5_WdAssertion(v49);
      }
      v50 = v73;
      v73 = *(char **)v73;
      if ( !v73 )
      {
        v51 = WdLogNewEntry5_WdError(v48);
        *(_QWORD *)(v51 + 24) = 7397LL;
        WdLogEvent5_WdError(v51);
        v25 = -1073741811;
        goto LABEL_51;
      }
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v23) )
      {
        v54 = WdLogNewEntry5_WdAssertion(v53);
        WdLogEvent5_WdAssertion(v54);
      }
      if ( !*(_QWORD *)v50 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v53);
        WdLogEvent5_WdAssertion(v55);
      }
      v56 = *(struct _FAST_MUTEX **)(*(_QWORD *)v50 + 96LL);
      if ( v56 )
      {
        v74 = 0LL;
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v56, v46, 1, (ULONG **)&v74);
        if ( MonitorInstance == -1073741275 )
        {
          v59 = WdLogNewEntry5_WdDmmEvent(v45);
          *(_QWORD *)(v59 + 24) = v46;
          *(_QWORD *)(v59 + 32) = v23;
          WdLogEvent5_WdDmmEvent(v59);
          MonitorInstance = -1073741632;
        }
        else
        {
          if ( MonitorInstance >= 0 )
          {
            v60 = v74;
            if ( !v74 || *((_DWORD *)v74 + 104) != 1 )
            {
              v61 = WdLogNewEntry5_WdAssertion(v45);
              WdLogEvent5_WdAssertion(v61);
            }
            if ( !v60 )
            {
              v62 = WdLogNewEntry5_WdAssertion(v45);
              WdLogEvent5_WdAssertion(v62);
            }
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)((char *)v60 + 280), 1u);
            LOBYTE(v82) = DXGMONITOR::_IsVirtualModeSuportDisabled(v60);
            ExReleaseResourceLite((PERESOURCE)((char *)v60 + 280));
            KeLeaveCriticalRegion();
            MonitorInstance = 0;
          }
          if ( MonitorInstance != -1073741632 )
            goto LABEL_69;
        }
        LOBYTE(v82) = 0;
      }
      else
      {
        v57 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v57 + 24) = v23;
        WdLogEvent5_WdError(v57);
        MonitorInstance = -1073741811;
      }
LABEL_69:
      v25 = 0;
      if ( MonitorInstance != -1073741632 )
        v25 = MonitorInstance;
      if ( v25 < 0 )
      {
        v63 = WdLogNewEntry5_WdAssertion(v45);
        *(_QWORD *)(v63 + 24) = v25;
        WdLogEvent5_WdAssertion(v63);
      }
      else if ( (_BYTE)v82 )
      {
        LOBYTE(v83) = 1;
        v84 = 1;
      }
      else
      {
        LOBYTE(v83) = v73[132] == 0;
        v84 = v73[133] == 0;
      }
LABEL_77:
      if ( v25 >= 0 )
      {
        if ( !(_BYTE)v83 || (v64 = 0, !v84) )
          v64 = 1;
        v25 = CCD_TOPOLOGY::AddPathDescriptor(
                this,
                (const struct _LUID *)((char *)a2 + 4),
                *((_DWORD *)a2 + 3),
                *((_DWORD *)a2 + 4),
                v64,
                (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 5),
                (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 6),
                &v77,
                0);
        if ( v25 >= 0 )
        {
          v65 = v77;
          if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                      this,
                      (const struct _LUID *)v77 + 2,
                      *((_DWORD *)v77 + 7),
                      &j) < 0 )
          {
            IsPrimaryClonePathByModality = 1;
          }
          else
          {
            CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(this, j);
            IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j);
          }
          CDS_JOURNAL::FillPathDescriptor(v65, a2, IsPrimaryClonePathByModality, v66, v23);
        }
        goto LABEL_86;
      }
LABEL_51:
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v45);
      v52[3] = *((unsigned int *)a2 + 4);
      v52[4] = *((int *)a2 + 2);
      v52[5] = *((unsigned int *)a2 + 1);
      WdLogEvent5_WdError(v52);
LABEL_86:
      if ( v47 )
      {
        v68 = (void (__fastcall ***)(_QWORD, __int64))(v47 + 64);
        v69 = _InterlockedDecrement((volatile signed __int32 *)(v47 + 72));
        if ( v69 )
        {
          if ( v69 < 0 )
          {
            v70 = WdLogNewEntry5_WdError(v68);
            *(_QWORD *)(v70 + 24) = v69;
            WdLogEvent5_WdError(v70);
          }
        }
        else if ( v68 )
        {
          (**v68)(v68, 1LL);
        }
        v23 = v75;
      }
      goto LABEL_93;
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
