/*
 * XREFs of ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18013D2E4
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180040290 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x18012F838 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013D248 (-DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawSolidRectangleInternal(__int64 a1, __int128 *a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // r10
  int v6; // ecx
  int v7; // ecx
  signed int v8; // eax
  unsigned int v9; // ebx
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF

  v11 = *a2;
  v4 = 0;
  v5 = (a1 + 8) & -(__int64)(a1 != 0);
  v6 = *(_DWORD *)(a1 + 280);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 3 )
        v4 = 2;
    }
    else
    {
      v4 = 1;
    }
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, __int64, bool, int))(**(_QWORD **)(a1 + 384) + 120LL))(
         *(_QWORD *)(a1 + 384),
         v5,
         &v11,
         a3,
         *(_DWORD *)(a1 + 256) != 0,
         v4);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x3F7u);
  return v9;
}
