/*
 * XREFs of ComposeWindow @ 0x1C008A290
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C0044214 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     DecomposeWindowIfNeeded @ 0x1C008A3AC (DecomposeWindowIfNeeded.c)
 *     ComposeWindowIfNeeded @ 0x1C009286C (ComposeWindowIfNeeded.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UnsetLayeredWindow @ 0x1C008B638 (UnsetLayeredWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0090BA8 (_SetLayeredWindowAttributes.c)
 *     UpdateWindowSpriteDPI @ 0x1C009103C (UpdateWindowSpriteDPI.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  int v4; // esi
  __int64 v6; // rcx
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  char v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( (a2 & 1) == 0 )
  {
    if ( (*((_DWORD *)a1 + 76) & 0x20) != 0 )
      v4 = UnsetLayeredWindow(a1);
    else
      v4 = 0;
    *((_DWORD *)a1 + 76) &= ~0x40u;
    return (unsigned int)v4;
  }
  if ( (unsigned int)IsDesktopWindow(a1) && *((_QWORD *)a1 + 3) != grpdeskRitInput )
    return 0;
  if ( (*((_BYTE *)a1 + 71) & 0x10) == 0 && (a2 & 8) == 0 )
    return (*((_BYTE *)a1 + 66) & 8) == 0 ? 0x3E0001u : 0;
  if ( (*((_BYTE *)a1 + 66) & 8) != 0 )
  {
    v8 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
    UpdateWindowSpriteDPI(a1, v8);
    if ( (*((_BYTE *)a1 + 67) & 0x20) == 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
      xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
    }
    return 0;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  v4 = xxxSetLayeredWindow(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  if ( v4 >= 0 )
  {
    v4 = SetLayeredWindowAttributes(a1);
    if ( v4 < 0 )
    {
      UnsetLayeredWindow(a1);
    }
    else
    {
      *((_DWORD *)a1 + 76) |= 0x20u;
      v7 = (void *)ReferenceDwmApiPort(v6);
      DwmAsyncChildStyleChange(v7);
    }
  }
  return (unsigned int)v4;
}
