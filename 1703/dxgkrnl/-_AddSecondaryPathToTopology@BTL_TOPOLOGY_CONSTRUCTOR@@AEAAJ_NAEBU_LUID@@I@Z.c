/*
 * XREFs of ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01E070C
 * Callers:
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01E0CB0 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01E0D9C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01E13E4 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C01E1480 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A87C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A8B8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000C6E8 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00DFF30 (IsVirtualizationDisabledForTarget.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E42D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4B80 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E4CB4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DmmIsTargetForcable @ 0x1C01D6310 (DmmIsTargetForcable.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1E@Z @ 0x1C01E06B8 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGET@@PEBV3@@Z @ 0x1C01E18D8 (-_IsBetterSecondaryTarget@BTL_TOPOLOGY_CONSTRUCTOR@@CA_NAEBVDXGADAPTER@@AEBVDMMVIDEOPRESENTTARGE.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
        CCD_TOPOLOGY **this,
        __int64 a2,
        const struct _LUID *a3,
        __int64 a4)
{
  int v4; // r13d
  DXGGLOBAL *Global; // rax
  __int64 v8; // r9
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGADAPTER *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  VIDPN_MGR *v19; // r12
  __int64 v20; // r8
  __int64 v21; // r9
  int ClientVidPn; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  _QWORD *v26; // rax
  char *v27; // r8
  _QWORD *v28; // rax
  unsigned int i; // r14d
  __int64 v30; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // rbx
  __int64 v39; // r8
  char v40; // si
  int *v41; // r13
  _QWORD *v42; // r14
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  __int64 v44; // rdx
  __int64 v45; // rdx
  int IsTargetForcable; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct DXGADAPTER *v52; // r11
  unsigned int v53; // eax
  unsigned int v54; // r12d
  unsigned int v55; // ecx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  char v66; // [rsp+48h] [rbp-79h]
  bool v67; // [rsp+49h] [rbp-78h] BYREF
  bool v68; // [rsp+4Ah] [rbp-77h] BYREF
  bool v69; // [rsp+4Bh] [rbp-76h] BYREF
  int v70; // [rsp+4Ch] [rbp-75h]
  unsigned int v71; // [rsp+50h] [rbp-71h]
  __int64 v72; // [rsp+58h] [rbp-69h] BYREF
  const struct DMMVIDPN *v73; // [rsp+60h] [rbp-61h] BYREF
  DMMVIDPNTOPOLOGY *v74; // [rsp+68h] [rbp-59h]
  VIDPN_MGR *v75; // [rsp+70h] [rbp-51h]
  struct DXGADAPTER *v76; // [rsp+78h] [rbp-49h]
  unsigned __int64 v77; // [rsp+80h] [rbp-41h] BYREF
  char *v78; // [rsp+88h] [rbp-39h]
  __int64 v79; // [rsp+90h] [rbp-31h] BYREF
  _BYTE v80[8]; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v81[32]; // [rsp+A0h] [rbp-21h] BYREF
  _BYTE v82[88]; // [rsp+C0h] [rbp-1h] BYREF
  char v83; // [rsp+130h] [rbp+6Fh]
  unsigned int v84; // [rsp+140h] [rbp+7Fh]

  v84 = a4;
  v83 = a2;
  v4 = a4;
  LOBYTE(v70) = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, (__int64)a3, a4);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a3, &v77, v8);
  v76 = v9;
  v14 = v9;
  if ( !v9 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    v15[3] = *this;
    v15[4] = *((_QWORD *)*this + 8);
    v15[5] = a3->HighPart;
    v15[6] = a3->LowPart;
    WdLogEvent5_WdWarning(v15);
    LODWORD(v16) = -1073741810;
    return (unsigned int)v16;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v80, v9, 0LL);
  LODWORD(v16) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v80);
  if ( (int)v16 < 0 )
    goto LABEL_72;
  v78 = (char *)v14 + 2280;
  v75 = *(VIDPN_MGR **)(*((_QWORD *)v14 + 285) + 88LL);
  v19 = v75;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v79, (__int64)v75, v17, v18);
  v73 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v75, (__int64 *)&v73, v20, v21);
  v16 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v26[3] = v16;
    v26[4] = v14;
    v26[5] = *((int *)v14 + 68);
    v26[6] = *((unsigned int *)v14 + 67);
    v26[7] = this;
LABEL_19:
    WdLogEvent5_WdError(v26);
    goto LABEL_71;
  }
  v27 = (char *)v73 + 96;
  v74 = (const struct DMMVIDPN *)((char *)v73 + 96);
  if ( v73 == (const struct DMMVIDPN *)-96LL )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v28[3] = v14;
    v28[4] = *((int *)v14 + 68);
    v28[5] = *((unsigned int *)v14 + 67);
    v28[6] = this;
    WdLogEvent5_WdError(v28);
    LODWORD(v16) = -1073741823;
    goto LABEL_71;
  }
  for ( i = 0; ; ++i )
  {
    v30 = *((_QWORD *)*this + 8);
    if ( v30 )
      LOWORD(v30) = *(_WORD *)(v30 + 20);
    if ( i >= (unsigned __int16)v30 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i, (__int64)v27, v25);
    v32 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v14 + 67)
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v14 + 68) )
    {
      v33 = *((unsigned int *)PathDescriptor + 6);
      v34 = *((unsigned int *)PathDescriptor + 7);
      v35 = (unsigned __int8)v70;
      if ( (_DWORD)v33 == v4 )
        v35 = 1;
      v70 = v35;
      v36 = VIDPN_MGR::AddPathToVidPnTopology(
              v19,
              v74,
              v33,
              v34,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              i,
              0,
              D3DKMDT_MCC_IGNORE);
      v16 = v36;
      if ( v36 < 0 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v37, v23);
        v26[3] = v16;
        v26[4] = *((int *)v32 + 5);
        v26[5] = *((unsigned int *)v32 + 4);
        v26[6] = *((unsigned int *)v32 + 6);
        v26[7] = *((unsigned int *)v32 + 7);
        goto LABEL_19;
      }
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)v19 + 10) + 72LL), 1u);
  v38 = (_QWORD *)*((_QWORD *)v19 + 10);
  v39 = 0xFFFFFFFFLL;
  v14 = v76;
  v40 = 0;
  v41 = 0LL;
  v71 = -1;
  v66 = 0;
  v42 = (_QWORD *)v38[3];
  if ( v42 == v38 + 3 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v42 - 1)) == 0LL )
  {
LABEL_68:
    LODWORD(v16) = -1073741275;
    goto LABEL_69;
  }
  while ( 1 )
  {
    if ( *((_BYTE *)NextTarget + 404)
      || DMMVIDPNTOPOLOGY::IsTargetInTopology(v74, *((_DWORD *)NextTarget + 6))
      || (_DWORD)v44 == *((_DWORD *)this + 6) )
    {
      goto LABEL_29;
    }
    LODWORD(v16) = IsVirtualizationDisabledForTarget((__int64)v14, v44, &v69, &v67);
    if ( (int)v16 < 0 )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v45);
      v59[3] = v14;
      v59[4] = *((unsigned int *)NextTarget + 6);
      goto LABEL_67;
    }
    if ( (_BYTE)v70 )
    {
      if ( !v67 )
        goto LABEL_28;
    }
    else if ( *((_BYTE *)this + 10) && v67 )
    {
      goto LABEL_28;
    }
    if ( *((_QWORD *)NextTarget + 13) )
      goto LABEL_38;
    if ( v83 )
      break;
LABEL_28:
    v40 = v66;
LABEL_29:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v38, NextTarget, v39, v25);
    if ( !NextTarget )
    {
      if ( v41 )
      {
        LODWORD(v16) = BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
                         (BTL_TOPOLOGY_CONSTRUCTOR *)this,
                         (const struct _LUID *)((char *)v14 + 268),
                         v71,
                         v41[6],
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v41[20],
                         (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v41[21],
                         v40);
        goto LABEL_69;
      }
      goto LABEL_68;
    }
  }
  IsTargetForcable = DmmIsTargetForcable(v14, *((unsigned int *)NextTarget + 6), &v68, 0);
  v16 = IsTargetForcable;
  if ( IsTargetForcable < 0 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47);
    v59[3] = v16;
    v59[4] = *((int *)v14 + 68);
    v59[5] = *((unsigned int *)v14 + 67);
    v59[6] = *((unsigned int *)NextTarget + 6);
    v59[7] = *((_QWORD *)*this + 8);
LABEL_67:
    WdLogEvent5_WdError(v59);
    goto LABEL_69;
  }
  if ( !v68 )
    goto LABEL_28;
LABEL_38:
  if ( !BTL_TOPOLOGY_CONSTRUCTOR::_IsBetterSecondaryTarget(v14, NextTarget, (const struct DMMVIDEOPRESENTTARGET *)v41) )
    goto LABEL_28;
  v72 = 0LL;
  v49 = VIDPN_MGR::CreateVidPnCopyForClient((__int64)v19, v73, &v72, v25);
  v16 = v49;
  if ( v49 < 0 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
    v60[3] = v16;
    v60[4] = v14;
    v60[5] = *((int *)v14 + 68);
    v60[6] = *((unsigned int *)v14 + 67);
    v60[7] = this;
    goto LABEL_64;
  }
  v52 = (struct DXGADAPTER *)(v72 + 96);
  v76 = (struct DXGADAPTER *)(v72 + 96);
  if ( v72 == -96 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
    v61[3] = v14;
    v61[4] = *((int *)v14 + 68);
    v61[5] = *((unsigned int *)v14 + 67);
    v61[6] = this;
    WdLogEvent5_WdError(v61);
    LODWORD(v16) = -1073741823;
    goto LABEL_65;
  }
  v53 = v84;
  v54 = 0;
  if ( v84 != -1 )
    v54 = v84;
  while ( 2 )
  {
    if ( v53 == -1 )
    {
      v55 = *(_DWORD *)(*(_QWORD *)v78 + 80LL);
      v53 = v84;
    }
    else
    {
      v55 = v53 + 1;
    }
    if ( v54 >= v55 )
    {
      v40 = v66;
LABEL_59:
      auto_rc<DMMVIDPN>::reset(&v72, 0LL);
      v19 = v75;
      goto LABEL_29;
    }
    if ( v53 == -1 && DMMVIDPNTOPOLOGY::IsSourceInTopology(v52, v54) )
    {
LABEL_51:
      v53 = v84;
      ++v54;
      continue;
    }
    break;
  }
  v56 = VIDPN_MGR::AddPathToVidPnTopology(
          v75,
          v52,
          v54,
          *((unsigned int *)NextTarget + 6),
          (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
          0xFFFFu,
          0,
          D3DKMDT_MCC_IGNORE);
  v16 = v56;
  if ( v56 == -1071774975 )
  {
    v52 = v76;
    goto LABEL_51;
  }
  if ( v56 >= 0 )
  {
    v41 = (int *)NextTarget;
    v71 = v54;
    v40 = !v69 || !v67;
    v66 = v40;
    goto LABEL_59;
  }
  v60 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57);
  v60[3] = v16;
  v60[4] = *((int *)v14 + 68);
  v60[5] = *((unsigned int *)v14 + 67);
  v60[6] = v54;
  v60[7] = *((unsigned int *)NextTarget + 6);
LABEL_64:
  WdLogEvent5_WdError(v60);
LABEL_65:
  auto_rc<DMMVIDPN>::reset(&v72, 0LL);
LABEL_69:
  if ( v38 )
    ReferenceCounted::Release((ReferenceCounted *)(v38 + 8), v23);
LABEL_71:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v73, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v79 + 40), v62, v63, v64);
LABEL_72:
  COREACCESS::~COREACCESS((COREACCESS *)v82);
  COREACCESS::~COREACCESS((COREACCESS *)v81);
  DXGADAPTER::ReleaseReference(v14);
  return (unsigned int)v16;
}
