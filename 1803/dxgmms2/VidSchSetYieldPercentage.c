/*
 * XREFs of VidSchSetYieldPercentage @ 0x1C002EFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchSetYieldPercentage(__int64 a1, char a2, int a3)
{
  int v6; // eax
  unsigned int v7; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
  v6 = *(_DWORD *)(a1 + 2192);
  *(_DWORD *)(a1 + 184) = a3;
  if ( (a2 & 1) != 0 )
    v7 = v6 | 4;
  else
    v7 = v6 & 0xFFFFFFFB;
  *(_DWORD *)(a1 + 2192) = v7;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
