/*
 * XREFs of ?NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z @ 0x1C0027F60
 * Callers:
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C00284B0 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(
        KSPIN_LOCK *this,
        void *const a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 v9; // r9
  KSPIN_LOCK i; // rbx
  void (__fastcall *v11)(void *const, _QWORD, _QWORD, __int64, _QWORD); // rax
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v13; // rax
  unsigned __int8 v14; // cl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  if ( KeGetCurrentIrql() >= 2u )
    KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 143, &LockHandle);
  else
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(this + 144));
  for ( i = this[147]; (KSPIN_LOCK *)i != this + 147 && i; i = *(_QWORD *)i )
  {
    if ( *(void *const *)(i + 32) == a2 )
    {
      v11 = *(void (__fastcall **)(void *const, _QWORD, _QWORD, __int64, _QWORD))(i + 56);
      if ( v11 )
      {
        CurrentIrql = KeGetCurrentIrql();
        LOBYTE(v9) = a5;
        v11(a2, a3, a4, v9, *(_QWORD *)(i + 24));
        if ( CurrentIrql != KeGetCurrentIrql() )
        {
          v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v13[3] = 275LL;
          v13[4] = 16LL;
          v13[5] = this;
          v13[6] = CurrentIrql;
          v14 = KeGetCurrentIrql();
          v13[7] = v14;
          WdLogEvent5_WdCriticalError(v13);
        }
      }
    }
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else
  {
    ExReleasePushLockSharedEx(this + 144, 0LL);
    KeLeaveCriticalRegion();
  }
}
