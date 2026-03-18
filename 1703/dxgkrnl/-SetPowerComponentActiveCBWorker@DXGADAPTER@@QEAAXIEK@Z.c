/*
 * XREFs of ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C00222E4
 * Callers:
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C002219C (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0022264 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C001316C (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0020528 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     Template_pqq @ 0x1C0022874 (Template_pqq.c)
 *     ?RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0038B8C (-RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBWorker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  char v4; // r13
  __int64 v5; // rbp
  unsigned int v6; // ebx
  char v7; // r12
  __int64 v9; // rsi
  __int64 v10; // rcx
  char v11; // r14
  char v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v25; // [rsp+60h] [rbp-48h] BYREF

  v4 = 0;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  if ( *((_QWORD *)this + 291) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_xq(this, &Dxgk_SetPowerComponentActiveCB, a3, this, a2);
    v9 = *((_QWORD *)this + 290) + 520 * v5;
    v10 = *(_QWORD *)(v9 + 512);
    if ( v10 )
    {
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordActivity((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v10 + 136));
      if ( *((_DWORD *)this + 852) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 479, &LockHandle);
        *(_BYTE *)(*(_QWORD *)(v9 + 512) + 240LL) = 1;
        if ( !*((_BYTE *)this + 3840) )
        {
          *((_BYTE *)this + 3840) = 1;
          _InterlockedIncrement64((volatile signed __int64 *)this + 3);
          *((_QWORD *)this + 462) = -1LL;
          KeSetTimer((PKTIMER)((char *)this + 3704), (LARGE_INTEGER)-120000LL, (PKDPC)((char *)this + 3768));
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    v11 = v7;
    v12 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 504), &v25);
    if ( (int)++*(_DWORD *)(v9 + 352) <= 1 )
    {
      v13 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v9 + 480);
      if ( *(_BYTE *)(v9 + 360) )
      {
        v11 = 0;
        v4 = 1;
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 357, &v23);
        v14 = v9 + 440;
        if ( *(_QWORD *)(v9 + 440) )
        {
          v15 = *(_QWORD *)v14;
          v16 = *(_QWORD **)(v9 + 448);
          if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          *(_QWORD *)v14 = 0LL;
          if ( *((DXGADAPTER **)this + 351) == (DXGADAPTER *)((char *)this + 2808) )
          {
            KeCancelTimer((PKTIMER)((char *)this + 2872));
            *((_BYTE *)this + 2757) = 0;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
          if ( v13 > *(_QWORD *)(v9 + 496) )
            *(_QWORD *)(v9 + 472) = 0LL;
          v12 = 1;
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
          v17 = *(_QWORD *)(v9 + 496);
          if ( v13 < v17 )
            *(_QWORD *)(v9 + 472) = v17;
          v11 = 1;
        }
      }
      v6 = a4;
    }
    else
    {
      v12 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&v25);
    if ( v11 )
    {
      if ( v7 )
      {
        if ( KeGetCurrentIrql() >= 2u )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
          v20[3] = 275LL;
          v20[4] = 20LL;
          v20[5] = this;
          v20[6] = 0LL;
          v20[7] = 0LL;
          WdLogEvent5_WdCriticalError(v20);
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_pqq(v18, (unsigned int)&Dxgk_ReportPowerComponentState, v19, (_DWORD)this, v5, 1);
        v21 = 1LL;
      }
      else
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_pqq(v18, (unsigned int)&Dxgk_ReportPowerComponentState, v19, (_DWORD)this, v5, 1);
        v21 = v6;
      }
      PoFxActivateComponent(*((_QWORD *)this + 291), (unsigned int)v5, v21);
      if ( v12 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_pqq(v18, (unsigned int)&Dxgk_ReportPowerComponentState, v19, (_DWORD)this, v5, 0);
        v18 = *((_QWORD *)this + 291);
        if ( v18 )
          PoFxIdleComponent(v18, (unsigned int)v5, v6);
      }
    }
    if ( v4 )
    {
      DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v5, 0, 1u);
      DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v5, 1, v22);
    }
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_xq(v18, &Dxgk_SetPowerComponentActiveCBEnd, v19, this, v5);
    }
  }
}
