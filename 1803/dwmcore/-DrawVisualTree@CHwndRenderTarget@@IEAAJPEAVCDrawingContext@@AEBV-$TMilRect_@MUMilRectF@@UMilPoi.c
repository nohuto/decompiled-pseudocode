/*
 * XREFs of ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180060EAC
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180007C2C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18005FE20 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180064E00 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18006605C (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180066650 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x1800B7C58 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180158EBC (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180161C64 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x180162554 (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::DrawVisualTree(
        __int64 a1,
        CDrawingContext *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        char a8)
{
  CDisplay *v10; // rcx
  char v12; // r15
  char v13; // si
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  _DWORD v29[10]; // [rsp+68h] [rbp-69h] BYREF
  _DWORD v30[4]; // [rsp+90h] [rbp-41h] BYREF
  struct D2D_RECT_F v31; // [rsp+A0h] [rbp-31h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-21h] BYREF

  v10 = *(CDisplay **)(a1 + 168);
  v12 = 0;
  v13 = 0;
  if ( v10 )
  {
    if ( CDisplay::HasVirtualModeScale(v10) && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1) )
    {
      v18 = *(_QWORD *)(a1 + 840);
      if ( v18 )
        v13 = *(_BYTE *)(v18 + 1195) == 0;
    }
  }
  memset_0(v29, 0, sizeof(v29));
  if ( *(_QWORD *)(a1 + 184) && !*(_BYTE *)(a1 + 852) )
  {
    LOBYTE(v14) = 1;
    v19 = CDrawingContext::PushStereoContext(a2, 1LL, v14);
    v16 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x416u);
      return v16;
    }
    v12 = 1;
  }
  if ( v13
    && (v29[0] = 3,
        v29[1] = 6,
        v29[4] = 1,
        v20 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v29, 1),
        v16 = v20,
        v20 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x421u);
  }
  else
  {
    v15 = CDrawingContext::DrawVisualTree(a2, a4, a5, v13, a6, 0, a8, 0, 0);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x42Cu);
    }
    else
    {
      if ( v13 )
        CDrawingContext::PopRenderOptionsInternal(a2, 1);
      if ( v12 )
      {
        v21 = CDrawingContext::PopStereoContext(a2, v30);
        v16 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x441u);
        }
        else
        {
          if ( *(_BYTE *)(a1 + 854) )
          {
            v30[3] = 0;
            v30[2] = 0;
            v30[1] = 0;
            v30[0] = 0;
          }
          CHwndRenderTarget::RenderTargetRectToDesktopRect(a1, v22, v30, &v31);
          if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a3, &v31)
            || (CHwndRenderTarget::DesktopRectToRenderTargetRect(a1, 1, a3, &v32),
                CDrawingContext::FlushD2D(a2),
                v23 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _DWORD *))(**(_QWORD **)(a1 + 184) + 24LL))(
                        *(_QWORD *)(a1 + 184),
                        &v32,
                        v30),
                v16 = v23,
                v23 >= 0) )
          {
            if ( !IsEmpty(&v31) )
            {
              v24 = CDrawingContext::PushStereoContext(a2, 2LL, 0LL);
              v16 = v24;
              if ( v24 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x482u);
              }
              else
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                  McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, "}");
                if ( v13
                  && (v25 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v29, 1),
                      v16 = v25,
                      v25 < 0) )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x488u);
                }
                else
                {
                  v26 = CDrawingContext::DrawVisualTree(a2, a4, a5, v13, a6, 0, a8, 0, 0);
                  v16 = v26;
                  if ( v26 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x493u);
                  }
                  else
                  {
                    if ( v13 )
                      CDrawingContext::PopRenderOptionsInternal(a2, 1);
                    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                      McTemplateU0(
                        &Microsoft_Windows_Dwm_Core_Provider_Context,
                        &EVTDESC_ETWGUID_STEREO_RIGHTCHANNELRENDEREVENT_Stop);
                    v27 = CDrawingContext::PopStereoContext(a2, 0LL);
                    v16 = v27;
                    if ( v27 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x49Cu);
                  }
                }
              }
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x471u);
          }
        }
      }
    }
  }
  return v16;
}
