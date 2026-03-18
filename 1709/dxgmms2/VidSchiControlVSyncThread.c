/*
 * XREFs of VidSchiControlVSyncThread @ 0x1C00104D0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiControlVSync @ 0x1C0071FE0 (VidSchiControlVSync.c)
 */

void __fastcall VidSchiControlVSyncThread(__int64 a1)
{
  struct _ERESOURCE *v1; // rsi
  unsigned int v3; // ebp
  unsigned int v4; // r14d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (struct _ERESOURCE *)(a1 + 1248);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1248), 1u);
  if ( *(_BYTE *)(a1 + 1968)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2036), 0, 0)
    && !*(_DWORD *)(a1 + 1984)
    && !*(_DWORD *)(*(_QWORD *)(a1 + 16) + 2336LL)
    && !*(_DWORD *)(a1 + 960)
    && !*(_DWORD *)(a1 + 972)
    && !*(_DWORD *)(a1 + 1988) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
    v3 = *(_DWORD *)(a1 + 2040);
    v4 = *(_DWORD *)(a1 + 2048);
    if ( v3 >= v4 )
      *(_DWORD *)(a1 + 2040) = -1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v3 >= v4 )
    {
      VidSchiControlVSync(a1, 0LL, 3LL);
      *(_BYTE *)(a1 + 1996) = 1;
    }
  }
  ExReleaseResourceLite(v1);
  _InterlockedExchange((volatile __int32 *)(a1 + 2032), 0);
}
