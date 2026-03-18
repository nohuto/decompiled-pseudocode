/*
 * XREFs of ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015570
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015570 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180015D90 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015570 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18003458C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058F90 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B088 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x180060F58 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800678F4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z @ 0x180068440 (-AddMultipleAndSet@-$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800BDFD8 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800BEA04 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z @ 0x18011A128 (-SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18011C390 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 *     McTemplateU0xq @ 0x180138D78 (McTemplateU0xq.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180144770 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::CalculateOcclusion(CDesktopRenderTarget *this, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int v3; // esi
  __int64 v4; // r8
  CDesktopRenderTarget *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rcx
  int *v17; // rax
  __int64 v18; // r11
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  __int64 v21; // r9
  _QWORD *v22; // rcx
  const struct CMILMatrix *v23; // rcx
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  bool v27; // zf
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  _QWORD *v31; // rcx
  __int64 v32; // rax
  COverlayContext *v33; // rcx
  struct COcclusionContext *v34; // r9
  const struct CDirtyRegion *v35; // r8
  const struct CVisualTree *v36; // rdx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v40; // rsi
  COcclusionContext **v41; // rsi
  __int64 v42; // rax
  int v43; // xmm4_4
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rbx
  int v47; // eax
  __int64 v48; // rsi
  unsigned int v49; // ebx
  __int128 v50; // xmm1
  int v51; // eax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  unsigned int v54; // ebx
  __int64 v55; // rax
  int v56; // eax
  CDirtyRegion *v57; // rcx
  __int64 v58; // rax
  unsigned int v59; // [rsp+20h] [rbp-89h]
  bool v60; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int8 v61; // [rsp+41h] [rbp-68h]
  int v62; // [rsp+44h] [rbp-65h]
  char v63; // [rsp+48h] [rbp-61h]
  char v64; // [rsp+49h] [rbp-60h]
  unsigned int v65; // [rsp+4Ch] [rbp-5Dh]
  __int64 v66; // [rsp+50h] [rbp-59h]
  __int64 v67; // [rsp+60h] [rbp-49h] BYREF
  __int64 v68; // [rsp+68h] [rbp-41h]
  CDesktopRenderTarget *v69; // [rsp+70h] [rbp-39h]
  _QWORD *v70; // [rsp+78h] [rbp-31h]
  int *v71; // [rsp+80h] [rbp-29h]
  LPVOID lpMem[2]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v73; // [rsp+98h] [rbp-11h]
  int v74; // [rsp+A0h] [rbp-9h]
  _OWORD v75[4]; // [rsp+B0h] [rbp+7h] BYREF
  int v76; // [rsp+F0h] [rbp+47h]

  v2 = 0;
  v61 = a2;
  v3 = 0;
  v69 = this;
  v4 = a2;
  v5 = this;
  v62 = 0;
  *(_OWORD *)lpMem = 0LL;
  v73 = 0LL;
  v74 = 0;
  v60 = 0;
  v63 = 0;
  v64 = 0;
  if ( !*((_QWORD *)this - 4) || !*((_DWORD *)this + 8) )
    return (unsigned int)v3;
  LODWORD(v6) = 0;
  v65 = 0;
  do
  {
    v7 = *((_QWORD *)v5 + 1);
    v68 = (unsigned int)v6;
    v8 = *(_QWORD **)(v7 + 8LL * (unsigned int)v6);
    if ( (*((_DWORD *)v8 + 93) & 0x10000) != 0 )
    {
      LODWORD(v6) = v65;
      if ( !*(_BYTE *)(*(_QWORD *)(v8[2] + 72LL) + 148LL) )
        v60 = 1;
    }
    if ( !(_BYTE)v4 )
      goto LABEL_35;
    v67 = v8[99];
    if ( !v67 )
      goto LABEL_35;
    v70 = (_QWORD *)((char *)v8 + 164);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v8 + 200LL))(v8)
      || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v8 + 192LL))(v8)
      || *(_BYTE *)(v8[2] + 1297LL) )
    {
      v9 = v8[14] + 96LL;
    }
    else
    {
      v9 = (__int64)v8 + 412;
    }
    v10 = *((_QWORD *)v5 + 1);
    v71 = (int *)v9;
    v11 = *(_QWORD **)(v10 + 8 * v68);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v11 + 200LL))(v11)
      || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v11 + 192LL))(v11)
      || *(_BYTE *)(v11[2] + 1297LL) )
    {
      v12 = v11[14] + 80LL;
    }
    else
    {
      v12 = (__int64)v11 + 428;
    }
    v13 = v67;
    v68 = v12;
    v3 = 0;
    v66 = v67;
    v62 = 0;
    if ( *(_DWORD *)(v67 + 208) )
    {
      v48 = v67;
      v49 = 0;
      do
        COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(*(_QWORD *)(v48 + 184)
                                                                                     + 248LL * v49++));
      while ( v49 < *(_DWORD *)(v48 + 208) );
      v5 = v69;
      v3 = 0;
      v13 = v66;
    }
    v14 = v13 + 184;
    *(_DWORD *)(v14 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v14, 248LL);
    v15 = v66;
    v16 = v71;
    v17 = (int *)v68;
    *(float *)(v66 + 56) = (float)*(int *)v68;
    *(float *)(v15 + 60) = (float)v17[1];
    *(float *)(v15 + 64) = (float)v17[2];
    *(float *)(v15 + 68) = (float)v17[3];
    *(float *)(v15 + 24) = (float)*v16;
    *(float *)(v15 + 28) = (float)v16[1];
    *(float *)(v15 + 32) = (float)v16[2];
    *(float *)(v15 + 36) = (float)v16[3];
    *(_DWORD *)(v15 + 72) = v16[2] - *v16;
    *(_DWORD *)(v15 + 76) = v16[3] - v16[1];
    v18 = *(_QWORD *)(*(_QWORD *)(v15 + 1200) + 72LL);
    if ( *(_BYTE *)(v18 + 148) )
      goto LABEL_83;
    if ( qword_18026EEA8 )
    {
      v19 = *((_DWORD *)qword_18026EEA8 + 18);
      v20 = 0;
      if ( v19 )
      {
        while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)qword_18026EEA8 + 6) + 8LL * v20) + 208LL) )
        {
          if ( ++v20 >= v19 )
            goto LABEL_23;
        }
LABEL_83:
        *(_BYTE *)(v15 + 1176) = 0;
        goto LABEL_26;
      }
    }
LABEL_23:
    if ( *(_DWORD *)(v18 + 100) || !*(_QWORD *)(v15 + 16) )
      goto LABEL_83;
    *(_BYTE *)(v15 + 1176) = 1;
LABEL_26:
    **(_DWORD **)(v15 + 1056) = 0;
    *(_DWORD *)(v15 + 1152) = 0;
    DynArrayImpl<0>::ShrinkToSize(v15 + 1128, 16LL);
    v21 = v66;
    v22 = v70;
    *(_BYTE *)(v66 + 1192) = 1;
    *(_OWORD *)(v21 + 584) = *(_OWORD *)v22;
    *(_OWORD *)(v21 + 600) = *((_OWORD *)v22 + 1);
    *(_OWORD *)(v21 + 616) = *((_OWORD *)v22 + 2);
    *(_OWORD *)(v21 + 632) = *((_OWORD *)v22 + 3);
    *(_DWORD *)(v21 + 648) = *((_DWORD *)v22 + 16);
    if ( (unsigned __int8)CMILMatrix::IsIdentity<0>() )
    {
      if ( v24 != -652 )
      {
        *(_WORD *)(v24 + 716) = 32085;
        *(_OWORD *)(v24 + 652) = _xmm;
        *(_OWORD *)(v24 + 668) = _xmm;
        *(_OWORD *)(v24 + 684) = _xmm;
        *(_OWORD *)(v24 + 700) = _xmm;
      }
    }
    else
    {
      v76 = 0;
      if ( CMILMatrix::SetToInverse((CMILMatrix *)v75, v23) )
      {
        v50 = v75[1];
        v51 = v76;
        *(_OWORD *)(v24 + 652) = v75[0];
        v52 = v75[2];
        *(_OWORD *)(v24 + 668) = v50;
        v53 = v75[3];
        *(_OWORD *)(v24 + 684) = v52;
        *(_OWORD *)(v24 + 700) = v53;
        *(_DWORD *)(v24 + 716) = v51;
      }
      else
      {
        v3 = -2003304441;
        v62 = -2003304441;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304441, 0x18Bu);
        v24 = v66;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0d(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start,
        *(unsigned __int8 *)(v24 + 1176));
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x8A1u);
      goto LABEL_58;
    }
    if ( *(_BYTE *)(v67 + 1176) )
    {
      v25 = DynArray<COverlayContext *,0>::AddMultipleAndSet(lpMem, &v67);
      v62 = v25;
      v3 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x8A5u);
        goto LABEL_58;
      }
    }
    v4 = v61;
    LODWORD(v6) = v65;
LABEL_35:
    v6 = (unsigned int)(v6 + 1);
    v65 = v6;
  }
  while ( (unsigned int)v6 < *((_DWORD *)v5 + 8) );
  if ( !v60 )
    goto LABEL_40;
  v26 = *((_QWORD *)v5 + 40);
  if ( !*(_BYTE *)(v26 + 2722) )
  {
    if ( *(_BYTE *)(v26 + 2725) )
    {
      if ( !*(_DWORD *)(v26 + 1116) )
        goto LABEL_40;
    }
    else
    {
      LODWORD(v4) = 0;
      while ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v26 + 16LL * (unsigned int)v4
                                                                                               + 24) )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= 8 )
          goto LABEL_40;
      }
    }
  }
  v40 = *((_QWORD *)v5 - 12);
  if ( *(_DWORD *)(*(_QWORD *)(v40 + 72) + 100LL) && *(_DWORD *)(v40 + 984) )
  {
    v54 = 0;
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v40 + 960) + 8LL * v54);
      v55 = *(_QWORD *)(v6 + 8);
      if ( v55 )
      {
        *(_BYTE *)(v55 + 93) |= 0x20u;
        ++v54;
      }
      else
      {
        DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v40 + 960, v54, v4);
      }
    }
    while ( v54 < *(_DWORD *)(v40 + 984) );
    v5 = v69;
  }
  v64 = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xq(v6, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, (char *)v5 - 112, 0LL);
  v41 = (COcclusionContext **)((char *)v5 + 328);
  if ( *((_QWORD *)v5 + 41) )
  {
LABEL_66:
    v42 = *((_QWORD *)v5 + 40);
    v43 = 0;
    if ( !*(_BYTE *)(v42 + 2722)
      && ((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v42 + 2716) - 1.0)) & _xmm) >= 0.0000011920929
       || *(_BYTE *)(v42 + 2724)) )
    {
      v43 = *(_DWORD *)(v42 + 2716);
    }
    v44 = COcclusionContext::Compute(*v41, v43, 0, 0LL, (__int64)lpMem);
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x8C9u);
      SAFE_DELETE<COcclusionContext>(v41);
    }
    v62 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xq(v45, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, (char *)v5 - 112, 0LL);
LABEL_40:
    v27 = *((_DWORD *)v5 + 8) == 0;
    v28 = 0;
    v65 = 0;
    if ( !v27 )
    {
      while ( 2 )
      {
        v3 = 0;
        v29 = v28;
        v30 = *((_QWORD *)v5 + 1);
        v69 = (CDesktopRenderTarget *)*((_QWORD *)v5 + 41);
        v66 = v29;
        v67 = 0LL;
        v31 = *(_QWORD **)(v30 + 8 * v29);
        v70 = v31;
        v62 = 0;
        if ( v31[13] )
          goto LABEL_42;
        v47 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*v31 + 40LL))(v31, v29, v4);
        v62 = v47;
        v3 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x62u);
          v29 = v66;
          v32 = 0LL;
        }
        else
        {
          v31 = v70;
          v29 = v66;
LABEL_42:
          v32 = v31[13];
          v67 = v32;
        }
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x26Bu);
          v29 = v66;
        }
        else
        {
          if ( *(_QWORD *)(v32 + 6752) )
          {
            SAFE_DELETE<COcclusionContext>(v32 + 6752);
            v32 = v67;
            v29 = v66;
          }
          *(_QWORD *)(v32 + 6744) = v69;
        }
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x8DEu);
          goto LABEL_57;
        }
        if ( v61 )
        {
          v33 = *(COverlayContext **)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 8 * v29) + 792LL);
          if ( v33 )
          {
            v34 = (struct COcclusionContext *)*((_QWORD *)v5 + 41);
            v35 = (const struct CDirtyRegion *)*((_QWORD *)v5 + 40);
            v36 = (const struct CVisualTree *)*((_QWORD *)v5 - 4);
            v60 = 0;
            v37 = COverlayContext::EndOverlayCandidateCollection(v33, v36, v35, v34, &v60);
            v62 = v37;
            v3 = v37;
            if ( v37 < 0 )
            {
              v59 = 2287;
              goto LABEL_115;
            }
            if ( v60 )
              v63 = 1;
          }
        }
        v28 = v65 + 1;
        v65 = v28;
        if ( v28 >= *((_DWORD *)v5 + 8) )
          break;
        continue;
      }
    }
    v27 = *((_DWORD *)v5 + 20) == 0;
    v38 = 0LL;
    v65 = 0;
    if ( v27 )
    {
      v3 = v62;
LABEL_56:
      if ( v63 )
      {
        v57 = (CDirtyRegion *)*((_QWORD *)v5 + 40);
        if ( !*((_BYTE *)v57 + 2722) )
        {
          CDirtyRegion::SetFullDirty(v57);
          v37 = CDesktopRenderTarget::CalculateOcclusion(v5, 0);
          v62 = v37;
          v3 = v37;
          if ( v37 < 0 )
          {
            v59 = 2312;
            goto LABEL_115;
          }
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v37 = CHwndRenderTarget::SetOcclusionContext(*(CHwndRenderTarget **)(*((_QWORD *)v5 + 7) + 8 * v38), 0LL);
        v62 = v37;
        v3 = v37;
        if ( v37 < 0 )
          break;
        v38 = v65 + 1;
        v65 = v38;
        if ( (unsigned int)v38 >= *((_DWORD *)v5 + 20) )
          goto LABEL_56;
      }
      v59 = 2301;
LABEL_115:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, v59);
    }
LABEL_57:
    if ( !v64 )
      goto LABEL_58;
  }
  else
  {
    v56 = COcclusionContext::Create(*((struct CComposition **)v5 - 12), (struct COcclusionContext **)v5 + 41);
    v62 = v56;
    v3 = v56;
    if ( v56 >= 0 )
    {
      v41 = (COcclusionContext **)((char *)v5 + 328);
      goto LABEL_66;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x8B9u);
  }
  v46 = *((_QWORD *)v5 - 12);
  if ( *(_DWORD *)(*(_QWORD *)(v46 + 72) + 100LL) && *(_DWORD *)(v46 + 984) )
  {
    do
    {
      v58 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 960) + 8LL * v2) + 8LL);
      if ( v58 )
      {
        *(_BYTE *)(v58 + 93) &= ~0x20u;
        ++v2;
      }
      else
      {
        DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(v46 + 960, v2, v4);
      }
    }
    while ( v2 < *(_DWORD *)(v46 + 984) );
    v3 = v62;
  }
LABEL_58:
  if ( lpMem[0] != lpMem[1] && lpMem[0] )
    HeapFree(WPF::g_processHeap, 0, lpMem[0]);
  return (unsigned int)v3;
}
