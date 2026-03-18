/*
 * XREFs of NtUserUpdateLayeredWindow @ 0x1C009E0F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C00053F0 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00626B0 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C009DD70 (UpdateMonitorForWindowAndChildren.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01C0CF0 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall NtUserUpdateLayeredWindow(
        __int64 a1,
        struct tagBWL *a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7,
        unsigned __int64 a8,
        int a9,
        unsigned __int64 a10)
{
  _DWORD *v12; // r13
  __int128 *v13; // r15
  _QWORD *v14; // rsi
  int *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // ebx
  __int64 *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  __int64 v26; // r13
  NTSTATUS updated; // eax
  __int64 NewMonitor; // rax
  _QWORD *v29; // rsi
  __int64 v30; // rcx
  unsigned __int16 v31; // r14
  __int64 v32; // rdx
  _DWORD v34[6]; // [rsp+58h] [rbp-120h] BYREF
  struct tagBWL *v35; // [rsp+70h] [rbp-108h] BYREF
  struct tagRECT v36; // [rsp+78h] [rbp-100h] BYREF
  __int64 v37; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v38; // [rsp+90h] [rbp-E8h]
  __int64 v39; // [rsp+98h] [rbp-E0h]
  __int64 *v40; // [rsp+A0h] [rbp-D8h]
  _QWORD *v41; // [rsp+A8h] [rbp-D0h]
  __int64 v42; // [rsp+B8h] [rbp-C0h] BYREF
  _QWORD *v43; // [rsp+C0h] [rbp-B8h] BYREF
  _QWORD *v44; // [rsp+C8h] [rbp-B0h]
  __int128 *v45; // [rsp+D0h] [rbp-A8h]
  __int64 v46; // [rsp+D8h] [rbp-A0h]
  _QWORD v47[3]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD v48[3]; // [rsp+100h] [rbp-78h] BYREF
  __int128 v49; // [rsp+118h] [rbp-60h]
  __int128 v50; // [rsp+128h] [rbp-50h] BYREF

  v41 = a3;
  v35 = a2;
  *(_QWORD *)&v36.left = a5;
  v12 = (_DWORD *)a8;
  v13 = (__int128 *)a10;
  v39 = 0LL;
  v40 = 0LL;
  v14 = 0LL;
  v44 = 0LL;
  v38 = 0LL;
  v15 = 0LL;
  v45 = 0LL;
  EnterCrit(0LL, 1LL);
  v18 = ValidateHwnd(a1);
  v20 = 0LL;
  if ( v18 )
  {
    v47[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v47;
    v47[1] = v18;
    ++*(_DWORD *)(v18 + 8);
    v22 = (__int64 *)a6;
    if ( a6 )
    {
      if ( a6 >= W32UserProbeAddress )
        v22 = (__int64 *)W32UserProbeAddress;
      v46 = *v22;
      v42 = v46;
      v39 = (__int64)&v42;
    }
    if ( !a4 )
      goto LABEL_13;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (__int64 *)W32UserProbeAddress;
    v37 = *a4;
    v40 = &v37;
    if ( (int)v37 < 0 || v37 < 0 )
    {
      v21 = 0;
      v34[4] = 0;
      UserSetLastError(87LL);
    }
    else
    {
LABEL_13:
      v25 = v41;
      if ( v41 )
      {
        if ( (unsigned __int64)v41 >= W32UserProbeAddress )
          v25 = (_QWORD *)W32UserProbeAddress;
        v41 = (_QWORD *)*v25;
        v43 = v41;
        v14 = &v43;
        v44 = &v43;
      }
      if ( a8 )
      {
        if ( a8 >= W32UserProbeAddress )
          v12 = (_DWORD *)W32UserProbeAddress;
        v34[0] = *v12;
        v38 = (__int64)v34;
      }
      if ( a10 )
      {
        if ( a10 >= W32UserProbeAddress )
          v13 = (__int128 *)W32UserProbeAddress;
        v50 = *v13;
        v15 = (int *)&v50;
        v45 = &v50;
      }
      if ( (a9 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError(87LL);
        v21 = 0;
      }
      else if ( v15 && (*v15 < 0 || v15[1] < 0) )
      {
        UserSetLastError(87LL);
        v21 = 0;
        UserSetLastError(87LL);
      }
      else
      {
        if ( v14 && *(_QWORD *)(v18 + 104) && IsTopLevelOrLayeredChildWindow(v18) )
          IsTopLevelWindow(v18);
        v26 = ValidateHmonitorNoRip(*(_QWORD *)(v18 + 360));
        v49 = *(_OWORD *)(v18 + 128);
        updated = zzzUpdateLayeredWindow((struct tagWND *)v18, *(__int64 *)&v36.left, v39, a7, v38, a9, (__int64)v15);
        if ( updated < 0 )
        {
          v21 = 0;
          UserSetLastStatus(updated, 1);
        }
        else
        {
          v21 = 1;
          if ( v49 != *(_OWORD *)(v18 + 128) )
          {
            *(_QWORD *)&v36.left = 0LL;
            *(_QWORD *)&v36.right = 0LL;
            NewMonitor = GetNewMonitor((__m128i *)v18, 0LL, &v36);
            v29 = (_QWORD *)NewMonitor;
            if ( NewMonitor )
            {
              if ( NewMonitor != v26 )
              {
                v30 = *(_QWORD *)(gptiCurrent + 368LL);
                v48[0] = v30;
                *(_QWORD *)(gptiCurrent + 368LL) = v48;
                v48[1] = NewMonitor;
                ++*(_DWORD *)(NewMonitor + 8);
                if ( v26 )
                  v31 = *(_WORD *)(*(_QWORD *)(v26 + 40) + 128LL);
                else
                  v31 = 0;
                v32 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 128LL);
                if ( (_WORD)v32 != v31 )
                  xxxAppAdjustDpiCandidateRect(v18, v32, v18 + 128, &v36);
                if ( ThreadUnlock1(v30, v32) && (unsigned int)UpdateMonitorForWindowAndChildren(v18, v29, &v35, 0) )
                  xxxNotifyMonitorChanged((struct tagWND *)v18, (__int64)&v36, v35, v31);
              }
            }
          }
        }
      }
    }
    ThreadUnlock1(v24, v23);
  }
  else
  {
    v21 = 0;
  }
  UserSessionSwitchLeaveCrit(v17, v16, v20, v19);
  return v21;
}
