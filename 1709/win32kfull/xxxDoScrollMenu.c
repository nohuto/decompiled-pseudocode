/*
 * XREFs of xxxDoScrollMenu @ 0x1C0210740
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     GetAppCompatFlags @ 0x1C0073430 (GetAppCompatFlags.c)
 *     CalcSBStuff @ 0x1C0077264 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1C0082EC0 (GetWndSBDisableFlags.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01B5C04 (safe_cast_fnid_to_PSBWND.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C020FBDC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C020FE4C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     SBCtlSetup @ 0x1C0210678 (SBCtlSetup.c)
 *     xxxSBTrackInit @ 0x1C0210C18 (xxxSBTrackInit.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 */

void __fastcall xxxDoScrollMenu(struct tagWND *a1, struct tagWND *a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v8; // r15
  int v9; // ebp
  int v10; // r14d
  int v11; // eax
  __int64 v12; // rdx
  struct tagMENU *ScrollMenu; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 ThreadWin32Thread; // rax
  int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagWND *v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int16 v22; // [rsp+30h] [rbp-B8h]
  _QWORD v23[3]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v24[64]; // [rsp+50h] [rbp-98h] BYREF

  v8 = safe_cast_fnid_to_PSBWND((__int64)a2);
  if ( (int)GetAppCompatFlags(0LL) >= 0 )
  {
    if ( a2 )
    {
      if ( !v8 )
        return;
      SBCtlSetup(v8);
      v9 = (__int16)a4 - *((_DWORD *)a2 + 32);
      v10 = SWORD1(a4) - *((_DWORD *)a2 + 33);
      v11 = *(_DWORD *)(v8 + 12);
    }
    else
    {
      CalcSBStuff((__int64)a1, (__int64)v24, a3);
      LOBYTE(v11) = GetWndSBDisableFlags((__int64)a1, a3);
      v9 = (__int16)a4 - *((_DWORD *)a1 + 32);
      v10 = SWORD1(a4) - *((_DWORD *)a1 + 33);
    }
    v22 = v9;
    if ( (v11 & 3) != 3 )
    {
      ScrollMenu = xxxGetScrollMenu(a1, a3);
      if ( ScrollMenu )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15);
        v23[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v23;
        v23[1] = ScrollMenu;
        _InterlockedIncrement((volatile signed __int32 *)ScrollMenu + 2);
        v17 = xxxTrackPopupMenuEx((int)ScrollMenu, 386, (__int16)a4, SWORD1(a4), a1, 0LL);
        ThreadUnlock1(v19, v18);
        if ( v17 )
        {
          if ( (unsigned __int8)v17 == 4 )
          {
            if ( a2 )
            {
              v20 = a2;
              v21 = v22 | (unsigned __int64)((unsigned __int16)v10 << 16);
            }
            else
            {
              v21 = a4;
              v20 = a1;
            }
            xxxSBTrackInit(v20, v21);
          }
          else
          {
            xxxDoScroll(a2, a1, (unsigned __int8)v17, 0LL, a3);
            xxxDoScroll(a2, a1, 8LL, 0LL, a3);
          }
        }
      }
    }
  }
}
