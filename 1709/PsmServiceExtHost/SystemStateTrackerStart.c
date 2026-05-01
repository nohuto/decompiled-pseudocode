/*
 * XREFs of SystemStateTrackerStart @ 0x180020D58
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800211B0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x180020E40 (-SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?SstpRundown@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x180049A90 (-SstpRundown@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 */

__int64 SystemStateTrackerStart()
{
  char *Heap; // rax
  char *v1; // rbx
  int v2; // edi

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xE0uLL);
  v1 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0xE0uLL);
    RtlInitializeSRWLock(v1);
    *(_OWORD *)(v1 + 24) = TrackedWnfs;
    *(_OWORD *)(v1 + 40) = *((_OWORD *)&TrackedWnfs + 1);
    *(_OWORD *)(v1 + 56) = *((_OWORD *)&TrackedWnfs + 2);
    *(_OWORD *)(v1 + 72) = *((_OWORD *)&TrackedWnfs + 3);
    *(_OWORD *)(v1 + 88) = *((_OWORD *)&TrackedWnfs + 4);
    *(_OWORD *)(v1 + 104) = *((_OWORD *)&TrackedWnfs + 5);
    *(_OWORD *)(v1 + 120) = *((_OWORD *)&TrackedWnfs + 6);
    *(_OWORD *)(v1 + 136) = *((_OWORD *)&TrackedWnfs + 7);
    *(_OWORD *)(v1 + 152) = *((_OWORD *)&TrackedWnfs + 8);
    *(_OWORD *)(v1 + 168) = *((_OWORD *)&TrackedWnfs + 9);
    *(_OWORD *)(v1 + 184) = *((_OWORD *)&TrackedWnfs + 10);
    *(_OWORD *)(v1 + 200) = *((_OWORD *)&TrackedWnfs + 11);
    v2 = SstpStart((struct _SYSTEM_STATE_TRACKER *)v1);
    if ( v2 >= 0 )
    {
      v2 = 0;
      GlobalSystemStateTracker = v1;
      v1 = 0LL;
    }
    if ( v1 )
    {
      SstpRundown((struct _SYSTEM_STATE_TRACKER *)v1);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v2;
}
