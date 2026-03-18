/*
 * XREFs of VidSchiControlVSyncThread @ 0x1C00049F0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiControlVSync @ 0x1C0056C4C (VidSchiControlVSync.c)
 */

void __fastcall VidSchiControlVSyncThread(__int64 a1)
{
  struct _ERESOURCE *v1; // rbp
  int v3; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (struct _ERESOURCE *)(a1 + 1264);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1264), 1u);
  if ( *(_BYTE *)(a1 + 1984)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2052), 0, 0)
    && !*(_DWORD *)(a1 + 2000)
    && !*(_DWORD *)(*(_QWORD *)(a1 + 16) + 2488LL)
    && !*(_DWORD *)(a1 + 976)
    && !*(_DWORD *)(a1 + 988)
    && !*(_DWORD *)(a1 + 2004) )
  {
    v3 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
    if ( *(_DWORD *)(a1 + 2056) >= *(_DWORD *)(a1 + 2064) )
    {
      *(_DWORD *)(a1 + 2056) = -1;
      v3 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v3 )
    {
      VidSchiControlVSync(a1, 0LL, 3LL);
      *(_BYTE *)(a1 + 2012) = 1;
    }
  }
  ExReleaseResourceLite(v1);
  _InterlockedExchange((volatile __int32 *)(a1 + 2048), 0);
}
