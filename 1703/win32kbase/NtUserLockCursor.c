/*
 * XREFs of NtUserLockCursor @ 0x1C00713C0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0049940 (LogicalToPhysicalDPIRect.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C0071510 (ApiSetCheckCursorClipAccess.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0072340 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C012A1A0 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserLockCursor(struct tagRECT *a1, __int64 a2, __int64 a3)
{
  struct tagRECT *v3; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  int v5; // ebx
  struct tagTHREADINFO *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  int v11; // ecx
  LARGE_INTEGER v12; // rsi
  int v13; // r8d
  char v15; // al
  CCursorClip *v16; // rcx
  struct tagRECT v17; // [rsp+50h] [rbp-48h] BYREF
  struct tagRECT v18; // [rsp+60h] [rbp-38h] BYREF

  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  v5 = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v10 = PsGetCurrentThreadWin32Thread(v8, v7, v9);
  if ( v10 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v15 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v15 = 0;
      }
      if ( v15 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v11) = byte_1C0186D98 - 1;
        Template_xqx(
          v11,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v13,
          v12.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
    }
    if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v13,
        0,
        1000 * v12.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  v18 = (struct tagRECT)0LL;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(2LL, 0LL) )
  {
    if ( v3 )
    {
      if ( v3 >= (struct tagRECT *)W32UserProbeAddress )
        v3 = (struct tagRECT *)W32UserProbeAddress;
      v18 = *v3;
      LogicalToPhysicalDPIRect(&v18, (__int64)&v18, 0x100u, 0LL);
      v17 = v18;
      CCursorClip::LockCursor(v16, &v17);
    }
    else
    {
      CCursorClip::ClearClip((CCursorClip *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
    }
    v5 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
