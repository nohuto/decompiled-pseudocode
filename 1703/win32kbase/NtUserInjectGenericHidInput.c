/*
 * XREFs of NtUserInjectGenericHidInput @ 0x1C00E24C0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0109264 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C010C72C (RIMIDE_InjectGenericHidInput.c)
 *     InputExtensibilityCalloutGuard @ 0x1C012A500 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInjectGenericHidInput(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v6; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER v14; // rdi
  LARGE_INTEGER v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  PVOID CurrentProcess; // rax
  __int64 v21; // rcx
  __int64 v23; // [rsp+20h] [rbp-38h]
  int v24; // [rsp+20h] [rbp-38h]

  v3 = a3;
  v6 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v12 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
  if ( v12 )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      v24 = 0;
      LOBYTE(v13.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v13.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v15.QuadPart,
        v14.QuadPart,
        v24,
        gullUserCritAcquireToken);
    }
    if ( v14.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v23) = 1000 * v14.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v15.QuadPart,
        0LL,
        v23,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  InputExtensibilityCalloutGuard();
  if ( (unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL)
    || (CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16, v18, v19)) != 0LL && CurrentProcess == g_pepDwm )
  {
    if ( v3 && (unsigned int)RIMIDE_InjectGenericHidInput(a1, v16, a2, v3) )
    {
      v6 = 1LL;
      goto LABEL_23;
    }
    v21 = 87LL;
  }
  else
  {
    v21 = 5LL;
  }
  UserSetLastError(v21, v16, v18, v19);
LABEL_23:
  UserSessionSwitchLeaveCrit();
  return v6;
}
