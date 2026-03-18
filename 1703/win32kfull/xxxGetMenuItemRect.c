/*
 * XREFs of xxxGetMenuItemRect @ 0x1C021794C
 * Callers:
 *     NtUserGetMenuItemRect @ 0x1C01D9BB0 (NtUserGetMenuItemRect.c)
 * Callees:
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0217528 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0217A88 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r15
  struct tagWND *MenuPwnd; // rbx
  int v9; // r14d
  int v10; // esi
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  int v15; // esi
  int v16; // ebx
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

  result = 0LL;
  v5 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  MenuPwnd = (struct tagWND *)a1;
  if ( a3 < *(_DWORD *)(a2 + 68) )
  {
    if ( !a1 || (*(_BYTE *)(a1 + 61) & 4) != 0 )
      MenuPwnd = GetMenuPwnd((struct tagWND *)a1, (struct tagMENU *)a2);
    if ( !MenuPwnd )
      return 0LL;
    v9 = *((_BYTE *)MenuPwnd + 66) & 0x40;
    if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
    {
      v10 = (*((_BYTE *)MenuPwnd + 66) & 0x40) != 0 ? *((_DWORD *)MenuPwnd + 38) : *((_DWORD *)MenuPwnd + 36);
      v11 = *((_DWORD *)MenuPwnd + 37);
    }
    else
    {
      v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v17;
      ++*((_DWORD *)MenuPwnd + 2);
      v17[1] = MenuPwnd;
      xxxMNRecomputeBarIfNeeded(MenuPwnd, a2);
      v10 = v9 ? *((_DWORD *)MenuPwnd + 34) : *((_DWORD *)MenuPwnd + 32);
      v11 = *((_DWORD *)MenuPwnd + 33);
      ThreadUnlock1(v13, v12);
    }
    if ( (unsigned int)v5 < *(_DWORD *)(a2 + 68) )
    {
      v14 = (_DWORD *)(*(_QWORD *)(a2 + 96) + 152 * v5);
      *(_DWORD *)(a4 + 8) = v14[20];
      *(_DWORD *)(a4 + 12) = v14[21];
      if ( v9 )
        v15 = v10 - (v14[20] + v14[18]);
      else
        v15 = v14[18] + v10;
      v16 = v14[19] + v11;
      result = 1LL;
      *(_DWORD *)(a4 + 12) += v16;
      *(_DWORD *)a4 += v15;
      *(_DWORD *)(a4 + 8) += v15;
      *(_DWORD *)(a4 + 4) += v16;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
