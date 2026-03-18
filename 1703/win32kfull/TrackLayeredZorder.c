/*
 * XREFs of TrackLayeredZorder @ 0x1C0022594
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     LinkWindow @ 0x1C00614C0 (LinkWindow.c)
 * Callees:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0022200 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     GreZorderSprite @ 0x1C002374C (GreZorderSprite.c)
 */

void __fastcall TrackLayeredZorder(struct tagWND *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  HWND v4; // rdi
  struct tagWND *NextLayeredWindow; // rax

  LOBYTE(v2) = IsDesktopWindow((__int64)a1);
  v4 = 0LL;
  if ( v2 && (unsigned int)IsWindowDesktopComposed(v3) )
    NextLayeredWindow = (struct tagWND *)*((_QWORD *)a1 + 14);
  else
    NextLayeredWindow = GetNextLayeredWindow(a1);
  if ( NextLayeredWindow )
    v4 = *(HWND *)NextLayeredWindow;
  IsWindowDesktopComposed(a1);
  GreZorderSprite(*(HDEV *)(gpDispInfo + 32LL), *(HWND *)a1, v4);
  ReorderChildrenSpriteList(a1, a1);
}
