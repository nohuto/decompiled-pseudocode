/*
 * XREFs of NtUserOpenClipboard @ 0x1C00AF230
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _OpenClipboard @ 0x1C00AF6D4 (_OpenClipboard.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C00B4624 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // r11
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD v23[4]; // [rsp+28h] [rbp-20h] BYREF
  int v24; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v24 = 0;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_11;
  }
  else
  {
    v7 = 0LL;
  }
  if ( *(_DWORD *)(PsGetCurrentProcessWin32Process(v6, v5) + 828) )
  {
    v17 = gptiCurrent;
    v18 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 40LL);
    if ( !gpqForeground || !(unsigned int)ForegroundInputOwnerMatch(gptiCurrent, 1) )
    {
      v19 = *(_QWORD *)(v18 + 80);
      if ( !v19 || *(_QWORD *)(v19 + 16) != v17 )
      {
        v20 = 5LL;
LABEL_19:
        UserSetLastError(v20);
        goto LABEL_11;
      }
    }
  }
  if ( v7 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11, v10);
    v13 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 376LL);
    if ( *(_QWORD *)(v13 + 632) != *(_QWORD *)(CurrentProcessWin32Process + 632) )
    {
      if ( *(_QWORD *)(PsGetCurrentProcessWin32Process(v13, CurrentProcessWin32Process) + 632) )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 376LL);
        if ( *(_QWORD *)(v22 + 632)
          || (*(_DWORD *)(*(_QWORD *)(PsGetCurrentProcessWin32Process(v22, v21) + 632) + 32LL) & 4) != 0 )
        {
          UserSetLastError(87LL);
          v20 = 0LL;
          goto LABEL_19;
        }
      }
    }
  }
  v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v23;
  v23[1] = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v4 = OpenClipboard(v7, &v24);
  ThreadUnlock1(v15, v14);
  v6 = W32UserProbeAddress;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (_DWORD *)W32UserProbeAddress;
  *a2 = v24;
LABEL_11:
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v4;
}
