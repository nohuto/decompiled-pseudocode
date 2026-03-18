/*
 * XREFs of ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C002260C
 * Callers:
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     TrackLayeredZorder @ 0x1C0022594 (TrackLayeredZorder.c)
 * Callees:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0022200 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GreZorderSprite @ 0x1C002374C (GreZorderSprite.c)
 */

void __fastcall ReorderChildrenSpriteList(struct tagWND *a1, HWND *a2)
{
  __int64 v2; // rax
  struct tagWND *v4; // rbx
  HWND v5; // rsi
  struct tagWND *NextLayeredWindow; // rax

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
      if ( (*((_BYTE *)v4 + 66) & 8) == 0 )
        goto LABEL_11;
      if ( !a2 )
        goto LABEL_14;
      v5 = *a2;
      while ( 1 )
      {
        IsWindowDesktopComposed(v4);
        GreZorderSprite(*(HDEV *)(gpDispInfo + 32LL), *(HWND *)v4, v5);
LABEL_11:
        NextLayeredWindow = GetNextLayeredWindow(v4);
        v4 = NextLayeredWindow;
        if ( !NextLayeredWindow || NextLayeredWindow == (struct tagWND *)a2 )
          break;
        if ( a2 )
          v5 = *a2;
        else
LABEL_14:
          v5 = 0LL;
      }
    }
  }
}
