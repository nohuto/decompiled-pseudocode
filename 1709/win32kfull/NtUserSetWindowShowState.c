/*
 * XREFs of NtUserSetWindowShowState @ 0x1C01EC4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     IAMThreadAccessGranted @ 0x1C005EB84 (IAMThreadAccessGranted.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxSetWindowShowState @ 0x1C020C98C (xxxSetWindowShowState.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, __int128 *a4)
{
  __int64 v5; // r15
  int v7; // edi
  __int64 v8; // rax
  ULONG64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  struct tagMONITOR *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int128 v30; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v31[3]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v32; // [rsp+68h] [rbp-50h] BYREF
  __int128 v33; // [rsp+78h] [rbp-40h] BYREF
  _QWORD v34[2]; // [rsp+88h] [rbp-30h] BYREF

  v5 = a2;
  EnterCrit(0LL, 1LL);
  v7 = 0;
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  v11 = v8;
  if ( v8 && (((*(_WORD *)(v8 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v31[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v31;
    v31[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v12 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 328LL);
    if ( v12
      && IAMThreadAccessGranted(gptiCurrent)
      && *(_QWORD *)(v16 + 400) == *(_QWORD *)(*(_QWORD *)(v12 + 16) + 400LL) )
    {
      v17 = *(_QWORD *)(v11 + 16);
      if ( v17 != v16 )
      {
        if ( *(_QWORD *)(v17 + 648) )
        {
          v13 = 5023LL;
          goto LABEL_5;
        }
        if ( a3 )
        {
          v13 = 1004LL;
          goto LABEL_5;
        }
        if ( (unsigned int)v5 <= 5 )
        {
          v9 = (ULONG64)a4;
          if ( !a4 )
            goto LABEL_27;
          if ( (unsigned __int64)a4 >= MmUserProbeAddress )
            v9 = MmUserProbeAddress;
          v33 = *(_OWORD *)v9;
          a4 = &v33;
          v18 = _MonitorFromWindowInternal((struct tagWND *)v11, 2, 1);
          if ( v18 )
          {
            v30 = *GetMonitorWorkRectForWindow(&v32, (__int64)v18, (struct tagWND *)v12);
            if ( (unsigned int)IntersectRect(v34, (int *)&v33, (int *)&v30) )
            {
              v21 = v34[0] - v33;
              if ( v34[0] == (_QWORD)v33 )
                v21 = v34[1] - *((_QWORD *)&v33 + 1);
              if ( !v21 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v19, v20) + 456)
                               + 224LL) & 1) != 0
                  || (v24 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v22, v23) + 456),
                      (*(_BYTE *)(v24 + 224) & 0x20) != 0)
                  || (CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v24, v9, v25, v26),
                      v9 = 511LL,
                      ((*(_DWORD *)(v11 + 368) >> 8) & 0x1FF) == ((CurrentThreadDpiAwarenessContext >> 8) & 0x1FF))
                  || (unsigned int)TransformRectBetweenCoordinateSpaces(&v33, &v33, v11, v12) )
                {
LABEL_27:
                  LOBYTE(v9) = byte_1C02EB118[v5];
                  v7 = xxxSetWindowShowState(v11, v9, a4);
                  goto LABEL_28;
                }
              }
            }
          }
        }
      }
      v13 = 87LL;
    }
    else
    {
      v13 = 5LL;
    }
LABEL_5:
    UserSetLastError(v13, v9);
LABEL_28:
    ThreadUnlock1(v15, v14);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return v7;
}
