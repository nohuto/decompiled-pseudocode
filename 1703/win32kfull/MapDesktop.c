/*
 * XREFs of MapDesktop @ 0x1C001B370
 * Callers:
 *     xxxResolveDesktop @ 0x1C0010FB0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C0011B6C (xxxCreateDesktopEx.c)
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C001A398 (xxxSetThreadDesktop.c)
 *     NtUserBuildHwndList @ 0x1C0068D00 (NtUserBuildHwndList.c)
 *     UserCommitDesktopMemory @ 0x1C0107E90 (UserCommitDesktopMemory.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001B528 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall MapDesktop(__int64 a1)
{
  __int64 v1; // rbp
  NTSTATUS v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ProcessWin32Process; // r14
  __int64 v9; // rcx
  __int64 v10; // r15
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  ULONG v14; // eax
  _BYTE v16[72]; // [rsp+50h] [rbp-48h] BYREF
  int v17; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
  if ( *(_DWORD *)a1 != 3 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(a1 + 8));
    if ( !ProcessWin32Process )
    {
      v3 = -1073741811;
LABEL_19:
      v14 = RtlNtStatusToDosError(v3);
      UserSetLastError(v14);
      goto LABEL_20;
    }
    v9 = *(_QWORD *)(a1 + 8);
    if ( v9 != gpepCSRSS
      && !(unsigned int)IsProcessDwm(v9)
      && !(unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 8), v1, ExDesktopObjectType, 0LL, v16)
      || (v10 = *(_QWORD *)(v1 + 120), (unsigned int)PsGetProcessSessionId(*(_QWORD *)(a1 + 8)) != *(_DWORD *)v1) )
    {
      v3 = -1073741790;
      goto LABEL_19;
    }
    v11 = *(_QWORD **)(ProcessWin32Process + 664);
    if ( !v11 )
      goto LABEL_13;
    do
    {
      if ( v11[1] == v1 )
        break;
      v11 = (_QWORD *)*v11;
    }
    while ( v11 );
    if ( !v11 )
    {
LABEL_13:
      v12 = (_QWORD *)Win32AllocPoolWithQuota(24LL, 1768977237LL);
      if ( v12 )
      {
        v13 = *(_QWORD *)(a1 + 8);
        v19 = 0LL;
        v20 = 0LL;
        v18 = 0LL;
        v3 = MmMapViewOfSection(v10, v13, &v18, 0LL, 0LL, &v20, &v19, 2, 0x400000, 2);
        if ( v3 >= 0 )
        {
          v12[1] = v1;
          v12[2] = v18;
          *v12 = *(_QWORD *)(ProcessWin32Process + 664);
          *(_QWORD *)(ProcessWin32Process + 664) = v12;
        }
        else
        {
          Win32FreePool(v12);
        }
        if ( v3 >= 0 )
          goto LABEL_20;
      }
      else
      {
        v3 = -1073741801;
      }
      goto LABEL_19;
    }
  }
LABEL_20:
  if ( !v17 )
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return (unsigned int)v3;
}
