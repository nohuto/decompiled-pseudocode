/*
 * XREFs of ?PreCompute@CHwndRenderTargetRemoteApp@@UEAAJXZ @ 0x180155D30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7040 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::PreCompute(CVisualTree **this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CVisualTree::PreCompute(this[10], 0LL);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x8Du);
  return v2;
}
