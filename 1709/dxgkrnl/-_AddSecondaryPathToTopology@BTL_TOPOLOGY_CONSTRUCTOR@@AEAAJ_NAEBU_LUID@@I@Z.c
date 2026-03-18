/*
 * XREFs of ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01FA7C4
 * Callers:
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01FAFA0 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01FB08C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01FB6F4 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01FB790 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
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
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0008364 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A80A8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A881C (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00A8950 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00B05A0 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1E@Z @ 0x1C01FA770 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C01FBCB8 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
        CCD_TOPOLOGY **this,
        char a2,
        const struct _LUID *a3,
        unsigned int a4)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // rsi
  _QWORD *v13; // rax
  struct DMMVIDEOPRESENTTARGET *v14; // rdi
  VIDPN_MGR *v15; // r12
  int ClientVidPn; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  unsigned int i; // r14d
  __int64 v21; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rbx
  unsigned int v24; // r8d
  unsigned int v25; // r9d
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rbx
  unsigned int v30; // r14d
  __int64 v31; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r13
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 *v37; // r14
  __int64 v38; // r12
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  struct _FAST_MUTEX *v43; // rcx
  __int64 v44; // rax
  int MonitorInstance; // eax
  __int64 v46; // rax
  struct DXGMONITOR *v47; // r14
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  int IsTargetForcable; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  struct DMMVIDPNTOPOLOGY *v55; // r12
  unsigned int v56; // eax
  unsigned int v57; // ecx
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  void (__fastcall ***v64)(_QWORD, __int64); // rcx
  int v65; // ebx
  __int64 v66; // rax
  char v68[8]; // [rsp+48h] [rbp-99h] BYREF
  struct DMMVIDEOPRESENTTARGET *v69; // [rsp+50h] [rbp-91h]
  unsigned int v70[2]; // [rsp+58h] [rbp-89h]
  __int64 v71; // [rsp+60h] [rbp-81h] BYREF
  const struct DMMVIDPN *v72; // [rsp+68h] [rbp-79h] BYREF
  VIDPN_MGR *v73; // [rsp+70h] [rbp-71h]
  DMMVIDPNTOPOLOGY *v74; // [rsp+78h] [rbp-69h]
  struct DXGMONITOR *v75; // [rsp+80h] [rbp-61h] BYREF
  __int64 *v76; // [rsp+88h] [rbp-59h]
  DXGADAPTER *v77; // [rsp+90h] [rbp-51h]
  unsigned __int64 v78; // [rsp+98h] [rbp-49h] BYREF
  _QWORD v79[3]; // [rsp+A0h] [rbp-41h] BYREF
  char v80[8]; // [rsp+B8h] [rbp-29h] BYREF
  char v81[32]; // [rsp+C0h] [rbp-21h] BYREF
  char v82[88]; // [rsp+E0h] [rbp-1h] BYREF

  LOBYTE(v70[0]) = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3, &v78);
  v77 = v8;
  v12 = v8;
  if ( !v8 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v13[3] = *this;
    v13[4] = *((_QWORD *)*this + 8);
    v13[5] = a3->HighPart;
    v13[6] = a3->LowPart;
    WdLogEvent5_WdWarning(v13);
    LODWORD(v14) = -1073741810;
    return (unsigned int)v14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v80, v8, 0LL);
  LODWORD(v14) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v80);
  if ( (int)v14 < 0 )
    goto LABEL_108;
  v76 = (__int64 *)((char *)v12 + 2304);
  v73 = *(VIDPN_MGR **)(*((_QWORD *)v12 + 288) + 88LL);
  v15 = v73;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v79, (__int64)v73);
  v72 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v73, (__int64 *)&v72);
  v14 = (struct DMMVIDEOPRESENTTARGET *)ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v18[3] = v14;
    v18[4] = v12;
    v18[5] = *((int *)v12 + 68);
    v18[6] = *((unsigned int *)v12 + 67);
    v18[7] = this;
LABEL_19:
    WdLogEvent5_WdError(v18);
    goto LABEL_107;
  }
  v74 = (const struct DMMVIDPN *)((char *)v72 + 96);
  if ( v72 == (const struct DMMVIDPN *)-96LL )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v19[3] = v12;
    v19[4] = *((int *)v12 + 68);
    v19[5] = *((unsigned int *)v12 + 67);
    v19[6] = this;
    WdLogEvent5_WdError(v19);
    LODWORD(v14) = -1073741823;
    goto LABEL_107;
  }
  for ( i = 0; ; ++i )
  {
    v21 = *((_QWORD *)*this + 8);
    if ( v21 )
      LOWORD(v21) = *(_WORD *)(v21 + 20);
    if ( i >= (unsigned __int16)v21 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
    v23 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v12 + 67)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v12 + 68) )
    {
      v24 = *((_DWORD *)PathDescriptor + 6);
      v25 = *((_DWORD *)PathDescriptor + 7);
      v26 = LOBYTE(v70[0]);
      if ( v24 == a4 )
        v26 = 1;
      v70[0] = v26;
      v27 = VIDPN_MGR::AddPathToVidPnTopology(
              v15,
              v74,
              v24,
              v25,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v14 = (struct DMMVIDEOPRESENTTARGET *)v27;
      if ( v27 < 0 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v28);
        v18[3] = v14;
        v18[4] = *((int *)v23 + 5);
        v18[5] = *((unsigned int *)v23 + 4);
        v18[6] = *((unsigned int *)v23 + 6);
        v18[7] = *((unsigned int *)v23 + 7);
        goto LABEL_19;
      }
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v15 + 10) + 72LL), 1u);
  v29 = *((_QWORD *)v15 + 10);
  v30 = 0;
  v12 = v77;
  v79[1] = v29;
  v14 = 0LL;
  v69 = 0LL;
  v70[1] = -1;
  v31 = *(_QWORD *)(v29 + 24);
  v68[2] = 0;
  if ( v31 == v29 + 24 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v31 - 8), v31 == 8) )
  {
LABEL_99:
    LODWORD(v14) = -1073741275;
    goto LABEL_100;
  }
  while ( 1 )
  {
    if ( *((_BYTE *)NextTarget + 404) )
      goto LABEL_60;
    v33 = *((unsigned int *)NextTarget + 6);
    if ( DMMVIDPNTOPOLOGY::IsTargetInTopology(v74, *((_DWORD *)NextTarget + 6)) || (_DWORD)v33 == *((_DWORD *)this + 6) )
    {
LABEL_59:
      v14 = v69;
      goto LABEL_60;
    }
    if ( (_DWORD)v33 == -1 )
    {
      LODWORD(v14) = -1073741811;
      goto LABEL_56;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v12) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v36 + 24) = 7392LL;
      WdLogEvent5_WdAssertion(v36);
    }
    v37 = v76;
    v38 = *v76;
    if ( !*v76 )
    {
      v60 = WdLogNewEntry5_WdError(v35);
      *(_QWORD *)(v60 + 24) = 7397LL;
      WdLogEvent5_WdError(v60);
      LODWORD(v14) = -1073741811;
LABEL_89:
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v34);
      v61[3] = v12;
      v61[4] = *((unsigned int *)NextTarget + 6);
LABEL_90:
      WdLogEvent5_WdError(v61);
      goto LABEL_100;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v12) )
    {
      v40 = WdLogNewEntry5_WdAssertion(v39);
      WdLogEvent5_WdAssertion(v40);
    }
    if ( !*v37 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v39);
      WdLogEvent5_WdAssertion(v41);
    }
    v42 = *v37;
    v30 = 0;
    v43 = *(struct _FAST_MUTEX **)(v42 + 96);
    if ( v43 )
    {
      v75 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v43, v33, 1, (ULONG **)&v75);
      if ( MonitorInstance == -1073741275 )
      {
        v46 = WdLogNewEntry5_WdDmmEvent(v34);
        *(_QWORD *)(v46 + 24) = v33;
        *(_QWORD *)(v46 + 32) = v12;
        WdLogEvent5_WdDmmEvent(v46);
        MonitorInstance = -1073741632;
LABEL_51:
        LOBYTE(v34) = 0;
        v68[1] = 0;
        goto LABEL_36;
      }
      if ( MonitorInstance >= 0 )
      {
        v47 = v75;
        if ( !v75 || *((_DWORD *)v75 + 104) != 1 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v34);
          WdLogEvent5_WdAssertion(v48);
        }
        if ( !v47 )
        {
          v49 = WdLogNewEntry5_WdAssertion(v34);
          WdLogEvent5_WdAssertion(v49);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v47 + 280), 1u);
        v68[1] = DXGMONITOR::_IsVirtualModeSuportDisabled(v47);
        ExReleaseResourceLite((PERESOURCE)((char *)v47 + 280));
        KeLeaveCriticalRegion();
        v30 = 0;
        MonitorInstance = 0;
      }
      if ( MonitorInstance == -1073741632 )
        goto LABEL_51;
    }
    else
    {
      v44 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v44 + 24) = v12;
      WdLogEvent5_WdError(v44);
      MonitorInstance = -1073741811;
    }
    LOBYTE(v34) = v68[1];
LABEL_36:
    LODWORD(v14) = 0;
    if ( MonitorInstance != -1073741632 )
      LODWORD(v14) = MonitorInstance;
    if ( (int)v14 < 0 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v34);
      *(_QWORD *)(v50 + 24) = (int)v14;
      WdLogEvent5_WdAssertion(v50);
    }
    else if ( (_BYTE)v34 )
    {
      v68[3] = 1;
      v68[0] = 1;
    }
    else
    {
      v68[3] = *(_BYTE *)(v38 + 132) == 0;
      v68[0] = *(_BYTE *)(v38 + 133) == 0;
    }
    v15 = v73;
LABEL_56:
    if ( (int)v14 < 0 )
      goto LABEL_89;
    if ( LOBYTE(v70[0]) )
    {
      if ( !v68[0] )
        goto LABEL_59;
    }
    else if ( *((_BYTE *)this + 10) && v68[0] )
    {
      goto LABEL_59;
    }
    if ( !*((_QWORD *)NextTarget + 13) )
    {
      if ( !a2 )
        goto LABEL_59;
      IsTargetForcable = DmmIsTargetForcable((__int64)v12, *((_DWORD *)NextTarget + 6), (unsigned __int8 *)&v68[4], 0);
      v14 = (struct DMMVIDEOPRESENTTARGET *)IsTargetForcable;
      if ( IsTargetForcable < 0 )
      {
        v61 = (_QWORD *)WdLogNewEntry5_WdError(v52);
        v61[3] = v14;
        v61[4] = *((int *)v12 + 68);
        v61[5] = *((unsigned int *)v12 + 67);
        v61[6] = *((unsigned int *)NextTarget + 6);
        v61[7] = *((_QWORD *)*this + 8);
        goto LABEL_90;
      }
      if ( !v68[4] )
        goto LABEL_59;
    }
    v14 = v69;
    if ( BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v12, NextTarget, v69) )
    {
      v71 = 0LL;
      v53 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v15, v72, &v71);
      v14 = (struct DMMVIDEOPRESENTTARGET *)v53;
      if ( v53 >= 0 )
      {
        v55 = (struct DMMVIDPNTOPOLOGY *)(v71 + 96);
        if ( v71 == -96 )
        {
          v63 = (_QWORD *)WdLogNewEntry5_WdError(v54);
          v63[3] = v12;
          v63[4] = *((int *)v12 + 68);
          v63[5] = *((unsigned int *)v12 + 67);
          v63[6] = this;
          WdLogEvent5_WdError(v63);
          LODWORD(v14) = -1073741823;
        }
        else
        {
          v56 = a4;
          if ( a4 != -1 )
            v30 = a4;
          while ( 1 )
          {
            if ( v56 == -1 )
            {
              v57 = *(_DWORD *)(*v76 + 80);
              v56 = a4;
            }
            else
            {
              v57 = v56 + 1;
            }
            if ( v30 >= v57 )
            {
              v14 = v69;
              v30 = 0;
LABEL_87:
              auto_rc<DMMVIDPN>::reset(&v71, 0LL);
              goto LABEL_60;
            }
            if ( v56 != -1 || !DMMVIDPNTOPOLOGY::IsSourceInTopology(v55, v30) )
            {
              v58 = VIDPN_MGR::AddPathToVidPnTopology(
                      v73,
                      v55,
                      v30,
                      *((_DWORD *)NextTarget + 6),
                      (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                      0xFFFFu,
                      0,
                      D3DKMDT_MCC_IGNORE);
              v14 = (struct DMMVIDEOPRESENTTARGET *)v58;
              if ( v58 != -1071774975 )
                break;
            }
            v56 = a4;
            ++v30;
          }
          if ( v58 >= 0 )
          {
            v70[1] = v30;
            v14 = NextTarget;
            v30 = 0;
            v69 = NextTarget;
            v68[2] = !v68[3] || !v68[0];
            goto LABEL_87;
          }
          v62 = (_QWORD *)WdLogNewEntry5_WdError(v59);
          v62[3] = v14;
          v62[4] = *((int *)v12 + 68);
          v62[5] = *((unsigned int *)v12 + 67);
          v62[6] = v30;
          v62[7] = *((unsigned int *)NextTarget + 6);
LABEL_95:
          WdLogEvent5_WdError(v62);
        }
        auto_rc<DMMVIDPN>::reset(&v71, 0LL);
        goto LABEL_100;
      }
      v62 = (_QWORD *)WdLogNewEntry5_WdError(v54);
      v62[3] = v14;
      v62[4] = v12;
      v62[5] = *((int *)v12 + 68);
      v62[6] = *((unsigned int *)v12 + 67);
      v62[7] = this;
      goto LABEL_95;
    }
LABEL_60:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v29, NextTarget);
    if ( !NextTarget )
      break;
    v15 = v73;
  }
  if ( !v14 )
    goto LABEL_99;
  LODWORD(v14) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                   (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                   (const struct _LUID *)((char *)v12 + 268),
                   v70[1],
                   *((_DWORD *)v14 + 6),
                   (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v14 + 20),
                   (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)v14 + 21),
                   v68[2]);
LABEL_100:
  if ( v29 )
  {
    v64 = (void (__fastcall ***)(_QWORD, __int64))(v29 + 64);
    v65 = _InterlockedDecrement((volatile signed __int32 *)(v29 + 72));
    if ( v65 )
    {
      if ( v65 < 0 )
      {
        v66 = WdLogNewEntry5_WdError(v64);
        *(_QWORD *)(v66 + 24) = v65;
        WdLogEvent5_WdError(v66);
      }
    }
    else if ( v64 )
    {
      (**v64)(v64, 1LL);
    }
    v12 = v77;
  }
LABEL_107:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v72, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v79[0] + 40LL));
LABEL_108:
  COREACCESS::~COREACCESS((COREACCESS *)v82);
  COREACCESS::~COREACCESS((COREACCESS *)v81);
  DXGADAPTER::ReleaseReferenceNoTracking(v12);
  return (unsigned int)v14;
}
