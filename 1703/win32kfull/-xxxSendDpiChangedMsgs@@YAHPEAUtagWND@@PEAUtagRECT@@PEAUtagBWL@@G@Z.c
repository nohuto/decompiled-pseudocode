/*
 * XREFs of ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00FB81C
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     GetRect @ 0x1C0062FEC (GetRect.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z @ 0x1C00FB93C (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01BF4E8 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01C0CF0 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxSendDpiChangedMsgs(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  unsigned int v7; // r15d
  int v8; // r13d
  int v9; // eax
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // r8
  HWND *i; // rbx
  HWND *j; // rbx
  INT v15; // eax
  __int64 v16; // rdx
  INT v17[2]; // [rsp+30h] [rbp-38h]
  INT v18; // [rsp+34h] [rbp-34h]
  _DWORD v19[4]; // [rsp+38h] [rbp-30h] BYREF
  INT a[4]; // [rsp+48h] [rbp-20h] BYREF

  v7 = 0;
  v8 = 0;
  if ( *((_WORD *)a1 + 187) )
    return 0LL;
  v9 = *((_DWORD *)a1 + 76);
  if ( (v9 & 0x8000000) == 0 )
    return 0LL;
  *((_DWORD *)a1 + 76) = v9 & 0xF7FFFFFF;
  if ( a2 )
  {
    *(struct tagRECT *)a = *a2;
  }
  else
  {
    GetRect((__int64)a1, a, 66);
    if ( a4 )
    {
      v11 = *((_WORD *)a1 + 186);
      if ( a4 != v11 )
      {
        v18 = a[1];
        v17[0] = EngMulDiv(a[0], v11, a4);
        v15 = EngMulDiv(v18, *((unsigned __int16 *)a1 + 186), a4);
        v16 = *((unsigned __int16 *)a1 + 186);
        v17[1] = v15;
        v19[1] = v15;
        v19[0] = v17[0];
        v19[2] = v17[0] + a[2] - a[0];
        v19[3] = v15 + a[3] - a[1];
        if ( !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v16, v19, a) )
          ScaleDPIRect(a, a, *((unsigned __int16 *)a1 + 186), a4, *(_QWORD *)v17, *(_QWORD *)a);
      }
    }
  }
  if ( (*((_DWORD *)a1 + 92) & 0xF) == 2 && (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( (*((_DWORD *)a1 + 76) & 0x40000000) != 0 )
    {
      if ( a3 || (a3 = BuildHwndList((__int64)a1, 1, 0LL), v8 = 1, a3) )
      {
        for ( i = (HWND *)*((_QWORD *)a3 + 1); --i > (HWND *)a3 + 4; v7 |= xxxSendDpiChangedMessageToChildWindow(*i, 1) )
          ;
        v7 |= xxxSendDpiChangedMessageToTopLevelWindow(a1, (struct tagRECT *)a, v12);
        for ( j = (HWND *)((char *)a3 + 40); (unsigned __int64)j < *((_QWORD *)a3 + 1); ++j )
          v7 |= xxxSendDpiChangedMessageToChildWindow(*j, 0);
        if ( v8 )
          FreeHwndList(a3);
      }
    }
    else
    {
      return (unsigned int)xxxSendDpiChangedMessageToTopLevelWindow(a1, (struct tagRECT *)a, v12);
    }
  }
  return v7;
}
