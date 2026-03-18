/*
 * XREFs of ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0028CCC
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00AB9E0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C0015980 (VidSchiRundownUnorderedWaiterDevice.c)
 */

void __fastcall VidSchRundownUnorderedWaiterGlobal(struct _VIDSCH_GLOBAL *a1)
{
  struct _VIDSCH_GLOBAL *i; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 235, &LockHandle);
  *((_BYTE *)a1 + 2844) |= 1u;
  if ( *(_QWORD *)((char *)a1 + 980) )
  {
    for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 31);
          i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 248);
          i = *(struct _VIDSCH_GLOBAL **)i )
    {
      VidSchiRundownUnorderedWaiterDevice((__int64)i - 80);
    }
  }
  *((_BYTE *)a1 + 2844) &= ~1u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
