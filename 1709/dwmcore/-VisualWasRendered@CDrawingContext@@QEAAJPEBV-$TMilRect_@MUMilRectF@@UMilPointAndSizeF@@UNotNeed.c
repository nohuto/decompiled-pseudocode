/*
 * XREFs of ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18003B160
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800983A4 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x180176D3C (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 */

__int64 __fastcall CDrawingContext::VisualWasRendered(__int64 a1, __int128 *a2, CVisual *a3)
{
  bool v3; // zf
  __int64 v7; // r11
  const struct CMILMatrix *TopByReference; // rax
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // eax
  CVisual *v17; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+38h] [rbp-28h] BYREF
  float v19; // [rsp+48h] [rbp-18h] BYREF
  float v20; // [rsp+4Ch] [rbp-14h]
  float v21; // [rsp+50h] [rbp-10h]
  float v22; // [rsp+54h] [rbp-Ch]

  v3 = *(_BYTE *)(a1 + 6828) == 0;
  v17 = a3;
  if ( !v3
    && qword_18026EEA8
    && CDisplaySet::NeedsDesktopMoves(qword_18026EEA8)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 264LL))(v7) )
  {
    v18 = *a2;
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480));
    CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, &v18, &v19);
    CScopedClipStack::GetTopGpuClipInScope((CScopedClipStack *)(a1 + 1008), 1);
    v9 = *(float *)&v18;
    if ( v19 > *(float *)&v18 )
    {
      *(float *)&v18 = v19;
      v9 = v19;
    }
    v10 = *((float *)&v18 + 1);
    if ( v20 > *((float *)&v18 + 1) )
    {
      *((float *)&v18 + 1) = v20;
      v10 = v20;
    }
    v11 = *((float *)&v18 + 2);
    if ( *((float *)&v18 + 2) > v21 )
    {
      v11 = v21;
      *((float *)&v18 + 2) = v21;
    }
    v12 = *((float *)&v18 + 3);
    if ( *((float *)&v18 + 3) > v22 )
    {
      v12 = v22;
      *((float *)&v18 + 3) = v22;
    }
    if ( v11 <= v9 || v12 <= v10 )
      v18 = 0uLL;
    CVisual::AddToVisibleRegion(v17);
    v13 = (unsigned int)v17;
    v14 = *(unsigned int *)(a1 + 6696);
    v15 = v14 + 1;
    if ( (int)v14 + 1 >= (unsigned int)v14 )
      v13 = v14 + 1;
    if ( v15 < (unsigned int)v14 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15 < (unsigned int)v14 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v13 > *(_DWORD *)(a1 + 6692) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 6672, 8LL, 1LL, &v17);
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 6672) + 8 * v14) = v17;
      *(_DWORD *)(a1 + 6696) = v13;
    }
  }
  return 0LL;
}
