/*
 * XREFs of NtMITBindInputTypeToMonitors @ 0x1C00DEA80
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0048F80 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     UserProcessInputIsolationPolicy @ 0x1C0130CBC (UserProcessInputIsolationPolicy.c)
 */

__int64 __fastcall NtMITBindInputTypeToMonitors(__int64 a1, __int64 a2, char *a3)
{
  __int64 v4; // r15
  unsigned int v5; // r12d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  int v7; // ebx
  struct tagTHREADINFO *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  CInputThread *v12; // rcx
  __int64 v13; // rsi
  LARGE_INTEGER v14; // rdi
  LARGE_INTEGER v15; // r8
  bool v16; // al
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  void *v21; // rdi
  __int64 v22; // rsi
  void *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // [rsp+20h] [rbp-58h]

  v4 = (unsigned int)a2;
  v5 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 1;
  v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v13 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
  if ( v13 )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v12) = byte_1C0186D98 - 1;
      v16 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v16 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        Template_xqx(
          (__int64)v12,
          &AcquiredExclusiveUserCritEvent,
          v15.QuadPart,
          v14.QuadPart,
          0,
          gullUserCritAcquireToken,
          0);
    }
    if ( v14.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v28) = 1000 * v14.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v15.QuadPart,
        0LL,
        v28,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  if ( !CInputThread::IsInputThread(v12) )
  {
    v20 = 5023LL;
LABEL_38:
    v7 = 0;
    UserSetLastError(v20, v17, v18, v19);
    goto LABEL_39;
  }
  v21 = 0LL;
  if ( !v5 || (v5 & 0xFFFFFFC0) != 0 )
    goto LABEL_37;
  if ( (v5 & 9) == 0 )
  {
    v20 = 50LL;
    goto LABEL_38;
  }
  if ( !(_DWORD)v4 )
  {
    if ( !a3 )
      goto LABEL_36;
LABEL_37:
    v20 = 87LL;
    goto LABEL_38;
  }
  if ( !a3 )
    goto LABEL_37;
  v22 = 8 * v4;
  if ( 8 * v4 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( &a3[v22] > (char *)W32UserProbeAddress || &a3[v22] < a3 )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v23 = (void *)Win32AllocPoolWithQuota(8 * v4, 0x69696255u);
  v21 = v23;
  if ( v23 )
  {
    memmove(v23, a3, 8 * v4);
LABEL_36:
    UserProcessInputIsolationPolicy(v5, (unsigned int)v4, v21);
    goto LABEL_39;
  }
  v7 = 0;
  UserSetLastError(8LL, v24, v25, v26);
LABEL_39:
  UserSessionSwitchLeaveCrit();
  return v7;
}
