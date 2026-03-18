/*
 * XREFs of xxxPaintMenuBar @ 0x1C0080FE0
 * Callers:
 *     NtUserPaintMenuBar @ 0x1C0081140 (NtUserPaintMenuBar.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     ThreadLockMenuNoModify @ 0x1C007CAD4 (ThreadLockMenuNoModify.c)
 *     xxxMenuBarCompute @ 0x1C007CD78 (xxxMenuBarCompute.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C007D214 (xxxSendUAHInitMenuMessage.c)
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     xxxSendUAHMenuMessage @ 0x1C0080D50 (xxxSendUAHMenuMessage.c)
 *     MNIsUAHMenu @ 0x1C0097A28 (MNIsUAHMenu.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, int a3, int a4, unsigned int a5, char a6)
{
  __int64 v6; // rdi
  int v11; // r14d
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v20; // rdx
  __int64 v21; // rbx
  _QWORD v22[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+48h] [rbp-30h] BYREF
  __int64 v24; // [rsp+50h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 208);
  if ( !v6 )
    return 0LL;
  ThreadLockMenuNoModify(v6, &v23);
  if ( (a6 & 1) != 0 )
    *(_DWORD *)(v6 + 56) &= ~0x10u;
  else
    *(_DWORD *)(v6 + 56) |= 0x10u;
  v11 = *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128) - a3 - a4;
  v12 = *(_QWORD *)(v6 + 88);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v22[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  v15 = v22;
  *(_QWORD *)(ThreadWin32Thread + 392) = v22;
  v22[1] = v12;
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  if ( a1 != *(_QWORD *)(v6 + 88) || !*(_DWORD *)(v6 + 72) || !*(_DWORD *)(v6 + 76) )
    xxxMenuBarCompute((struct tagMENU *)v6, a1, a5, a3, v11);
  if ( gihmodUserApiHook >= 0 && v12 && (unsigned int)xxxSendUAHInitMenuMessage(v12, v6, (__int64)a2) )
    xxxSendUAHMenuMessage(v12, 145LL, v6, (__int64)a2);
  ThreadUnlock1(v15, v14);
  if ( (unsigned int)MNIsUAHMenu(v6) )
  {
    xxxMenuDraw(a2, v6, 0LL);
  }
  else
  {
    v20 = *(_QWORD *)(v6 + 128);
    if ( !v20 )
      v20 = *(_QWORD *)(gpsi + 4920LL);
    v21 = GreSelectBrush(a2, v20);
    NtGdiPatBlt(a2, a3, a5, *(_DWORD *)(v6 + 72), *(_DWORD *)(v6 + 76), 15728673);
    xxxMenuDraw(a2, v6, 0LL);
    GreSelectBrush(a2, v21);
  }
  v17 = v24;
  v18 = *(_DWORD *)(v6 + 76);
  *(_DWORD *)(v24 + 56) &= ~0x200u;
  ThreadUnlock1(v17, v16);
  return v18;
}
