/*
 * XREFs of NtUserOpenClipboard @ 0x1C00C5F10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _OpenClipboard @ 0x1C00C6198 (_OpenClipboard.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00C9068 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  ULONG64 CurrentProcessWin32Process; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 ThreadWin32Thread; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // r11
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD v21[4]; // [rsp+28h] [rbp-20h] BYREF
  int v22; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v22 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_13;
  }
  else
  {
    v7 = 0LL;
  }
  if ( gbLockScreenActive
    || *(PVOID *)(gptiCurrent + 432LL) == grpdeskLogon
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent) + 836)
    && ((v16 = gptiCurrent, v17 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 40LL), !gpqForeground)
     || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1))
    && ((v18 = *(_QWORD *)(v17 + 80)) == 0 || *(_QWORD *)(v18 + 16) != v16) )
  {
    v20 = 5LL;
    goto LABEL_25;
  }
  if ( v7 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v11 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 400LL);
    if ( *(_QWORD *)(v11 + 640) != *(_QWORD *)(CurrentProcessWin32Process + 640) )
    {
      if ( *(_QWORD *)(PsGetCurrentProcessWin32Process(v11) + 640) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 400LL);
        if ( *(_QWORD *)(v19 + 640)
          || (*(_DWORD *)(*(_QWORD *)(PsGetCurrentProcessWin32Process(v19) + 640) + 32LL) & 4) != 0 )
        {
          UserSetLastError(87LL, CurrentProcessWin32Process);
          v20 = 0LL;
LABEL_25:
          UserSetLastError(v20, CurrentProcessWin32Process);
          goto LABEL_13;
        }
      }
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), CurrentProcessWin32Process, v9, v10);
  v21[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v21;
  v21[1] = v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v4 = OpenClipboard(v7, &v22);
  ThreadUnlock1(v14, v13);
  v6 = MmUserProbeAddress;
  CurrentProcessWin32Process = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v22;
LABEL_13:
  UserSessionSwitchLeaveCrit(v6, CurrentProcessWin32Process);
  return v4;
}
