/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00A7D74
 * Callers:
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E1A60 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C01EDC70 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C01F2644 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00041C4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00059A8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C000A214 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000A2B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000E448 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C000E4CC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000E624 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x1C002EEF0 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C00A3628 (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00A42F8 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C00AC22C (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00F73E0 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r10
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  DMMVIDPNTOPOLOGY *v11; // r13
  int v12; // edx
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  unsigned int v16; // edi
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 PathSourceFromTarget; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rdi
  _QWORD *v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // r14
  int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // ebx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rcx
  bool v37; // zf
  _QWORD *v38; // r13
  __int64 v39; // rax
  _QWORD *v40; // rcx
  UINT cx; // r12d
  UINT cy; // r13d
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdi
  DMMVIDPNSOURCEMODE *v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // edi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp+30h] [rbp-18h] BYREF
  __int64 v56; // [rsp+38h] [rbp-10h] BYREF
  __int64 v57; // [rsp+90h] [rbp+48h]
  __int64 v58; // [rsp+98h] [rbp+50h] BYREF
  struct _D3DDDI_RATIONAL v59; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v60; // [rsp+A8h] [rbp+60h]

  v2 = 0;
  v58 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 8);
  auto_rc<DMMVIDPN>::reset(&v58, (__int64)a2);
  v4 = v58;
  v57 = v58;
  v5 = Set<DMMVIDPN>::FindByValue((__int64)this + 96, v58);
  if ( !DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(
          (__int64)this + 104,
          v5) )
  {
    v54 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v54 + 24) = v4;
    *(_QWORD *)(v54 + 32) = this;
    WdLogEvent5_WdError(v54);
    v2 = -1071774973;
    goto LABEL_22;
  }
  v8 = (_QWORD *)(v7 + 8);
  v9 = *(_QWORD *)(v7 + 8);
  if ( *(_QWORD *)(v9 + 8) != v7 + 8 || (v10 = *(_QWORD **)(v7 + 16), (_QWORD *)*v10 != v8) )
    __fastfail(3u);
  *v10 = v9;
  v11 = (DMMVIDPNTOPOLOGY *)(v4 + 96);
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  *(_QWORD *)(v7 + 16) = 0LL;
  --*((_QWORD *)this + 17);
  if ( *(_QWORD *)(v4 + 136) )
  {
    v12 = *((_DWORD *)this + 124);
    if ( v12 != -1 && DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v4 + 96), v12) )
    {
      if ( !*((_QWORD *)this + 1) )
      {
        v31 = WdLogNewEntry5_WdAssertion(v30);
        WdLogEvent5_WdAssertion(v31);
      }
      v32 = *((_DWORD *)this + 124);
      v33 = *((_QWORD *)this + 1);
      PathSourceFromTarget = (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v11, v32);
      v17 = 0LL;
      v18 = v32;
      v20 = v33;
      goto LABEL_11;
    }
    MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath((DMMVIDPNTOPOLOGY *)(v4 + 96));
    if ( !MostImportantPath )
      goto LABEL_12;
    v14 = *((_QWORD *)MostImportantPath + 12);
    v15 = *(_DWORD *)(v14 + 24);
    v16 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
    if ( !*((_QWORD *)this + 1) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v34);
    }
    v17 = 2LL;
    v18 = v15;
    PathSourceFromTarget = v16;
  }
  else
  {
    if ( !*((_QWORD *)this + 1) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v29);
    }
    v18 = 0xFFFFFFFFLL;
    v17 = 3LL;
    PathSourceFromTarget = 0xFFFFFFFFLL;
  }
  v20 = *((_QWORD *)this + 1);
LABEL_11:
  ADAPTER_DISPLAY::SetPrimaryPath(v20, PathSourceFromTarget, v18, v17);
LABEL_12:
  v21 = 0LL;
  v22 = (_QWORD *)*((_QWORD *)v11 + 3);
  if ( v22 != (_QWORD *)((char *)v11 + 24) )
    v21 = v22 - 1;
  v23 = *((_QWORD *)v11 + 5);
  v24 = v21;
  if ( v23 == 1 )
  {
    if ( !v21 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v35);
    }
    v25 = 8;
    v26 = *(_QWORD *)(v21[12] + 96LL);
    if ( *(_DWORD *)(v26 + 84) != 15 )
      v25 = 0;
  }
  else if ( v23 == 2 )
  {
    v36 = (_QWORD *)v21[1];
    v37 = v36 == (_QWORD *)((char *)v11 + 24);
    v38 = v36 - 1;
    if ( v37 )
      v38 = 0LL;
    if ( !v38 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v36);
      WdLogEvent5_WdAssertion(v39);
    }
    if ( *(_DWORD *)(*(_QWORD *)(v21[12] + 96LL) + 84LL) != 15 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v38[12] + 96LL) + 84LL) != 15 )
        goto LABEL_20;
      v24 = v38;
    }
    v25 = 2;
    v26 = 4LL;
    if ( v21[11] != v38[11] )
      v25 = 4;
  }
  else
  {
    if ( !v21 )
      goto LABEL_20;
    while ( 1 )
    {
      v26 = *(_QWORD *)(v24[12] + 96LL);
      if ( *(_DWORD *)(v26 + 84) == 15 )
        break;
      v40 = (_QWORD *)v24[1];
      v24 = v40 - 1;
      if ( v40 == (_QWORD *)((char *)v11 + 24) )
        v24 = 0LL;
      if ( !v24 )
        goto LABEL_20;
    }
    v25 = 1;
  }
  if ( v25 )
  {
    LODWORD(v60) = 0;
    cx = 0;
    cy = 0;
    if ( !v24 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v26);
      WdLogEvent5_WdAssertion(v43);
    }
    v44 = v24[11];
    v45 = *(_QWORD *)(v44 + 104);
    if ( v45 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v45 + 96));
      v46 = *(_QWORD *)(v44 + 104);
      v57 = v58;
    }
    else
    {
      v46 = 0LL;
    }
    v56 = v46;
    v47 = *(DMMVIDPNSOURCEMODE **)(v46 + 144);
    if ( v47 && *((_DWORD *)v47 + 18) != 2 )
    {
      cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v47)->PrimSurfSize.cx;
      cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v47)->PrimSurfSize.cy;
    }
    v48 = v24[12];
    v49 = *(_QWORD *)(v48 + 104);
    if ( v49 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v49 + 96));
      v50 = *(_QWORD *)(v48 + 104);
      v27 = v58;
    }
    else
    {
      v27 = v57;
      v50 = 0LL;
    }
    v51 = *(_QWORD *)(v50 + 144);
    v55 = v50;
    if ( v51 )
    {
      v59 = *(struct _D3DDDI_RATIONAL *)(v51 + 92);
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v51 + 72), &v59);
      v52 = DMMVIDEOSIGNALMODE::DivideAndRound(v59.Numerator, v59.Denominator);
    }
    else
    {
      v52 = v60;
    }
    if ( !*((_QWORD *)this + 1) )
    {
      v53 = WdLogNewEntry5_WdAssertion(v51);
      WdLogEvent5_WdAssertion(v53);
    }
    DpiMiracastHandleDisplayConfigChange(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 192LL),
      v25,
      cx,
      cy,
      v52);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v55, 0LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v56, 0LL);
    goto LABEL_21;
  }
LABEL_20:
  v27 = v57;
LABEL_21:
  v58 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 11, v27);
LABEL_22:
  auto_rc<DMMVIDPN>::reset(&v58, 0LL);
  return v2;
}
