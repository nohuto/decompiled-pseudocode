/*
 * XREFs of ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0107F90
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C005EC88 (ScaleDPIRect.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z @ 0x1C01080AC (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01C2DFC (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01C444C (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxSendDpiChangedMsgs(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  unsigned int v7; // r14d
  int v8; // r12d
  int v9; // eax
  __int64 v11; // rdx
  unsigned __int16 v12; // r8
  HWND *i; // rbx
  HWND *j; // rbx
  __int64 v15; // rbx
  struct tagRECT v16; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-28h] BYREF

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
    v17 = *a2;
  }
  else
  {
    GetRect((__int64)a1, &v17.left, 66);
    if ( a4 )
    {
      v11 = *((unsigned __int16 *)a1 + 186);
      if ( a4 != (_WORD)v11 )
      {
        v15 = *(_QWORD *)&v17.left;
        v16 = v17;
        if ( !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v11, &v16, &v17) )
          ScaleDPIRect(&v17, (__m128i *)&v17, *((_WORD *)a1 + 186), a4, v15, *(__int64 *)&v17.left);
      }
    }
  }
  if ( (*((_DWORD *)a1 + 92) & 0xF) == 2 && (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( (*((_DWORD *)a1 + 76) & 0x40000000) != 0 )
    {
      if ( a3 || (a3 = BuildHwndList((__int64)a1, (struct tagWND *)1, 0LL), v8 = 1, a3) )
      {
        for ( i = (HWND *)*((_QWORD *)a3 + 1); --i > (HWND *)a3 + 4; v7 |= xxxSendDpiChangedMessageToChildWindow(*i, 1) )
          ;
        v7 |= xxxSendDpiChangedMessageToTopLevelWindow(a1, &v17, v12);
        for ( j = (HWND *)((char *)a3 + 40); (unsigned __int64)j < *((_QWORD *)a3 + 1); ++j )
          v7 |= xxxSendDpiChangedMessageToChildWindow(*j, 0);
        if ( v8 )
          FreeHwndList(a3);
      }
    }
    else
    {
      return (unsigned int)xxxSendDpiChangedMessageToTopLevelWindow(a1, &v17, v12);
    }
  }
  return v7;
}
