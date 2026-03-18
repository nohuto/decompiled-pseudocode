/*
 * XREFs of VidSchSetYieldPercentage @ 0x1C002BF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchSetYieldPercentage(__int64 a1, char a2, int a3)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
  *(_DWORD *)(a1 + 184) = a3;
  if ( (a2 & 1) != 0 )
    *(_DWORD *)(a1 + 2168) |= 4u;
  else
    *(_DWORD *)(a1 + 2168) &= ~4u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
