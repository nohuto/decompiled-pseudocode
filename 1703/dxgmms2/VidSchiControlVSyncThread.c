/*
 * XREFs of VidSchiControlVSyncThread @ 0x1C000FBF0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiControlVSync @ 0x1C006BAE8 (VidSchiControlVSync.c)
 */

void __fastcall VidSchiControlVSyncThread(__int64 a1)
{
  struct _ERESOURCE *v1; // rbp
  int v3; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (struct _ERESOURCE *)(a1 + 1240);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1240), 1u);
  if ( *(_BYTE *)(a1 + 1952)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2020), 0, 0)
    && !*(_DWORD *)(a1 + 1968)
    && !*(_DWORD *)(*(_QWORD *)(a1 + 16) + 2312LL)
    && !*(_DWORD *)(a1 + 960)
    && !*(_DWORD *)(a1 + 976)
    && !*(_DWORD *)(a1 + 1972) )
  {
    v3 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
    if ( *(_DWORD *)(a1 + 2024) >= *(_DWORD *)(a1 + 2032) )
    {
      *(_DWORD *)(a1 + 2024) = -1;
      v3 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v3 )
    {
      VidSchiControlVSync(a1, 0LL, 3LL);
      *(_BYTE *)(a1 + 1980) = 1;
    }
  }
  ExReleaseResourceLite(v1);
  _InterlockedExchange((volatile __int32 *)(a1 + 2016), 0);
}
