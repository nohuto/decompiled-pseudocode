/*
 * XREFs of ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800AA880
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800187B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180078680 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180148524 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801278B0 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x180134600 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     ?Restore@CCursorVisual@@QEAAXXZ @ 0x18013BD68 (-Restore@CCursorVisual@@QEAAXXZ.c)
 */

void __fastcall CComposition::RestoreCursors(CComposition *this)
{
  int v1; // ebx
  _QWORD *v2; // rdi
  __int64 v3; // rbp
  CCursorVisual *v4; // rsi
  unsigned int v5; // edx

  v1 = *((_DWORD *)this + 230);
  if ( v1 > 0 )
  {
    v2 = (_QWORD *)((char *)this + 896);
    do
    {
      v3 = (unsigned int)(v1 - 1);
      v4 = *(CCursorVisual **)(*v2 + 8 * v3);
      CCursorVisual::Restore(v4);
      if ( !*(_QWORD *)(*((_QWORD *)v4 + 1) + 8LL) )
      {
        DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(v2, (unsigned int)v3);
        CCursorVisual::`scalar deleting destructor'(v4, v5);
      }
      --v1;
    }
    while ( v1 > 0 );
  }
}
