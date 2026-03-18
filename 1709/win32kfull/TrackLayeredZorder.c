/*
 * XREFs of TrackLayeredZorder @ 0x1C0090DAC
 * Callers:
 *     LinkWindow @ 0x1C0064B10 (LinkWindow.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 * Callees:
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C0090E28 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     GreZorderSprite @ 0x1C0091084 (GreZorderSprite.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00928E8 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 */

void __fastcall TrackLayeredZorder(struct tagWND *a1)
{
  __int64 v2; // rcx
  HWND v3; // rdi
  struct tagWND *NextLayeredWindow; // rax

  v3 = 0LL;
  if ( (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v2) )
    NextLayeredWindow = (struct tagWND *)*((_QWORD *)a1 + 14);
  else
    NextLayeredWindow = GetNextLayeredWindow(a1);
  if ( NextLayeredWindow )
    v3 = *(HWND *)NextLayeredWindow;
  IsWindowDesktopComposed(a1);
  GreZorderSprite(*(HDEV *)(gpDispInfo + 32LL), *(HWND *)a1, v3);
  ReorderChildrenSpriteList(a1, a1);
}
