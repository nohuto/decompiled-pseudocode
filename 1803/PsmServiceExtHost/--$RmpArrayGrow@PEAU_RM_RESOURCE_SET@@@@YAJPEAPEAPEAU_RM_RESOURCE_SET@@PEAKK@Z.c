/*
 * XREFs of ??$RmpArrayGrow@PEAU_RM_RESOURCE_SET@@@@YAJPEAPEAPEAU_RM_RESOURCE_SET@@PEAKK@Z @ 0x18004E540
 * Callers:
 *     ??$RmpArrayInsertAtEnd@PEAU_RM_RESOURCE_SET@@@@YAJPEAPEAPEAU_RM_RESOURCE_SET@@PEAK1PEAU0@@Z @ 0x18004E74C (--$RmpArrayInsertAtEnd@PEAU_RM_RESOURCE_SET@@@@YAJPEAPEAPEAU_RM_RESOURCE_SET@@PEAK1PEAU0@@Z.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall RmpArrayGrow<_RM_RESOURCE_SET *>(PVOID *a1, unsigned int *a2, unsigned int a3)
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
      && (v9 = (unsigned int)v8 * (unsigned __int128)8uLL, v5 = 0, is_mul_ok((unsigned int)v8, 8uLL)) )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( *a1 )
        Heap = (char *)RtlReAllocateHeap(ProcessHeap, DWORD2(v9), *a1, 8LL * (unsigned int)v8);
      else
        Heap = (char *)RtlAllocateHeap(ProcessHeap, DWORD2(v9), 8LL * (unsigned int)v8);
      v12 = Heap;
      if ( Heap )
      {
        memset_0(&Heap[8 * *a2], 0, 8LL * ((unsigned int)v8 - *a2));
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
