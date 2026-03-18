/*
 * XREFs of VidSchiSignalRegisteredSyncObjects @ 0x1C000F57C
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BBA0 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C000F674 (-VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0028C90 (VidSchiPropagateCrossAdapterSignal.c)
 */

void __fastcall VidSchiSignalRegisteredSyncObjects(__int64 a1, char a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  bool v8; // zf
  volatile signed __int32 *v9; // rax
  _QWORD *i; // rbx
  __int64 v11; // rbx
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+20h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-30h] BYREF

  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 1888LL), &LockHandle);
  v4 = a1 + 128;
  while ( *(_QWORD *)v4 != v4 )
  {
    v5 = *(_QWORD **)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    v7 = v5[2];
    if ( !*(_BYTE *)(v7 + 28) )
    {
      v8 = *(_BYTE *)(v7 + 29) == 0;
      v9 = *(volatile signed __int32 **)(v7 + 56);
      *(_BYTE *)(v7 + 28) = 1;
      if ( v8 )
        _InterlockedExchangeAdd(v9, 0x3FFFFFFFu);
      else
        *(_QWORD *)v9 = -1LL;
      VidSchiUnwaitMonitoredFences(*(_QWORD *)(v7 + 8));
      if ( *(_BYTE *)(v7 + 27) )
      {
        v11 = *(_QWORD *)(v7 + 184);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 8), &v12);
        *(_BYTE *)(v11 + 32) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v12);
        VidSchiPropagateCrossAdapterSignal(v7);
      }
    }
    v5[1] = 0LL;
    *v5 = 0LL;
  }
  for ( i = *(_QWORD **)(a1 + 64); i != (_QWORD *)(a1 + 64); i = (_QWORD *)*i )
    VidSchiCompleteAllWaitsContext((struct _VIDSCH_CONTEXT *)(i - 3));
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
