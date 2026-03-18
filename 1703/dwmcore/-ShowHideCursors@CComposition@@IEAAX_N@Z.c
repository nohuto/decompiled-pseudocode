/*
 * XREFs of ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18005B624
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006D2A4 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B4740 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18014A2C0 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z @ 0x180005B8C (-RemoveAt@-$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800CF27C (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     ?Show@CCursorVisual@@QEAAXXZ @ 0x18014A9A8 (-Show@CCursorVisual@@QEAAXXZ.c)
 */

void __fastcall CComposition::ShowHideCursors(CComposition *this, char a2)
{
  int v2; // ebx
  __int64 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r8
  bool v8; // al
  unsigned int v9; // edx

  v2 = *((_DWORD *)this + 238);
  if ( v2 > 0 )
  {
    v4 = (__int64 *)((char *)this + 928);
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
          v8 = (*(_BYTE *)(v7 + 90) & 0x20) != 0;
          *(_BYTE *)(v7 + 90) |= 0x20u;
          *(_BYTE *)(v6 + 24) = v8;
          *(_DWORD *)(v6 + 28) = 2;
        }
      }
      else
      {
        DynArray<CCursorVisual *,0>::RemoveAt(v4, v5);
        CCursorVisual::`scalar deleting destructor'((CCursorVisual *)v6, v9);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
}
