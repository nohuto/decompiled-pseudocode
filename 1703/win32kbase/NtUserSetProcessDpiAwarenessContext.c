/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x1C0077450
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00775B4 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C00776F8 (IsValidKernelDpiAwarenessContext.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  unsigned int v4; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // ecx
  LARGE_INTEGER v12; // rbx
  int v13; // r8d
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 i; // rsi

  v3 = a2;
  v4 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v10 = PsGetCurrentThreadWin32Thread(v8, v7, v9);
  if ( v10 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
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
  v14 = *((_QWORD *)v6 + 47);
  if ( !(unsigned int)IsValidKernelDpiAwarenessContext(v4) )
  {
    UserSetLastError(87LL, v15, v16, v17);
LABEL_23:
    v19 = 0LL;
    goto LABEL_14;
  }
  v18 = *(_DWORD *)(v14 + 768);
  if ( (v18 & 0x200000) != 0 && (!v3 || *(_DWORD *)(v14 + 280) != 18 || v4 == 16) )
    goto LABEL_23;
  v19 = 1LL;
  *(_DWORD *)(v14 + 768) = v18 | 0x200000;
  if ( *(_DWORD *)(v14 + 280) != v4 )
  {
    *(_DWORD *)(v14 + 280) = v4;
    v20 = *(_QWORD *)(v14 + 632);
    if ( v20 )
    {
      for ( i = *(_QWORD *)(v20 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v14, *(struct tagWND **)(*(_QWORD *)(i + 8) + 16LL));
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v14, *(struct tagWND **)(i + 104));
      }
    }
  }
LABEL_14:
  UserSessionSwitchLeaveCrit();
  return v19;
}
