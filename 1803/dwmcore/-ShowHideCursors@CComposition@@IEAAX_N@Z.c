/*
 * XREFs of ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180034868
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060D14 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180170D04 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800D9F60 (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800D9F98 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 *     ?Show@CCursorVisualReference@@QEAAXXZ @ 0x18015E134 (-Show@CCursorVisualReference@@QEAAXXZ.c)
 */

void __fastcall CComposition::ShowHideCursors(CComposition *this, char a2)
{
  int v2; // ebx
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r8
  char v8; // al
  unsigned int v9; // edx

  v2 = *((_DWORD *)this + 236);
  if ( v2 > 0 )
  {
    v4 = (_QWORD *)((char *)this + 920);
    do
    {
      v5 = (unsigned int)(v2 - 1);
      v6 = *(_QWORD *)(*v4 + 8 * v5);
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8LL);
      if ( v7 )
      {
        if ( a2 )
        {
          CCursorVisualReference::Show(*(CCursorVisualReference **)(*v4 + 8 * v5));
        }
        else
        {
          v8 = *(_BYTE *)(v7 + 94);
          *(_BYTE *)(v7 + 94) = v8 | 2;
          *(_BYTE *)(v6 + 24) = (v8 & 2) != 0;
          *(_DWORD *)(v6 + 28) = 2;
        }
      }
      else
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt(v4, v5);
        CCursorVisualReference::`scalar deleting destructor'((CCursorVisualReference *)v6, v9);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
}
