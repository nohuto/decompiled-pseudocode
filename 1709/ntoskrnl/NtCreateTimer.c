/*
 * XREFs of NtCreateTimer @ 0x1404EBB0C
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     PsInsertVirtualizedTimer @ 0x1400B2880 (PsInsertVirtualizedTimer.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  char PreviousMode; // r14
  __int64 v8; // rcx
  NTSTATUS inserted; // ecx
  struct _KTIMER *v10; // rbx
  __int64 v11; // r9
  _ULARGE_INTEGER *p_DueTime; // r12
  _KPROCESS *Process; // rsi
  unsigned __int64 v15; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // [rsp+20h] [rbp-68h]
  PVOID DeferredContext; // [rsp+50h] [rbp-38h] BYREF
  __int64 v19; // [rsp+58h] [rbp-30h] BYREF

  if ( (unsigned int)TimerType <= SynchronizationTimer )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      v8 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)TimerHandle < 0x7FFFFFFF0000LL )
        v8 = (__int64)TimerHandle;
      *(_QWORD *)v8 = *(_QWORD *)v8;
    }
    inserted = ObCreateObjectEx(
                 PreviousMode,
                 ExTimerObjectType,
                 (__int64)ObjectAttributes,
                 PreviousMode,
                 v17,
                 328,
                 0,
                 0,
                 &DeferredContext,
                 0LL);
    if ( inserted < 0 )
      return inserted;
    v10 = (struct _KTIMER *)DeferredContext;
    KeInitializeDpc((PRKDPC)((char *)DeferredContext + 160), (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, DeferredContext);
    KeInitializeTimerEx(v10, TimerType);
    *(_QWORD *)&v10[1].Header.Lock = 0LL;
    LOBYTE(v10[4].Dpc) = 0;
    *(_QWORD *)&v10[4].Header.Lock = 0LL;
    v10[4].Header.WaitListHead.Flink = 0LL;
    p_DueTime = &v10[4].DueTime;
    v10[4].DueTime.QuadPart = 0LL;
    if ( PreviousMode )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
      {
        v15 = Process[1].Affinity.Bitmap[16];
        LOBYTE(v11) = 0;
        if ( v15 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v15 + 56), 1u);
          LOBYTE(v11) = (*(_DWORD *)(v15 + 1304) & 0x40000) != 0 && *(_DWORD *)(v15 + 856);
        }
        v10 = (struct _KTIMER *)DeferredContext;
        PsInsertVirtualizedTimer((__int64)Process, (_QWORD *)DeferredContext + 36, 0, v11, p_DueTime);
        if ( !v15 )
          goto LABEL_10;
        ExReleaseResourceLite((PERESOURCE)(v15 + 56));
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
      v10 = (struct _KTIMER *)DeferredContext;
    }
LABEL_10:
    inserted = ObInsertObjectEx(v10, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v19);
    if ( inserted >= 0 )
      *TimerHandle = (HANDLE)v19;
    return inserted;
  }
  return -1073741582;
}
