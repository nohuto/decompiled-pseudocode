/*
 * XREFs of ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18006D45C
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18000CC78 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18000F938 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18006C390 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF64 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A0FE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x1800B8178 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180128ED4 (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x18012D120 (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18012D294 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
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
  char v11; // r15
  char v12; // r14
  int v13; // eax
  unsigned int v14; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  _DWORD v28[10]; // [rsp+68h] [rbp-69h] BYREF
  _DWORD v29[4]; // [rsp+90h] [rbp-41h] BYREF
  _BYTE v30[16]; // [rsp+A0h] [rbp-31h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-21h] BYREF

  v11 = 0;
  v12 = 0;
  memset_0(v28, 0, sizeof(v28));
  if ( *(_QWORD *)(a1 + 128) && !*(_BYTE *)(a1 + 793) )
  {
    v16 = CDrawingContext::PushStereoContext(a2, 1LL);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x453u);
      return v14;
    }
    v11 = 1;
  }
  if ( CDisplay::HasVirtualModeScale(*(CDisplay **)(a1 + 112))
    && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL))(a1) )
  {
    v28[0] = 3;
    v28[1] = 6;
    v28[4] = 1;
    v17 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v28, 1);
    v14 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x45Fu);
      return v14;
    }
    v12 = 1;
  }
  v13 = CDrawingContext::DrawVisualTree(a2, a4, a5, v12, a6, 0, a8, 0);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x46Cu);
  }
  else
  {
    if ( v12 )
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
    if ( v11 )
    {
      v18 = CDrawingContext::PopStereoContext(a2, v29);
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x481u);
      }
      else
      {
        if ( *(_BYTE *)(a1 + 797) )
        {
          v29[3] = 0;
          v29[2] = 0;
          v29[1] = 0;
          v29[0] = 0;
        }
        CHwndRenderTarget::RenderTargetRectToDesktopRect(a1, v19, v29, v30);
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a3, v30)
          || (CHwndRenderTarget::DesktopRectToRenderTargetRect(a1, 1, a3, &v31),
              CDrawingContext::FlushD2D(a2),
              v20 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _DWORD *))(**(_QWORD **)(a1 + 128) + 24LL))(
                      *(_QWORD *)(a1 + 128),
                      &v31,
                      v29),
              v14 = v20,
              v20 >= 0) )
        {
          if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v30) )
          {
            v21 = CDrawingContext::PushStereoContext(a2, 2LL);
            v14 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x4C2u);
            }
            else
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                TemplateEventDescriptor(v22, &EVTDESC_ETWGUID_STEREO_RIGHTCHANNELRENDEREVENT_Start);
              if ( v12
                && (v23 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v28, 1),
                    v14 = v23,
                    v23 < 0) )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x4C8u);
              }
              else
              {
                v24 = CDrawingContext::DrawVisualTree(a2, a4, a5, v12, a6, 0, a8, 0);
                v14 = v24;
                if ( v24 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x4D3u);
                }
                else
                {
                  if ( v12 )
                    CDrawingContext::PopRenderOptionsInternal(a2, 1);
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                    TemplateEventDescriptor(v25, &EVTDESC_ETWGUID_STEREO_RIGHTCHANNELRENDEREVENT_Stop);
                  v26 = CDrawingContext::PopStereoContext(a2, 0LL);
                  v14 = v26;
                  if ( v26 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x4DCu);
                }
              }
            }
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x4B1u);
        }
      }
    }
  }
  return v14;
}
