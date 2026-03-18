/*
 * XREFs of ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C000B830
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C00E4F80 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C016C940 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  __int64 v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v6 = *((_QWORD *)this + 14) + 3208LL * a2;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 920), &LockHandle);
  KeResetEvent(*(PRKEVENT *)(v6 + 896));
  *(_DWORD *)(v6 + 904) = a3;
  if ( a3 <= *(_DWORD *)(v6 + 908) && a3 )
  {
    KeSetEvent(*(PRKEVENT *)(v6 + 896), 0, 0);
  }
  else if ( !*(_BYTE *)(v6 + 912) )
  {
    *(_BYTE *)(v6 + 912) = 1;
    *a4 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
