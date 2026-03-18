/*
 * XREFs of ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C0228370
 * Callers:
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C0228918 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C0228A04 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C0229064 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C0229100 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E20 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000452C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004564 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B7644 (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B9938 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA08C (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00BA1BC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00BA5C4 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1E@Z @ 0x1C022831C (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C0229630 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
        CCD_TOPOLOGY **this,
        char a2,
        const struct _LUID *a3,
        unsigned int a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGADAPTER *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rsi
  VIDPN_MGR *v15; // r12
  int ClientVidPn; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  unsigned int i; // r14d
  __int64 v21; // rax
  unsigned __int16 v22; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rbx
  unsigned int v25; // r8d
  unsigned int v26; // r9d
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rbx
  char v31; // si
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  int *v33; // r13
  _QWORD *v34; // rcx
  unsigned int v35; // edx
  int IsTargetForcable; // eax
  __int64 v37; // rcx
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rcx
  DMMVIDPNTOPOLOGY *v41; // r11
  unsigned int v42; // eax
  unsigned int v43; // r12d
  unsigned int v44; // ecx
  int v45; // eax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  char v51; // [rsp+48h] [rbp-79h]
  bool v52; // [rsp+49h] [rbp-78h] BYREF
  bool v53; // [rsp+4Ah] [rbp-77h] BYREF
  bool v54; // [rsp+4Bh] [rbp-76h] BYREF
  int v55; // [rsp+4Ch] [rbp-75h]
  unsigned int v56; // [rsp+50h] [rbp-71h]
  __int64 v57; // [rsp+58h] [rbp-69h] BYREF
  const struct DMMVIDPN *v58; // [rsp+60h] [rbp-61h] BYREF
  DMMVIDPNTOPOLOGY *v59; // [rsp+68h] [rbp-59h]
  VIDPN_MGR *v60; // [rsp+70h] [rbp-51h]
  struct DXGADAPTER *v61; // [rsp+78h] [rbp-49h]
  unsigned __int64 v62; // [rsp+80h] [rbp-41h] BYREF
  char *v63; // [rsp+88h] [rbp-39h]
  __int64 v64; // [rsp+90h] [rbp-31h] BYREF
  char v65[8]; // [rsp+98h] [rbp-29h] BYREF
  char v66[32]; // [rsp+A0h] [rbp-21h] BYREF
  char v67[88]; // [rsp+C0h] [rbp-1h] BYREF

  LOBYTE(v55) = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3, &v62);
  v61 = v8;
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
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v65, v8, 0LL);
  LODWORD(v14) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v65);
  if ( (int)v14 < 0 )
    goto LABEL_73;
  v63 = (char *)v12 + 2456;
  v60 = *(VIDPN_MGR **)(*((_QWORD *)v12 + 307) + 88LL);
  v15 = v60;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v64, (__int64)v60);
  v58 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v60, (__int64 *)&v58);
  v14 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v18[3] = v14;
    v18[4] = v12;
    v18[5] = *((int *)v12 + 68);
    v18[6] = *((unsigned int *)v12 + 67);
    v18[7] = this;
LABEL_20:
    WdLogEvent5_WdError(v18);
    goto LABEL_72;
  }
  v59 = (const struct DMMVIDPN *)((char *)v58 + 96);
  if ( v58 == (const struct DMMVIDPN *)-96LL )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v19[3] = v12;
    v19[4] = *((int *)v12 + 68);
    v19[5] = *((unsigned int *)v12 + 67);
    v19[6] = this;
    WdLogEvent5_WdError(v19);
    LODWORD(v14) = -1073741823;
    goto LABEL_72;
  }
  for ( i = 0; ; ++i )
  {
    v21 = *((_QWORD *)*this + 8);
    v22 = v21 ? *(_WORD *)(v21 + 20) : 0;
    if ( i >= v22 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
    v24 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v12 + 67)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v12 + 68) )
    {
      v25 = *((_DWORD *)PathDescriptor + 6);
      v26 = *((_DWORD *)PathDescriptor + 7);
      v27 = (unsigned __int8)v55;
      if ( v25 == a4 )
        v27 = 1;
      v55 = v27;
      v28 = VIDPN_MGR::AddPathToVidPnTopology(
              v15,
              v59,
              v25,
              v26,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v14 = v28;
      if ( v28 < 0 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v29);
        v18[3] = v14;
        v18[4] = *((int *)v24 + 5);
        v18[5] = *((unsigned int *)v24 + 4);
        v18[6] = *((unsigned int *)v24 + 6);
        v18[7] = *((unsigned int *)v24 + 7);
        goto LABEL_20;
      }
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v15 + 10) + 72LL), 1u);
  v30 = (_QWORD *)*((_QWORD *)v15 + 10);
  v12 = v61;
  v31 = 0;
  NextTarget = 0LL;
  v56 = -1;
  v33 = 0LL;
  v51 = 0;
  v34 = (_QWORD *)v30[3];
  if ( v34 != v30 + 3 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v34 - 1);
  if ( !NextTarget )
  {
LABEL_70:
    LODWORD(v14) = -1073741275;
    goto LABEL_71;
  }
  while ( 1 )
  {
    if ( *((_DWORD *)NextTarget + 22)
      || DMMVIDPNTOPOLOGY::IsTargetInTopology(v59, *((_DWORD *)NextTarget + 6))
      || v35 == *((_DWORD *)this + 6) )
    {
      goto LABEL_31;
    }
    LODWORD(v14) = IsVirtualizationDisabledForTarget(v12, v35, &v54, &v52);
    if ( (int)v14 < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
      v47[3] = v12;
      v47[4] = *((unsigned int *)NextTarget + 6);
      goto LABEL_69;
    }
    if ( (_BYTE)v55 )
    {
      if ( !v52 )
        goto LABEL_30;
    }
    else if ( *((_BYTE *)this + 10) && v52 )
    {
      goto LABEL_30;
    }
    if ( *((_QWORD *)NextTarget + 13) )
      goto LABEL_40;
    if ( a2 )
      break;
LABEL_30:
    v31 = v51;
LABEL_31:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v30, NextTarget);
    if ( !NextTarget )
    {
      if ( v33 )
      {
        LODWORD(v14) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                         (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                         (struct _LUID *)((char *)v12 + 268),
                         v56,
                         v33[6],
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v33[20],
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v33[21],
                         v31);
        goto LABEL_71;
      }
      goto LABEL_70;
    }
  }
  IsTargetForcable = DmmIsTargetForcable(v12, *((_DWORD *)NextTarget + 6), &v53, 0);
  v14 = IsTargetForcable;
  if ( IsTargetForcable < 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v37);
    v47[3] = v14;
    v47[4] = *((int *)v12 + 68);
    v47[5] = *((unsigned int *)v12 + 67);
    v47[6] = *((unsigned int *)NextTarget + 6);
    v47[7] = *((_QWORD *)*this + 8);
LABEL_69:
    WdLogEvent5_WdError(v47);
    goto LABEL_71;
  }
  if ( !v53 )
    goto LABEL_30;
LABEL_40:
  if ( !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v12, NextTarget, (const struct DMMVIDEOPRESENTTARGET *)v33) )
    goto LABEL_30;
  v57 = 0LL;
  v39 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v15, v58, &v57, v38);
  v14 = v39;
  if ( v39 < 0 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v40);
    v48[3] = v14;
    v48[4] = v12;
    v48[5] = *((int *)v12 + 68);
    v48[6] = *((unsigned int *)v12 + 67);
    v48[7] = this;
    goto LABEL_66;
  }
  v41 = (DMMVIDPNTOPOLOGY *)(v57 + 96);
  v61 = (struct DXGADAPTER *)(v57 + 96);
  if ( v57 == -96 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v40);
    v49[3] = v12;
    v49[4] = *((int *)v12 + 68);
    v49[5] = *((unsigned int *)v12 + 67);
    v49[6] = this;
    WdLogEvent5_WdError(v49);
    LODWORD(v14) = -1073741823;
    goto LABEL_67;
  }
  v42 = a4;
  v43 = 0;
  if ( a4 != -1 )
    v43 = a4;
  while ( 2 )
  {
    if ( v42 == -1 )
    {
      v44 = *(_DWORD *)(*(_QWORD *)v63 + 80LL);
      v42 = a4;
    }
    else
    {
      v44 = v42 + 1;
    }
    if ( v43 >= v44 )
    {
      v31 = v51;
LABEL_61:
      auto_rc<DMMVIDPN>::reset(&v57, 0LL);
      v15 = v60;
      goto LABEL_31;
    }
    if ( v42 == -1 && DMMVIDPNTOPOLOGY::IsSourceInTopology(v41, v43) )
    {
LABEL_53:
      v42 = a4;
      ++v43;
      continue;
    }
    break;
  }
  v45 = VIDPN_MGR::AddPathToVidPnTopology(
          v60,
          v41,
          v43,
          *((_DWORD *)NextTarget + 6),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_IGNORE);
  v14 = v45;
  if ( v45 == -1071774975 )
  {
    v41 = v61;
    goto LABEL_53;
  }
  if ( v45 >= 0 )
  {
    v33 = (int *)NextTarget;
    v56 = v43;
    v31 = !v54 || !v52;
    v51 = v31;
    goto LABEL_61;
  }
  v48 = (_QWORD *)WdLogNewEntry5_WdError(v46);
  v48[3] = v14;
  v48[4] = *((int *)v12 + 68);
  v48[5] = *((unsigned int *)v12 + 67);
  v48[6] = v43;
  v48[7] = *((unsigned int *)NextTarget + 6);
LABEL_66:
  WdLogEvent5_WdError(v48);
LABEL_67:
  auto_rc<DMMVIDPN>::reset(&v57, 0LL);
LABEL_71:
  ReferenceCounted::Release((ReferenceCounted *)(v30 + 8));
LABEL_72:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v58, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v64 + 40));
LABEL_73:
  COREACCESS::~COREACCESS((COREACCESS *)v67);
  COREACCESS::~COREACCESS((COREACCESS *)v66);
  DXGADAPTER::ReleaseReferenceNoTracking(v12);
  return (unsigned int)v14;
}
