/*
 * XREFs of xxxGetMenuItemRect @ 0x1C0218AD0
 * Callers:
 *     NtUserGetMenuItemRect @ 0x1C01E6410 (NtUserGetMenuItemRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0218710 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0218C14 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxGetMenuItemRect(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r15
  struct tagWND *MenuPwnd; // rbx
  int v9; // r14d
  int v10; // esi
  int v11; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  int v16; // esi
  int v17; // ebx
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  result = 0LL;
  v5 = (unsigned int)a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  MenuPwnd = (struct tagWND *)a1;
  if ( (unsigned int)a3 < *(_DWORD *)(a2 + 68) )
  {
    if ( !a1 || (*(_BYTE *)(a1 + 61) & 4) != 0 )
      MenuPwnd = GetMenuPwnd((struct tagWND *)a1, (struct tagMENU *)a2, a3, a4);
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
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
      v18[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v18;
      v18[1] = MenuPwnd;
      _InterlockedIncrement((volatile signed __int32 *)MenuPwnd + 2);
      xxxMNRecomputeBarIfNeeded(MenuPwnd, a2);
      v10 = v9 ? *((_DWORD *)MenuPwnd + 34) : *((_DWORD *)MenuPwnd + 32);
      v11 = *((_DWORD *)MenuPwnd + 33);
      ThreadUnlock1(v14, v13);
    }
    if ( (unsigned int)v5 < *(_DWORD *)(a2 + 68) )
    {
      v15 = (_DWORD *)(*(_QWORD *)(a2 + 96) + 152 * v5);
      *(_DWORD *)(a4 + 8) = v15[20];
      *(_DWORD *)(a4 + 12) = v15[21];
      if ( v9 )
        v16 = v10 - (v15[20] + v15[18]);
      else
        v16 = v15[18] + v10;
      v17 = v15[19] + v11;
      result = 1LL;
      *(_DWORD *)(a4 + 12) += v17;
      *(_DWORD *)a4 += v16;
      *(_DWORD *)(a4 + 8) += v16;
      *(_DWORD *)(a4 + 4) += v17;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
