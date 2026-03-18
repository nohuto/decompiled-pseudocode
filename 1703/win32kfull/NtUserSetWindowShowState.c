/*
 * XREFs of NtUserSetWindowShowState @ 0x1C01E0370
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxSetWindowShowState @ 0x1C020B5C8 (xxxSetWindowShowState.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, __int128 *a4)
{
  __int64 v5; // r15
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int128 *v20; // rdx
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rax
  int *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD v29[3]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v30; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v31[2]; // [rsp+68h] [rbp-30h] BYREF

  v5 = a2;
  EnterCrit(0LL, 1LL);
  v7 = 0;
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  v13 = v8;
  if ( v8 && (((*(_WORD *)(v8 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v29;
    v29[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    v14 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 328LL);
    if ( v14
      && IAMThreadAccessGranted(gptiCurrent)
      && *(_QWORD *)(v18 + 376) == *(_QWORD *)(*(_QWORD *)(v14 + 16) + 376LL) )
    {
      v19 = *(_QWORD *)(v13 + 16);
      if ( v19 != v18 )
      {
        if ( *(_QWORD *)(v19 + 592) )
        {
          v15 = 5023LL;
          goto LABEL_5;
        }
        if ( a3 )
        {
          v15 = 1004LL;
          goto LABEL_5;
        }
        if ( (unsigned int)v5 <= 5 )
        {
          v20 = a4;
          if ( !a4 )
            goto LABEL_36;
          if ( (unsigned __int64)a4 >= W32UserProbeAddress )
            v20 = (__int128 *)W32UserProbeAddress;
          v30 = *v20;
          a4 = &v30;
          v21 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v14 + 368));
          v22 = MonitorFromWindow(v13, v21 | 2u);
          if ( v22 )
          {
            if ( (*(_DWORD *)(v14 + 368) & 0xF) == 0
              && (v23 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL)) != 0
              && (*(_DWORD *)(**(_QWORD **)(v23 + 8) + 52LL) & 1) != 0 )
            {
              v24 = (int *)(*(_QWORD *)(v22 + 40) + 92LL);
            }
            else if ( (*(_DWORD *)(v14 + 368) & 0xF) == 1
                   && (v25 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 408LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v25 + 8) + 52LL) & 1) != 0 )
            {
              v24 = (int *)(*(_QWORD *)(v22 + 40) + 108LL);
            }
            else
            {
              v24 = (int *)(*(_QWORD *)(v22 + 40) + 76LL);
            }
            if ( (unsigned int)IntersectRect((int *)v31, (int *)&v30, v24) )
            {
              v26 = v31[0] - v30;
              if ( v31[0] == (_QWORD)v30 )
                v26 = v31[1] - *((_QWORD *)&v30 + 1);
              if ( !v26
                && ((*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) != 0
                 || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 0x20) != 0
                 || (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == (*(_DWORD *)(v13 + 368) & 0xF)
                 || (unsigned int)TransformRectBetweenCoordinateSpaces(&v30, &v30, v13, v14)) )
              {
LABEL_36:
                LOBYTE(v20) = byte_1C02EE428[v5];
                v7 = xxxSetWindowShowState(v13, v20, a4);
                goto LABEL_37;
              }
            }
          }
        }
      }
      v15 = 87LL;
    }
    else
    {
      v15 = 5LL;
    }
LABEL_5:
    UserSetLastError(v15);
LABEL_37:
    ThreadUnlock1(v17, v16);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v7;
}
