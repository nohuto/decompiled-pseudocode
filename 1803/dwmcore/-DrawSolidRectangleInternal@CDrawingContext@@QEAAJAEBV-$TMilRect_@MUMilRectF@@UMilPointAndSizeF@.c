/*
 * XREFs of ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180160C38
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180008CF0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x1801510AC (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180160B9C (-DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18015ECC0 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 */

__int64 __fastcall CDrawingContext::DrawSolidRectangleInternal(__int64 a1, __int128 *a2)
{
  __int64 v2; // rbx
  int v4; // ecx
  __int64 v5; // r11
  int v6; // eax
  unsigned int v7; // ebx
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 384);
  v4 = *(_DWORD *)(a1 + 280);
  v9 = *a2;
  D2DPrimitiveBlendFromMilCompositingMode(v4);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(v5 + 128))(v2, (a1 + 8) & -(__int64)(a1 != 0), &v9);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x3EAu);
  return v7;
}
