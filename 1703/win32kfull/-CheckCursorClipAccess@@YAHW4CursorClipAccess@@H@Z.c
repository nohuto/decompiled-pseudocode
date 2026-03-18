/*
 * XREFs of ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00B3D90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     InForegroundQueue @ 0x1C00B3ED0 (InForegroundQueue.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00B8A98 (IsForegroundShellFrameQueueAccessible.c)
 *     CheckWinstaAttributeAccess @ 0x1C00BD550 (CheckWinstaAttributeAccess.c)
 *     CheckGrantedAccess @ 0x1C00EBE68 (CheckGrantedAccess.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall CheckCursorClipAccess(__int64 a1, int a2)
{
  int v3; // ebx
  __int64 CurrentProcess; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  struct tagRECT v27; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5);
  v10 = CurrentProcessWin32Process;
  if ( v3 )
  {
    v11 = v3 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        return 1LL;
      if ( (unsigned int)IsDesktopApp(CurrentProcessWin32Process) )
        return 0LL;
      if ( !*(_DWORD *)(PsGetCurrentProcessWin32Process(v13, v12) + 828) )
        return 0LL;
      if ( !(unsigned int)InForegroundQueue(gptiCurrent, 0) )
        return 0LL;
      v15 = *(_QWORD *)(v10 + 776);
      if ( !v15 )
        return 0LL;
      v16 = (*(_DWORD *)(v15 + 100) & 1) == 0;
    }
    else
    {
      v19 = PsGetCurrentProcessWin32Process(v9, v8);
      v16 = (unsigned int)CheckGrantedAccess(*(unsigned int *)(v19 + 648), 2LL) == 0;
    }
    if ( v16 )
      return 0LL;
  }
  else
  {
    if ( CurrentProcess != gpepCSRSS && !(unsigned int)CheckWinstaAttributeAccess(0x10u) )
    {
      v20 = PsGetCurrentProcessWin32Process(v18, v17);
      if ( !(unsigned int)IsImmersiveAppRestricted(v20) )
        return 0LL;
      if ( gpqForeground )
      {
        v21 = *(_QWORD *)(gptiCurrent + 376LL);
        v22 = *(_QWORD *)(gpqForeground + 380LL);
        v23 = *(_QWORD *)(v21 + 824);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v23 <= (unsigned int)v22 )
          {
            if ( (_DWORD)v23 != (_DWORD)v22
              || (v24 = HIDWORD(v23), v25 = HIDWORD(v22), (_DWORD)v24 != (_DWORD)v25)
              && (_DWORD)v24 != -1
              && (_DWORD)v25 != -1 )
            {
              if ( *(int *)(v21 + 12) >= 0 && !(unsigned int)IsForegroundShellFrameQueueAccessible(gptiCurrent) )
                return 0LL;
            }
          }
        }
      }
    }
    CCursorClip::GetClip(gpCursorClip, &v27);
    if ( *(_QWORD *)(gptiCurrent + 384LL) != gpqForeground && !a2 && IsRectEmptyInl(&v27) )
      return 0LL;
  }
  return 1LL;
}
