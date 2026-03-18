/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00D9284
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C0074FA0 (W32kEtwEnableCallback.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00D962C (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00D965C (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     Template_qqqqq @ 0x1C00DCE08 (Template_qqqqq.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void __fastcall EtwCaptureStateCallback(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  int v9; // r8d
  int v10; // ecx
  LARGE_INTEGER v11; // rbx
  unsigned int v12; // ecx
  __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  __int64 i; // rbx
  _QWORD *j; // rsi
  unsigned int ThreadId; // r12d
  char ThreadInfoFlags; // r13
  int v19; // r8d
  char v20; // r11
  unsigned int v21; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+10h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v6, v5, v7);
  if ( v8 )
  {
    v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v10) = byte_1C0186D98 - 1;
      Template_xqx(
        v10,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        v9,
        v11.LowPart,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v11.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v9,
        0,
        1000 * v11.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
    && (qword_1C0186D80 & 0x8000000000040000uLL) != 0
    && (qword_1C0186D88 & 0x8000000000040000uLL) == qword_1C0186D88 )
  {
    if ( W32kEtwWaitCursorActiveType )
    {
      v12 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - W32kEtwWaitCursorStartMs;
      if ( v12 >= 0xC8 && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
        Template_qqqqq(
          v12,
          (unsigned int)&WaitCursorEvent,
          v9,
          W32kEtwWaitCursorThreadId,
          W32kEtwWaitCursorProcessId,
          gSessionId,
          W32kEtwWaitCursorActiveType,
          ((unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24) - W32kEtwWaitCursorStartMs);
    }
  }
  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
    && (qword_1C0186D80 & 0x8000000000080000uLL) != 0
    && (qword_1C0186D88 & 0x8000000000080000uLL) == qword_1C0186D88 )
  {
    v13 = grpWinStaList;
    v14 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v13 )
    {
      for ( i = *(_QWORD *)(v13 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*(j - 82));
          ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 82));
          EtwpGetLastInputProcessTime((struct tagQ *const)*(j - 34), v14, &v22, &v21);
          if ( (Microsoft_Windows_Win32kEnableBits & 0x80u) != 0LL )
            Template_qqqqq(
              Microsoft_Windows_Win32kEnableBits,
              (unsigned int)&ThreadInfoRundownEvent,
              v19,
              ThreadId,
              ThreadInfoFlags,
              v20,
              v22,
              v21);
        }
      }
      v13 = *(_QWORD *)(v13 + 8);
    }
  }
  UserSessionSwitchLeaveCrit();
}
