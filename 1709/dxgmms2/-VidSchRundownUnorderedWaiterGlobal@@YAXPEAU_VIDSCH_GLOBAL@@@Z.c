/*
 * XREFs of ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002ABAC
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00B4320 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C0017E58 (VidSchiRundownUnorderedWaiterDevice.c)
 */

void __fastcall VidSchRundownUnorderedWaiterGlobal(struct _VIDSCH_GLOBAL *a1)
{
  struct _VIDSCH_GLOBAL *i; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 236, &LockHandle);
  *((_BYTE *)a1 + 2860) |= 1u;
  if ( *((_QWORD *)a1 + 122) )
  {
    for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 32);
          i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 256);
          i = *(struct _VIDSCH_GLOBAL **)i )
    {
      VidSchiRundownUnorderedWaiterDevice((__int64)i - 80);
    }
  }
  *((_BYTE *)a1 + 2860) &= ~1u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
