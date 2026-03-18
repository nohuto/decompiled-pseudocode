/*
 * XREFs of xxxSetSysMenu @ 0x1C007AD30
 * Callers:
 *     xxxGetSysMenu @ 0x1C0046740 (xxxGetSysMenu.c)
 *     xxxTranslateAccelerator @ 0x1C00FC58C (xxxTranslateAccelerator.c)
 *     xxxHandleNCMouseGuys @ 0x1C0140028 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     xxxEnableMenuItem @ 0x1C007ABB8 (xxxEnableMenuItem.c)
 *     xxxGetSysMenuHandle @ 0x1C007BAF0 (xxxGetSysMenuHandle.c)
 *     ?_SetCloseDefault@@YAXPEAUtagMENU@@@Z @ 0x1C007C488 (-_SetCloseDefault@@YAXPEAUtagMENU@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C007C4B4 (_SetMenuDefaultItem.c)
 *     _GetSubMenu @ 0x1C007C554 (_GetSubMenu.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     IsSmallerThanScreen @ 0x1C0115C10 (IsSmallerThanScreen.c)
 */

__int64 __fastcall xxxSetSysMenu(struct tagWND *a1)
{
  __int64 SysMenuHandle; // rax
  int v3; // ebx
  __int64 SubMenu; // rdi
  __int64 ThreadWin32Thread; // rax
  int v6; // ebp
  int v7; // r14d
  int v8; // r13d
  unsigned int v9; // r15d
  int v10; // r12d
  char v11; // al
  char v12; // cl
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[4]; // [rsp+20h] [rbp-48h] BYREF

  SysMenuHandle = xxxGetSysMenuHandle(a1);
  v3 = 0;
  if ( !SysMenuHandle )
    return 1LL;
  SubMenu = GetSubMenu(SysMenuHandle);
  if ( !SubMenu )
    return 1LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v16[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v16;
  v16[1] = SubMenu;
  _InterlockedIncrement((volatile signed __int32 *)(SubMenu + 8));
  v6 = 0;
  v7 = 0;
  v8 = 3;
  v9 = 61536;
  if ( (*((_BYTE *)a1 + 71) & 0x20) != 0 )
  {
    v8 = 0;
    v10 = 3;
    v7 = 3;
    v9 = 61728;
    if ( (unsigned int)IsTrayWindow((__int64)a1) )
      v6 = 3;
  }
  else
  {
    v10 = 0;
    if ( (*((_BYTE *)a1 + 70) & 2) == 0 )
      v10 = 3;
  }
  if ( (*((_BYTE *)a1 + 70) & 1) == 0 )
    goto LABEL_21;
  v11 = *((_BYTE *)a1 + 71);
  if ( (v11 & 1) != 0 )
  {
    v8 = 0;
    v6 = 3;
    if ( (v11 & 0x40) == 0 && (unsigned int)IsSmallerThanScreen(a1) )
      v6 = 0;
    v7 = 3;
LABEL_21:
    v3 = 3;
  }
  v12 = *((_BYTE *)a1 + 70);
  if ( (v12 & 4) == 0 )
    v7 = 3;
  if ( (*((_BYTE *)a1 + 70) & 0xC0) != 0x40 && (*((_BYTE *)a1 + 64) & 1) == 0 || (v12 & 7) != 0 )
  {
    xxxEnableMenuItem((struct tagMENU *)SubMenu, 0xF000u, v7);
    xxxEnableMenuItem((struct tagMENU *)SubMenu, 0xF020u, v10);
    xxxEnableMenuItem((struct tagMENU *)SubMenu, 0xF030u, v3);
    xxxEnableMenuItem((struct tagMENU *)SubMenu, 0xF120u, v8);
  }
  xxxEnableMenuItem((struct tagMENU *)SubMenu, 0xF010u, v6);
  if ( v9 == 61536 )
    _SetCloseDefault((struct tagMENU *)SubMenu);
  else
    SetMenuDefaultItem(SubMenu, v9, 0LL);
  ThreadUnlock1(v14, v13);
  return 1LL;
}
