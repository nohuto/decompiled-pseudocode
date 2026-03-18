/*
 * XREFs of xxxSetMenuItemInfo @ 0x1C007C974
 * Callers:
 *     xxxLoadSysMenu @ 0x1C007C804 (xxxLoadSysMenu.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C0096B20 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     MNLookUpItem @ 0x1C0077DF8 (MNLookUpItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0097220 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00976B4 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     MakeMenuRtoL @ 0x1C0218A48 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(__int64 a1, unsigned int a2, int a3, __int64 a4, struct _UNICODE_STRING *a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r10
  int v10; // r11d
  struct tagMENU *v11; // rbx
  struct tagITEM *v12; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edi
  int v18; // [rsp+30h] [rbp-38h] BYREF
  struct tagMENU *v19; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v20[4]; // [rsp+40h] [rbp-28h] BYREF

  v19 = 0LL;
  v7 = MNLookUpItem(a1, a2, a3, &v19);
  v11 = v19;
  v12 = (struct tagITEM *)v7;
  if ( v7 )
  {
    if ( (*(_DWORD *)(a4 + 4) & 0x10) != 0
      && ((*(_DWORD *)(a4 + 8) & 0x2000) != 0 || (*(_DWORD *)(v9 + 56) & 0x20) != 0) )
    {
      MakeMenuRtoL(v9, (*(_DWORD *)(a4 + 8) & 0x2000) != 0);
    }
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v20[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v20;
    v20[1] = v11;
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
    v18 = 0;
    v16 = SetLPITEMInfoNoRedraw(v11, v12, (struct tagMENUITEMINFOW *)a4, a5, &v18);
    if ( v18 )
      xxxRedrawForSetLPITEMInfo(v11, v12);
    ThreadUnlock1(v15, v14);
    return v16;
  }
  else if ( !a3 && v10 == 61744 )
  {
    return 1LL;
  }
  else
  {
    UserSetLastError(1456LL, v8);
    return 0LL;
  }
}
