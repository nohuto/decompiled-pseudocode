/*
 * XREFs of xxxSetSysMenu @ 0x1C00C1FC0
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C00B81C8 (xxxTranslateAccelerator.c)
 *     xxxGetSysMenu @ 0x1C00C1A64 (xxxGetSysMenu.c)
 *     xxxHandleNCMouseGuys @ 0x1C01394E4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     xxxEnableMenuItem @ 0x1C00C2158 (xxxEnableMenuItem.c)
 *     xxxGetSysMenuHandle @ 0x1C00C2730 (xxxGetSysMenuHandle.c)
 *     ?_SetCloseDefault@@YAXPEAUtagMENU@@@Z @ 0x1C00C2770 (-_SetCloseDefault@@YAXPEAUtagMENU@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C00C279C (_SetMenuDefaultItem.c)
 *     _GetSubMenu @ 0x1C00C283C (_GetSubMenu.c)
 *     IsSmallerThanScreen @ 0x1C00C3BE0 (IsSmallerThanScreen.c)
 */

__int64 __fastcall xxxSetSysMenu(_BYTE *a1)
{
  __int64 SysMenuHandle; // rax
  unsigned int v3; // ebx
  __int64 SubMenu; // rdi
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  char v8; // r12
  unsigned int v9; // r13d
  char v10; // cl
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+10h]

  SysMenuHandle = xxxGetSysMenuHandle(a1);
  v3 = 0;
  if ( !SysMenuHandle )
    return 1LL;
  SubMenu = GetSubMenu(SysMenuHandle);
  if ( !SubMenu )
    return 1LL;
  v5 = 0;
  v15 = 3;
  v6 = 0;
  v7 = 61536;
  v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v14;
  v14[1] = SubMenu;
  ++*(_DWORD *)(SubMenu + 8);
  v8 = a1[71];
  if ( (v8 & 0x20) != 0 )
  {
    v15 = 0;
    v9 = 3;
    v6 = 3;
    v7 = 61728;
    v5 = (unsigned int)IsTrayWindow((__int64)a1) != 0 ? 3 : 0;
  }
  else
  {
    v9 = 0;
    if ( (a1[70] & 2) == 0 )
      v9 = 3;
  }
  if ( (a1[70] & 1) == 0 )
    goto LABEL_21;
  if ( (v8 & 1) != 0 )
  {
    v15 = 0;
    v5 = 3;
    if ( (v8 & 0x40) == 0 && (unsigned int)IsSmallerThanScreen(a1, 0LL) )
      v5 = 0;
    v6 = 3;
LABEL_21:
    v3 = 3;
  }
  v10 = a1[70];
  if ( (v10 & 4) == 0 )
    v6 = 3;
  if ( (a1[70] & 0xC0) != 0x40 && (a1[64] & 1) == 0 || (v10 & 7) != 0 )
  {
    xxxEnableMenuItem((struct tagMENU *)SubMenu, 0xF000u, v6);
    xxxEnableMenuItem((struct tagMENU *)SubMenu, 0xF020u, v9);
    xxxEnableMenuItem((struct tagMENU *)SubMenu, 0xF030u, v3);
    xxxEnableMenuItem((struct tagMENU *)SubMenu, 0xF120u, v15);
  }
  xxxEnableMenuItem((struct tagMENU *)SubMenu, 0xF010u, v5);
  if ( v7 == 61536 )
    _SetCloseDefault((struct tagMENU *)SubMenu);
  else
    SetMenuDefaultItem(SubMenu, v7, 0LL);
  ThreadUnlock1(v12, v11);
  return 1LL;
}
