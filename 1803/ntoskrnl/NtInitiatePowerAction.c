/*
 * XREFs of NtInitiatePowerAction @ 0x1405EB5AC
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140486D90 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     IopWarmEjectDevice @ 0x14073C044 (IopWarmEjectDevice.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PopExecutePowerAction @ 0x1405EB7B4 (PopExecutePowerAction.c)
 */

NTSTATUS __stdcall NtInitiatePowerAction(
        POWER_ACTION SystemAction,
        SYSTEM_POWER_STATE MinSystemState,
        ULONG Flags,
        BOOLEAN Asynchronous)
{
  struct _KTHREAD *CurrentThread; // rax
  int Lock; // edi
  struct _KEVENT *v6; // rbx
  char PreviousMode; // r12
  struct _KEVENT *PoolWithTag; // rax
  char *p_WaitListHead; // rsi
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *Blink; // rax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v18[4]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  struct _KEVENT *v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+58h] [rbp-8h]

  CurrentThread = KeGetCurrentThread();
  Lock = 0;
  v6 = 0LL;
  Timeout.QuadPart = -1500000000LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( SystemAction == PowerActionWarmEject )
      return -1073741811;
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, CurrentThread->PreviousMode) )
      return -1073741727;
  }
  if ( MinSystemState > PowerSystemMaximum
    || SystemAction > PowerActionWarmEject
    || (Flags & 0x10000000) != 0
    || SystemAction == PowerActionSleep && MinSystemState >= PowerSystemHibernate
    || (Flags & 0xCFFFFC0) != 0 )
  {
    return -1073741811;
  }
  if ( (unsigned int)(SystemAction - 4) > 2 && PsIsCurrentThreadInServerSilo() )
    return -1073741637;
  v19 = 0x8000000000LL;
  v18[0] = SystemAction;
  v18[1] = Flags;
  v18[2] = 0;
  v20 = 0LL;
  v21 = 0LL;
  if ( PreviousMode || SystemAction != PowerActionShutdownOff || (LODWORD(v19) = 15, (Flags & 0x3000000) == 0) )
    LODWORD(v19) = 4;
  if ( !Asynchronous )
  {
    PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x57634150u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, 0x38uLL);
    v6[1].Header.LockNV = 0;
    *(_QWORD *)&v6[2].Header.Lock = &v19;
    KeInitializeEvent(v6, NotificationEvent, 0);
    HIDWORD(v19) |= 0x20u;
    v20 = v6;
  }
  PopAcquirePolicyLock();
  PopExecutePowerAction((unsigned int)&v19, 0, (unsigned int)v18, MinSystemState, 1);
  PopReleasePolicyLock();
  if ( v6 )
  {
    p_WaitListHead = (char *)&v6[1].Header.WaitListHead;
    if ( !v6[1].Header.WaitListHead.Flink )
      goto LABEL_22;
    Lock = KeWaitForSingleObject(v6, Suspended, 0, 1u, &Timeout);
    if ( Lock == 258 && (byte_1403AA061 & 3) != 0 )
      Lock = KeWaitForSingleObject(v6, Suspended, 0, 1u, 0LL);
    PopAcquirePolicyLock();
    v14 = *(struct _LIST_ENTRY **)p_WaitListHead;
    if ( *(char **)(*(_QWORD *)p_WaitListHead + 8LL) != p_WaitListHead
      || (Blink = v6[1].Header.WaitListHead.Blink, (char *)Blink->Flink != p_WaitListHead) )
    {
      __fastfail(3u);
    }
    Blink->Flink = v14;
    v14->Blink = Blink;
    PopReleasePolicyLock();
    if ( Lock >= 0 )
    {
LABEL_22:
      Lock = v6[1].Header.Lock;
      if ( Lock >= 0 )
        Lock = 0;
    }
    ExFreePoolWithTag(v6, 0);
  }
  return Lock;
}
