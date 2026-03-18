/*
 * XREFs of PfSnPrefetchCacheEntryUpdate @ 0x14048E478
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x14048E1F0 (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     PfSnPrefetchCacheEntryGet @ 0x14048EBF8 (PfSnPrefetchCacheEntryGet.c)
 */

_QWORD *__fastcall PfSnPrefetchCacheEntryUpdate(_DWORD *a1)
{
  const void *v1; // rsi
  unsigned __int8 *v3; // r9
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx

  v1 = a1 + 1;
  v3 = (unsigned __int8 *)(a1 + 1);
  v4 = 314159LL;
  v5 = 8LL;
  do
  {
    v6 = *v3;
    v3 += 8;
    v4 = *(v3 - 1)
       + 37
       * (*(v3 - 2)
        + 37
        * (*(v3 - 3) + 37 * (*(v3 - 4) + 37 * (*(v3 - 5) + 37 * (*(v3 - 6) + 37 * (*(v3 - 7) + 37 * (v6 + 37 * v4)))))));
    --v5;
  }
  while ( v5 );
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_1403CD8E0, 1u);
  v8 = qword_1403CD8D0 - 16;
  if ( !memcmp((const void *)(qword_1403CD8D0 - 16 + 32), v1, 0x40uLL)
    || (v8 = PfSnPrefetchCacheEntryGet(&unk_1403CD8B8, v1, v4, 0LL)) != 0 )
  {
    *(_DWORD *)(v8 + 112) = a1[17];
    *(_DWORD *)(v8 + 116) = a1[18];
  }
  ExReleaseResourceLite(&stru_1403CD8E0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
