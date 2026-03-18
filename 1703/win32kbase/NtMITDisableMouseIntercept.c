/*
 * XREFs of NtMITDisableMouseIntercept @ 0x1C00DF3E0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C00844C0 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

_BOOL8 __fastcall NtMITDisableMouseIntercept(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  LARGE_INTEGER v9; // rcx
  LARGE_INTEGER v10; // rbx
  LARGE_INTEGER v11; // r8
  __int64 v12; // rdi
  bool v13; // bl
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  _BOOL8 v19; // rbx
  __int64 v21; // [rsp+20h] [rbp-18h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v6, v5, v7);
  if ( v8 )
  {
    v10 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v9.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v9.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v11.QuadPart,
        v10.QuadPart,
        0,
        gullUserCritAcquireToken);
    }
    if ( v10.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v21) = 1000 * v10.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v11.QuadPart,
        0LL,
        v21,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v12 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v12, 0LL);
  v13 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v12 + 40);
  ExReleasePushLockSharedEx(v12, 0LL);
  KeLeaveCriticalRegion();
  if ( !v13 )
  {
    v17 = 5LL;
LABEL_20:
    UserSetLastError(v17, v14, v15, v16);
    v19 = 0LL;
    goto LABEL_21;
  }
  v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018[0] + 8LL))(qword_1C0186018[0]);
  if ( v18 )
    LOBYTE(v18) = CMouseProcessor::MouseInterceptState::Disable(v18 + 2752);
  v19 = (_BYTE)v18 != 0;
  if ( !(_BYTE)v18 )
  {
    v17 = 5023LL;
    goto LABEL_20;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit();
  return v19;
}
