/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C021128C
 * Callers:
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DDA24 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C0214AB0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C021E0B4 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004564 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00059D4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C0007CB0 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000A8AC (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@U?$DoubleLinkedListElementDeleter@VDMMVIDPN@@@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C000A920 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@U-$DoubleLinkedListElementDeleter@VDMMVIDPN@@.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000AB84 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x1C003CFE0 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00BBE40 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00C42A8 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C01577F8 (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C021EF80 (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  DMMVIDPNTOPOLOGY *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r8d
  int v14; // r9d
  int PathSourceFromTarget; // edx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rax
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rax
  int v21; // r15d
  __int64 v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rdi
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // esi
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // r15
  __int64 v32; // rax
  bool v33; // zf
  _QWORD *v34; // rax
  __int64 v35; // r15
  UINT cx; // r12d
  UINT cy; // r13d
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // r15
  DMMVIDPNSOURCEMODE *v42; // r15
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // edi
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v52; // [rsp+30h] [rbp-18h] BYREF
  __int64 v53; // [rsp+38h] [rbp-10h] BYREF
  __int64 v54; // [rsp+90h] [rbp+48h]
  __int64 v55; // [rsp+98h] [rbp+50h] BYREF
  struct _D3DDDI_RATIONAL v56; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v57; // [rsp+A8h] [rbp+60h]

  v2 = 0;
  v55 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 8);
  auto_rc<DMMVIDPN>::reset(&v55, (__int64)a2);
  v4 = v55;
  v54 = v55;
  v5 = Set<DMMVIDPN>::FindByValue((__int64)this + 96, v55);
  if ( !DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(
          (__int64)this + 104,
          v5) )
  {
    v50 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v50 + 24) = v4;
    *(_QWORD *)(v50 + 32) = this;
    WdLogEvent5_WdError(v50);
    v2 = -1071774973;
    goto LABEL_66;
  }
  v7 = (_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v8 + 8) != v5 + 8 || (v9 = *(_QWORD **)(v5 + 16), (_QWORD *)*v9 != v7) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  v10 = (DMMVIDPNTOPOLOGY *)(v4 + 96);
  *v7 = 0LL;
  *(_QWORD *)(v5 + 16) = 0LL;
  --*((_QWORD *)this + 17);
  if ( *((_QWORD *)v10 + 5) )
  {
    v16 = *((_DWORD *)this + 124);
    if ( v16 == -1 || !DMMVIDPNTOPOLOGY::IsTargetInTopology(v10, v16) )
    {
      MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath(v10);
      if ( !MostImportantPath )
        goto LABEL_19;
      v16 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 12) + 24LL);
      v11 = *((_QWORD *)this + 1);
      v21 = *(_DWORD *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
      if ( !v11 )
      {
        v22 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v22);
        v11 = *((_QWORD *)this + 1);
      }
      v14 = 2;
      PathSourceFromTarget = v21;
    }
    else
    {
      v18 = *((_QWORD *)this + 1);
      if ( !v18 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v17);
        WdLogEvent5_WdAssertion(v19);
        v18 = *((_QWORD *)this + 1);
        v16 = *((_DWORD *)this + 124);
      }
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v10, v16);
      v14 = 0;
      v11 = v18;
    }
    v13 = v16;
  }
  else
  {
    v11 = *((_QWORD *)this + 1);
    if ( !v11 )
    {
      v12 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v12);
      v11 = *((_QWORD *)this + 1);
    }
    v13 = -1;
    v14 = 3;
    PathSourceFromTarget = -1;
  }
  ADAPTER_DISPLAY::SetPrimaryPath(v11, PathSourceFromTarget, v13, v14);
LABEL_19:
  v23 = (_QWORD *)((char *)v10 + 24);
  v24 = 0LL;
  v25 = (_QWORD *)*((_QWORD *)v10 + 3);
  if ( v25 != (_QWORD *)((char *)v10 + 24) )
    v24 = v25 - 1;
  v26 = *((_QWORD *)v10 + 5);
  if ( v26 == 1 )
  {
    if ( !v24 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v27);
    }
    v28 = 8;
    v29 = *(_QWORD **)(v24[12] + 96LL);
    if ( *((_DWORD *)v29 + 21) != 15 )
      v28 = 0;
  }
  else
  {
    if ( v26 != 2 )
    {
      while ( v24 )
      {
        v29 = *(_QWORD **)(v24[12] + 96LL);
        if ( *((_DWORD *)v29 + 21) == 15 )
        {
          v28 = 1;
          goto LABEL_46;
        }
        v34 = (_QWORD *)v24[1];
        v24 = v34 - 1;
        if ( v34 == v23 )
          v24 = 0LL;
      }
      goto LABEL_43;
    }
    v30 = (_QWORD *)v24[1];
    v31 = v30 - 1;
    if ( v30 == v23 )
      v31 = 0LL;
    if ( !v31 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v32);
    }
    v29 = *(_QWORD **)(v24[12] + 96LL);
    if ( *((_DWORD *)v29 + 21) == 15 )
    {
      v33 = v24[11] == v31[11];
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)(v31[12] + 96LL) + 84LL) != 15 )
        goto LABEL_43;
      v29 = v24 + 11;
      v33 = v24[11] == v31[11];
      v24 = v31;
    }
    v28 = 2;
    if ( !v33 )
      v28 = 4;
  }
LABEL_46:
  if ( v28 )
  {
    LODWORD(v57) = 0;
    cx = 0;
    cy = 0;
    if ( !v24 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v29);
      WdLogEvent5_WdAssertion(v38);
    }
    v39 = v24[11];
    v40 = *(_QWORD *)(v39 + 104);
    if ( v40 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v40 + 96));
      v41 = *(_QWORD *)(v39 + 104);
      v54 = v55;
    }
    else
    {
      v41 = 0LL;
    }
    v53 = v41;
    v42 = *(DMMVIDPNSOURCEMODE **)(v41 + 144);
    if ( v42 && *((_DWORD *)v42 + 18) != 2 )
    {
      cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v42)->PrimSurfSize.cx;
      cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v42)->PrimSurfSize.cy;
    }
    v43 = v24[12];
    v44 = *(_QWORD *)(v43 + 104);
    if ( v44 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v44 + 96));
      v45 = *(_QWORD *)(v43 + 104);
      v35 = v55;
    }
    else
    {
      v35 = v54;
      v45 = 0LL;
    }
    v46 = *(_QWORD *)(v45 + 144);
    v52 = v45;
    if ( v46 )
    {
      v56 = *(struct _D3DDDI_RATIONAL *)(v46 + 92);
      DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v46 + 72), &v56);
      v47 = DMMVIDEOSIGNALMODE::DivideAndRound(v56.Numerator, v56.Denominator);
    }
    else
    {
      v47 = v57;
    }
    v48 = *((_QWORD *)this + 1);
    if ( !v48 )
    {
      v49 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v49);
      v48 = *((_QWORD *)this + 1);
    }
    DpiMiracastHandleDisplayConfigChange(*(_QWORD *)(*(_QWORD *)(v48 + 16) + 192LL), v28, cx, cy, v47);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v52, 0LL);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v53, 0LL);
    goto LABEL_44;
  }
LABEL_43:
  v35 = v54;
LABEL_44:
  v55 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 11, v35);
LABEL_66:
  auto_rc<DMMVIDPN>::reset(&v55, 0LL);
  return v2;
}
