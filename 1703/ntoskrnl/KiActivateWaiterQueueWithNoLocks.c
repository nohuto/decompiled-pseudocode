/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x140114EE8
 * Callers:
 *     KiSwitchQueue @ 0x140029E3C (KiSwitchQueue.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14002CE38 (KiPriQueueThreadPriorityChanged.c)
 *     KiSwitchPriQueue @ 0x1400363E8 (KiSwitchPriQueue.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KeTerminateThread @ 0x140114224 (KeTerminateThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiActivateWaiterKQueue @ 0x140115000 (KiActivateWaiterKQueue.c)
 *     KiActivateWaiterPriQueue @ 0x140115EEC (KiActivateWaiterPriQueue.c)
 */

void __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  volatile LONG *v5; // rsi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = &KiObjectRundownLocks[16 * ((a2 >> 4) & 0x3F)];
  ExAcquireSpinLockSharedAtDpcLevel(v5);
  v6 = *(volatile signed __int32 **)(a1 + 232);
  if ( v6 )
  {
    KiAcquireKobjectLockSafe(*(volatile signed __int32 **)(a1 + 232));
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
        v10 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v10);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v9 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement(&v6[v9 + 134]);
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      else
      {
        _InterlockedDecrement(v6 + 10);
      }
      v7 = *a3;
      v8 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v8 != a3 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v6 & 0x7F) == 0x15 )
      KiActivateWaiterPriQueue(v6);
    else
      KiActivateWaiterKQueue(v6);
  }
}
