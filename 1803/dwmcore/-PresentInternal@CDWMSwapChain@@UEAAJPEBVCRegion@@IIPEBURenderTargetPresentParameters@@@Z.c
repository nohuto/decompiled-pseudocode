/*
 * XREFs of ?PresentInternal@CDWMSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18007D020
 * Callers:
 *     ?CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z @ 0x180075068 (-CheckDeviceState@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F370 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DbgSavePresentInfo@CDWMSwapChain@@IEAAXW4DbgPresentType@1@IJI@Z @ 0x18013DB34 (-DbgSavePresentInfo@CDWMSwapChain@@IEAAXW4DbgPresentType@1@IJI@Z.c)
 *     ?ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ @ 0x18013DBC8 (-ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ.c)
 *     ?SignalRenderFence@CD3DDeviceLevel1@@QEAAJ_K@Z @ 0x18013DD38 (-SignalRenderFence@CD3DDeviceLevel1@@QEAAJ_K@Z.c)
 *     ?D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@PEAUIDXGIResource@@I@Z @ 0x18013E134 (-D2DPresentDWM@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEBUtagRECT@@IPEBUDXGI_SCROLL_RECT@@.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     McTemplateU0qqq @ 0x180147E74 (McTemplateU0qqq.c)
 *     McTemplateU0x @ 0x180148F68 (McTemplateU0x.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 *     ?D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801E1F24 (-D2DPresentMultiplaneOverlay@CD2DContext@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYP.c)
 *     ?ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801EA4A8 (-ConvertPresentToMultiplaneOverlay@CDWMSwapChain@@AEAAJIIPEAUtagRECT@@0PEAUIDXGIResource@@I0W4DX.c)
 *     ?DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z @ 0x1801EA624 (-DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z.c)
 *     ?ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ @ 0x1801EA79C (-ReleaseD2DBitmaps@CSwapChainBase@@IEAAXXZ.c)
 *     McTemplateU0qn @ 0x1801EAA7C (McTemplateU0qn.c)
 *     McTemplateU0xqqqddddddddddddqqq @ 0x1801EAAEC (McTemplateU0xqqqddddddddddddqqq.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x1801EBCD0 (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 */

__int64 __fastcall CDWMSwapChain::PresentInternal(
        CDWMSwapChain *this,
        const struct CRegion *a2,
        unsigned int a3,
        unsigned int a4,
        const struct RenderTargetPresentParameters *a5)
{
  bool v5; // zf
  const struct RenderTargetPresentParameters *v7; // r12
  __int64 v11; // rax
  unsigned int v12; // esi
  int v13; // r13d
  const struct CRegion *v14; // r12
  _DWORD *v15; // r8
  _DWORD *v16; // rdx
  __int64 v17; // r14
  int v18; // eax
  int v19; // edi
  _DWORD *v20; // rdx
  unsigned int v21; // r11d
  struct DXGI_SCROLL_RECT *v22; // r10
  __int64 v23; // r12
  FastRegion::Internal::CRgnData *v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r9
  struct DXGI_SCROLL_RECT *v27; // r13
  int v28; // r14d
  int v29; // edx
  struct DXGI_SCROLL_RECT *v30; // r8
  __int64 v31; // rax
  int v32; // edx
  int v33; // r9d
  int v34; // r14d
  unsigned int v35; // r9d
  struct tagRECT *v36; // r8
  int v37; // edx
  __int64 *v38; // r12
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // ecx
  struct CCrossThreadComposition *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v46; // rax
  _DWORD *v47; // rcx
  __int64 v48; // rdx
  int v49; // eax
  CDWMSwapChain *v50; // rcx
  struct IDXGIResource *v51; // r9
  struct tagRECT *v52; // r10
  struct tagRECT *v53; // r11
  CDWMSwapChain *v54; // rcx
  char v55; // di
  int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  unsigned int v59; // edx
  unsigned int v60; // ecx
  __int64 v61; // r9
  _DWORD *v62; // r8
  unsigned int v63; // eax
  int v64; // edx
  unsigned int v65; // edi
  __int64 v66; // r8
  const void *v67; // rdx
  __int64 v68; // rax
  unsigned int v69; // r8d
  int v70; // eax
  int v71; // esi
  __int64 v72; // r12
  __int64 v73; // r13
  __int64 v74; // rcx
  unsigned int i; // edi
  __int64 v76; // rcx
  __int64 (__fastcall *v77)(__int64, __int64); // rax
  int v78; // eax
  int v79; // eax
  int v80; // r8d
  int v81; // eax
  unsigned int v82; // r13d
  unsigned int v83; // r12d
  unsigned int v84; // edx
  __int64 v85; // r8
  unsigned int v86; // eax
  __int128 v87; // xmm0
  __int64 v88; // rax
  __int64 v89; // rcx
  struct DXGI_SCROLL_RECT *v90; // rax
  int v91; // eax
  CDWMSwapChain *v92; // rcx
  int v93; // eax
  int v94; // eax
  int refreshed; // eax
  int v96; // eax
  int v97; // [rsp+B0h] [rbp-80h] BYREF
  unsigned int v98; // [rsp+B4h] [rbp-7Ch]
  struct DXGI_SCROLL_RECT *v99[3]; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v100; // [rsp+D0h] [rbp-60h]
  int v101; // [rsp+D8h] [rbp-58h]
  int v102; // [rsp+DCh] [rbp-54h]
  const struct RenderTargetPresentParameters *v103; // [rsp+E8h] [rbp-48h]
  _BYTE v104[24]; // [rsp+F0h] [rbp-40h] BYREF
  void *lpMem; // [rsp+110h] [rbp-20h] BYREF
  _BYTE *v106; // [rsp+118h] [rbp-18h]
  int v107; // [rsp+120h] [rbp-10h]
  unsigned int v108[2]; // [rsp+124h] [rbp-Ch]
  _BYTE v109[128]; // [rsp+130h] [rbp+0h] BYREF

  v5 = *((_BYTE *)this + 569) == 0;
  v7 = a5;
  v103 = a5;
  v98 = a3;
  if ( !v5 )
  {
    CD3DDeviceLevel1::SignalRenderFence(
      *(CD3DDeviceLevel1 **)(*((_QWORD *)this + 2) + 80LL),
      *((_QWORD *)g_pComposition + 48));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Start);
    WaitForSingleObject(*((HANDLE *)this + 58), 0x64u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PARALLEL_MODE_WAITING_FOR_NEXT_VSYNC_Stop);
  }
  v11 = *((unsigned int *)this + 92);
  v12 = 0;
  v97 = 0;
  v13 = 0;
  if ( (_DWORD)v11 )
  {
    v47 = (_DWORD *)*((_QWORD *)this + 43);
    v48 = v11;
    do
    {
      v5 = *v47 == 1;
      v49 = v13 + 1;
      v47 += 12;
      if ( !v5 )
        v49 = v13;
      v13 = v49;
      --v48;
    }
    while ( v48 );
    v97 = v49;
  }
  if ( *((_QWORD *)this + 59) )
  {
    if ( CDWMSwapChain::DirectFlipRectRequiresPanelFitter(this, (const struct tagRECT *)((char *)this + 484))
      || CDWMSwapChain::DirectFlipRectRequiresPanelFitter(v50, v52) )
    {
      v55 = 1;
    }
    else
    {
      v55 = 0;
      if ( !CDWMSwapChain::ShouldConvertPresentToMPO(v54) )
      {
        v56 = CD2DContext::D2DPresentDWM(
                *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
                *((struct IDXGISwapChainDWM1 **)this + 53),
                a3,
                a4,
                0,
                0LL,
                0,
                0LL,
                v51,
                0);
        v19 = v56;
        if ( v56 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x161u);
        v57 = 1LL;
LABEL_85:
        CDWMSwapChain::DbgSavePresentInfo(this, v57, a4, (unsigned int)v19, 1);
        v34 = a4 & 1;
        if ( (a4 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0x(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT,
            *((_QWORD *)this + 57));
        goto LABEL_46;
      }
    }
    if ( !v55 )
    {
      v53 = 0LL;
      v52 = 0LL;
    }
    v58 = CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
            this,
            a3,
            a4,
            v53,
            v52,
            v51,
            0,
            0LL,
            *((enum DXGI_COLOR_SPACE_TYPE *)this + 120));
    v19 = v58;
    if ( v58 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x153u);
    v57 = 4LL;
    goto LABEL_85;
  }
  if ( !*((_BYTE *)this + 576) )
  {
    v107 = 8;
    lpMem = v109;
    v106 = v109;
    *(_QWORD *)v108 = 8LL;
    if ( v13 > 0 )
    {
      v14 = (CDWMSwapChain *)((char *)this + 272);
      if ( **((_DWORD **)this + 34) )
        goto LABEL_9;
      v7 = v103;
    }
    if ( !a2 || !**(_DWORD **)a2 )
      goto LABEL_24;
    v14 = a2;
LABEL_9:
    if ( !v14 )
    {
LABEL_23:
      v7 = v103;
LABEL_24:
      if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_RECT) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Start, v108[1]);
        for ( i = 0; i < v108[1]; ++i )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0qn(
              (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
              v32,
              0,
              v33,
              (__int64)lpMem + 16 * i);
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Stop);
      }
      if ( *((_BYTE *)this + 571) && (a4 & 1) == 0 )
      {
        v76 = *((_QWORD *)this + 53);
        v77 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v76 + 224LL);
        if ( *((_BYTE *)this + 572) )
        {
          v78 = v77(v76, 1LL);
          v19 = v78;
          if ( v78 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v78, 0x1E1u);
            goto LABEL_135;
          }
        }
        else
        {
          v79 = v77(v76, 0LL);
          v19 = v79;
          if ( v79 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v79, 0x1E5u);
LABEL_135:
            DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&lpMem);
            goto LABEL_54;
          }
        }
      }
      v34 = a4 & 1;
      if ( (a4 & 1) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        if ( v7 )
          v80 = *((_DWORD *)v7 + 9);
        else
          v80 = 0;
        McTemplateU0qqq(
          (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&EVTDESC_ETWGUID_PRESENT,
          v80,
          0,
          a4);
      }
      if ( !v13 )
      {
        v35 = v108[1];
        v36 = (struct tagRECT *)lpMem;
        *(_OWORD *)v104 = 0uLL;
        if ( !v108[1] && *((_BYTE *)this + 571) && (a4 & 3) == 0 )
        {
          v36 = (struct tagRECT *)v104;
          v35 = 1;
        }
        if ( *((_DWORD *)this + 145) != 2 || *((_BYTE *)this + 575) )
        {
          if ( v7 )
            v37 = *((_DWORD *)v7 + 9);
          else
            v37 = 0;
          v38 = (__int64 *)*((_QWORD *)this + 53);
          if ( (a4 & 1) != 0 )
          {
            v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*v38 + 128))(*((_QWORD *)this + 53), v98, a4);
          }
          else
          {
            v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 184LL);
            v40 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, struct tagRECT *, unsigned int, _QWORD, _DWORD, _QWORD, int))(*(_QWORD *)v39 + 104LL))(
                    v39,
                    v38,
                    v98,
                    a4,
                    v36,
                    v35,
                    0LL,
                    0,
                    0LL,
                    v37);
          }
          v19 = v40;
          if ( v40 == 142213121 )
          {
            v46 = *v38;
            v97 = 0;
            if ( (*(int (__fastcall **)(__int64 *, int *))(v46 + 240))(v38, &v97) >= 0 )
            {
              if ( v97 )
                RaiseFailFastException(0LL, 0LL, 0);
            }
          }
          if ( v19 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x218u);
          if ( (a4 & 1) == 0 )
          {
            v41 = (*((_DWORD *)this + 184) + 1) % 6u;
            v42 = g_pComposition;
            *((_DWORD *)this + 184) = v41;
            if ( v42 )
              v43 = *((_QWORD *)v42 + 48);
            else
              v43 = 0LL;
            *((_QWORD *)this + 3 * (int)v41 + 74) = v43;
            *((_DWORD *)this + 6 * *((int *)this + 184) + 150) = 0;
            *((_DWORD *)this + 6 * *((int *)this + 184) + 151) = v19;
            *((_DWORD *)this + 6 * *((int *)this + 184) + 152) = 1;
          }
        }
        else
        {
          v81 = CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
                  this,
                  v98,
                  a4,
                  0LL,
                  0LL,
                  0LL,
                  v35,
                  v36,
                  *((enum DXGI_COLOR_SPACE_TYPE *)this + 48));
          v19 = v81;
          if ( v81 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x20Au);
          CDWMSwapChain::DbgSavePresentInfo(this, 4LL, a4, (unsigned int)v19, 1);
        }
        if ( v19 == 142213167 )
          *((_BYTE *)this + 571) = 1;
LABEL_44:
        if ( lpMem != v106 )
          operator delete(lpMem);
        goto LABEL_46;
      }
      v82 = 0;
      LODWORD(v100) = 0;
      v83 = 0;
      memset(v99, 0, sizeof(v99));
      if ( !*((_DWORD *)this + 92) )
      {
LABEL_164:
        if ( CDWMSwapChain::ShouldConvertPresentToMPO(this) )
        {
          v93 = CDWMSwapChain::ConvertPresentToMultiplaneOverlay(
                  v92,
                  v98,
                  a4,
                  0LL,
                  0LL,
                  0LL,
                  v108[1],
                  (struct tagRECT *)lpMem,
                  *((enum DXGI_COLOR_SPACE_TYPE *)this + 48));
          v19 = v93;
          if ( v93 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v93, 0x23Eu);
          v12 = 3;
        }
        else
        {
          v94 = CD2DContext::D2DPresentDWM(
                  *(CD2DContext **)(*((_QWORD *)this + 2) + 80LL),
                  *((struct IDXGISwapChainDWM1 **)this + 53),
                  v98,
                  a4,
                  v108[1],
                  (const struct tagRECT *)lpMem,
                  v82,
                  v99[0],
                  0LL,
                  0);
          v19 = v94;
          if ( v94 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v94, 0x24Cu);
        }
        CDWMSwapChain::DbgSavePresentInfo(this, v12, a4, (unsigned int)v19, 1);
        DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v99);
        goto LABEL_44;
      }
      v84 = v97;
      while ( 1 )
      {
        v85 = *((_QWORD *)this + 43) + 48LL * v83;
        if ( *(_DWORD *)v85 != 1 )
          goto LABEL_163;
        *(_QWORD *)v104 = *(_QWORD *)(v85 + 32);
        v86 = v82 + 1;
        v87 = *(_OWORD *)(v85 + 16);
        if ( v82 + 1 >= v82 )
          v84 = v82 + 1;
        v19 = v86 < v82 ? 0x80070216 : 0;
        v97 = v84;
        *(_OWORD *)&v104[8] = v87;
        if ( v86 < v82 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xB5u);
        }
        else
        {
          if ( v84 <= HIDWORD(v99[2]) )
          {
            v88 = v82;
            v82 = v84;
            LODWORD(v100) = v84;
            v89 = 3 * v88;
            v90 = v99[0];
            *(_OWORD *)((char *)v99[0] + 8 * v89) = *(_OWORD *)v104;
            *((_QWORD *)v90 + v89 + 2) = *(_QWORD *)&v104[16];
            goto LABEL_162;
          }
          v91 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v99, 0x18u, 1, v104);
          v19 = v91;
          if ( v91 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v91, 0xC0u);
          v82 = v100;
        }
        v84 = v97;
LABEL_162:
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x231u);
          DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v99);
          goto LABEL_135;
        }
LABEL_163:
        if ( ++v83 >= *((_DWORD *)this + 92) )
          goto LABEL_164;
      }
    }
    v15 = *(_DWORD **)v14;
    v108[1] = 0;
    if ( *v15 )
    {
      v16 = &v15[2 * *v15 + 1];
      v17 = ((__int64)v16 + (int)v16[1] - (__int64)(int)v15[4] - (__int64)(v15 + 3)) >> 3;
    }
    else
    {
      LODWORD(v17) = 0;
    }
    v18 = DynArrayImpl<0>::Grow((__int64)&lpMem, 0x10u, v17, 0, 0LL);
    v19 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1A7u);
    else
      v108[1] += v17;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x1C5u);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&lpMem);
      goto LABEL_54;
    }
    v20 = *(_DWORD **)v14;
    v21 = 0;
    v99[0] = (struct DXGI_SCROLL_RECT *)v20;
    if ( *v20 )
    {
      v22 = (struct DXGI_SCROLL_RECT *)(v20 + 3);
      v23 = (__int64)v20 + v20[4] + 12;
      v24 = (FastRegion::Internal::CRgnData *)(*v20 - 1);
      v25 = (int)v20[6] - v23;
      v99[2] = (struct DXGI_SCROLL_RECT *)(v20 + 3);
      v100 = v23;
      v101 = 0;
      v26 = ((__int64)v20 + v25 + 20) >> 3;
      v27 = (struct DXGI_SCROLL_RECT *)&v20[2 * (_QWORD)v24 + 3];
      v102 = v26;
      v99[1] = v27;
      v28 = 0;
      if ( (int)v26 > 0 )
      {
LABEL_17:
        while ( v22 < v27 )
        {
          v29 = 2 * v28;
          *(_DWORD *)&v104[4] = *(_DWORD *)v22;
          v30 = (struct DXGI_SCROLL_RECT *)((char *)v22 + 8);
          ++v28;
          *(_DWORD *)&v104[12] = *((_DWORD *)v22 + 2);
          *(_DWORD *)v104 = *(_DWORD *)(v23 + 4LL * v29);
          *(_DWORD *)&v104[8] = *(_DWORD *)(v23 + 4LL * (v29 + 1));
          *((_OWORD *)lpMem + v21) = *(_OWORD *)v104;
          if ( v28 >= (int)v26 )
          {
            while ( 1 )
            {
              v22 = v30;
              v31 = *((int *)v30 + 3);
              v23 = (__int64)v30 + *((int *)v30 + 1);
              v30 = (struct DXGI_SCROLL_RECT *)((char *)v30 + 8);
              LODWORD(v26) = ((__int64)v30 + v31 - v23) >> 3;
              if ( (_DWORD)v26 )
                break;
              if ( v22 >= v27 )
                goto LABEL_21;
            }
            v28 = 0;
          }
LABEL_21:
          ++v21;
        }
        v13 = v97;
        goto LABEL_23;
      }
      FastRegion::Internal::CRgnData::StepIterator(v24, (struct FastRegion::CRegion::Iterator *)v99);
    }
    else
    {
      *(_OWORD *)&v99[1] = 0LL;
    }
    v27 = v99[1];
    v22 = v99[2];
    v23 = v100;
    v28 = v101;
    LODWORD(v26) = v102;
    goto LABEL_17;
  }
  v34 = a4 & 1;
  if ( (a4 & 1) == 0 )
  {
    v59 = *((_DWORD *)this + 135);
    v60 = 0;
    if ( v59 )
    {
      v61 = v59;
      v62 = (_DWORD *)(*((_QWORD *)this + 68) + 4LL);
      do
      {
        v5 = *v62 == 0;
        v63 = v60 + 1;
        v62 += 34;
        if ( v5 )
          v63 = v60;
        v60 = v63;
        --v61;
      }
      while ( v61 );
    }
    if ( dword_1802D6234 <= v60 )
    {
      dword_1802D6234 = v60;
      v59 = *((_DWORD *)this + 135);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_PRESENT_Start, v59);
      v64 = *((_DWORD *)this + 135);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v65 = 0;
        if ( v64 )
        {
          do
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              v66 = *((_QWORD *)this + 68) + 136LL * v65;
              McTemplateU0xqqqddddddddddddqqq(
                (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
                v64,
                *(_QWORD *)(v66 + 8),
                *(_DWORD *)(v66 + 4),
                *(_DWORD *)v66,
                *(_DWORD *)(v66 + 24),
                *(_DWORD *)(v66 + 28),
                *(_DWORD *)(v66 + 32),
                *(_DWORD *)(v66 + 36),
                *(_DWORD *)(v66 + 40),
                *(_DWORD *)(v66 + 44),
                *(_DWORD *)(v66 + 48),
                *(_DWORD *)(v66 + 52),
                *(_DWORD *)(v66 + 56),
                *(_DWORD *)(v66 + 60),
                *(_DWORD *)(v66 + 64),
                *(_DWORD *)(v66 + 68),
                *(_DWORD *)(v66 + 72),
                *(_DWORD *)(v66 + 76),
                *(_DWORD *)(v66 + 80),
                *(_DWORD *)(v66 + 100));
            }
            ++v65;
          }
          while ( v65 < *((_DWORD *)this + 135) );
        }
      }
    }
  }
  v67 = (const void *)*((_QWORD *)this + 70);
  v68 = *((_QWORD *)this + 2);
  v69 = v98;
  *((_QWORD *)this + 70) = 0LL;
  v70 = CD2DContext::D2DPresentMultiplaneOverlay(
          *(CD2DContext **)(v68 + 80),
          *((struct IDXGISwapChainDWM1 **)this + 53),
          v69,
          a4,
          (enum DXGI_HDR_METADATA_TYPE)*((_DWORD *)this + 138),
          v67,
          *((_DWORD *)this + 135),
          *((const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY **)this + 68));
  v19 = v70;
  if ( v70 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, 0x19Fu);
  CDWMSwapChain::DbgSavePresentInfo(this, 2LL, a4, (unsigned int)v19, *((_DWORD *)this + 135));
  if ( v19 < 0 )
  {
    if ( (a4 & 1) != 0 )
      goto LABEL_46;
  }
  else
  {
    if ( (a4 & 1) != 0 )
      goto LABEL_46;
    v71 = *((_DWORD *)this + 135) - 1;
    v72 = v71;
    if ( v71 >= 0 )
    {
      v73 = 136LL * v71;
      do
      {
        v74 = *(_QWORD *)(*((_QWORD *)this + 68) + v73 + 8);
        if ( !v74 )
          break;
        ReleaseInterfaceNoNULL<IWICBitmap>(v74);
        --v71;
        v73 -= 136LL;
        --v72;
      }
      while ( v72 >= 0 );
    }
    *((_DWORD *)this + 135) = v71 + 1;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_PRESENT_Stop);
LABEL_46:
  if ( v19 >= 0 )
  {
    if ( !v34 && *((_DWORD *)this + 146) )
    {
      CSwapChainBase::ReleaseD2DBitmaps(this);
      refreshed = CSwapChainBase::RefreshBackBufferViews(this);
      v19 = refreshed;
      if ( refreshed < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, refreshed, 0x25Cu);
        goto LABEL_54;
      }
      --*((_DWORD *)this + 146);
    }
    if ( (a4 & 3) == 0 )
    {
      if ( *((_QWORD *)this + 65) )
      {
        v96 = *((_DWORD *)this + 134);
        if ( !v96 )
          v96 = *((_DWORD *)this + 40);
        *((_DWORD *)this + 134) = v96 - 1;
      }
      v44 = *((_QWORD *)this + 59);
      *((_QWORD *)this + 66) = v44;
      *((_BYTE *)this + 574) = !v44 && !*((_BYTE *)this + 576);
    }
  }
LABEL_54:
  *((_BYTE *)this + 569) = 0;
  return (unsigned int)v19;
}
