/*
 * XREFs of xxxPaintMenuBar @ 0x1C000D23C
 * Callers:
 *     NtUserPaintMenuBar @ 0x1C000D150 (NtUserPaintMenuBar.c)
 * Callees:
 *     xxxSendUAHMenuMessage @ 0x1C000D3A0 (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C000D3E0 (xxxSendUAHInitMenuMessage.c)
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     xxxMenuBarCompute @ 0x1C000E5E4 (xxxMenuBarCompute.c)
 *     MNIsUAHMenu @ 0x1C00429D0 (MNIsUAHMenu.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, int a3, int a4, int a5, char a6)
{
  __int64 v6; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h]
  _QWORD v21[3]; // [rsp+48h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(a1 + 208);
  v9 = a1;
  if ( !v6 )
    return 0LL;
  *(_DWORD *)(v6 + 56) |= 0x200u;
  v19 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v19;
  v20 = v6;
  ++*(_DWORD *)(v6 + 8);
  if ( (a6 & 1) != 0 )
    *(_DWORD *)(v6 + 56) &= ~0x10u;
  else
    *(_DWORD *)(v6 + 56) |= 0x10u;
  v10 = *(_QWORD *)(v6 + 88);
  v11 = gptiCurrent;
  v12 = *(_DWORD *)(v9 + 136) - *(_DWORD *)(v9 + 128) - a3 - a4;
  v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v21;
  v21[1] = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  if ( v9 != *(_QWORD *)(v6 + 88) || !*(_DWORD *)(v6 + 72) || !*(_DWORD *)(v6 + 76) )
    xxxMenuBarCompute((struct tagMENU *)v6, v12);
  if ( gihmodUserApiHook >= 0 && v10 && (unsigned int)xxxSendUAHInitMenuMessage(v10, v6, a2) )
    xxxSendUAHMenuMessage(v10, 145LL, v6, a2);
  ThreadUnlock1(v11, v9);
  if ( (unsigned int)MNIsUAHMenu(v6) )
  {
    xxxMenuDraw(a2);
  }
  else
  {
    v17 = *(_QWORD *)(v6 + 128);
    if ( !v17 )
      v17 = *(_QWORD *)(gpsi + 5328LL);
    v18 = GreSelectBrush(a2, v17);
    NtGdiPatBlt(a2, a3, a5, *(_DWORD *)(v6 + 72), *(_DWORD *)(v6 + 76), 15728673);
    xxxMenuDraw(a2);
    GreSelectBrush(a2, v18);
  }
  v14 = v20;
  v15 = *(_DWORD *)(v6 + 76);
  *(_DWORD *)(v20 + 56) &= ~0x200u;
  ThreadUnlock1(v14, v13);
  return v15;
}
