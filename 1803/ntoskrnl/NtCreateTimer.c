/*
 * XREFs of NtCreateTimer @ 0x1404B2E9C
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     PsInsertVirtualizedTimer @ 0x1400C3F10 (PsInsertVirtualizedTimer.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  TIMER_TYPE v4; // edi
  HANDLE *v5; // r14
  char PreviousMode; // si
  NTSTATUS Object; // ecx
  void *v8; // rbx
  __int64 v9; // r9
  _KPROCESS *Process; // r15
  unsigned __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r12
  char *DeferredContext; // [rsp+50h] [rbp-48h]
  __int64 v16; // [rsp+58h] [rbp-40h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h]

  v4 = TimerType;
  v5 = TimerHandle;
  if ( (unsigned int)TimerType > SynchronizationTimer )
    return -1073741582;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    TimerHandle = (PHANDLE)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v5 < 0x7FFFFFFF0000LL )
      TimerHandle = v5;
    *TimerHandle = *TimerHandle;
  }
  LOBYTE(TimerType) = PreviousMode;
  LOBYTE(TimerHandle) = PreviousMode;
  Object = ObCreateObjectEx((_DWORD)TimerHandle, (_DWORD)ExTimerObjectType, (_DWORD)ObjectAttributes, TimerType);
  if ( Object >= 0 )
  {
    v8 = DeferredContext;
    KeInitializeDpc((PRKDPC)(DeferredContext + 160), (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, DeferredContext);
    KeInitializeTimerEx((PKTIMER)DeferredContext, v4);
    *((_QWORD *)DeferredContext + 8) = 0LL;
    DeferredContext[304] = 0;
    *((_QWORD *)DeferredContext + 32) = 0LL;
    *((_QWORD *)DeferredContext + 33) = 0LL;
    v17 = (__int64)(DeferredContext + 280);
    *((_QWORD *)DeferredContext + 35) = 0LL;
    if ( PreviousMode )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
      {
        v12 = Process[1].Affinity.Bitmap[16];
        LOBYTE(v9) = 0;
        if ( v12 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          v14 = v12 + 56;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v12 + 56), 1u);
          LOBYTE(v9) = (*(_DWORD *)(v12 + 1304) & 0x40000) != 0 && *(_DWORD *)(v12 + 856);
        }
        else
        {
          v14 = 56LL;
        }
        v8 = DeferredContext;
        PsInsertVirtualizedTimer(
          (KSPIN_LOCK *)Process,
          (_QWORD *)DeferredContext + 36,
          (KSPIN_LOCK *)DeferredContext + 8,
          v9,
          (KSPIN_LOCK **)v17);
        if ( v12 )
        {
          ExReleaseResourceLite((PERESOURCE)v14);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          v8 = DeferredContext;
        }
      }
      else
      {
        v8 = DeferredContext;
      }
    }
    Object = ObInsertObjectEx(v8, 0, 0LL, (__int64)&v16);
    if ( Object >= 0 )
      *v5 = (HANDLE)v16;
  }
  return Object;
}
