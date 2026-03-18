/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x1400AF378
 * Callers:
 *     KeTerminateThread @ 0x140040FBC (KeTerminateThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400AF234 (KiPriQueueThreadPriorityChanged.c)
 *     KiSwitchQueue @ 0x1400AF2F8 (KiSwitchQueue.c)
 *     KiSwitchPriQueue @ 0x1400CEB28 (KiSwitchPriQueue.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterKQueue @ 0x1400AF4A4 (KiActivateWaiterKQueue.c)
 *     KiActivateWaiterPriQueue @ 0x1400AF538 (KiActivateWaiterPriQueue.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  volatile LONG *v5; // rsi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v11; // rcx
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = &KiObjectRundownLocks[16 * ((a2 >> 4) & 0x3F)];
  ExAcquireSpinLockSharedAtDpcLevel(v5);
  v6 = *(volatile signed __int32 **)(a1 + 232);
  if ( v6 )
  {
    KiAcquireKobjectLockSafe(*(_QWORD *)(a1 + 232));
    if ( !*(_QWORD *)(a1 + 232) )
    {
      _InterlockedAnd(v6, 0xFFFFFF7F);
      v6 = 0LL;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v5);
  if ( v6 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v6 & 0x7F) == 0x15 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = 0;
        while ( 1 )
        {
          LOBYTE(v7) = 1;
          KiSetVpThreadSpinLockCount(CurrentPrcb, v7);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
          do
            KeYieldProcessorEx(&v12);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v11 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement(&v6[v11 + 134]);
        KiReleaseThreadLockSafe(a1);
      }
      else
      {
        _InterlockedDecrement(v6 + 10);
      }
      v8 = *a3;
      v9 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v9 != a3 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v6 & 0x7F) == 0x15 )
      KiActivateWaiterPriQueue(v6);
    else
      KiActivateWaiterKQueue(v6);
  }
}
