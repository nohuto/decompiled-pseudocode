/*
 * XREFs of ??$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAKK@Z @ 0x18004E644
 * Callers:
 *     ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x18002E374 (-RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCES.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall RmpArrayGrow<_RM_PROCESS_ID_HOST_METRICS_PAIR>(PVOID *a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int128 v9; // rax
  PVOID ProcessHeap; // rcx
  char *Heap; // rax
  PVOID v12; // rsi

  if ( *a2 < a3 )
  {
    v6 = a3 - 1;
    if ( ((unsigned int)v6 & a3) != 0 )
    {
      v7 = (((((((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6) >> 4) | (((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6) >> 8) | (((((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6) >> 4) | (((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6;
      v8 = (v7 | (v7 >> 16)) + 1;
    }
    else
    {
      v8 = 2 * a3;
    }
    if ( v8 <= 0xFFFFFFFF
      && (v9 = (unsigned int)v8 * (unsigned __int128)0x10uLL, v5 = 0, is_mul_ok((unsigned int)v8, 0x10uLL)) )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( *a1 )
        Heap = (char *)RtlReAllocateHeap(ProcessHeap, DWORD2(v9), *a1, 16LL * (unsigned int)v8);
      else
        Heap = (char *)RtlAllocateHeap(ProcessHeap, DWORD2(v9), 16LL * (unsigned int)v8);
      v12 = Heap;
      if ( Heap )
      {
        memset_0(&Heap[16 * *a2], 0, 16LL * ((unsigned int)v8 - *a2));
        *a2 = v8;
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
  else
  {
    return 0;
  }
  return v5;
}
