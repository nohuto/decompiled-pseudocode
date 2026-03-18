/*
 * XREFs of VidSchiSignalRegisteredSyncObjects @ 0x1C0012F40
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013038 (-VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C002BB78 (VidSchiPropagateCrossAdapterSignal.c)
 */

void __fastcall VidSchiSignalRegisteredSyncObjects(__int64 a1, __int64 a2)
{
  char v2; // r15
  _QWORD **v4; // r14
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rsi
  bool v8; // zf
  volatile signed __int32 *v9; // rax
  _QWORD *i; // rbx
  __int64 v11; // rbx
  struct _KLOCK_QUEUE_HANDLE v12; // [rsp+20h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-30h] BYREF

  v2 = a2;
  if ( !(_BYTE)a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 1904LL), &LockHandle);
  v4 = (_QWORD **)(a1 + 152);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
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
      VidSchiUnwaitMonitoredFences(*(_QWORD *)(v7 + 8), a2);
      if ( *(_BYTE *)(v7 + 27) )
      {
        v11 = *(_QWORD *)(v7 + 200);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 8), &v12);
        *(_BYTE *)(v11 + 32) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v12);
        VidSchiPropagateCrossAdapterSignal(v7);
      }
    }
    v5[1] = 0LL;
    *v5 = 0LL;
  }
  for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
    VidSchiCompleteAllWaitsContext((struct _VIDSCH_CONTEXT *)(i - 3));
  if ( !v2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
