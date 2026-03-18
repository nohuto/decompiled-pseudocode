/*
 * XREFs of NtUserInjectMouseInput @ 0x1C00E2940
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
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C010A148 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C010AEE4 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     InputExtensibilityCalloutGuard @ 0x1C012A500 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInjectMouseInput(char *Src, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  LARGE_INTEGER v11; // rcx
  LARGE_INTEGER v12; // rbx
  LARGE_INTEGER v13; // r8
  bool v14; // al
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rbx
  void *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ebx
  __int64 v31; // [rsp+20h] [rbp-48h]

  v3 = (unsigned int)a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Src, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v10 = PsGetCurrentThreadWin32Thread(v8, v7, v9);
  if ( v10 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v14 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v14 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v11.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v11.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v13.QuadPart,
          v12.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
    }
    if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v31) = 1000 * v12.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v13.QuadPart,
        0LL,
        v31,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  InputExtensibilityCalloutGuard();
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
  if ( (unsigned int)(v3 - 1) > 9 )
  {
    v20 = 87LL;
    goto LABEL_35;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v20 = 5LL;
LABEL_35:
    v29 = 0;
    UserSetLastError(v20, v16, v18, v19);
    goto LABEL_36;
  }
  v21 = 32 * v3;
  if ( 32 * v3 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( &Src[v21] > (char *)W32UserProbeAddress || &Src[v21] < Src )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v22 = (void *)Win32AllocPoolWithQuota(32 * v3, 0x6D697355u);
  v23 = (__int64)v22;
  if ( !v22 )
    ExRaiseStatus(-1073741801);
  memmove(v22, Src, 32 * v3);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 848) == -1LL
    && (v25 = PsGetCurrentProcessWin32Process(v24), (int)RIMIDECreatePseudoMouseOrKeyboardDevice(0LL, v25 + 848) < 0) )
  {
    v29 = 0;
    UserSetLastError(1359LL, v26, v27, v28);
  }
  else
  {
    v29 = RIMIDEInjectMouseFromMouseInputStruct(*(_QWORD *)(CurrentProcessWin32Process + 848), v23, (unsigned int)v3);
  }
  if ( v23 )
    Win32FreePool(v23);
LABEL_36:
  UserSessionSwitchLeaveCrit();
  return v29;
}
