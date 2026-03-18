/*
 * XREFs of NtUserSetManipulationInputTarget @ 0x1C00E4260
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 *     ApiSetEditionSetManipulationInputTarget @ 0x1C013C720 (ApiSetEditionSetManipulationInputTarget.c)
 */

__int64 __fastcall NtUserSetManipulationInputTarget(__int64 a1, void *a2, __int64 a3, unsigned int a4, char *Src)
{
  __int64 v5; // rsi
  unsigned int v7; // r13d
  void *v9; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  LONGLONG v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r14
  LARGE_INTEGER v20; // rbx
  bool v21; // al
  PVOID CurrentProcess; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  _BOOL8 v25; // rdx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  CTouchProcessor *v33; // rcx
  __int64 v34; // [rsp+20h] [rbp-78h]
  _BYTE v35[24]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v36; // [rsp+B0h] [rbp+18h]

  v36 = a3;
  v5 = a4;
  v7 = a1;
  if ( (gdwMitConfig & 4) == 0 )
    return (int)ApiSetEditionSetManipulationInputTarget(a1, a2, a4, Src);
  v9 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v19 = PsGetCurrentThreadWin32Thread(v13, v12, v14);
  if ( v19 )
  {
    v20 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v19 + 8));
    v15 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v16) = byte_1C0186D98 - 1;
      v21 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v21 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        Template_xqx(v16, &AcquiredExclusiveUserCritEvent, v17, v20.QuadPart, 0, gullUserCritAcquireToken, 0);
    }
    if ( v20.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 )
    {
      v15 = 1000 * v20.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        LODWORD(v34) = 1000 * v20.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          (__int64)gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v17,
          0LL,
          v34,
          gullUserCritAcquireToken);
      }
    }
    *(_QWORD *)(v19 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    v9 = 0LL;
  }
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v16, v15, v17, v18);
  v25 = 0LL;
  if ( CurrentProcess )
    v25 = CurrentProcess == g_pepDwm;
  if ( v25 )
  {
    if ( (_DWORD)v5 )
    {
      v28 = 4 * v5;
      if ( 4 * v5 )
      {
        if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( &Src[v28] > (char *)W32UserProbeAddress || &Src[v28] < Src )
          *(_BYTE *)W32UserProbeAddress = 0;
      }
      v29 = Win32AllocPoolWithQuota(4 * v5, 0x6E616D55u);
      v9 = (void *)v29;
      if ( v29 )
      {
        PushW32ThreadLock(v29, v35, Win32FreePool);
        memmove(v9, Src, 4 * v5);
        v27 = CTouchProcessor::SetManipulationInputTarget(v33, v7, v5, (unsigned int *)v9, v36, a2);
      }
      else
      {
        v27 = 0;
        UserSetLastError(8LL, v30, v31, v32);
      }
      goto LABEL_35;
    }
    v26 = 87LL;
  }
  else
  {
    v26 = 5LL;
  }
  v27 = 0;
  UserSetLastError(v26, v25, v23, v24);
LABEL_35:
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock(v35);
  UserSessionSwitchLeaveCrit();
  return v27;
}
