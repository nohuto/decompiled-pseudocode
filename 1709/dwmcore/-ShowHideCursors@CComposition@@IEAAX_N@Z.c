/*
 * XREFs of ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800AA8B8
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800187B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180078680 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180148524 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801278B0 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z @ 0x180134600 (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@$0A@@@QEAAJI@Z.c)
 *     ?Show@CCursorVisual@@QEAAXXZ @ 0x18013BDC8 (-Show@CCursorVisual@@QEAAXXZ.c)
 */

void __fastcall CComposition::ShowHideCursors(CComposition *this, char a2)
{
  int v2; // ebx
  _QWORD *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rdx
  char v8; // al
  unsigned int v9; // edx

  v2 = *((_DWORD *)this + 230);
  if ( v2 > 0 )
  {
    v4 = (_QWORD *)((char *)this + 896);
    do
    {
      v5 = (unsigned int)(v2 - 1);
      v6 = *(_QWORD *)(*v4 + 8 * v5);
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL);
      if ( v7 )
      {
        if ( a2 )
        {
          CCursorVisual::Show(*(CCursorVisual **)(*v4 + 8 * v5));
        }
        else
        {
          v8 = *(_BYTE *)(v7 + 93);
          *(_BYTE *)(v7 + 93) = v8 | 0x20;
          *(_BYTE *)(v6 + 24) = (v8 & 0x20) != 0;
          *(_DWORD *)(v6 + 28) = 2;
        }
      }
      else
      {
        DynArray<CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *,0>::RemoveAt(v4, (unsigned int)v5);
        CCursorVisual::`scalar deleting destructor'((CCursorVisual *)v6, v9);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
}
