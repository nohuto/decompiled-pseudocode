/*
 * XREFs of ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180069700 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18004FCA8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVIImageSource@@$0A@@@QEAAJPEFBQEAVIImageSource@@I@Z @ 0x180070E88 (-AddMultipleAndSet@-$DynArray@PEAVIImageSource@@$0A@@@QEAAJPEFBQEAVIImageSource@@I@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x180072060 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18007EDA4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180092DA8 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180098570 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180098678 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBVCMILMatrix@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x18009F160 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800B63E8 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x1800B758C (--1CDisplaySet@@AEAA@XZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C624C (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800C77EC (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C89A0 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z @ 0x180128FEC (-SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1801461D4 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180151FC8 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::CalculateOcclusion(CDesktopRenderTarget *this, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int v3; // esi
  __int64 v4; // r8
  CDesktopRenderTarget *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool v11; // al
  bool v12; // al
  struct CDXGIEnumeration *v13; // rcx
  __int64 v14; // rcx
  int AdapterPopulationUniqueness; // eax
  char v16; // al
  void (*v17)(void); // rax
  CDisplaySet *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r10
  unsigned int v21; // r9d
  unsigned int v22; // edx
  __int64 v23; // r8
  _DWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rcx
  const struct CMILMatrix *v28; // rcx
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rdx
  unsigned int v32; // eax
  CDisplaySet *v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // rcx
  CDisplaySet *v36; // rax
  COverlayContext *v37; // rcx
  struct COcclusionContext *v38; // r9
  const struct CDirtyRegion *v39; // r8
  const struct CVisualTree *v40; // rdx
  _QWORD *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned int v45; // r8d
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int128 v49; // xmm0
  int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  unsigned int v53; // ebx
  _DWORD *v54; // r8
  __int64 v55; // r8
  int v56; // eax
  __int128 v57; // xmm1
  int v58; // eax
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  int v61; // r8d
  CDirtyRegion *v62; // rcx
  unsigned int v63; // [rsp+20h] [rbp-E0h]
  char v64; // [rsp+40h] [rbp-C0h]
  char v66; // [rsp+42h] [rbp-BEh]
  bool v67; // [rsp+43h] [rbp-BDh] BYREF
  char v68; // [rsp+44h] [rbp-BCh]
  unsigned int v69; // [rsp+48h] [rbp-B8h]
  CDisplaySet *v70; // [rsp+50h] [rbp-B0h]
  struct CDXGIEnumeration *v71; // [rsp+58h] [rbp-A8h]
  CDisplaySet *v72; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v73; // [rsp+68h] [rbp-98h]
  int D3DObjects; // [rsp+70h] [rbp-90h] BYREF
  CDesktopRenderTarget *v75; // [rsp+78h] [rbp-88h]
  __int64 v76; // [rsp+80h] [rbp-80h] BYREF
  LPVOID lpMem[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v78; // [rsp+98h] [rbp-68h]
  int v79; // [rsp+A0h] [rbp-60h]
  _OWORD v80[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v81; // [rsp+F0h] [rbp-10h]
  __int128 v82; // [rsp+100h] [rbp+0h]
  int v83; // [rsp+110h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  v75 = this;
  v4 = a2;
  v5 = this;
  v78 = 0LL;
  *(_OWORD *)lpMem = 0LL;
  v79 = 0;
  v66 = 0;
  v68 = 0;
  if ( !*((_QWORD *)this - 4) || !*((_DWORD *)this + 8) )
    return (unsigned int)v3;
  v6 = 0LL;
  v69 = 0;
  while ( 1 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)v5 + 1) + 8 * v6);
    if ( (*(_DWORD *)(v7 + 372) & 0x10000) != 0 && !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 32LL) + 151LL) )
      v66 = 1;
    if ( !(_BYTE)v4 )
      goto LABEL_59;
    v8 = *(_QWORD *)(v7 + 776);
    v73 = v8;
    v76 = v8;
    if ( !v8 )
      goto LABEL_59;
    v9 = v8;
    *(_QWORD *)&v82 = v7 + 164;
    if ( *(_DWORD *)(v8 + 200) )
    {
      v53 = 0;
      do
        COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(*(_QWORD *)(v9 + 176)
                                                                                     + 240LL * v53++));
      while ( v53 < *(_DWORD *)(v9 + 200) );
      v5 = v75;
    }
    *(_DWORD *)(v9 + 200) = 0;
    DynArrayImpl<0>::ShrinkToSize(v9 + 176, 240LL);
    v10 = *(_QWORD *)(v9 + 72);
    *(float *)(v9 + 40) = (float)*(int *)(v10 + 80);
    *(float *)(v9 + 44) = (float)*(int *)(v10 + 84);
    *(float *)(v9 + 48) = (float)*(int *)(v10 + 88);
    *(float *)(v9 + 52) = (float)*(int *)(v10 + 92);
    *(_DWORD *)(v9 + 56) = *(_DWORD *)(v10 + 104) - *(_DWORD *)(v10 + 96);
    *(_DWORD *)(v9 + 60) = *(_DWORD *)(v10 + 108) - *(_DWORD *)(v10 + 100);
    v11 = *(_BYTE *)(v10 + 294) && *(_BYTE *)(v10 + 295);
    *(_BYTE *)(v9 + 1095) = v11;
    v12 = (*(_DWORD *)(v10 + 96) != *(_DWORD *)(v10 + 64)
        || *(_DWORD *)(v10 + 100) != *(_DWORD *)(v10 + 68)
        || *(_DWORD *)(v10 + 104) != *(_DWORD *)(v10 + 72)
        || *(_DWORD *)(v10 + 108) != *(_DWORD *)(v10 + 76))
       && (!TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)(v10 + 96))
        || !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v54))
       && (!(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v10 + 96)
        || !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v55));
    *(_BYTE *)(v9 + 1096) = v12;
    *(_BYTE *)(v9 + 1101) = *(_BYTE *)(v10 + 293);
    v70 = 0LL;
    EnterCriticalSection(&g_DisplayManager);
    v3 = 0;
    v64 = 0;
    EnterCriticalSection(&g_DisplayManager);
    v71 = qword_18023E530;
    if ( !qword_18023E530
      || (!(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18023E530 + 2) + 104LL))(*((_QWORD *)qword_18023E530
                                                                                                 + 2))
       || (AdapterPopulationUniqueness = DrvQueryAdapterPopulationUniqueness(v14),
           v13 = v71,
           AdapterPopulationUniqueness != *((_DWORD *)v71 + 14))
       || qword_18023E530 != v71
        ? (ReleaseInterface<ClipPlaneInfoRef>(&qword_18023E530), v16 = 1, v64 = 1)
        : (v16 = 0),
          !qword_18023E530) )
    {
      D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v13, &qword_18023E530);
      TranslateDXGIorD3DErrorInContext((unsigned int)D3DObjects, 4LL, &D3DObjects);
      v3 = D3DObjects;
      if ( D3DObjects < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801F3C7C, 1u, D3DObjects, 0x12Bu);
      v16 = v64;
    }
    if ( v16 && qword_18023E540 )
      CSurfaceManager::ResetTokenThread(qword_18023E540);
    v71 = qword_18023E530;
    if ( qword_18023E530 )
      (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18023E530)(qword_18023E530);
    LeaveCriticalSection(&g_DisplayManager);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xEDu);
    }
    else
    {
      if ( qword_18023E528 )
        goto LABEL_29;
      v72 = 0LL;
      LeaveCriticalSection(&g_DisplayManager);
      v56 = CDisplayManager::DeriveCurrentDisplaySet(&g_DisplayManager, v71, &v72, 0LL, 0);
      v3 = v56;
      if ( v56 >= 0 )
      {
        EnterCriticalSection(&g_DisplayManager);
        if ( qword_18023E528 )
        {
          if ( v72 )
            CDisplaySet::Release(v72);
        }
        else
        {
          qword_18023E528 = v72;
          if ( v72 )
            _InterlockedIncrement((volatile signed __int32 *)v72);
        }
LABEL_29:
        _InterlockedIncrement((volatile signed __int32 *)qword_18023E528);
        v70 = qword_18023E528;
        goto LABEL_30;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0xFBu);
      EnterCriticalSection(&g_DisplayManager);
    }
LABEL_30:
    if ( v71 )
    {
      v17 = *(void (**)(void))(*(_QWORD *)v71 + 8LL);
      if ( (char *)v17 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v71);
      else
        v17();
    }
    LeaveCriticalSection(&g_DisplayManager);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xDDu);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xE41u);
      v19 = v73;
      v18 = v70;
    }
    else
    {
      v18 = v70;
      v19 = v73;
      *(_BYTE *)(v73 + 1103) = *((_DWORD *)v70 + 18) == 1;
    }
    if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)v18, 0xFFFFFFFF) == 1 )
    {
      CDisplaySet::~CDisplaySet(v18);
      WPF::ProcessHeapImpl::Free(v70);
      v19 = v73;
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x131u);
      goto LABEL_55;
    }
    if ( (CCommonRegistryData::m_dwOverlayTestMode == 5 || *(_DWORD *)(v19 + 128) <= 1u)
      && CCommonRegistryData::m_fDisableDirectFlip
      && !*(_DWORD *)(v19 + 152) )
    {
      goto LABEL_99;
    }
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 1112) + 32LL);
    if ( *(_BYTE *)(v20 + 151) )
      goto LABEL_99;
    if ( qword_18023E528 )
    {
      v21 = *((_DWORD *)qword_18023E528 + 18);
      v22 = 0;
      if ( v21 )
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(*((_QWORD *)qword_18023E528 + 6) + 8LL * v22);
          if ( *(_BYTE *)(v23 + 212) || *(_DWORD *)(v23 + 208) )
            break;
          if ( ++v22 >= v21 )
            goto LABEL_48;
        }
LABEL_99:
        *(_BYTE *)(v19 + 1088) = 0;
        goto LABEL_50;
      }
    }
LABEL_48:
    if ( *(_DWORD *)(v20 + 100) )
      goto LABEL_99;
    *(_BYTE *)(v19 + 1088) = 1;
LABEL_50:
    v24 = *(_DWORD **)(v19 + 976);
    v25 = v19 + 1048;
    *v24 = 0;
    *(_DWORD *)(v25 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v25, 16LL);
    v26 = v73;
    v27 = v82;
    *(_BYTE *)(v73 + 1106) = 1;
    *(_OWORD *)(v26 + 528) = *(_OWORD *)v27;
    *(_OWORD *)(v26 + 544) = *(_OWORD *)(v27 + 16);
    *(_OWORD *)(v26 + 560) = *(_OWORD *)(v27 + 32);
    *(_OWORD *)(v26 + 576) = *(_OWORD *)(v27 + 48);
    *(_DWORD *)(v26 + 592) = *(_DWORD *)(v27 + 64);
    if ( (unsigned __int8)CMILMatrix::IsIdentity<0>(v27) )
    {
      if ( v29 != -596 )
      {
        *(_WORD *)(v29 + 660) = 32085;
        *(_OWORD *)(v29 + 596) = _xmm;
        *(_OWORD *)(v29 + 612) = _xmm;
        *(_OWORD *)(v29 + 628) = _xmm;
        *(_OWORD *)(v29 + 644) = _xmm;
      }
    }
    else
    {
      v81 = 0;
      if ( CMILMatrix::SetToInverse((CMILMatrix *)v80, v28) )
      {
        v57 = v80[1];
        v58 = v81;
        *(_OWORD *)(v29 + 596) = v80[0];
        v59 = v80[2];
        *(_OWORD *)(v29 + 612) = v57;
        v60 = v80[3];
        *(_OWORD *)(v29 + 628) = v59;
        *(_OWORD *)(v29 + 644) = v60;
        *(_DWORD *)(v29 + 660) = v58;
      }
      else
      {
        v3 = -2003304441;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x14Fu);
        v29 = v73;
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_q(v28, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start, *(unsigned __int8 *)(v29 + 1088));
LABEL_55:
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x829u);
      goto LABEL_80;
    }
    if ( *(_BYTE *)(v76 + 1088) )
    {
      v30 = DynArray<IImageSource *,0>::AddMultipleAndSet(lpMem, &v76);
      v3 = v30;
      if ( v30 < 0 )
        break;
    }
    v4 = a2;
LABEL_59:
    v6 = v69 + 1;
    v69 = v6;
    if ( (unsigned int)v6 >= *((_DWORD *)v5 + 8) )
    {
      if ( !v66 )
        goto LABEL_64;
      v31 = *((_QWORD *)v5 + 36);
      if ( !*(_BYTE *)(v31 + 2724) )
      {
        if ( *(_BYTE *)(v31 + 2726) )
        {
          if ( !*(_DWORD *)(v31 + 1120) )
          {
LABEL_64:
            v32 = 0;
            v69 = 0;
            if ( !*((_DWORD *)v5 + 8) )
            {
LABEL_78:
              if ( *((_DWORD *)v5 + 20) )
              {
                while ( 1 )
                {
                  v30 = CHwndRenderTarget::SetOcclusionContext(
                          *(CHwndRenderTarget **)(*((_QWORD *)v5 + 7) + 8LL * v2),
                          0LL);
                  v3 = v30;
                  if ( v30 < 0 )
                    break;
                  if ( ++v2 >= *((_DWORD *)v5 + 20) )
                    goto LABEL_79;
                }
                v63 = 2191;
              }
              else
              {
LABEL_79:
                if ( !v68 )
                  goto LABEL_80;
                v62 = (CDirtyRegion *)*((_QWORD *)v5 + 36);
                if ( *((_BYTE *)v62 + 2724) )
                  goto LABEL_80;
                CDirtyRegion::SetFullDirty(v62);
                v30 = CDesktopRenderTarget::CalculateOcclusion(v5, 0);
                v3 = v30;
                if ( v30 >= 0 )
                  goto LABEL_80;
                v63 = 2205;
              }
              goto LABEL_151;
            }
            while ( 1 )
            {
              v3 = 0;
              v33 = (CDisplaySet *)v32;
              v34 = *((_QWORD *)v5 + 1);
              v75 = (CDesktopRenderTarget *)*((_QWORD *)v5 + 37);
              v70 = v33;
              v72 = 0LL;
              v35 = *(_QWORD **)(v34 + 8LL * (_QWORD)v33);
              *(_QWORD *)&v82 = v35;
              if ( v35[13] )
                goto LABEL_66;
              v52 = (*(__int64 (__fastcall **)(_QWORD *, CDisplaySet *, __int64))(*v35 + 40LL))(v35, v33, v4);
              v3 = v52;
              if ( v52 >= 0 )
                break;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x62u);
              v33 = v70;
              v36 = 0LL;
LABEL_67:
              if ( v3 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2BDu);
                v33 = v70;
              }
              else
              {
                if ( *((_QWORD *)v36 + 836) )
                {
                  SAFE_DELETE<COcclusionContext>((char *)v36 + 6688);
                  v36 = v72;
                  v33 = v70;
                }
                *((_QWORD *)v36 + 835) = v75;
              }
              if ( v3 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x870u);
                goto LABEL_80;
              }
              if ( a2 )
              {
                v37 = *(COverlayContext **)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 8LL * (_QWORD)v33) + 776LL);
                if ( v37 )
                {
                  v38 = (struct COcclusionContext *)*((_QWORD *)v5 + 37);
                  v39 = (const struct CDirtyRegion *)*((_QWORD *)v5 + 36);
                  v40 = (const struct CVisualTree *)*((_QWORD *)v5 - 4);
                  v67 = 0;
                  v30 = COverlayContext::EndOverlayCandidateCollection(v37, v40, v39, v38, &v67);
                  v3 = v30;
                  if ( v30 < 0 )
                  {
                    v63 = 2177;
                    goto LABEL_151;
                  }
                  if ( v67 )
                    v68 = 1;
                }
              }
              v32 = v69 + 1;
              v69 = v32;
              if ( v32 >= *((_DWORD *)v5 + 8) )
                goto LABEL_78;
            }
            v35 = (_QWORD *)v82;
            v33 = v70;
LABEL_66:
            v36 = (CDisplaySet *)v35[13];
            v72 = v36;
            goto LABEL_67;
          }
        }
        else
        {
          LODWORD(v4) = 0;
          while ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v31 + 16LL * (unsigned int)v4 + 24) )
          {
            v4 = (unsigned int)(v61 + 1);
            if ( (unsigned int)v4 >= 8 )
              goto LABEL_64;
          }
        }
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xd(v6, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, (char *)v5 - 112, 0LL);
      v42 = (_QWORD *)((char *)v5 + 296);
      if ( !*((_QWORD *)v5 + 37) )
      {
        v30 = COcclusionContext::Create(*((struct CComposition **)v5 - 12), (struct COcclusionContext **)v5 + 37);
        v3 = v30;
        if ( v30 < 0 )
        {
          v63 = 2112;
          goto LABEL_151;
        }
        v42 = (_QWORD *)((char *)v5 + 296);
      }
      v43 = *((_QWORD *)v5 + 36);
      if ( *(_BYTE *)(v43 + 2724) )
        v44 = 2708LL;
      else
        v44 = 960LL;
      v45 = *(_DWORD *)(v43 + 1120);
      v46 = v43 + v44;
      if ( v45 )
      {
        v47 = 0LL;
        v48 = v45;
        do
        {
          v49 = *(_OWORD *)(v47 + v46);
          v47 += 16LL;
          *(__int128 *)((char *)&v82 + v47) = v49;
          v82 = v49;
          --v48;
        }
        while ( v48 );
      }
      v50 = COcclusionContext::Compute(*v42, *((_QWORD *)v5 - 4), v45, (int)&v83, 0, 0LL, (__int64)lpMem);
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x85Bu);
        SAFE_DELETE<COcclusionContext>(v42);
      }
      v3 = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xd(v51, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, (char *)v5 - 112, 0LL);
      goto LABEL_64;
    }
  }
  v63 = 2093;
LABEL_151:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, v63);
LABEL_80:
  if ( lpMem[0] != lpMem[1] && lpMem[0] )
    HeapFree(WPF::g_processHeap, 0, lpMem[0]);
  return (unsigned int)v3;
}
