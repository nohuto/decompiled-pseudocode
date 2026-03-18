/*
 * XREFs of UnsetLayeredWindow @ 0x1C001D9B4
 * Callers:
 *     ComposeWindow @ 0x1C001C75C (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     DeleteFadeSprite @ 0x1C01C1F70 (DeleteFadeSprite.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     UnsetRedirectedWindow @ 0x1C001D5C8 (UnsetRedirectedWindow.c)
 *     GreDeleteSprite @ 0x1C001DBF8 (GreDeleteSprite.c)
 *     RedirectDCEs @ 0x1C0022B14 (RedirectDCEs.c)
 *     _SetLayeredWindowAttributes @ 0x1C0022C08 (_SetLayeredWindowAttributes.c)
 *     UpdateSprite @ 0x1C0025A10 (UpdateSprite.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnsetLayeredWindow(struct tagWND *a1, char a2)
{
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebp
  __int64 v9; // r9
  int v10; // ebx
  void *v11; // rax
  __int64 v12; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rax
  struct tagWND *StyleWindow; // rax
  __int64 v22; // rcx
  char v23; // [rsp+80h] [rbp+18h] BYREF

  v4 = GreIsDynamicModeChangeLocked(*(_QWORD *)(gpDispInfo + 32LL));
  if ( v4 )
    GreLockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(gpDispInfo + 32LL));
  else
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  if ( (a2 & 1) != 0 || !(unsigned int)IsWindowDesktopComposed(a1) )
  {
LABEL_12:
    if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
      UpdateSprite(*(_QWORD *)(gpDispInfo + 32LL), a1, v5, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x80000000, 0LL);
    goto LABEL_14;
  }
  if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
  {
    v8 = SetLayeredWindowAttributes(a1);
    if ( v8 >= 0 )
    {
      *((_DWORD *)a1 + 76) |= 0x20u;
      v10 = *((_DWORD *)a1 + 76);
      v11 = (void *)ReferenceDwmApiPort(v7, v6, v5, v9);
      DwmAsyncChildStyleChange(v11, *(_QWORD *)a1, -268435456, v10);
      v12 = *(_QWORD *)(gpDispInfo + 32LL);
      if ( v4 )
        GreUnlockVisRgnWithDmcLockAcquiredEx(v12);
      else
        GreUnlockVisRgn(v12);
      return (unsigned int)v8;
    }
    goto LABEL_12;
  }
LABEL_14:
  if ( (*((_BYTE *)a1 + 67) & 0x20) != 0 )
    UnsetRedirectedWindow(a1);
  *((_DWORD *)a1 + 76) &= 0xFFFFFF9F;
  v14 = IsWindowDesktopComposed(a1);
  v15 = GreDeleteSprite(*(HDEV *)(gpDispInfo + 32LL), *(HWND *)a1, 0LL, v14);
  SetOrClrWF(0, a1, 0xA08u, 1);
  v20 = (void *)ReferenceDwmApiPort(v17, v16, v18, v19);
  DwmAsyncChildStyleChange(v20, *(_QWORD *)a1, -268435456, *((_DWORD *)a1 + 76));
  StyleWindow = (struct tagWND *)GetStyleWindow(a1, 2848LL);
  if ( StyleWindow && StyleWindow != a1 )
    RedirectDCEs(a1);
  if ( (*((_BYTE *)a1 + 71) & 0x10) != 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v23);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL, 0LL);
    if ( !v23 )
    {
      --gdwInAtomicOperation;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v23);
    }
  }
  v22 = *(_QWORD *)(gpDispInfo + 32LL);
  if ( v4 )
    GreUnlockVisRgnWithDmcLockAcquiredEx(v22);
  else
    GreUnlockVisRgn(v22);
  return v15;
}
