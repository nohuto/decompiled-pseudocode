/*
 * XREFs of ?PreCompute@CHwndRenderTargetRemoteApp@@UEAAJXZ @ 0x180147A30
 * Callers:
 *     <none>
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031B0C (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::PreCompute(CVisualTree **this)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = CVisualTree::PreCompute(this[10]);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0x88u);
  return v2;
}
