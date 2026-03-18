/*
 * XREFs of ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800174AC
 * Callers:
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001739C (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18006B3F0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x18016308C (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
        int *a1,
        _OWORD *a2)
{
  __int64 result; // rax
  int v4; // ecx

  result = 0LL;
  v4 = *a1;
  if ( !v4 )
    return 2147500037LL;
  *a2 = *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * (unsigned int)(v4 - 1));
  return result;
}
