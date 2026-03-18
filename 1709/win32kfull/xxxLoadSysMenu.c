/*
 * XREFs of xxxLoadSysMenu @ 0x1C007C804
 * Callers:
 *     xxxGetSystemMenu @ 0x1C007C624 (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C011DAE4 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     xxxClientLoadMenu @ 0x1C0053BA0 (xxxClientLoadMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C007C7DC (RtlInitUnicodeStringOrId.c)
 *     xxxSetMenuItemInfo @ 0x1C007C974 (xxxSetMenuItemInfo.c)
 *     xxxSetMenuInfo @ 0x1C007D540 (xxxSetMenuInfo.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxLoadSysMenu(int a1)
{
  __int64 Menu; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _UNICODE_STRING v7; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v9[18]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+1Fh]
  _DWORD v11[12]; // [rsp+B0h] [rbp+27h] BYREF

  RtlInitUnicodeStringOrId(&v7, (WCHAR *)(unsigned __int16)a1);
  Menu = xxxClientLoadMenu(0LL, (void **)&v7);
  if ( !Menu )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v8[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v8;
  v8[1] = Menu;
  _InterlockedIncrement((volatile signed __int32 *)(Menu + 8));
  v11[0] = 40;
  v11[1] = -2147483632;
  v11[2] = 0x4000000;
  xxxSetMenuInfo(Menu, v11);
  v9[0] = 80;
  v9[1] = 128;
  v10 = 8LL;
  xxxSetMenuItemInfo(Menu, 61536LL, 0LL, v9, 0LL);
  if ( a1 != 48 )
  {
    v10 = 11LL;
    xxxSetMenuItemInfo(Menu, 61472LL, 0LL, v9, 0LL);
    v10 = 10LL;
    xxxSetMenuItemInfo(Menu, 61488LL, 0LL, v9, 0LL);
    v10 = 9LL;
    xxxSetMenuItemInfo(Menu, 61728LL, 0LL, v9, 0LL);
  }
  if ( ThreadUnlock1(v5, v4)
    && (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)Menu + gSharedInfo[1] + 25LL) & 1) == 0 )
  {
    return Menu;
  }
  else
  {
    return 0LL;
  }
}
