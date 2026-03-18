/*
 * XREFs of UnsetRedirectedWindow @ 0x1C008A4D0
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     UnsetLayeredWindow @ 0x1C008B638 (UnsetLayeredWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     xxxPrintWindow @ 0x1C01C53F8 (xxxPrintWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     DeleteOldRedirectionBitmap @ 0x1C008A5A0 (DeleteOldRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C008FB94 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     UnredirectDCEs @ 0x1C008FFB4 (UnredirectDCEs.c)
 *     GetRedirectionBitmap @ 0x1C00902B0 (GetRedirectionBitmap.c)
 *     HintSpriteShape @ 0x1C0090EC4 (HintSpriteShape.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00E3E74 (DeleteOrSetRedirectionBitmap.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1)
{
  unsigned int v1; // edi
  __int64 Prop; // rsi
  int v4; // r11d
  __int64 RedirectionBitmap; // rsi

  v1 = 1;
  Prop = GetProp((__int64)a1, atomLayer, 1);
  *(_DWORD *)(Prop + 32) &= ~v4;
  if ( (v4 & 1) != 0 && (*((_BYTE *)a1 + 66) & 0x20) == 0 )
    v1 = HintSpriteShape(*(HDEV *)(gpDispInfo + 32LL), a1, 0LL, 0);
  if ( !*(_DWORD *)(Prop + 32) )
  {
    SetOrClrWF(0LL, a1, 2848LL, 1LL);
    DeleteOldRedirectionBitmap(a1);
    RedirectionBitmap = GetRedirectionBitmap(a1);
    if ( RedirectionBitmap )
    {
      UnredirectDCEs(a1);
      v1 = SetRedirectionBitmap(a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 0LL);
    }
  }
  return v1;
}
