/*
 * XREFs of RaUnitDeregisterFromIdleDetection @ 0x1C0015D30
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C00177B0 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C005FD60 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006468 (RaidUnitPoFxIdleComponent.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C0006988 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidIsUnitControlSupported @ 0x1C0006A0C (RaidIsUnitControlSupported.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C000EEC8 (RaidUnitCancelWaitWakeIrp.c)
 *     RaCallMiniportUnitControl @ 0x1C0014B5C (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     RaidUnitReenablePendingTimer @ 0x1C0035DA4 (RaidUnitReenablePendingTimer.c)
 */

void __fastcall RaUnitDeregisterFromIdleDetection(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  char v10; // al
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // [rsp+20h] [rbp-50h]
  __int64 *v14; // [rsp+28h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]

  if ( *(char *)(a1 + 153) < 0 )
  {
    if ( *(_QWORD *)(a1 + 24)
      && (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 4) != 0
      && RaidIsUnitControlSupported(a1, 4) )
    {
      v2 = *(_QWORD *)(a1 + 24);
      v18 = 0LL;
      v15 = 0LL;
      v17 = 0x400000001LL;
      WORD1(v17) = *(_WORD *)(v2 + 56);
      LOWORD(v18) = *(_WORD *)(a1 + 88);
      BYTE2(v18) = *(_BYTE *)(a1 + 90);
      v14 = &v17;
      v13 = 0x1800000001LL;
      RaCallMiniportUnitControl(v2 + 296);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 32), &LockHandle);
    RaidUnitCancelWaitWakeIrp(a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidUnitReenablePendingTimer(a1, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 1488) + 104LL), &LockHandle);
    StorPortUnitFlushActivePendingRequestQueue(a1);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v5 = *(_QWORD **)(a1 + 1488);
    v6 = v5[15];
    if ( v6 )
    {
      PoUnregisterCoalescingCallback(v6, v3, v4);
      *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 120LL) = 0LL;
      v5 = *(_QWORD **)(a1 + 1488);
    }
    v7 = (void *)v5[16];
    if ( v7 )
    {
      PoUnregisterPowerSettingCallback(v7);
      *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 128LL) = 0LL;
      v5 = *(_QWORD **)(a1 + 1488);
    }
    v8 = v5[17];
    if ( v8 )
    {
      LOBYTE(v3) = 1;
      ExDeleteTimer(v8, v3, 0LL, 0LL, v13, v14, v15);
      *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 136LL) = 0LL;
      v5 = *(_QWORD **)(a1 + 1488);
    }
    v9 = v5[18];
    if ( v9 )
    {
      LOBYTE(v3) = 1;
      v10 = ExDeleteTimer(v9, v3, 0LL, 0LL, v13, v14, v15);
      *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 144LL) = 0LL;
      if ( v10 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 164LL) & 1) != 0 )
          RaidUnitPoFxIdleComponent(a1, 0, 0, 0LL);
      }
    }
    v11 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 1480);
    *(_BYTE *)(a1 + 153) &= ~0x80u;
    ExWaitForRundownProtectionReleaseCacheAware(v11);
    v12 = *(_QWORD **)(a1 + 1488);
    *(_QWORD *)(a1 + 1488) = 0LL;
    PoFxUnregisterDevice(*v12);
    ExFreePoolWithTag(v12, 0x4F506152u);
  }
}
