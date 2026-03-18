/*
 * XREFs of ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180043720
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180043720 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800441D0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180043720 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z @ 0x1800790DC (-AddMultipleAndSet@-$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18007A1B8 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18009DF20 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800A35A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800A36A8 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800A89A8 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x1800A8DAC (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C5768 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C57DC (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800C68A0 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18013F0AC (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180167830 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 */

__int64 __fastcall CDesktopRenderTarget::CalculateOcclusion(CDesktopRenderTarget *this, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  CDesktopRenderTarget *v4; // rbx
  int v5; // edi
  unsigned int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rbx
  int *v10; // rbx
  __int64 v11; // rbx
  unsigned int v12; // edi
  int *v13; // rcx
  int *v14; // rax
  __int64 v15; // r10
  unsigned int v16; // r8d
  unsigned int v17; // edx
  char v18; // al
  __int64 v19; // rcx
  const struct CMILMatrix *v20; // rcx
  __int128 v21; // xmm1
  int v22; // eax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // edi
  _QWORD *v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rax
  int v31; // edx
  COcclusionContext **v32; // rdi
  int v33; // eax
  __int64 v34; // rax
  int v35; // xmm4_4
  int v36; // eax
  __int64 v37; // rcx
  bool v38; // zf
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  struct CDrawingContext **v43; // rdi
  int v44; // eax
  struct CDrawingContext *v45; // rdi
  int *v46; // rax
  COcclusionContext *v47; // rcx
  COverlayContext *v48; // rcx
  struct COcclusionContext *v49; // r9
  const struct CDirtyRegion *v50; // r8
  const struct CVisualTree *v51; // rdx
  int v52; // eax
  int v53; // ecx
  CDirtyRegion *v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  _QWORD *v57; // rbx
  __int64 v58; // rdi
  __int64 v59; // rax
  unsigned __int8 v61; // [rsp+40h] [rbp-59h]
  bool v62; // [rsp+41h] [rbp-58h] BYREF
  char v63; // [rsp+42h] [rbp-57h]
  int i; // [rsp+44h] [rbp-55h]
  unsigned int v65; // [rsp+48h] [rbp-51h]
  int v66; // [rsp+4Ch] [rbp-4Dh]
  unsigned int v67; // [rsp+50h] [rbp-49h]
  __int64 v68; // [rsp+58h] [rbp-41h]
  int *v69; // [rsp+60h] [rbp-39h]
  __int64 v70; // [rsp+68h] [rbp-31h] BYREF
  CDesktopRenderTarget *v71; // [rsp+70h] [rbp-29h]
  int *v72; // [rsp+78h] [rbp-21h]
  LPVOID lpMem[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v74; // [rsp+90h] [rbp-9h]
  int v75; // [rsp+98h] [rbp-1h]
  _OWORD v76[4]; // [rsp+A0h] [rbp+7h] BYREF
  int v77; // [rsp+E0h] [rbp+47h]

  v2 = 0;
  v61 = a2;
  v3 = (unsigned __int8)a2;
  v71 = this;
  LOBYTE(a2) = 0;
  i = 0;
  v4 = this;
  v5 = 0;
  v74 = 0LL;
  *(_OWORD *)lpMem = 0LL;
  v75 = 0;
  v67 = a2;
  LOBYTE(v66) = 0;
  v63 = 0;
  if ( !*((_QWORD *)this - 6) || !*((_DWORD *)this + 8) )
    return (unsigned int)v5;
  v6 = 0;
  v7 = 1LL;
  v65 = 0;
  do
  {
    v8 = *(_QWORD *)(*((_QWORD *)v4 + 1) + 8LL * v6);
    if ( (*(_DWORD *)(v8 + 428) & 0x10000) != 0 )
    {
      a2 = (unsigned __int8)a2;
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 72LL) + 114LL) )
        a2 = 1LL;
      v67 = a2;
    }
    if ( !(_BYTE)v3 )
      goto LABEL_41;
    v70 = *(_QWORD *)(v8 + 840);
    if ( !v70 )
      goto LABEL_41;
    v68 = v8 + 220;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 216LL))(
           v8,
           a2,
           v3,
           1LL)
      || *(_BYTE *)(*(_QWORD *)(v8 + 16) + 1345LL) )
    {
      v9 = *(_QWORD *)(v8 + 168) + 120LL;
    }
    else
    {
      v9 = v8 + 468;
    }
    v69 = (int *)v9;
    v10 = *(int **)(*((_QWORD *)v71 + 1) + 8LL * v65);
    if ( (*(unsigned __int8 (__fastcall **)(int *))(*(_QWORD *)v10 + 216LL))(v10)
      || *(_BYTE *)(*((_QWORD *)v10 + 2) + 1345LL) )
    {
      v72 = (int *)(*((_QWORD *)v10 + 21) + 104LL);
    }
    else
    {
      v72 = v10 + 121;
    }
    v11 = v70;
    v12 = 0;
    for ( i = 0; v12 < *(_DWORD *)(v11 + 216); ++v12 )
      COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(*(_QWORD *)(v11 + 192) + 248LL * v12));
    *(_DWORD *)(v11 + 216) = 0;
    DynArrayImpl<0>::ShrinkToSize(v11 + 192, 248LL);
    v13 = v69;
    v14 = v72;
    *(float *)(v11 + 56) = (float)*v72;
    *(float *)(v11 + 60) = (float)v14[1];
    *(float *)(v11 + 64) = (float)v14[2];
    *(float *)(v11 + 68) = (float)v14[3];
    *(float *)(v11 + 24) = (float)*v13;
    *(float *)(v11 + 28) = (float)v13[1];
    *(float *)(v11 + 32) = (float)v13[2];
    *(float *)(v11 + 36) = (float)v13[3];
    *(_DWORD *)(v11 + 72) = v13[2] - *v13;
    *(_DWORD *)(v11 + 76) = v13[3] - v13[1];
    v15 = *(_QWORD *)(*(_QWORD *)(v11 + 1208) + 72LL);
    if ( !*(_BYTE *)(v15 + 114) )
    {
      if ( qword_1802D6428 && (v16 = *((_DWORD *)qword_1802D6428 + 18), v17 = 0, v16) )
      {
        while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)qword_1802D6428 + 6) + 8LL * v17) + 232LL) )
        {
          if ( ++v17 >= v16 )
            goto LABEL_25;
        }
      }
      else
      {
LABEL_25:
        if ( !*(_DWORD *)(v15 + 100) && *(_QWORD *)(v11 + 16) )
        {
          v18 = 1;
          goto LABEL_29;
        }
      }
    }
    v18 = 0;
LABEL_29:
    *(_BYTE *)(v11 + 1188) = v18;
    **(_DWORD **)(v11 + 1064) = 0;
    *(_DWORD *)(v11 + 1160) = 0;
    DynArrayImpl<0>::ShrinkToSize(v11 + 1136, 16LL);
    v19 = v68;
    *(_BYTE *)(v11 + 1204) = 1;
    *(_OWORD *)(v11 + 592) = *(_OWORD *)v19;
    *(_OWORD *)(v11 + 608) = *(_OWORD *)(v19 + 16);
    *(_OWORD *)(v11 + 624) = *(_OWORD *)(v19 + 32);
    *(_OWORD *)(v11 + 640) = *(_OWORD *)(v19 + 48);
    *(_DWORD *)(v11 + 656) = *(_DWORD *)(v19 + 64);
    if ( (unsigned __int8)CMILMatrix::IsIdentity<0>() )
    {
      *(_WORD *)(v11 + 724) = 32085;
      *(_OWORD *)(v11 + 660) = _xmm;
      *(_OWORD *)(v11 + 676) = _xmm;
      *(_OWORD *)(v11 + 692) = _xmm;
      *(_OWORD *)(v11 + 708) = _xmm;
      goto LABEL_34;
    }
    v77 = 0;
    if ( CMILMatrix::SetToInverse((CMILMatrix *)v76, v20) )
    {
      v21 = v76[1];
      v22 = v77;
      *(_OWORD *)(v11 + 660) = v76[0];
      v23 = v76[2];
      *(_OWORD *)(v11 + 676) = v21;
      v24 = v76[3];
      *(_OWORD *)(v11 + 692) = v23;
      *(_OWORD *)(v11 + 708) = v24;
      *(_DWORD *)(v11 + 724) = v22;
LABEL_34:
      v5 = 0;
      goto LABEL_35;
    }
    v5 = -2003304441;
    i = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304441, 0x18Cu);
LABEL_35:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start,
        *(unsigned __int8 *)(v11 + 1188));
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x821u);
      goto LABEL_105;
    }
    if ( *(_BYTE *)(v70 + 1188) )
    {
      v25 = DynArray<COverlayContext *,0>::AddMultipleAndSet(lpMem, &v70);
      i = v25;
      v5 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x825u);
        goto LABEL_105;
      }
    }
    v3 = v61;
    v7 = 1LL;
    a2 = v67;
LABEL_41:
    v4 = v71;
    v6 = v65 + 1;
    v65 = v6;
  }
  while ( v6 < *((_DWORD *)v71 + 8) );
  if ( !(_BYTE)a2 )
    goto LABEL_74;
  v3 = *((_QWORD *)v71 + 27);
  if ( *(_BYTE *)(v3 + 2883) )
  {
LABEL_46:
    v26 = *((_QWORD *)v4 - 19);
    v27 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(v26 + 72) + 100LL) && *(_DWORD *)(v26 + 1008) )
    {
      v28 = (_QWORD *)(v26 + 984);
      v29 = v26;
      do
      {
        v26 = *(_QWORD *)(*v28 + 8LL * v27);
        v30 = *(_QWORD *)(v26 + 8);
        if ( v30 )
        {
          *(_BYTE *)(v30 + 94) |= 2u;
          ++v27;
        }
        else
        {
          DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v28, v27, v3, v7);
        }
      }
      while ( v27 < *(_DWORD *)(v29 + 1008) );
      v4 = v71;
      v2 = 0;
    }
    v63 = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xq(v26, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, (char *)v4 - 168, 0LL);
    v32 = (COcclusionContext **)((char *)v4 + 224);
    if ( !*((_QWORD *)v4 + 28) )
    {
      v33 = COcclusionContext::Create(*((struct CComposition **)v4 - 19), (struct COcclusionContext **)v4 + 28);
      i = v33;
      v5 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x839u);
        goto LABEL_96;
      }
      v32 = (COcclusionContext **)((char *)v4 + 224);
    }
    v34 = *((_QWORD *)v4 + 27);
    v35 = 0;
    if ( !*(_BYTE *)(v34 + 2883)
      && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v34 + 2876) - 1.0)) & _xmm) >= 0.0000011920929
       || *(_BYTE *)(v34 + 2885)) )
    {
      v35 = *(_DWORD *)(v34 + 2876);
    }
    v36 = COcclusionContext::Compute(*v32, v35, 0, 0LL, (__int64)lpMem);
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x849u);
      SAFE_DELETE<COcclusionContext>(v32);
    }
    v5 = 0;
    i = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xq(v37, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, (char *)v4 - 168, 0LL);
    goto LABEL_74;
  }
  if ( !*(_BYTE *)(v3 + 2886) )
  {
    LODWORD(a2) = 0;
    while ( IsEmpty((const struct D2D_RECT_F *)(16LL * (unsigned int)a2 + v3 + 24)) )
    {
      LODWORD(a2) = v31 + 1;
      if ( (unsigned int)a2 >= 8 )
        goto LABEL_74;
    }
    goto LABEL_46;
  }
  if ( *(_DWORD *)(v3 + 1276) )
    goto LABEL_46;
LABEL_74:
  v38 = *((_DWORD *)v4 + 8) == 0;
  v39 = 0;
  v65 = 0;
  if ( !v38 )
  {
    do
    {
      v69 = (int *)*((_QWORD *)v4 + 28);
      v40 = v39;
      v41 = *((_QWORD *)v4 + 1);
      v68 = v40;
      v42 = *(_QWORD *)(v41 + 8 * v40);
      v43 = (struct CDrawingContext **)(v42 + 112);
      if ( !*(_QWORD *)(v42 + 112) )
      {
        v44 = CDrawingContext::Create(*(struct CComposition **)(v42 + 16), v43);
        if ( v44 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x3Eu);
      }
      v45 = *v43;
      v46 = v69;
      v47 = (COcclusionContext *)*((_QWORD *)v45 + 844);
      if ( v69 != (int *)v47 && v47 )
      {
        COcclusionContext::`scalar deleting destructor'(v47, a2);
        v46 = v69;
        *((_QWORD *)v45 + 844) = 0LL;
      }
      *((_QWORD *)v45 + 843) = v46;
      if ( !v46 )
        *((_BYTE *)v45 + 6827) = 0;
      v5 = 0;
      i = 0;
      if ( v61 && (v48 = *(COverlayContext **)(*(_QWORD *)(*((_QWORD *)v4 + 1) + 8 * v68) + 840LL)) != 0LL )
      {
        v49 = (struct COcclusionContext *)*((_QWORD *)v4 + 28);
        v50 = (const struct CDirtyRegion *)*((_QWORD *)v4 + 27);
        v51 = (const struct CVisualTree *)*((_QWORD *)v4 - 6);
        v62 = 0;
        v52 = COverlayContext::EndOverlayCandidateCollection(v48, v51, v50, v49, &v62);
        i = v52;
        v5 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x86Fu);
          goto LABEL_95;
        }
        v53 = (unsigned __int8)v66;
        if ( v62 )
          v53 = 1;
        v66 = v53;
      }
      else
      {
        LOBYTE(v53) = v66;
      }
      v39 = v65 + 1;
      v65 = v39;
    }
    while ( v39 < *((_DWORD *)v4 + 8) );
    if ( (_BYTE)v53 )
    {
      v54 = (CDirtyRegion *)*((_QWORD *)v4 + 27);
      if ( !*((_BYTE *)v54 + 2883) )
      {
        CDirtyRegion::SetFullDirty(v54);
        v55 = CDesktopRenderTarget::CalculateOcclusion(v4, 0);
        i = v55;
        v5 = v55;
        if ( v55 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x881u);
      }
    }
  }
LABEL_95:
  if ( v63 )
  {
LABEL_96:
    v56 = *((_QWORD *)v4 - 19);
    if ( *(_DWORD *)(*(_QWORD *)(v56 + 72) + 100LL) && *(_DWORD *)(v56 + 1008) )
    {
      v57 = (_QWORD *)(v56 + 984);
      v58 = v56;
      do
      {
        v59 = *(_QWORD *)(*(_QWORD *)(*v57 + 8LL * v2) + 8LL);
        if ( v59 )
        {
          *(_BYTE *)(v59 + 94) &= ~2u;
          ++v2;
        }
        else
        {
          DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v57, v2, v3, v7);
        }
      }
      while ( v2 < *(_DWORD *)(v58 + 1008) );
      v5 = i;
    }
  }
LABEL_105:
  if ( lpMem[0] != lpMem[1] && lpMem[0] )
    HeapFree(WPF::g_processHeap, 0, lpMem[0]);
  return (unsigned int)v5;
}
