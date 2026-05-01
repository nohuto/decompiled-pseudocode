/*
 * XREFs of ??$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAKK@Z @ 0x180004180
 * Callers:
 *     ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x180004994 (-RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCES.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmpArrayGrow<_RM_PROCESS_ID_HOST_METRICS_PAIR>(PVOID *a1, unsigned int *a2, unsigned int a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int128 v8; // rax
  unsigned int v9; // ebx
  PVOID ProcessHeap; // rcx
  char *Heap; // rax
  PVOID v12; // rsi

  if ( *a2 >= a3 )
  {
    return 0;
  }
  else
  {
    v5 = a3 - 1;
    if ( ((unsigned int)v5 & a3) != 0 )
    {
      v6 = (((((((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 4) | (((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 8) | (((((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 4) | (((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5;
      v7 = (v6 | (v6 >> 16)) + 1;
    }
    else
    {
      v7 = 2 * a3;
    }
    if ( v7 <= 0xFFFFFFFF
      && (v8 = (unsigned int)v7 * (unsigned __int128)0x10uLL, v9 = 0, is_mul_ok((unsigned int)v7, 0x10uLL)) )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( *a1 )
        Heap = (char *)RtlReAllocateHeap(ProcessHeap, DWORD2(v8), *a1, 16LL * (unsigned int)v7);
      else
        Heap = (char *)RtlAllocateHeap(ProcessHeap, DWORD2(v8), 16LL * (unsigned int)v7);
      v12 = Heap;
      if ( Heap )
      {
        memset_0(&Heap[16 * *a2], 0, 16LL * ((unsigned int)v7 - *a2));
        *a2 = v7;
        *a1 = v12;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  return v9;
}
