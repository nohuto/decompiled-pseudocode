/*
 * XREFs of NtUserInitializePointerDeviceInjectionEx @ 0x1C00E1FD0
 * Callers:
 *     NtUserInitializePointerDeviceInjection @ 0x1C00E1FA0 (NtUserInitializePointerDeviceInjection.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C002810C (HMValidateSharedHandle.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0109264 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C010C594 (RIMIDE_InitializePointerDeviceInjection.c)
 *     InputExtensibilityCalloutGuard @ 0x1C012A500 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInitializePointerDeviceInjectionEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        CTouchProcessor *a6)
{
  unsigned int v8; // r15d
  unsigned int v9; // r13d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  LARGE_INTEGER v16; // rcx
  LARGE_INTEGER v17; // rbx
  LARGE_INTEGER v18; // r8
  bool v19; // al
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  CTouchProcessor *v25; // rdx
  __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+40h] [rbp-28h] BYREF

  v8 = a2;
  v9 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v15 = PsGetCurrentThreadWin32Thread(v13, v12, v14);
  if ( v15 )
  {
    v17 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v19 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v19 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v16.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v16.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v18.QuadPart,
          v17.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
    }
    if ( v17.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v27) = 1000 * v17.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v18.QuadPart,
        0LL,
        v27,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v15 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  InputExtensibilityCalloutGuard();
  v20 = 0LL;
  v28 = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v24 = 5LL;
LABEL_30:
    UserSetLastError(v24, v21, v22, v23);
    goto LABEL_31;
  }
  if ( v8 - 1 > 0xFF || a4 - 1 > 2 )
  {
    v24 = 87LL;
    goto LABEL_30;
  }
  if ( !a3 || (v20 = HMValidateSharedHandle(a3)) != 0 )
  {
    LODWORD(v20) = RIMIDE_InitializePointerDeviceInjection(v9, v8, v20, a4, a5, &v28);
    if ( (_DWORD)v20 )
    {
      v25 = a6;
      if ( a6 >= W32UserProbeAddress )
        v25 = W32UserProbeAddress;
      *(_QWORD *)v25 = *(_QWORD *)v25;
      *(_QWORD *)a6 = v28;
    }
  }
LABEL_31:
  UserSessionSwitchLeaveCrit();
  return (int)v20;
}
