/*
 * XREFs of NtUserGetClipCursor @ 0x1C00E15C0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0049B40 (PhysicalToLogicalDPIRect.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C0071510 (ApiSetCheckCursorClipAccess.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C0098120 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserGetClipCursor(CTouchProcessor *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  LARGE_INTEGER v11; // rcx
  LARGE_INTEGER v12; // rdi
  LARGE_INTEGER v13; // r8
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  CTouchProcessor *v18; // rdx
  __int64 v20; // [rsp+20h] [rbp-68h]
  tagRECT v21; // [rsp+50h] [rbp-38h] BYREF

  v4 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
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
        || (v14 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v14 = 0;
      }
      if ( v14 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v11.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v11.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v13.QuadPart,
          v12.QuadPart,
          0,
          gullUserCritAcquireToken,
          0);
      }
    }
    if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v20) = 1000 * v12.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v13.QuadPart,
        0LL,
        v20,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1u, 0) )
  {
    v18 = a1;
    if ( a1 >= W32UserProbeAddress )
      v18 = W32UserProbeAddress;
    *(_OWORD *)v18 = *(_OWORD *)v18;
    CCursorClip::GetClip((struct tagRECT *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, &v21);
    PhysicalToLogicalDPIRect(a1, (__int64)&v21, 0x100u, 0LL);
    v4 = 1;
  }
  else
  {
    UserSetLastError(5LL, v15, v16, v17);
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
