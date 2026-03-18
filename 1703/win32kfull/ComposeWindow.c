/*
 * XREFs of ComposeWindow @ 0x1C001C75C
 * Callers:
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     DecomposeWindowIfNeeded @ 0x1C001C558 (DecomposeWindowIfNeeded.c)
 *     ComposeWindowIfNeeded @ 0x1C0022184 (ComposeWindowIfNeeded.c)
 *     zzzDecomposeDesktop @ 0x1C00A18B4 (zzzDecomposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     UnsetLayeredWindow @ 0x1C001D9B4 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0022C08 (_SetLayeredWindowAttributes.c)
 *     UpdateWindowSpriteDPI @ 0x1C0022F88 (UpdateWindowSpriteDPI.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  void *v10; // rax
  __int64 v11; // rax
  char v13; // [rsp+40h] [rbp+18h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h]

  v14 = 0LL;
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
    v11 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
    UpdateWindowSpriteDPI(a1, v11);
    if ( (*((_BYTE *)a1 + 67) & 0x20) == 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
      xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
      if ( !v13 )
      {
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v13);
      }
    }
    return 0;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  v4 = xxxSetLayeredWindow(a1);
  if ( !v13 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v13);
  }
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
      v9 = *((_DWORD *)a1 + 76);
      v10 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
      DwmAsyncChildStyleChange(v10, *(_QWORD *)a1, -268435456, v9);
    }
  }
  return (unsigned int)v4;
}
