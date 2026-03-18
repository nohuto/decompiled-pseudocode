/*
 * XREFs of ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002E6B0
 * Callers:
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18002C000 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18002F980 (-Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800216F4 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800308F0 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DbgSavePresentInfo@CDWMSwapChain@@IEAAXW4DbgPresentType@1@IJI@Z @ 0x18011B2D8 (-DbgSavePresentInfo@CDWMSwapChain@@IEAAXW4DbgPresentType@1@IJI@Z.c)
 *     ?ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ @ 0x18011B36C (-ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ.c)
 *     ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x18011B660 (-D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     McTemplateU0qqq @ 0x1801252C0 (McTemplateU0qqq.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 *     ?D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801A99C4 (-D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYP.c)
 *     ?AddMultipleAndSet@?$DynArray@UDXGI_SCROLL_RECT@@$0A@@@QEAAJPEFBUDXGI_SCROLL_RECT@@I@Z @ 0x1801AFBB0 (-AddMultipleAndSet@-$DynArray@UDXGI_SCROLL_RECT@@$0A@@@QEAAJPEFBUDXGI_SCROLL_RECT@@I@Z.c)
 *     ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801AFF98 (-ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DX.c)
 *     ?DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z @ 0x1801B0324 (-DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z.c)
 *     ?ExcludeNonDesktopOverlayPlanes@CDWMSwapChain@@AEAAXXZ @ 0x1801B0454 (-ExcludeNonDesktopOverlayPlanes@CDWMSwapChain@@AEAAXXZ.c)
 *     McTemplateU0qn @ 0x1801B0BDC (McTemplateU0qn.c)
 *     McTemplateU0xqqqddddddddddddqqq @ 0x1801B0C4C (McTemplateU0xqqqddddddddddddqqq.c)
 */

__int64 __fastcall CDWMSwapChain::PresentInternal(
        CDWMSwapChain *this,
        FastRegion::Internal::CRgnData **a2,
        unsigned int a3,
        unsigned int a4,
        struct RenderTargetPresentParameters *a5)
{
  bool v5; // zf
  unsigned int v7; // r12d
  __int64 v10; // rax
  int v11; // r15d
  int v12; // edx
  int v13; // r9d
  __int64 v14; // r8
  int v15; // edx
  __int64 *v16; // r15
  int v17; // eax
  int v18; // edi
  __int64 v19; // rax
  __int64 result; // rax
  FastRegion::Internal::CRgnData **v21; // r15
  FastRegion::Internal::CRgnData *v22; // r8
  char *v23; // rdx
  __int64 v24; // rsi
  int v25; // eax
  unsigned int v26; // r12d
  __int64 v27; // r8
  struct DXGI_SCROLL_RECT *v28; // r9
  struct DXGI_SCROLL_RECT *v29; // r15
  int v30; // esi
  char *v31; // r10
  int v32; // edx
  struct DXGI_SCROLL_RECT *v33; // r11
  __int64 v34; // r8
  __int64 v35; // rcx
  unsigned int v36; // ecx
  struct CCrossThreadComposition *v37; // rax
  __int64 v38; // rdx
  int *v39; // rdx
  __int64 v40; // r8
  int v41; // ecx
  int v42; // eax
  CDWMSwapChain *v43; // rcx
  struct IDXGIResource *v44; // r9
  struct tagRECT *v45; // r10
  struct tagRECT *v46; // r11
  CDWMSwapChain *v47; // rcx
  char v48; // dl
  int v49; // eax
  __int64 v50; // rdx
  struct tagRECT *v51; // rcx
  int v52; // eax
  int v53; // edx
  unsigned int i; // edi
  __int64 v55; // r8
  const void *v56; // rdx
  __int64 v57; // rax
  int v58; // eax
  unsigned int v59; // edi
  __int64 v60; // rcx
  __int64 (__fastcall *v61)(__int64, __int64, __int64); // rax
  int v62; // eax
  int v63; // eax
  int v64; // r9d
  int v65; // r8d
  CDWMSwapChain *v66; // rcx
  struct tagRECT *v67; // r10
  int v68; // eax
  int v69; // eax
  int v70; // eax
  __int64 v71; // rax
  unsigned int v72; // esi
  __int64 v73; // rdx
  int v74; // eax
  unsigned int v75; // edx
  CDWMSwapChain *v76; // rcx
  unsigned int v77; // r8d
  struct tagRECT *v78; // r10
  int v79; // eax
  __int64 v80; // rdx
  int v81; // eax
  int v82; // eax
  int v83; // [rsp+B0h] [rbp-80h] BYREF
  unsigned int v84; // [rsp+B4h] [rbp-7Ch]
  struct DXGI_SCROLL_RECT *v85[2]; // [rsp+B8h] [rbp-78h] BYREF
  struct DXGI_SCROLL_RECT *v86; // [rsp+C8h] [rbp-68h]
  char *v87; // [rsp+D0h] [rbp-60h]
  int v88; // [rsp+D8h] [rbp-58h]
  int v89; // [rsp+DCh] [rbp-54h]
  _BYTE v90[24]; // [rsp+E8h] [rbp-48h] BYREF
  void *lpMem; // [rsp+100h] [rbp-30h] BYREF
  _BYTE *v92; // [rsp+108h] [rbp-28h]
  int v93; // [rsp+110h] [rbp-20h]
  unsigned int v94[2]; // [rsp+114h] [rbp-1Ch]
  _BYTE v95[128]; // [rsp+120h] [rbp-10h] BYREF

  v5 = *((_BYTE *)this + 577) == 0;
  v7 = a3;
  v84 = a3;
  if ( !v5 )
  {
    CD3DDeviceLevel1::Flush(*(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Start);
    WaitForSingleObject(*((HANDLE *)this + 57), 0x64u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Stop);
  }
  v10 = *((unsigned int *)this + 92);
  v83 = 0;
  v11 = 0;
  if ( (_DWORD)v10 )
  {
    v39 = (int *)*((_QWORD *)this + 43);
    v40 = v10;
    do
    {
      v41 = *v39;
      v42 = v11 + 1;
      v39 += 12;
      if ( v41 != 1 )
        v42 = v11;
      v11 = v42;
      --v40;
    }
    while ( v40 );
    v83 = v42;
  }
  if ( *((_QWORD *)this + 58) )
  {
    if ( CDWMSwapChain::DirectFlipRectRequiresPanelFitter(this, (const struct tagRECT *)((char *)this + 476))
      || CDWMSwapChain::DirectFlipRectRequiresPanelFitter(v43, (const struct tagRECT *)((char *)this + 492)) )
    {
      v48 = 1;
    }
    else if ( !CDWMSwapChain::ShouldConvertPresentToMPO(v47) )
    {
      v49 = CD2DContext::D2DPresentDWM(
              *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
              *((struct IDXGISwapChainDWM1 **)this + 52),
              v7,
              a4,
              (unsigned int)v46,
              v46,
              (unsigned int)v46,
              (const struct DXGI_SCROLL_RECT *)v46,
              v44,
              (unsigned int)v46);
      v18 = v49;
      if ( v49 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x18Du);
      v50 = 1LL;
LABEL_81:
      CDWMSwapChain::DbgSavePresentInfo(this, v50, a4, (unsigned int)v18, 1);
      if ( (a4 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0x(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT,
          *((_QWORD *)this + 56));
      goto LABEL_26;
    }
    v51 = (struct tagRECT *)((char *)this + 492);
    if ( !v48 )
    {
      v51 = v46;
      v45 = v46;
    }
    v52 = CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
            this,
            v7,
            a4,
            v45,
            v51,
            v44,
            (unsigned int)v46,
            v46,
            *((enum DXGI_COLOR_SPACE_TYPE *)this + 118));
    v18 = v52;
    if ( v52 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x17Fu);
    v50 = 4LL;
    goto LABEL_81;
  }
  if ( !*((_BYTE *)this + 584) )
  {
    v93 = 8;
    lpMem = v95;
    v92 = v95;
    *(_QWORD *)v94 = 8LL;
    if ( v11 > 0 )
    {
      v21 = (FastRegion::Internal::CRgnData **)((char *)this + 272);
      if ( **((_DWORD **)this + 34) )
        goto LABEL_35;
      v11 = v83;
    }
    if ( !a2 || !*(_DWORD *)*a2 )
      goto LABEL_7;
    v21 = a2;
LABEL_35:
    if ( v21 )
    {
      v22 = *v21;
      v94[1] = 0;
      if ( *(_DWORD *)v22 )
      {
        v23 = (char *)v22 + 8 * *(_DWORD *)v22 + 4;
        v24 = (__int64)&v23[*((int *)v23 + 1) - (__int64)*((int *)v22 + 4) - ((_QWORD)v22 + 12)] >> 3;
      }
      else
      {
        LODWORD(v24) = 0;
      }
      v25 = DynArrayImpl<0>::Grow((unsigned int)&lpMem, 16, v24, 0, 0LL);
      v18 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x1A7u);
      else
        v94[1] += v24;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1E5u);
        DynArrayImpl<1>::~DynArrayImpl<1>(&lpMem);
        goto LABEL_32;
      }
      v26 = 0;
      FastRegion::Internal::CRgnData::BeginIterator(*v21, (struct FastRegion::CRegion::Iterator *)v85);
      LODWORD(v27) = v89;
      v28 = v86;
      v29 = v85[1];
      v30 = v88;
      v31 = v87;
      while ( v28 < v29 )
      {
        v32 = 2 * v30;
        *(_DWORD *)&v90[4] = *(_DWORD *)v28;
        v33 = (struct DXGI_SCROLL_RECT *)((char *)v28 + 8);
        ++v30;
        *(_DWORD *)&v90[12] = *((_DWORD *)v28 + 2);
        *(_DWORD *)v90 = *(_DWORD *)&v31[4 * v32];
        *(_DWORD *)&v90[8] = *(_DWORD *)&v31[4 * v32 + 4];
        *((_OWORD *)lpMem + v26) = *(_OWORD *)v90;
        if ( v30 >= (int)v27 )
        {
          while ( 1 )
          {
            v28 = v33;
            v34 = *((int *)v33 + 3);
            v31 = (char *)v33 + *((int *)v33 + 1);
            v33 = (struct DXGI_SCROLL_RECT *)((char *)v33 + 8);
            v27 = ((__int64)v33 + v34 - (__int64)v31) >> 3;
            if ( (_DWORD)v27 )
              break;
            if ( v28 >= v29 )
              goto LABEL_46;
          }
          v30 = 0;
        }
LABEL_46:
        ++v26;
      }
      v7 = v84;
    }
    v11 = v83;
LABEL_7:
    if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_RECT) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Start, v94[1]);
      v14 = v94[1];
      v59 = 0;
      if ( v94[1] )
      {
        do
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            McTemplateU0qn(
              (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
              v12,
              0,
              v13,
              (__int64)lpMem + 16 * v59);
            v14 = v94[1];
          }
          ++v59;
        }
        while ( v59 < (unsigned int)v14 );
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_9;
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Stop);
    }
    v14 = v94[1];
LABEL_9:
    if ( *((_BYTE *)this + 579) && (a4 & 1) == 0 )
    {
      v60 = *((_QWORD *)this + 52);
      v61 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v60 + 224LL);
      if ( *((_BYTE *)this + 580) )
      {
        v62 = v61(v60, 1LL, v14);
        v18 = v62;
        if ( v62 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x201u);
LABEL_118:
          DynArrayImpl<1>::~DynArrayImpl<1>(&lpMem);
          goto LABEL_32;
        }
      }
      else
      {
        v63 = v61(v60, 0LL, v14);
        v18 = v63;
        if ( v63 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x205u);
          goto LABEL_118;
        }
      }
      v14 = v94[1];
    }
    if ( (a4 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      if ( a5 )
      {
        v64 = *((unsigned __int8 *)a5 + 34);
        v65 = *((_DWORD *)a5 + 9);
      }
      else
      {
        v64 = 0;
        v65 = 0;
      }
      McTemplateU0qqq(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_ETWGUID_PRESENT,
        v65,
        v64,
        a4);
      v14 = v94[1];
    }
    if ( v11 )
    {
      v5 = *((_DWORD *)this + 92) == 0;
      v86 = 0LL;
      *(_OWORD *)v85 = 0LL;
      LODWORD(v87) = 0;
      v72 = 0;
      if ( !v5 )
      {
        while ( 1 )
        {
          v73 = *((_QWORD *)this + 43) + 48LL * v72;
          if ( *(_DWORD *)v73 == 1 )
          {
            *(_QWORD *)v90 = *(_QWORD *)(v73 + 32);
            *(_OWORD *)&v90[8] = *(_OWORD *)(v73 + 16);
            v74 = DynArray<DXGI_SCROLL_RECT,0>::AddMultipleAndSet(v85, v90, v14);
            v18 = v74;
            if ( v74 < 0 )
              break;
          }
          if ( ++v72 >= *((_DWORD *)this + 92) )
            goto LABEL_145;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v74, 0x26Fu);
        DynArrayImpl<1>::~DynArrayImpl<1>(v85);
        goto LABEL_118;
      }
LABEL_145:
      if ( CDWMSwapChain::ShouldConvertPresentToMPO(this) )
      {
        v79 = CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
                v76,
                v7,
                a4,
                0LL,
                v78,
                (struct IDXGIResource *)v78,
                v77,
                (struct tagRECT *)lpMem,
                *((enum DXGI_COLOR_SPACE_TYPE *)this + 48));
        v18 = v79;
        if ( v79 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v79, 0x27Cu);
        v80 = 3LL;
      }
      else
      {
        v81 = CD2DContext::D2DPresentDWM(
                *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
                *((struct IDXGISwapChainDWM1 **)this + 52),
                v7,
                a4,
                v77,
                (const struct tagRECT *)lpMem,
                v75,
                v85[0],
                (struct IDXGIResource *)v78,
                (unsigned int)v78);
        v18 = v81;
        if ( v81 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x28Au);
        v80 = 0LL;
      }
      CDWMSwapChain::DbgSavePresentInfo(this, v80, a4, (unsigned int)v18, 1);
      DynArrayImpl<1>::~DynArrayImpl<1>(v85);
    }
    else
    {
      if ( a5 && *((_BYTE *)a5 + 34) && !(_DWORD)v14 )
      {
        *(_QWORD *)v90 = 0LL;
        *(_QWORD *)&v90[8] = 0LL;
        if ( CDWMSwapChain::ShouldConvertPresentToMPO(this) )
        {
          v68 = CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
                  v66,
                  v7,
                  a4,
                  0LL,
                  v67,
                  (struct IDXGIResource *)v67,
                  1u,
                  (struct tagRECT *)v90,
                  *((enum DXGI_COLOR_SPACE_TYPE *)this + 48));
          v18 = v68;
          if ( v68 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0x228u);
          CDWMSwapChain::DbgSavePresentInfo(this, 3LL, a4, (unsigned int)v18, 1);
        }
        else
        {
          v69 = CD2DContext::D2DPresentDWM(
                  *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
                  *((struct IDXGISwapChainDWM1 **)this + 52),
                  v7,
                  a4,
                  1u,
                  (const struct tagRECT *)v90,
                  (unsigned int)v67,
                  (const struct DXGI_SCROLL_RECT *)v67,
                  (struct IDXGIResource *)v67,
                  *((_DWORD *)a5 + 9));
          v18 = v69;
          if ( v69 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0x236u);
          CDWMSwapChain::DbgSavePresentInfo(this, 0LL, a4, (unsigned int)v18, 1);
        }
      }
      else if ( !*((_BYTE *)this + 585) || *((_BYTE *)this + 583) )
      {
        if ( a5 )
          v15 = *((_DWORD *)a5 + 9);
        else
          v15 = 0;
        v16 = (__int64 *)*((_QWORD *)this + 52);
        if ( (a4 & 1) != 0 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, void *, _DWORD, _QWORD, _QWORD, int))(*v16 + 128))(
                  v16,
                  v7,
                  a4,
                  (unsigned int)v14,
                  lpMem,
                  0,
                  0LL,
                  0LL,
                  v15);
        }
        else
        {
          v35 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 184LL);
          v17 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, void *, _DWORD, _QWORD, _DWORD, _QWORD, int))(*(_QWORD *)v35 + 104LL))(
                  v35,
                  v16,
                  v7,
                  a4,
                  lpMem,
                  v14,
                  0LL,
                  0,
                  0LL,
                  v15);
        }
        v18 = v17;
        if ( v17 == 142213121 )
        {
          v71 = *v16;
          v83 = 0;
          if ( (*(int (__fastcall **)(__int64 *, int *))(v71 + 240))(v16, &v83) >= 0 )
          {
            if ( v83 )
              RaiseFailFastException(0LL, 0LL, 0);
          }
        }
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x254u);
        if ( (a4 & 1) == 0 )
        {
          v36 = (*((_DWORD *)this + 184) + 1) % 6u;
          v37 = g_pComposition;
          *((_DWORD *)this + 184) = v36;
          if ( v37 )
            v38 = *((_QWORD *)v37 + 45);
          else
            v38 = 0LL;
          *((_QWORD *)this + 3 * (int)v36 + 74) = v38;
          *((_DWORD *)this + 6 * *((int *)this + 184) + 150) = 0;
          *((_DWORD *)this + 6 * *((int *)this + 184) + 151) = v18;
          *((_DWORD *)this + 6 * *((int *)this + 184) + 152) = 1;
        }
      }
      else
      {
        v70 = CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
                this,
                v7,
                a4,
                0LL,
                0LL,
                0LL,
                v14,
                (struct tagRECT *)lpMem,
                *((enum DXGI_COLOR_SPACE_TYPE *)this + 48));
        v18 = v70;
        if ( v70 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x246u);
        CDWMSwapChain::DbgSavePresentInfo(this, 4LL, a4, (unsigned int)v18, 1);
      }
      if ( v18 == 142213167 )
        *((_BYTE *)this + 579) = 1;
    }
    if ( lpMem != v92 )
      WPF::ProcessHeapImpl::Free(lpMem);
    goto LABEL_26;
  }
  if ( (a4 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0d(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_OVERLAY_PRESENT_Start,
      *((unsigned int *)this + 133));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      for ( i = 0; i < *((_DWORD *)this + 133); ++i )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v55 = *((_QWORD *)this + 67) + 136LL * i;
          McTemplateU0xqqqddddddddddddqqq(
            (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
            v53,
            *(_QWORD *)(v55 + 8),
            *(_DWORD *)(v55 + 4),
            *(_DWORD *)v55,
            *(_DWORD *)(v55 + 24),
            *(_DWORD *)(v55 + 28),
            *(_DWORD *)(v55 + 32),
            *(_DWORD *)(v55 + 36),
            *(_DWORD *)(v55 + 40),
            *(_DWORD *)(v55 + 44),
            *(_DWORD *)(v55 + 48),
            *(_DWORD *)(v55 + 52),
            *(_DWORD *)(v55 + 56),
            *(_DWORD *)(v55 + 60),
            *(_DWORD *)(v55 + 64),
            *(_DWORD *)(v55 + 68),
            *(_DWORD *)(v55 + 72),
            *(_DWORD *)(v55 + 76),
            *(_DWORD *)(v55 + 80),
            *(_DWORD *)(v55 + 100));
        }
      }
    }
  }
  v56 = (const void *)*((_QWORD *)this + 69);
  v57 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 69) = 0LL;
  v58 = CD2DContext::D2DPresentMultiplaneOverlay(
          *(CD2DContext **)(v57 + 80),
          *((struct IDXGISwapChainDWM1 **)this + 52),
          v7,
          a4,
          (enum DXGI_HDR_METADATA_TYPE)*((_DWORD *)this + 136),
          v56,
          *((_DWORD *)this + 133),
          *((const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY **)this + 67));
  v18 = v58;
  if ( v58 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x1BFu);
  CDWMSwapChain::DbgSavePresentInfo(this, 2LL, a4, (unsigned int)v18, *((_DWORD *)this + 133));
  if ( v18 < 0 )
    goto LABEL_96;
  if ( (a4 & 1) == 0 )
  {
    CDWMSwapChain::ExcludeNonDesktopOverlayPlanes(this);
LABEL_96:
    if ( (a4 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_PRESENT_Stop);
  }
LABEL_26:
  if ( v18 >= 0 && (a4 & 3) == 0 )
  {
    if ( *((_QWORD *)this + 64) )
    {
      v82 = *((_DWORD *)this + 132);
      if ( !v82 )
        v82 = *((_DWORD *)this + 40);
      *((_DWORD *)this + 132) = v82 - 1;
    }
    v19 = *((_QWORD *)this + 58);
    *((_QWORD *)this + 65) = v19;
    *((_BYTE *)this + 582) = !v19 && !*((_BYTE *)this + 584);
  }
LABEL_32:
  result = (unsigned int)v18;
  *((_BYTE *)this + 577) = 0;
  return result;
}
