/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x1C0070B80
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0070CD0 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C0070E10 (IsValidKernelDpiAwarenessContext.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  unsigned int v5; // esi
  unsigned int v6; // ebp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rdi
  __int64 i; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 *DomainLockRef; // rbx
  tagObjLock *v26; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v10, v9, v11, v12);
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v26);
  v13 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v13[2];
      v13[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v13);
      RIMLockExclusive((__int64)DomainLockRef);
      v13 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v26);
  if ( (unsigned int)IsValidKernelDpiAwarenessContext(v5)
    && ((v5 & 0xF) != 1
     || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15, v14, v16),
         v14 = 511LL,
         ((v5 >> 8) & 0x1FF) == *(_WORD *)(CurrentProcessWin32Process + 284))) )
  {
    v18 = 0x200000LL;
    v19 = *((_QWORD *)gptiCurrent + 50);
    v20 = *(_DWORD *)(v19 + 776);
    if ( (v20 & 0x200000) == 0 || v4 && (v5 & 0xF) != 0 && *(_DWORD *)(v19 + 280) == 18 )
    {
      v6 = 1;
      *(_DWORD *)(v19 + 776) = v20 | 0x200000;
      if ( *(_DWORD *)(v19 + 280) != v5 )
      {
        v21 = *(_QWORD *)(v19 + 640);
        *(_DWORD *)(v19 + 280) = v5;
        if ( v21 )
        {
          for ( i = *(_QWORD *)(v21 + 16); i; i = *(_QWORD *)(i + 32) )
          {
            UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v19, *(struct tagWND **)(*(_QWORD *)(i + 8) + 16LL));
            UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v19, *(struct tagWND **)(i + 104));
          }
        }
      }
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v18, v14, v16, v17);
  return v6;
}
