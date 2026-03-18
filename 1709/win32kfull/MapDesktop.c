/*
 * XREFs of MapDesktop @ 0x1C008E520
 * Callers:
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     NtUserBuildHwndList @ 0x1C006D090 (NtUserBuildHwndList.c)
 *     xxxSetThreadDesktop @ 0x1C008C4B4 (xxxSetThreadDesktop.c)
 *     xxxResolveDesktop @ 0x1C00D92F0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 *     UserCommitDesktopMemory @ 0x1C0111B20 (UserCommitDesktopMemory.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall MapDesktop(__int64 a1)
{
  __int64 v1; // rbp
  NTSTATUS v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 ProcessWin32Process; // r14
  __int64 v7; // rcx
  __int64 v8; // r15
  _QWORD *v9; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  ULONG v14; // eax
  __int64 v15; // rdx
  _BYTE v16[72]; // [rsp+50h] [rbp-48h] BYREF
  int v17; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
  if ( *(_DWORD *)a1 == 3 )
    goto LABEL_10;
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(a1 + 8));
  if ( !ProcessWin32Process )
  {
    v3 = -1073741811;
LABEL_21:
    v14 = RtlNtStatusToDosError(v3);
    UserSetLastError(v14, v15);
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 != gpepCSRSS
    && !(unsigned int)IsProcessDwm(v7)
    && !(unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 8), v1, ExDesktopObjectType, 0LL, v16)
    || (v8 = *(_QWORD *)(v1 + 120), (unsigned int)PsGetProcessSessionId(*(_QWORD *)(a1 + 8)) != *(_DWORD *)v1) )
  {
    v3 = -1073741790;
    goto LABEL_21;
  }
  v9 = *(_QWORD **)(ProcessWin32Process + 672);
  if ( !v9 )
    goto LABEL_13;
  do
  {
    if ( v9[1] == v1 )
      break;
    v9 = (_QWORD *)*v9;
  }
  while ( v9 );
  if ( !v9 )
  {
LABEL_13:
    v11 = (_QWORD *)Win32AllocPoolWithQuota(24LL, 1768977237LL);
    if ( v11 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v19 = 0LL;
      v20 = 0LL;
      v18 = 0LL;
      v3 = MmMapViewOfSection(v8, v12, &v18, 0LL, 0LL, &v20, &v19, 2, 0x400000, 2);
      if ( v3 < 0 )
      {
        Win32FreePool(v11, v4, v13);
      }
      else
      {
        v11[1] = v1;
        v11[2] = v18;
        *v11 = *(_QWORD *)(ProcessWin32Process + 672);
        *(_QWORD *)(ProcessWin32Process + 672) = v11;
      }
      if ( v3 >= 0 )
        goto LABEL_10;
    }
    else
    {
      v3 = -1073741801;
    }
    goto LABEL_21;
  }
LABEL_10:
  if ( !v17 )
    UserSessionSwitchLeaveCrit(v5, v4);
  return (unsigned int)v3;
}
