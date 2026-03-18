/*
 * XREFs of ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180019700
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18001B620 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?Render@CHwndRenderTargetRemoteApp@@UEAAJPEA_N@Z @ 0x180147A70 (-Render@CHwndRenderTargetRemoteApp@@UEAAJPEA_N@Z.c)
 *     ?Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z @ 0x180147C80 (-Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180017388 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ @ 0x1800173E0 (-SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x180017400 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180033070 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180066FC4 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CopyFrontToBackBuffer@CHwndRenderTarget@@QEBAJXZ @ 0x180135D5C (-CopyFrontToBackBuffer@CHwndRenderTarget@@QEBAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1801362D0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801363AC (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180136764 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18013E6D8 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180149730 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x1801914C8 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::Render(CHwndRenderTarget *this, bool *a2)
{
  CHwndRenderTarget *v2; // r15
  struct CComposeTop *v3; // rsi
  char v4; // r12
  char v5; // bp
  int v6; // ebx
  char v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rsi
  char v14; // r14
  char v15; // bp
  int v16; // eax
  bool v17; // al
  CDrawingContext *v18; // rbp
  CDirtyRegion *v19; // rcx
  void (*v20)(void); // rax
  bool (__fastcall *v22)(CHwndRenderTarget *, __int64); // rax
  char v23; // al
  char v24; // cl
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  bool (__fastcall *v31)(CHwndRenderTarget *); // rax
  bool IsPrimaryMonitor; // al
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // r8d
  int v37; // r8d
  unsigned int v38; // r8d
  int v39; // r8d
  int v40; // eax
  int v41; // eax
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // rax
  int IsOptedIn; // eax
  char v46; // al
  char v47; // [rsp+80h] [rbp+8h]
  char v48; // [rsp+90h] [rbp+18h]
  CDrawingContext *v49; // [rsp+98h] [rbp+20h]

  v2 = (CHwndRenderTarget *)((char *)this - 64);
  v3 = 0LL;
  v49 = 0LL;
  v4 = 0;
  v48 = 0;
  v5 = 0;
  v47 = 0;
  v6 = 0;
  v9 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 6) + 72LL) + 148LL);
  if ( *((_QWORD *)this + 5)
    || (v35 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 40LL))((char *)this - 64), v6 = v35, v35 >= 0) )
  {
    v49 = (CDrawingContext *)*((_QWORD *)v2 + 13);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x62u);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x8Au);
    goto LABEL_28;
  }
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
  {
    v3 = *(struct CComposeTop **)(v10 + 368);
    if ( v3 )
    {
      if ( *((_QWORD *)v3 + 1) )
      {
        v5 = 1;
        CHwndRenderTarget::CopyFrontToBackBuffer(v2);
      }
    }
  }
  v11 = *((_QWORD *)this + 8);
  if ( v11 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 56LL))(v11, *((unsigned __int8 *)this + 742));
  v12 = *((_QWORD *)this + 10);
  if ( v12 )
  {
    if ( *(_BYTE *)(v12 + 2722) )
      goto LABEL_43;
    if ( !*(_BYTE *)(v12 + 2725) )
    {
      v36 = 0;
      while ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(16LL * v36 + v12 + 24) )
      {
        v36 = v37 + 1;
        if ( v36 >= 8 )
          goto LABEL_12;
      }
      goto LABEL_43;
    }
    if ( *(_DWORD *)(v12 + 1116) )
      goto LABEL_43;
  }
LABEL_12:
  if ( !v5 )
  {
LABEL_13:
    v13 = *((_QWORD *)this + 91);
    if ( !v13 )
    {
LABEL_22:
      v17 = 0;
      if ( (*((_BYTE *)this + 740) || v47 || *((_BYTE *)this + 739) || *((_BYTE *)this + 743)) && !*((_BYTE *)v2 + 813) )
      {
        v33 = *((_QWORD *)v2 + 99);
        if ( !v33
          || (!*(_DWORD *)(v33 + 272) || !*(_BYTE *)(v33 + 1179))
          && ((v34 = *(_QWORD *)(v33 + 1048)) == 0 || !*(_BYTE *)(v34 + 78) || *(_BYTE *)(v34 + 76)) )
        {
          v17 = 1;
        }
      }
      *a2 = v17;
      goto LABEL_28;
    }
    v14 = 0;
    v15 = 0;
    v16 = COverlayContext::SetMultiplaneOverlayPresentInfo(*((COverlayContext **)this + 91));
    v6 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x5DAu);
    }
    else
    {
      v6 = 0;
      if ( *(_QWORD *)(v13 + 1048) )
      {
        *(_BYTE *)(v42 + 76) = CDirectFlipInfo::RenderingRealizationChanged(*(CDirectFlipInfo **)(v13 + 1048))
                            && *(int *)(*(_QWORD *)(v42 + 32) + 76LL) <= 1;
        *(_DWORD *)(v42 + 72) = *(_DWORD *)(*(_QWORD *)(v42 + 32) + 72LL);
        if ( *(_BYTE *)(v42 + 76) )
          *(_BYTE *)(v13 + 1177) = 1;
        v43 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 1048) + 16LL))(*(_QWORD *)(v13 + 1048));
        v6 = v43;
        if ( v43 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0xFB0u);
      }
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x5DBu);
      }
      else
      {
        v14 = *(_BYTE *)(v13 + 1177);
        v15 = *(_BYTE *)(v13 + 1178);
        *(_WORD *)(v13 + 1177) = 0;
      }
    }
    if ( v6 >= 0 )
    {
      if ( v15 )
      {
        v44 = *((_QWORD *)v2 + 2);
        *((_BYTE *)v2 + 813) = 1;
        *((_BYTE *)v2 + 804) = 1;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v44 + 528) + 104LL))(
          *(_QWORD *)(v44 + 528),
          0LL,
          512LL);
      }
      else if ( v14 )
      {
        *((_BYTE *)this + 740) = 1;
      }
      goto LABEL_22;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xE9u);
LABEL_28:
    v18 = v49;
    goto LABEL_29;
  }
LABEL_43:
  v22 = *(bool (__fastcall **)(CHwndRenderTarget *, __int64))(*(_QWORD *)v2 + 288LL);
  if ( v22 == CHwndRenderTarget::SupportsMoveOptimization )
    v23 = CHwndRenderTarget::SupportsMoveOptimization(v2, v12);
  else
    v23 = ((__int64 (__fastcall *)(CHwndRenderTarget *))v22)(v2);
  v24 = v23;
  v25 = *((_QWORD *)v2 + 99);
  if ( v25 && *(_BYTE *)(v25 + 1183) )
    v26 = 232LL;
  else
    v26 = 164LL;
  v18 = v49;
  v27 = CDrawingContext::BeginFrame(
          v49,
          *((CSwRenderTargetGetBounds **)this + 7),
          (__int64)v2 + v26,
          0LL,
          v24,
          (__int64)v2);
  v6 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xAEu);
    goto LABEL_29;
  }
  v4 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v2 + 192LL))(v2) )
  {
    v48 = 1;
    *(_BYTE *)(*((_QWORD *)this - 6) + 1296LL) = 1;
  }
  v28 = *((_QWORD *)this + 10);
  if ( *(_BYTE *)(v28 + 2722) )
    goto LABEL_54;
  if ( !*(_BYTE *)(v28 + 2725) )
  {
    v38 = 0;
    while ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(16LL * v38 + v28 + 24) )
    {
      v38 = v39 + 1;
      if ( v38 >= 8 )
        goto LABEL_55;
    }
LABEL_54:
    v29 = CHwndRenderTarget::RenderDirtyRegion(v2, v49, v3);
    v6 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xC6u);
      goto LABEL_29;
    }
    goto LABEL_55;
  }
  if ( *(_DWORD *)(v28 + 1116) )
    goto LABEL_54;
LABEL_55:
  if ( !v3
    || v9
    || (v40 = CHwndRenderTarget::RenderComposeTop(v2, v49, v3, *(_BYTE *)(*((_QWORD *)this + 10) + 2722LL)),
        v6 = v40,
        v40 >= 0) )
  {
    v30 = *(_QWORD *)(*((_QWORD *)this - 6) + 488LL);
    if ( !v30
      || !*(_BYTE *)(v30 + 24)
      || !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v2 + 224LL))(v2)
      || (v41 = CHwndRenderTarget::RenderDebugFrameCounter(v2, v49), v6 = v41, v41 >= 0) )
    {
      v31 = *(bool (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v2 + 224LL);
      if ( v31 == CHwndRenderTarget::IsPrimaryMonitor )
        IsPrimaryMonitor = CHwndRenderTarget::IsPrimaryMonitor(v2);
      else
        IsPrimaryMonitor = v31(v2);
      if ( IsPrimaryMonitor )
        v47 = 1;
      goto LABEL_13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xD6u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0xCFu);
  }
LABEL_29:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(v18);
  if ( v4 )
    CDrawingContext::EndFrame(v18);
  v19 = (CDirtyRegion *)*((_QWORD *)this + 10);
  if ( v19 )
  {
    v20 = *(void (**)(void))(*(_QWORD *)v19 + 8LL);
    if ( (char *)v20 == (char *)CDirtyRegion::Release )
      CDirtyRegion::Release(v19);
    else
      v20();
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( v48 )
  {
    *(_BYTE *)(*((_QWORD *)this - 6) + 1296LL) = 0;
    *((_BYTE *)this + 744) = *((_BYTE *)v18 + 6833);
  }
  if ( v6 < 0 )
  {
    *((_BYTE *)this + 740) = 0;
    if ( v6 != -2003304442 )
    {
      if ( v6 == -2003304309 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
        v6 = 0;
        goto LABEL_120;
      }
      if ( v6 == -2003304307 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
        v6 = -2003304307;
        goto LABEL_120;
      }
      if ( v6 != -2003304306 )
      {
        CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
LABEL_120:
        *((_BYTE *)v2 + 802) = 1;
        return (unsigned int)v6;
      }
      if ( byte_180272F71 )
      {
        v46 = byte_180272F70;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_180272F71 = 1;
        v46 = IsOptedIn != 0;
        byte_180272F70 = v46;
      }
      if ( v46 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
    v6 = -2003304442;
    goto LABEL_120;
  }
  if ( v6 == 142213121 )
  {
    *((_BYTE *)v2 + 805) = 1;
    return (unsigned int)v6;
  }
  if ( v6 != 142213129 )
    return (unsigned int)v6;
  *((_BYTE *)v2 + 805) = 0;
  *((_BYTE *)v2 + 802) = 1;
  CHwndRenderTarget::UpdateMPOCaps(v2, 1);
  return 0LL;
}
