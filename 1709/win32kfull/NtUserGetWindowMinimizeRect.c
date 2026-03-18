/*
 * XREFs of NtUserGetWindowMinimizeRect @ 0x1C010FE00
 * Callers:
 *     <none>
 * Callees:
 *     ParkIcon @ 0x1C004BCA4 (ParkIcon.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMinRectMessages @ 0x1C010FF44 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetWindowMinimizeRect(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int *Prop; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v21[3]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v22; // [rsp+50h] [rbp-28h] BYREF

  v22 = 0uLL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v4 = ValidateHwnd(a1);
  v7 = v4;
  if ( v4 && (v6 = (*(_WORD *)(v4 + 82) & 0x3FFFu) - 669, (v6 & 0xFFFFFFFD) != 0) )
  {
    v21[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v21;
    v21[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( a2 )
    {
      if ( (unsigned int)IsTrayWindow(v4) )
      {
        v9 = xxxSendMinRectMessages(v7, &v22);
      }
      else
      {
        Prop = (unsigned int *)GetProp(v7, atomCheckpointProp, 1);
        if ( Prop && (Prop[8] & 8) != 0 )
        {
          v10 = Prop[4];
          LODWORD(v22) = Prop[4];
          v11 = Prop[5];
          DWORD1(v22) = Prop[5];
        }
        else
        {
          ParkIcon(v7, &v22);
          v11 = DWORD1(v22);
          v10 = (unsigned int)v22;
        }
        v8 = gpsi;
        DWORD2(v22) = v10 + *(_DWORD *)(gpsi + 2108LL);
        HIDWORD(v22) = v11 + *(_DWORD *)(gpsi + 2112LL);
        v9 = 1;
      }
      v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11) + 456);
      if ( (*(_BYTE *)(v13 + 224) & 1) == 0 )
      {
        v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15) + 456);
        if ( (*(_BYTE *)(v13 + 224) & 0x20) == 0 )
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13, v12, v18, v19);
          v12 = 511LL;
          v13 = *(_DWORD *)(v7 + 368) >> 8;
          LOWORD(v13) = v13 & 0x1FF;
          if ( (_WORD)v13 != ((CurrentThreadDpiAwarenessContext >> 8) & 0x1FF) )
            TransformRectBetweenCoordinateSpaces(&v22, &v22, 0LL, v7);
        }
      }
      if ( v9 )
      {
        v13 = MmUserProbeAddress;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_OWORD *)MmUserProbeAddress;
        *a2 = v22;
      }
    }
    else
    {
      v9 = 0;
      UserSetLastError(87LL, gptiCurrent);
    }
    ThreadUnlock1(v13, v12);
  }
  else
  {
    v9 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v9;
}
