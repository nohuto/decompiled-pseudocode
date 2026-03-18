/*
 * XREFs of ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x1C0026EF0
 * Callers:
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0026DB8 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0026E80 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0025B70 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0025EA8 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z @ 0x1C00268A0 (-ScheduleComponentIdleListTimer@DXGADAPTER@@QEAAX_J@Z.c)
 *     McTemplateK0pqq @ 0x1C002783C (McTemplateK0pqq.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C0032F24 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C003394C (-RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     McTemplateK0xq @ 0x1C0040120 (McTemplateK0xq.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentIdleCBWorker(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // zf
  int v12; // ecx
  char *v13; // rax
  char *v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+48h] [rbp-20h] BYREF

  v3 = a3;
  v4 = a2;
  if ( !*((_QWORD *)this + 313) )
    return;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0xq(this, &Dxgk_SetPowerComponentIdleCB, a3, this, a2);
  v6 = *((_QWORD *)this + 312) + 520 * v4;
  v7 = *(_QWORD *)(v6 + 512);
  if ( v7 )
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordIdle((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v7 + 136));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 504), &LockHandle);
  if ( (int)--*(_DWORD *)(v6 + 352) <= 0 )
  {
    if ( *(_BYTE *)(v6 + 360) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_DWORD *)(v6 + 208) == 7 )
        DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v6 + 4), 1u, 1);
      DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v4, 0, v8);
      DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v4, 1u, 1u);
      goto LABEL_35;
    }
    v11 = *(_QWORD *)(v6 + 472) == 0LL;
    *(_QWORD *)(v6 + 480) = MEMORY[0xFFFFF78000000014];
    if ( v11 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( *(_DWORD *)(v6 + 208) == 7 )
        DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v6 + 4), 1u, 1);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0pqq(v12, (unsigned int)&Dxgk_ReportPowerComponentState, v10, (_DWORD)this, v4, 0);
      v9 = *((_QWORD *)this + 313);
      if ( v9 )
        PoFxIdleComponent(v9, (unsigned int)v4, v3);
      goto LABEL_35;
    }
    if ( *(_DWORD *)(v6 + 208) != 7
      || (KeReleaseInStackQueuedSpinLock(&LockHandle),
          DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v6 + 4), 1u, 1),
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 504), &LockHandle),
          *(int *)(v6 + 352) <= 0) )
    {
      *(_QWORD *)(v6 + 488) = *(_QWORD *)(v6 + 480) + *(_QWORD *)(v6 + 472);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 379, &v20);
      v13 = (char *)*((_QWORD *)this + 374);
      v14 = (char *)this + 2984;
      if ( v13 == (char *)this + 2984 )
        goto LABEL_30;
      while ( *(_QWORD *)(v6 + 488) < *((_QWORD *)v13 + 6) )
      {
        v13 = (char *)*((_QWORD *)v13 + 1);
        if ( v13 == v14 )
          goto LABEL_29;
      }
      v15 = *(_QWORD *)v13;
      v16 = (_QWORD *)(v6 + 440);
      if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v6 + 448) = v13;
      *(_QWORD *)(v15 + 8) = v16;
      *(_QWORD *)v13 = v16;
LABEL_29:
      if ( v13 == v14 )
      {
LABEL_30:
        v17 = *(_QWORD *)v14;
        v18 = (_QWORD *)(v6 + 440);
        if ( *(char **)(*(_QWORD *)v14 + 8LL) != v14 )
          __fastfail(3u);
        *(_QWORD *)(v6 + 448) = v14;
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *(_QWORD *)v14 = v18;
        DXGADAPTER::ScheduleComponentIdleListTimer(this, *(_QWORD *)(v6 + 472));
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v20);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_35:
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0xq(v9, &Dxgk_SetPowerComponentIdleCBEnd, v10, this, v4);
  }
}
