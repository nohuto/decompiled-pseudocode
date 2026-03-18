/*
 * XREFs of NtUserClipCursor @ 0x1C0097F10
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
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C012A2A0 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserClipCursor(struct tagRECT *a1, __int64 a2, __int64 a3)
{
  struct tagRECT *v3; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  int v6; // ebx
  struct tagTHREADINFO *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  int v12; // ecx
  LARGE_INTEGER v13; // rdi
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char v19; // al
  struct tagRECT v21; // [rsp+50h] [rbp-48h] BYREF
  struct tagRECT v22; // [rsp+60h] [rbp-38h] BYREF

  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  v6 = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v11 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( v11 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v19 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v19 = 0;
      }
      if ( v19 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v12) = byte_1C0186D98 - 1;
        Template_xqx(
          v12,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v14,
          v13.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
    }
    if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v14,
        0,
        1000 * v13.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    v3 = a1;
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  v22 = (struct tagRECT)0LL;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(0, a1 == 0LL) )
  {
    if ( v3 )
    {
      if ( v3 >= (struct tagRECT *)W32UserProbeAddress )
        v3 = (struct tagRECT *)W32UserProbeAddress;
      v22 = *v3;
      LogicalToPhysicalDPIRect(&v22, (__int64)&v22, 0x100u, 0LL);
      v21 = v22;
      CCursorClip::SetClip((CCursorClip *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, &v21);
    }
    else
    {
      CCursorClip::ClearClip((struct tagRECT *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
    }
    v6 = 1;
  }
  else
  {
    UserSetLastError(5LL, v15, v16, v17);
  }
  UserSessionSwitchLeaveCrit();
  return v6;
}
