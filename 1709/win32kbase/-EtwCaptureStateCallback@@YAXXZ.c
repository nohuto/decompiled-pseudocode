/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00DF5E8
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C0007C20 (W32kEtwEnableCallback.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00DF910 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00DF944 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     McTemplateK0qqqqq @ 0x1C00E3840 (McTemplateK0qqqqq.c)
 */

void __fastcall EtwCaptureStateCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rdi
  __int64 *DomainLockRef; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // rbp
  __int64 i; // rdi
  _QWORD *j; // r14
  unsigned int ThreadId; // r12d
  char ThreadInfoFlags; // r13
  char v22; // r11
  unsigned int v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+10h] BYREF
  tagObjLock *v25; // [rsp+90h] [rbp+18h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v7, v6, v8, v9);
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v25);
  v10 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v10[2];
      v10[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v10);
      RIMLockExclusive((__int64)DomainLockRef);
      v10 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v25);
  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C0188DA8 - 1) > 2u
    && (qword_1C0188D90 & 0x8000000000040000uLL) != 0
    && (qword_1C0188D98 & 0x8000000000040000uLL) == qword_1C0188D98 )
  {
    if ( W32kEtwWaitCursorActiveType )
    {
      v12 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - W32kEtwWaitCursorStartMs;
      if ( (unsigned int)v12 >= 0xC8 && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
        McTemplateK0qqqqq(
          v12,
          (unsigned int)&WaitCursorEvent,
          v13,
          W32kEtwWaitCursorThreadId,
          W32kEtwWaitCursorProcessId,
          gSessionId,
          W32kEtwWaitCursorActiveType,
          ((unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24) - W32kEtwWaitCursorStartMs);
    }
  }
  v15 = 0x8000000000080000uLL;
  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1C0188DA8 - 1) > 2u
    && (qword_1C0188D90 & 0x8000000000080000uLL) != 0
    && (qword_1C0188D98 & 0x8000000000080000uLL) == qword_1C0188D98 )
  {
    v16 = grpWinStaList;
    v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v16 )
    {
      for ( i = *(_QWORD *)(v16 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*(j - 89));
          ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 89));
          EtwpGetLastInputProcessTime((struct tagQ *const)*(j - 38), v17, &v24, &v23);
          v12 = (unsigned int)Microsoft_Windows_Win32kEnableBits;
          if ( (char)Microsoft_Windows_Win32kEnableBits < 0 )
            McTemplateK0qqqqq(
              (_DWORD)Microsoft_Windows_Win32kEnableBits,
              (unsigned int)&ThreadInfoRundownEvent,
              v13,
              ThreadId,
              ThreadInfoFlags,
              v22,
              v24,
              v23);
        }
      }
      v16 = *(_QWORD *)(v16 + 8);
    }
  }
  UserSessionSwitchLeaveCrit(v12, v15, v13, v14);
}
