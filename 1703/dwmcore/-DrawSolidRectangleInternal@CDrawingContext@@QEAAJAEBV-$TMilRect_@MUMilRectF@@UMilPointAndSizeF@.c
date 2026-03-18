/*
 * XREFs of ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A1CBC
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A9330 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x180143974 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014C1A8 (-DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AD860 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawSolidRectangleInternal(
        __int64 a1,
        struct D2D_RECT_F *a2,
        const struct _D3DCOLORVALUE *a3)
{
  enum D2D1_PRIMITIVE_BLEND v4; // edx
  const struct ID2DContextOwner *v5; // r10
  int v6; // ecx
  CD2DContext *v7; // rcx
  __int64 (__usercall *v8)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct D2D_RECT_F *@<r8>, const struct _D3DCOLORVALUE *@<r9>, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND); // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // ecx
  struct D2D_RECT_F v13; // [rsp+40h] [rbp-28h] BYREF

  v13 = *a2;
  v4 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
  v5 = (const struct ID2DContextOwner *)((a1 + 8) & -(__int64)(a1 != 0));
  v6 = *(_DWORD *)(a1 + 288);
  if ( v6 )
  {
    v12 = v6 - 1;
    if ( v12 )
    {
      if ( v12 == 3 )
        v4 = D2D1_PRIMITIVE_BLEND_MIN;
    }
    else
    {
      v4 = D2D1_PRIMITIVE_BLEND_COPY;
    }
  }
  v7 = *(CD2DContext **)(a1 + 392);
  v8 = *(__int64 (__usercall **)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct D2D_RECT_F *@<r8>, const struct _D3DCOLORVALUE *@<r9>, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND))(*(_QWORD *)v7 + 144LL);
  if ( v8 == CD2DContext::FillRectangleWithSolidColor )
    v9 = CD2DContext::FillRectangleWithSolidColor(
           v7,
           v5,
           &v13,
           a3,
           (enum D2D1_ANTIALIAS_MODE)(*(_DWORD *)(a1 + 264) != 0),
           v4);
  else
    v9 = ((__int64 (__fastcall *)(CD2DContext *, const struct ID2DContextOwner *, struct D2D_RECT_F *, const struct _D3DCOLORVALUE *))v8)(
           v7,
           v5,
           &v13,
           a3);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x3FEu);
  return v10;
}
