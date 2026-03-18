/*
 * XREFs of UserProcessMITInput @ 0x1C003B0F0
 * Callers:
 *     NtMITWaitForMultipleObjectsEx @ 0x1C0016810 (NtMITWaitForMultipleObjectsEx.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     ?WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C003B460 (-WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ApiSetEditionHandleMitSignal @ 0x1C0085954 (ApiSetEditionHandleMitSignal.c)
 */

__int64 __fastcall UserProcessMITInput(int a1, int a2, PVOID *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  union _LARGE_INTEGER *v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  NTSTATUS v13; // edi
  char v14; // si
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v16; // rbx
  __int64 *v17; // r14
  ULONG v19; // eax
  tagObjLock *DomainLockRef; // rbx
  _FILE_IO_COMPLETION_INFORMATION v21; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER v22; // [rsp+A0h] [rbp+18h] BYREF
  tagObjLock *v23; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a1;
  v6 = (__int64)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0xFu,
      (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
  if ( (_DWORD)v4 == -1 )
  {
    v7 = 0LL;
  }
  else
  {
    v6 = -10000 * v4;
    v7 = &v22;
    v22.QuadPart = -10000 * v4;
  }
  *a3 = 0LL;
  do
  {
    UserSessionSwitchLeaveCrit(v6);
    v8 = IOCPDispatcher::WaitAndDispatch((IOCPDispatcher *)WPP_MAIN_CB.Queue.ListEntry.Blink, v7, a2, &v21);
    v13 = v8;
    if ( v8 < 0 || v8 == 258 )
    {
LABEL_12:
      v14 = 0;
      goto LABEL_13;
    }
    if ( (!a2 || v8 != 257) && v21.ApcContext != (PVOID)1 )
    {
      if ( v21.ApcContext != (PVOID)2 )
        goto LABEL_12;
      ApiSetEditionHandleMitSignal(&v21);
    }
    v14 = 1;
LABEL_13:
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10, v9, v11, v12);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v16 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v16;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v23);
    v17 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
      do
      {
        gpducstulHead = v17[2];
        v17[2] = 0LL;
        tagObjLock::UnLock(DomainLockRef);
        HMUnlockObject(*v17);
        RIMLockExclusive((__int64)DomainLockRef);
        v17 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v23);
  }
  while ( v14 );
  if ( v13 < 0 )
  {
    v19 = RtlNtStatusToDosError(v13);
    UserSetLastError(v19);
    v13 = -1;
  }
  else if ( v13 != 258 && v21.ApcContext == (PVOID)3 )
  {
    v13 = 0;
    *a3 = v21.KeyContext;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x10u,
      (__int64)&WPP_e624157c96f9336a4a666bf5b4df8523_Traceguids);
  return (unsigned int)v13;
}
