/*
 * XREFs of NtUserInjectPointerInput @ 0x1C00E2C00
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0109264 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C010A90C (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     InputExtensibilityCalloutGuard @ 0x1C012A500 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInjectPointerInput(__int64 a1, char *a2, __int64 a3)
{
  __int64 v3; // r14
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  LARGE_INTEGER v12; // rcx
  LARGE_INTEGER v13; // rbx
  LARGE_INTEGER v14; // r8
  bool v15; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rbx
  void *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  int v24; // ebx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // [rsp+20h] [rbp-48h]

  v3 = (unsigned int)a3;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v11 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( v11 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v15 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v15 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v12.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v12.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v14.QuadPart,
          v13.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
    }
    if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v28) = 1000 * v13.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v14.QuadPart,
        0LL,
        v28,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  InputExtensibilityCalloutGuard();
  if ( (unsigned int)(v3 - 1) > 0xFF )
  {
    v19 = 87LL;
    goto LABEL_33;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v19 = 5LL;
LABEL_33:
    v24 = 0;
    UserSetLastError(v19, v16, v17, v18);
    goto LABEL_34;
  }
  v20 = 152 * v3;
  if ( 152 * v3 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( &a2[v20] > (char *)W32UserProbeAddress || &a2[v20] < a2 )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v21 = (void *)Win32AllocPoolWithQuota(152 * v3, 0x74697355u);
  v22 = (__int64)v21;
  if ( !v21 )
    ExRaiseStatus(-1073741801);
  memmove(v21, a2, 152 * v3);
  v24 = RIMIDEInjectHIDReportFromPointerInfo(a1, v22, (unsigned int)v3);
  if ( !v24 )
    UserSetLastError(87LL, v23, v25, v26);
  if ( v22 )
    Win32FreePool(v22);
LABEL_34:
  UserSessionSwitchLeaveCrit();
  return v24;
}
