/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x1C008D2D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000AC04 (UserSetLastStatus.c)
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     GetNewMonitor @ 0x1C00644F0 (GetNewMonitor.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00E6868 (UpdateMonitorForWindowAndChildren.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C01143B4 (IsTopLevelOrLayeredChildWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01C444C (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        ULONG64 a6,
        int a7,
        ULONG64 a8,
        int a9,
        ULONG64 a10)
{
  __int64 *v13; // r12
  int *v14; // rsi
  __int128 *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // rdi
  __int64 v22; // rsi
  _QWORD *v23; // r14
  NTSTATUS updated; // eax
  __int64 NewMonitor; // rax
  __int64 v26; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 ThreadWin32Thread; // rax
  _QWORD *v31; // rcx
  unsigned __int16 v32; // si
  __int64 v33; // rdx
  int v34; // [rsp+50h] [rbp-128h]
  int v35; // [rsp+54h] [rbp-124h] BYREF
  __int64 v36; // [rsp+60h] [rbp-118h]
  __int64 v37; // [rsp+68h] [rbp-110h] BYREF
  __int64 *v38; // [rsp+70h] [rbp-108h]
  int v39; // [rsp+78h] [rbp-100h]
  int v40; // [rsp+7Ch] [rbp-FCh]
  __int64 v41; // [rsp+80h] [rbp-F8h]
  __int64 v42; // [rsp+88h] [rbp-F0h]
  __int64 *v43; // [rsp+90h] [rbp-E8h]
  __int128 v44; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-B8h]
  struct tagBWL *v48; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-A8h]
  __int64 v50; // [rsp+D8h] [rbp-A0h]
  _QWORD v51[3]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD v52[3]; // [rsp+100h] [rbp-78h] BYREF
  __int128 v53; // [rsp+118h] [rbp-60h]
  __int128 v54; // [rsp+128h] [rbp-50h] BYREF

  v47 = a5;
  v13 = (__int64 *)a6;
  v14 = (int *)a8;
  v15 = (__int128 *)a10;
  v42 = 0LL;
  v43 = 0LL;
  v38 = 0LL;
  v41 = 0LL;
  v36 = 0LL;
  EnterCrit(0LL, 1LL);
  v18 = ValidateHwnd(a1);
  if ( v18 )
  {
    v51[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v51;
    v51[1] = v18;
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    if ( a6 )
    {
      if ( a6 >= MmUserProbeAddress )
        v13 = (__int64 *)MmUserProbeAddress;
      v49 = *v13;
      v45 = v49;
      v42 = (__int64)&v45;
    }
    if ( !a4 )
      goto LABEL_11;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (__int64 *)MmUserProbeAddress;
    v37 = *a4;
    v43 = &v37;
    if ( (int)v37 < 0 || v37 < 0 )
    {
      v34 = 0;
      UserSetLastError(87LL, v16);
    }
    else
    {
LABEL_11:
      if ( a3 )
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (__int64 *)MmUserProbeAddress;
        v50 = *a3;
        v46 = v50;
        v38 = &v46;
      }
      if ( a8 )
      {
        if ( a8 >= MmUserProbeAddress )
          v14 = (int *)MmUserProbeAddress;
        v35 = *v14;
        v41 = (__int64)&v35;
      }
      if ( a10 )
      {
        if ( a10 >= MmUserProbeAddress )
          v15 = (__int128 *)MmUserProbeAddress;
        v54 = *v15;
        v36 = (__int64)&v54;
      }
      if ( (a9 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError(87LL, v16);
        v34 = 0;
      }
      else if ( v36 && (*(int *)v36 < 0 || *(int *)(v36 + 4) < 0) )
      {
        UserSetLastError(87LL, v16);
        v34 = 0;
        UserSetLastError(87LL, v29);
      }
      else
      {
        v21 = v38;
        if ( v38 )
        {
          v28 = *(_QWORD *)(v18 + 104);
          if ( v28 )
          {
            if ( (unsigned int)IsTopLevelOrLayeredChildWindow(v18) && !(unsigned int)IsTopLevelWindow(v18) )
            {
              v39 = *(_DWORD *)v21 + *(_DWORD *)(v28 + 144);
              v40 = *((_DWORD *)v21 + 1) + *(_DWORD *)(v28 + 148);
            }
          }
        }
        v22 = ValidateHmonitorNoRip(*(_QWORD *)(v18 + 360));
        v23 = (_QWORD *)(v18 + 128);
        v53 = *(_OWORD *)(v18 + 128);
        updated = zzzUpdateLayeredWindow((struct tagWND *)v18, v47, v42, a7, v41, a9, v36);
        if ( updated < 0 )
        {
          v34 = 0;
          UserSetLastStatus(updated, 1);
        }
        else
        {
          v34 = 1;
          v20 = v53 - *v23;
          if ( (_QWORD)v53 == *v23 )
            v20 = *((_QWORD *)&v53 + 1) - *(_QWORD *)(v18 + 136);
          if ( v20 )
          {
            v44 = 0uLL;
            NewMonitor = GetNewMonitor((__m128i *)v18, 0LL, &v44);
            v26 = NewMonitor;
            if ( NewMonitor )
            {
              if ( NewMonitor != v22 )
              {
                ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                v52[0] = *(_QWORD *)(ThreadWin32Thread + 392);
                v31 = v52;
                *(_QWORD *)(ThreadWin32Thread + 392) = v52;
                v52[1] = v26;
                _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
                if ( v22 )
                  v32 = *(_WORD *)(*(_QWORD *)(v22 + 40) + 64LL);
                else
                  v32 = 0;
                v33 = *(unsigned __int16 *)(*(_QWORD *)(v26 + 40) + 64LL);
                if ( (_WORD)v33 != v32 )
                  xxxAppAdjustDpiCandidateRect(v18, v33, v18 + 128, &v44);
                if ( ThreadUnlock1(v31, v33) && (unsigned int)UpdateMonitorForWindowAndChildren(v18, v26, &v48, 0LL) )
                  xxxNotifyMonitorChanged((struct tagWND *)v18, (__int64)&v44, v48, v32);
              }
            }
          }
        }
      }
    }
    ThreadUnlock1(v20, v19);
  }
  else
  {
    v34 = 0;
  }
  UserSessionSwitchLeaveCrit(v17, v16);
  return v34;
}
