/*
 * XREFs of xxxMenuItemFromPoint @ 0x1C0218CF4
 * Callers:
 *     NtUserMenuItemFromPoint @ 0x1C01E9C20 (NtUserMenuItemFromPoint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     MNItemHitTest @ 0x1C0205964 (MNItemHitTest.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0218710 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0218C14 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxMenuItemFromPoint(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  struct tagWND *MenuPwnd; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  MenuPwnd = GetMenuPwnd(a1, (struct tagMENU *)a2, a3, a4);
  if ( !MenuPwnd )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(a2 + 56) & 1) == 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v8, v9);
    v16[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v16;
    v16[1] = MenuPwnd;
    _InterlockedIncrement((volatile signed __int32 *)MenuPwnd + 2);
    xxxMNRecomputeBarIfNeeded((__int64)MenuPwnd, a2, v12, v13);
    ThreadUnlock1(v15, v14);
  }
  return MNItemHitTest(a2, (__int64)MenuPwnd, a3);
}
