/*
 * XREFs of ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C0090E28
 * Callers:
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     TrackLayeredZorder @ 0x1C0090DAC (TrackLayeredZorder.c)
 * Callees:
 *     GreZorderSprite @ 0x1C0091084 (GreZorderSprite.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00928E8 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall ReorderChildrenSpriteList(struct tagWND *a1, HWND *a2)
{
  __int64 v2; // rax
  struct tagWND *v4; // rbx
  struct tagWND *NextLayeredWindow; // rax
  HWND v6; // rsi

  v2 = *((_QWORD *)a1 + 14);
  if ( v2 )
  {
    do
    {
      v4 = (struct tagWND *)v2;
      v2 = *(_QWORD *)(v2 + 112);
    }
    while ( v2 );
    if ( v4 != a1 )
    {
      if ( (*((_BYTE *)v4 + 66) & 8) != 0 )
      {
        if ( !a2 )
          goto LABEL_13;
        v6 = *a2;
        goto LABEL_10;
      }
      while ( 1 )
      {
        NextLayeredWindow = GetNextLayeredWindow(v4);
        v4 = NextLayeredWindow;
        if ( !NextLayeredWindow || NextLayeredWindow == (struct tagWND *)a2 )
          break;
        if ( a2 )
          v6 = *a2;
        else
LABEL_13:
          v6 = 0LL;
LABEL_10:
        IsWindowDesktopComposed(v4);
        GreZorderSprite(*(HDEV *)(gpDispInfo + 32LL), *(HWND *)v4, v6);
      }
    }
  }
}
