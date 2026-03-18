/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C01061E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     ParkIcon @ 0x1C00E8BF0 (ParkIcon.c)
 *     xxxSendMinRectMessages @ 0x1C0106320 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *Prop; // rax
  int v15; // r8d
  int v16; // r9d
  char CurrentThreadDpiAwarenessContext; // al
  _QWORD v18[3]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v19; // [rsp+50h] [rbp-28h] BYREF

  v19 = 0uLL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v4 = ValidateHwnd(a1);
  v9 = v4;
  if ( v4 && (v6 = (*(_WORD *)(v4 + 82) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v18;
    v18[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    if ( a2 )
    {
      if ( (unsigned int)IsTrayWindow(v4) )
      {
        v10 = xxxSendMinRectMessages(v9, &v19);
      }
      else
      {
        Prop = (_DWORD *)GetProp(v9, atomCheckpointProp, 1);
        if ( Prop && (Prop[8] & 8) != 0 )
        {
          v15 = Prop[4];
          LODWORD(v19) = v15;
          v16 = Prop[5];
          DWORD1(v19) = v16;
        }
        else
        {
          ParkIcon(v9, (int *)&v19);
          v16 = DWORD1(v19);
          v15 = v19;
        }
        DWORD2(v19) = v15 + *(_DWORD *)(gpsi + 2108LL);
        HIDWORD(v19) = v16 + *(_DWORD *)(gpsi + 2112LL);
        v10 = 1;
      }
      v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
      if ( (*(_BYTE *)(v12 + 224) & 1) == 0 )
      {
        v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
        if ( (*(_BYTE *)(v12 + 224) & 0x20) == 0 )
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
          v12 = *(_DWORD *)(v9 + 368) & 0xF;
          if ( (CurrentThreadDpiAwarenessContext & 0xF) != (_DWORD)v12 )
            TransformRectBetweenCoordinateSpaces(&v19, &v19, 0LL, v9);
        }
      }
      if ( v10 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (_OWORD *)W32UserProbeAddress;
        *a2 = v19;
      }
    }
    else
    {
      v10 = 0;
      UserSetLastError(87LL);
    }
    ThreadUnlock1(v12, v11);
  }
  else
  {
    v10 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v10;
}
