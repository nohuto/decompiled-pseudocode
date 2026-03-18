/*
 * XREFs of xxxLoadSysMenu @ 0x1C00C31F4
 * Callers:
 *     xxxGetSystemMenu @ 0x1C00C1EA0 (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0114BE4 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     xxxSetMenuInfo @ 0x1C0043870 (xxxSetMenuInfo.c)
 *     xxxSetMenuItemInfo @ 0x1C00C3360 (xxxSetMenuItemInfo.c)
 *     xxxClientLoadMenu @ 0x1C00C37B4 (xxxClientLoadMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00C3BC0 (RtlInitUnicodeStringOrId.c)
 */

_DWORD *__fastcall xxxLoadSysMenu(int a1)
{
  _DWORD *Menu; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _BYTE v6[16]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v7[4]; // [rsp+40h] [rbp-49h] BYREF
  int v8[18]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v9; // [rsp+A8h] [rbp+1Fh]
  _DWORD v10[12]; // [rsp+B0h] [rbp+27h] BYREF

  RtlInitUnicodeStringOrId(v6, (unsigned __int16)a1);
  Menu = (_DWORD *)xxxClientLoadMenu(0LL, v6);
  if ( !Menu )
    return 0LL;
  v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v7;
  v7[1] = Menu;
  ++Menu[2];
  v10[0] = 40;
  v10[1] = -2147483632;
  v10[2] = 0x4000000;
  xxxSetMenuInfo((__int64)Menu, (__int64)v10);
  v8[0] = 80;
  v8[1] = 128;
  v9 = 8LL;
  xxxSetMenuItemInfo((int)Menu, 61536, 0, (int)v8, 0LL);
  if ( a1 != 48 )
  {
    v9 = 11LL;
    xxxSetMenuItemInfo((int)Menu, 61472, 0, (int)v8, 0LL);
    v9 = 10LL;
    xxxSetMenuItemInfo((int)Menu, 61488, 0, (int)v8, 0LL);
    v9 = 9LL;
    xxxSetMenuItemInfo((int)Menu, 61728, 0, (int)v8, 0LL);
  }
  if ( ThreadUnlock1(v4, v3)
    && (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*Menu + gSharedInfo[1] + 25LL) & 1) == 0 )
  {
    return Menu;
  }
  else
  {
    return 0LL;
  }
}
