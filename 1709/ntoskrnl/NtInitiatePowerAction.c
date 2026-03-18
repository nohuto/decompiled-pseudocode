/*
 * XREFs of NtInitiatePowerAction @ 0x140700C9C
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140438E30 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     IopWarmEjectDevice @ 0x1406D3C00 (IopWarmEjectDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 */

NTSTATUS __stdcall NtInitiatePowerAction(
        POWER_ACTION SystemAction,
        SYSTEM_POWER_STATE MinSystemState,
        ULONG Flags,
        BOOLEAN Asynchronous)
{
  KPROCESSOR_MODE PreviousMode; // dl
  int Lock; // edi
  struct _KEVENT *v10; // rbx
  struct _KEVENT *PoolWithTag; // rax
  char *p_WaitListHead; // rsi
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *Blink; // rax
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  int v18; // [rsp+40h] [rbp-20h]
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  struct _KEVENT *v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+58h] [rbp-8h]

  Timeout.QuadPart = -1500000000LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Lock = 0;
  v10 = 0LL;
  if ( PreviousMode )
  {
    if ( SystemAction == PowerActionWarmEject )
      return -1073741811;
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return -1073741727;
  }
  if ( MinSystemState > PowerSystemMaximum
    || SystemAction > PowerActionWarmEject
    || (Flags & 0x10000000) != 0
    || SystemAction == PowerActionSleep && MinSystemState >= PowerSystemHibernate
    || (Flags & 0xFFFFFC0) != 0 )
  {
    return -1073741811;
  }
  if ( (unsigned int)(SystemAction - 4) > 2 && PsIsCurrentThreadInServerSilo() )
    return -1073741637;
  v17 = __PAIR64__(Flags, SystemAction);
  v19 = 0x8000000004LL;
  v18 = 0;
  v20 = 0LL;
  v21 = 0LL;
  if ( !Asynchronous )
  {
    PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x57634150u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, 0x38uLL);
    v10[1].Header.LockNV = 0;
    *(_QWORD *)&v10[2].Header.Lock = &v19;
    KeInitializeEvent(v10, NotificationEvent, 0);
    HIDWORD(v19) |= 0x20u;
    v20 = v10;
  }
  PopAcquirePolicyLock();
  PopExecutePowerAction((__int64)&v19, 0, (__int64 *)&v17, MinSystemState, 1);
  PopReleasePolicyLock();
  if ( v10 )
  {
    p_WaitListHead = (char *)&v10[1].Header.WaitListHead;
    if ( !v10[1].Header.WaitListHead.Flink )
      goto LABEL_26;
    Lock = KeWaitForSingleObject(v10, Suspended, 0, 1u, &Timeout);
    if ( Lock == 258 && (byte_1403657E1 & 3) != 0 )
      Lock = KeWaitForSingleObject(v10, Suspended, 0, 1u, 0LL);
    PopAcquirePolicyLock();
    v14 = *(struct _LIST_ENTRY **)p_WaitListHead;
    if ( *(char **)(*(_QWORD *)p_WaitListHead + 8LL) != p_WaitListHead
      || (Blink = v10[1].Header.WaitListHead.Blink, (char *)Blink->Flink != p_WaitListHead) )
    {
      __fastfail(3u);
    }
    Blink->Flink = v14;
    v14->Blink = Blink;
    PopReleasePolicyLock();
    if ( Lock >= 0 )
    {
LABEL_26:
      Lock = v10[1].Header.Lock;
      if ( Lock >= 0 )
        Lock = 0;
    }
    ExFreePoolWithTag(v10, 0);
  }
  return Lock;
}
