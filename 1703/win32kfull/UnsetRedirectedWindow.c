/*
 * XREFs of UnsetRedirectedWindow @ 0x1C001D5C8
 * Callers:
 *     UnsetLayeredWindow @ 0x1C001D9B4 (UnsetLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     xxxPrintWindow @ 0x1C01C2478 (xxxPrintWindow.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C001C1A4 (DeleteOrSetRedirectionBitmap.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     DeleteOldRedirectionBitmap @ 0x1C001D698 (DeleteOldRedirectionBitmap.c)
 *     UnredirectDCEs @ 0x1C0022A58 (UnredirectDCEs.c)
 *     HintSpriteShape @ 0x1C0022E0C (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C0025F80 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0026020 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1)
{
  unsigned int v1; // edi
  __int64 Prop; // rsi
  int v4; // r10d
  HSURF RedirectionBitmap; // rsi

  v1 = 1;
  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  *(_DWORD *)(Prop + 32) &= ~v4;
  if ( (v4 & 1) != 0 && (*((_BYTE *)a1 + 66) & 0x20) == 0 )
    v1 = HintSpriteShape(*(_QWORD *)(gpDispInfo + 32LL), a1, 0LL, 0LL);
  if ( !*(_DWORD *)(Prop + 32) )
  {
    SetOrClrWF(0, a1, 0xB20u, 1);
    DeleteOldRedirectionBitmap(a1);
    RedirectionBitmap = (HSURF)GetRedirectionBitmap(a1);
    if ( RedirectionBitmap )
    {
      UnredirectDCEs(a1);
      v1 = SetRedirectionBitmap(a1, 0LL, 1);
      DeleteOrSetRedirectionBitmap((__int64)a1, RedirectionBitmap, 0);
    }
  }
  return v1;
}
