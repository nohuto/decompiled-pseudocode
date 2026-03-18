/*
 * XREFs of xxxMenuItemFromPoint @ 0x1C0217B68
 * Callers:
 *     NtUserMenuItemFromPoint @ 0x1C01DDB40 (NtUserMenuItemFromPoint.c)
 * Callees:
 *     MNItemHitTest @ 0x1C0203EA8 (MNItemHitTest.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0217528 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0217A88 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxMenuItemFromPoint(struct tagWND *a1, __int64 a2, unsigned __int64 a3)
{
  struct tagWND *MenuPwnd; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  MenuPwnd = GetMenuPwnd(a1, (struct tagMENU *)a2);
  if ( !MenuPwnd )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(a2 + 56) & 1) == 0 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v11;
    ++*((_DWORD *)MenuPwnd + 2);
    v11[1] = MenuPwnd;
    xxxMNRecomputeBarIfNeeded((__int64)MenuPwnd, a2, v6, v7);
    ThreadUnlock1(v10, v9);
  }
  return MNItemHitTest(a2, (__int64)MenuPwnd, a3);
}
