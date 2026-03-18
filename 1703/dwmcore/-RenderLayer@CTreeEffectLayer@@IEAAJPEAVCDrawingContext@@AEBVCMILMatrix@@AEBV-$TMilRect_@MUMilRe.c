/*
 * XREFs of ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x180014230
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800145D8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18000D038 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18000D258 (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x18000F988 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?Draw@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800105A0 (-Draw@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMil.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x1800136BC (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800A0D6C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800A9920 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderLayer(
        __int64 a1,
        __int64 a2,
        const struct CMILMatrix *a3,
        int a4,
        __int64 a5)
{
  char v8; // r12
  char v9; // r14
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  CVisual *CurrentVisual; // rax
  struct CTreeEffect *TreeEffectInternal; // rax
  struct CTreeEffect *v16; // rsi
  CMaskBrush *v17; // rcx
  __int64 (__fastcall *v18)(CMaskBrush *, struct CDrawingContext *, __int64, __int64, __int64); // rax
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-68h]
  _BYTE v22[8]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v23; // [rsp+38h] [rbp-50h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = CDrawingContext::PushGpuClipRectInternal(a2, 0, a4, 1, 1, 0);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = CDrawingContext::PushTransformInternal((CDrawingContext *)a2, 0LL, a3, 0, 1);
    v11 = v12;
    if ( v12 < 0 )
    {
      v21 = 646;
    }
    else
    {
      v8 = 1;
      v12 = CDrawingContext::PushEffectiveAlphaForNode((CDrawingContext *)a2, 0LL, 1.0, 1);
      v11 = v12;
      if ( v12 < 0 )
      {
        v21 = 649;
      }
      else
      {
        *(_BYTE *)(a2 + 728) = 0;
        v9 = 1;
        v12 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a2, 0);
        v11 = v12;
        if ( v12 >= 0 )
        {
          if ( g_LockAndReadLayer )
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 176LL))(
              *(_QWORD *)(a1 + 8),
              *(_QWORD *)(a2 + 392),
              (a2 + 8) & -(__int64)(a2 != 0));
          if ( !*(_QWORD *)(a1 + 232) )
            goto LABEL_12;
          CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a2 + 8));
          TreeEffectInternal = CVisual::GetTreeEffectInternal(CurrentVisual);
          v16 = TreeEffectInternal;
          if ( !TreeEffectInternal )
            goto LABEL_12;
          *((_QWORD *)TreeEffectInternal + 1) = a1;
          v17 = *(CMaskBrush **)(a1 + 232);
          v22[0] = 0;
          v23 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          v18 = *(__int64 (__fastcall **)(CMaskBrush *, struct CDrawingContext *, __int64, __int64, __int64))(*(_QWORD *)v17 + 144LL);
          v19 = v18 == CSpriteVisualContent::Draw
              ? CSpriteVisualContent::Draw(v17, (struct CDrawingContext *)a2, a5, (__int64)v22, (__int64)&v23)
              : v18(v17, (struct CDrawingContext *)a2, a5, (__int64)v22, (__int64)&v23);
          *((_QWORD *)v16 + 1) = 0LL;
          v11 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x2B2u);
          }
          else
          {
LABEL_12:
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              TemplateEventDescriptor(v13, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
          }
          goto LABEL_14;
        }
        v21 = 654;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v21);
LABEL_14:
    CScopedClipStack::PopGpuClipFromScope((CScopedClipStack *)(a2 + 912));
    *(_BYTE *)(a2 + 6769) = 1;
    goto LABEL_15;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x27Fu);
LABEL_15:
  *(_BYTE *)(a2 + 728) = 1;
  if ( v9 )
    CDrawingContext::PopAlpha((CDrawingContext *)a2, 1);
  if ( v8 )
    CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
  return v11;
}
