/*
 * XREFs of ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18005B5EC
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006D2A4 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B4740 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18014A2C0 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z @ 0x180005B8C (-RemoveAt@-$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800CF27C (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     ?Restore@CCursorVisual@@QEAAXXZ @ 0x18014A948 (-Restore@CCursorVisual@@QEAAXXZ.c)
 */

void __fastcall CComposition::RestoreCursors(CComposition *this)
{
  int v1; // ebx
  __int64 *v2; // rdi
  __int64 v3; // rbp
  CCursorVisual *v4; // rsi
  unsigned int v5; // edx

  v1 = *((_DWORD *)this + 238);
  if ( v1 > 0 )
  {
    v2 = (__int64 *)((char *)this + 928);
    do
    {
      v3 = (unsigned int)(v1 - 1);
      v4 = *(CCursorVisual **)(*v2 + 8 * v3);
      CCursorVisual::Restore(v4);
      if ( !*(_QWORD *)(*((_QWORD *)v4 + 1) + 8LL) )
      {
        DynArray<CCursorVisual *,0>::RemoveAt(v2, v3);
        CCursorVisual::`scalar deleting destructor'(v4, v5);
      }
      --v1;
    }
    while ( v1 > 0 );
  }
}
