/*
 * XREFs of ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C001F9C4
 * Callers:
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C001F87C (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C001F944 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C001EC80 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C001EFB4 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     McTemplateK0xq @ 0x1C00205AC (McTemplateK0xq.c)
 *     McTemplateK0pqq @ 0x1C0020624 (McTemplateK0pqq.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C00284B0 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0028D58 (-RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
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
  if ( *((_QWORD *)this + 294) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0xq(this, &Dxgk_SetPowerComponentActiveCB, a3, this, a2);
    v9 = *((_QWORD *)this + 293) + 520 * v5;
    v10 = *(_QWORD *)(v9 + 512);
    if ( v10 )
    {
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordActivity((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v10 + 136));
      if ( *((_DWORD *)this + 856) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 481, &LockHandle);
        *(_BYTE *)(*(_QWORD *)(v9 + 512) + 240LL) = 1;
        if ( !*((_BYTE *)this + 3856) )
        {
          *((_BYTE *)this + 3856) = 1;
          _InterlockedIncrement64((volatile signed __int64 *)this + 3);
          *((_QWORD *)this + 464) = -1LL;
          KeSetTimer((PKTIMER)((char *)this + 3720), (LARGE_INTEGER)-120000LL, (PKDPC)((char *)this + 3784));
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
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 360, &v23);
        v14 = v9 + 440;
        if ( *(_QWORD *)(v9 + 440) )
        {
          v15 = *(_QWORD *)v14;
          if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || (v16 = *(_QWORD **)(v9 + 448), *v16 != v14) )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          *(_QWORD *)v14 = 0LL;
          if ( *((DXGADAPTER **)this + 354) == (DXGADAPTER *)((char *)this + 2832) )
          {
            KeCancelTimer((PKTIMER)((char *)this + 2896));
            *((_BYTE *)this + 2781) = 0;
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
    if ( *(_DWORD *)(v9 + 208) == 7 )
      DxgkNotifySharedPowerGraphicsFStateTransition(this, v5, 0, 1);
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
          McTemplateK0pqq(v18, (unsigned int)&Dxgk_ReportPowerComponentState, v19, (_DWORD)this, v5, 1);
        v21 = 1LL;
      }
      else
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          McTemplateK0pqq(v18, (unsigned int)&Dxgk_ReportPowerComponentState, v19, (_DWORD)this, v5, 1);
        v21 = v6;
      }
      PoFxActivateComponent(*((_QWORD *)this + 294), (unsigned int)v5, v21);
      if ( v12 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          McTemplateK0pqq(v18, (unsigned int)&Dxgk_ReportPowerComponentState, v19, (_DWORD)this, v5, 0);
        v18 = *((_QWORD *)this + 294);
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
        McTemplateK0xq(v18, &Dxgk_SetPowerComponentActiveCBEnd, v19, this, v5);
    }
  }
}
