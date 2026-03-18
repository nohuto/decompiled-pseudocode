/*
 * XREFs of UnsetLayeredWindow @ 0x1C008B638
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     ComposeWindow @ 0x1C008A290 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 *     DeleteFadeSprite @ 0x1C013E1F0 (DeleteFadeSprite.c)
 * Callees:
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UnsetRedirectedWindow @ 0x1C008A4D0 (UnsetRedirectedWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     GreDeleteSprite @ 0x1C008BA1C (GreDeleteSprite.c)
 *     RedirectDCEs @ 0x1C0090070 (RedirectDCEs.c)
 *     _SetLayeredWindowAttributes @ 0x1C0090BA8 (_SetLayeredWindowAttributes.c)
 *     UpdateSprite @ 0x1C00923FC (UpdateSprite.c)
 */

__int64 __fastcall UnsetLayeredWindow(struct tagWND *a1, char a2)
{
  int v4; // esi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  void *v8; // rax
  struct tagWND *StyleWindow; // rax
  __int64 v10; // rcx
  __int64 v12; // rcx
  int v13; // ebp
  void *v14; // rax
  __int64 v15; // rcx
  char v16; // [rsp+80h] [rbp+18h] BYREF

  v4 = GreIsDynamicModeChangeLocked(*(_QWORD *)(gpDispInfo + 32LL));
  if ( v4 )
    GreLockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(gpDispInfo + 32LL));
  else
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  if ( (a2 & 1) != 0 || !(unsigned int)IsWindowDesktopComposed(a1) )
  {
LABEL_4:
    if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
      UpdateSprite(*(HDEV *)(gpDispInfo + 32LL), a1, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x80000000, 0LL);
    goto LABEL_6;
  }
  if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
  {
    v13 = SetLayeredWindowAttributes(a1);
    if ( v13 >= 0 )
    {
      *((_DWORD *)a1 + 76) |= 0x20u;
      v14 = (void *)ReferenceDwmApiPort(v12);
      DwmAsyncChildStyleChange(v14);
      v15 = *(_QWORD *)(gpDispInfo + 32LL);
      if ( v4 )
        GreUnlockVisRgnWithDmcLockAcquiredEx(v15);
      else
        GreUnlockVisRgn(v15);
      return (unsigned int)v13;
    }
    goto LABEL_4;
  }
LABEL_6:
  if ( (*((_BYTE *)a1 + 67) & 0x20) != 0 )
    UnsetRedirectedWindow(a1);
  *((_DWORD *)a1 + 76) &= 0xFFFFFF9F;
  v5 = IsWindowDesktopComposed(a1);
  v6 = GreDeleteSprite(*(HDEV *)(gpDispInfo + 32LL), *(HWND *)a1, 0LL, v5);
  SetOrClrWF(0LL, a1, 2568LL, 1LL);
  v8 = (void *)ReferenceDwmApiPort(v7);
  DwmAsyncChildStyleChange(v8);
  StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2848);
  if ( StyleWindow && StyleWindow != a1 )
    RedirectDCEs(a1);
  if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
  }
  v10 = *(_QWORD *)(gpDispInfo + 32LL);
  if ( v4 )
    GreUnlockVisRgnWithDmcLockAcquiredEx(v10);
  else
    GreUnlockVisRgn(v10);
  return v6;
}
