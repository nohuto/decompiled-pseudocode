/*
 * XREFs of ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0033AA8
 * Callers:
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C0025A58 (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z @ 0x1C0033680 (-CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@AEAAXI@Z.c)
 */

void __fastcall DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync(KSPIN_LOCK *this)
{
  signed __int64 v2; // r9
  KSPIN_LOCK v3; // rax
  __int64 v4; // r8
  KSPIN_LOCK v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(this + 3, &LockHandle);
  if ( *((_BYTE *)this + 88) != 1 )
  {
    v2 = this[4];
    if ( v2 > (__int64)this[5] )
    {
      v3 = *(_QWORD *)(*this + 3792);
      v4 = *(unsigned int *)(this[2] + 4LL * *((unsigned int *)this + 14) + 4);
      v5 = v3 - v2;
      this[4] = v3;
      v2 = v3;
      this[9] += v5 * v4;
    }
    LODWORD(v6) = 0;
    if ( v2 )
    {
      v7 = *(_QWORD *)(*this + 3800);
      if ( v7 )
        v6 = (__int64)(1000 * this[9]) / *(unsigned int *)(this[2] + 4LL * *((unsigned int *)this + 14) + 4) / v7;
    }
    DXGPOWERSTATISTICSTRANSITIONENGINE::CalculatePState((DXGPOWERSTATISTICSTRANSITIONENGINE *)this, v6);
    this[9] = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
