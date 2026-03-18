/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00E3FA4
 * Callers:
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A4324 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAU_D3DKMT_VIDPN_SOU.c)
 *     DmmRemovePathsFromVidPnSource @ 0x1C01D66F0 (DmmRemovePathsFromVidPnSource.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C01D9484 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C0002060 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C00020E4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0002480 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007400 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A8B8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000C388 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x1C003E370 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00AB1FC (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E0D48 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C00E1304 (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C00E6A80 (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r10
  _QWORD *v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  DMMVIDPNTOPOLOGY *v13; // r13
  int v14; // edx
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned int v21; // ebx
  unsigned int v22; // edi
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 PathSourceFromTarget; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  _QWORD *v28; // rbx
  __int64 v29; // rax
  _QWORD *v30; // r14
  int v31; // edi
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  unsigned int v41; // ebx
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rcx
  bool v46; // zf
  _QWORD *v47; // r13
  __int64 v48; // rax
  _QWORD *v49; // rcx
  UINT cx; // r12d
  UINT cy; // r13d
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rbx
  DMMVIDPNSOURCEMODE *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  int v64; // ebx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // [rsp+30h] [rbp-18h] BYREF
  __int64 v68; // [rsp+38h] [rbp-10h] BYREF
  __int64 v69; // [rsp+90h] [rbp+48h]
  __int64 v70; // [rsp+98h] [rbp+50h] BYREF
  struct _D3DDDI_RATIONAL v71; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v72; // [rsp+A8h] [rbp+60h]

  v2 = 0;
  v70 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 8);
  auto_rc<DMMVIDPN>::reset(&v70, (__int64)a2);
  v4 = v70;
  v69 = v70;
  v5 = Set<DMMVIDPN>::FindByValue((__int64)this + 96, v70);
  if ( !DoublyLinkedList<DMMVIDPN>::ContainsByReference((__int64)this + 104, v5) )
  {
    v66 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v66 + 24) = v4;
    *(_QWORD *)(v66 + 32) = this;
    WdLogEvent5_WdError(v66);
    v2 = -1071774973;
    goto LABEL_22;
  }
  v10 = (_QWORD *)(v9 + 8);
  v11 = *(_QWORD *)(v9 + 8);
  v12 = *(_QWORD **)(v9 + 16);
  if ( *(_QWORD *)(v11 + 8) != v9 + 8 || (_QWORD *)*v12 != v10 )
    __fastfail(3u);
  *v12 = v11;
  v13 = (DMMVIDPNTOPOLOGY *)(v4 + 96);
  *(_QWORD *)(v11 + 8) = v12;
  *v10 = 0LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  --*((_QWORD *)this + 17);
  if ( *(_QWORD *)(v4 + 136) )
  {
    v14 = *((_DWORD *)this + 122);
    if ( v14 != -1 && DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v4 + 96), v14) )
    {
      if ( !*((_QWORD *)this + 1) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
        WdLogEvent5_WdAssertion(v40);
      }
      v41 = *((_DWORD *)this + 122);
      v42 = *((_QWORD *)this + 1);
      PathSourceFromTarget = (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v13, v41, v38, v39);
      v23 = 0LL;
      v24 = v41;
      v26 = v42;
      goto LABEL_11;
    }
    MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath((DMMVIDPNTOPOLOGY *)(v4 + 96));
    if ( !MostImportantPath )
      goto LABEL_12;
    v20 = *((_QWORD *)MostImportantPath + 12);
    v21 = *(_DWORD *)(v20 + 24);
    v22 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
    if ( !*((_QWORD *)this + 1) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v20, v16, v18, v19);
      WdLogEvent5_WdAssertion(v43);
    }
    v23 = 2LL;
    v24 = v21;
    PathSourceFromTarget = v22;
  }
  else
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v10, v12, v11, v8);
      WdLogEvent5_WdAssertion(v35);
    }
    v24 = 0xFFFFFFFFLL;
    v23 = 3LL;
    PathSourceFromTarget = 0xFFFFFFFFLL;
  }
  v26 = *((_QWORD *)this + 1);
LABEL_11:
  ADAPTER_DISPLAY::SetPrimaryPath(v26, PathSourceFromTarget, v24, v23);
LABEL_12:
  v27 = (_QWORD *)*((_QWORD *)v13 + 3);
  if ( v27 == (_QWORD *)((char *)v13 + 24) )
    v28 = 0LL;
  else
    v28 = v27 - 1;
  v29 = *((_QWORD *)v13 + 5);
  v30 = v28;
  if ( v29 == 1 )
  {
    if ( !v28 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      WdLogEvent5_WdAssertion(v44);
    }
    v31 = 8;
    v32 = *(_QWORD *)(v28[12] + 96LL);
    if ( *(_DWORD *)(v32 + 84) != 15 )
      v31 = 0;
  }
  else if ( v29 == 2 )
  {
    v45 = (_QWORD *)v28[1];
    v46 = v45 == (_QWORD *)((char *)v13 + 24);
    v47 = v45 - 1;
    if ( v46 )
      v47 = 0LL;
    if ( !v47 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v45, v16, v18, v19);
      WdLogEvent5_WdAssertion(v48);
    }
    if ( *(_DWORD *)(*(_QWORD *)(v28[12] + 96LL) + 84LL) != 15 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v47[12] + 96LL) + 84LL) != 15 )
        goto LABEL_20;
      v30 = v47;
    }
    v31 = 2;
    v32 = 4LL;
    if ( v28[11] != v47[11] )
      v31 = 4;
  }
  else
  {
    if ( !v28 )
      goto LABEL_20;
    while ( 1 )
    {
      v32 = *(_QWORD *)(v30[12] + 96LL);
      if ( *(_DWORD *)(v32 + 84) == 15 )
        break;
      v49 = (_QWORD *)v30[1];
      v30 = v49 - 1;
      if ( v49 == (_QWORD *)((char *)v13 + 24) )
        v30 = 0LL;
      if ( !v30 )
        goto LABEL_20;
    }
    v31 = 1;
  }
  if ( v31 )
  {
    LODWORD(v72) = 0;
    cx = 0;
    cy = 0;
    if ( !v30 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v32, v16, v18, v19);
      WdLogEvent5_WdAssertion(v52);
    }
    v53 = v30[11];
    v54 = *(_QWORD *)(v53 + 104);
    if ( v54 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v54 + 96));
      v55 = *(_QWORD *)(v53 + 104);
      v69 = v70;
    }
    else
    {
      v55 = 0LL;
    }
    v68 = v55;
    v56 = *(DMMVIDPNSOURCEMODE **)(v55 + 144);
    if ( v56 && *((_DWORD *)v56 + 18) != 2 )
    {
      cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v56, v16, v18, v19)->PrimSurfSize.cx;
      cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v56, v57, v58, v59)->PrimSurfSize.cy;
    }
    v60 = v30[12];
    v61 = *(_QWORD *)(v60 + 104);
    if ( v61 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v61 + 96));
      v62 = *(_QWORD *)(v60 + 104);
      v33 = v70;
    }
    else
    {
      v33 = v69;
      v62 = 0LL;
    }
    v63 = *(_QWORD *)(v62 + 144);
    v67 = v62;
    if ( v63 )
    {
      v71 = *(struct _D3DDDI_RATIONAL *)(v63 + 92);
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v63 + 72), &v71);
      v64 = DMMVIDEOSIGNALMODE::DivideAndRound(v71.Numerator, v71.Denominator);
    }
    else
    {
      v64 = v72;
    }
    if ( !*((_QWORD *)this + 1) )
    {
      v65 = WdLogNewEntry5_WdAssertion(v63, v16, v18, v19);
      WdLogEvent5_WdAssertion(v65);
    }
    DpiMiracastHandleDisplayConfigChange(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 192LL),
      v31,
      cx,
      cy,
      v64);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v67, 0LL);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v68, 0LL);
    goto LABEL_21;
  }
LABEL_20:
  v33 = v69;
LABEL_21:
  v70 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 11, v33);
LABEL_22:
  auto_rc<DMMVIDPN>::reset(&v70, 0LL);
  return v2;
}
