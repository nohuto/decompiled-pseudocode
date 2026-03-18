/*
 * XREFs of xxxSetMenuItemInfo @ 0x1C00C3360
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C0041DB0 (NtUserThunkedMenuItemInfo.c)
 *     xxxLoadSysMenu @ 0x1C00C31F4 (xxxLoadSysMenu.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     MNLookUpItem @ 0x1C004192C (MNLookUpItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0042360 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0042670 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     MakeMenuRtoL @ 0x1C02178C4 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(__int64 a1, unsigned int a2, int a3, __int64 a4, struct _UNICODE_STRING *a5)
{
  struct tagITEM *v7; // rsi
  __int64 v8; // r10
  __int64 v9; // r11
  struct tagMENU *v10; // rdx
  struct tagMENU *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edi
  int v16; // [rsp+30h] [rbp-38h] BYREF
  struct tagMENU *v17; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v18[5]; // [rsp+40h] [rbp-28h] BYREF

  v17 = 0LL;
  v7 = (struct tagITEM *)MNLookUpItem(a1, a2, a3, &v17);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v8 + 4) & 0x10) != 0
      && ((*(_DWORD *)(v8 + 8) & 0x2000) != 0 || (*(_DWORD *)(v9 + 56) & 0x20) != 0) )
    {
      MakeMenuRtoL(v9, (*(_DWORD *)(v8 + 8) & 0x2000) != 0);
    }
    v10 = v17;
    v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v18;
    v18[1] = v10;
    if ( v10 )
      ++*((_DWORD *)v10 + 2);
    v11 = v17;
    v16 = 0;
    v14 = SetLPITEMInfoNoRedraw(v17, v7, (struct tagMENUITEMINFOW *)v8, a5, &v16);
    if ( v16 )
      xxxRedrawForSetLPITEMInfo(v11, v7);
    ThreadUnlock1(v13, v12);
    return v14;
  }
  else if ( !a3 && a2 == 61744 )
  {
    return 1LL;
  }
  else
  {
    UserSetLastError(1456LL);
    return 0LL;
  }
}
