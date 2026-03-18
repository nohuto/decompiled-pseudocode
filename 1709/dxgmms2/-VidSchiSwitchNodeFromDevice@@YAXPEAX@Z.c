/*
 * XREFs of ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C002AC30
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiDecrementContextReference @ 0x1C000E770 (VidSchiDecrementContextReference.c)
 *     VidSchiIncrementContextReference @ 0x1C00110B0 (VidSchiIncrementContextReference.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C0071610 (VidSchiSwitchNodeFromContext.c)
 */

void __fastcall VidSchiSwitchNodeFromDevice(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD **v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rdi
  struct _VIDSCH_CONTEXT *v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1[4];
  v2 = (_QWORD **)(a1 + 8);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1888), &LockHandle);
  v5 = *v2;
  while ( v5 != v2 )
  {
    v6 = (struct _VIDSCH_CONTEXT *)(v5 - 3);
    VidSchiIncrementContextReference((__int64)(v5 - 3), v3, v4);
    if ( !*((_DWORD *)v5 + 214) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSwitchNodeFromContext(v5 - 3);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1888), &LockHandle);
    }
    v5 = (_QWORD *)*v5;
    VidSchiDecrementContextReference(v6, 1);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
