/*
 * XREFs of ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002DBEC
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00BCEF0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C0017808 (VidSchiRundownUnorderedWaiterDevice.c)
 */

void __fastcall VidSchRundownUnorderedWaiterGlobal(struct _VIDSCH_GLOBAL *a1)
{
  char v2; // al
  bool v3; // zf
  struct _VIDSCH_GLOBAL *v4; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 238, &LockHandle);
  v2 = *((_BYTE *)a1 + 2884) | 1;
  v3 = *((_DWORD *)a1 + 248) == 0;
  *((_BYTE *)a1 + 2884) = v2;
  if ( !v3 || *((_DWORD *)a1 + 249) )
  {
    v4 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 34);
    if ( v4 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 272) )
    {
      do
      {
        VidSchiRundownUnorderedWaiterDevice((__int64)v4 - 104);
        v4 = *(struct _VIDSCH_GLOBAL **)v4;
      }
      while ( v4 != (struct _VIDSCH_GLOBAL *)((char *)a1 + 272) );
      v2 = *((_BYTE *)a1 + 2884);
    }
  }
  *((_BYTE *)a1 + 2884) = v2 & 0xFE;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
