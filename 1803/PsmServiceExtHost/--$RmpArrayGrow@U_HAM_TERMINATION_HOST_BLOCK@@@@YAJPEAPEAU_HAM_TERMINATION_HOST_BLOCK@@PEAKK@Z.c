/*
 * XREFs of ??$RmpArrayGrow@U_HAM_TERMINATION_HOST_BLOCK@@@@YAJPEAPEAU_HAM_TERMINATION_HOST_BLOCK@@PEAKK@Z @ 0x18003356C
 * Callers:
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800334DC (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall RmpArrayGrow<_HAM_TERMINATION_HOST_BLOCK>(PVOID *a1, unsigned int *a2, unsigned int a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int128 v7; // rax
  unsigned int v8; // ebx
  PVOID ProcessHeap; // rcx
  char *Heap; // rax
  PVOID v11; // rsi
  unsigned __int64 v13; // rcx

  if ( *a2 >= a3 )
  {
    return 0;
  }
  else
  {
    v5 = a3 - 1;
    if ( ((unsigned int)v5 & a3) != 0 )
    {
      v13 = (((((((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 4) | (((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 8) | (((((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5) >> 4) | (((v5 >> 1) | (unsigned int)v5) >> 2) | (v5 >> 1) | (unsigned int)v5;
      v6 = (v13 | (v13 >> 16)) + 1;
    }
    else
    {
      v6 = 2 * a3;
    }
    if ( v6 <= 0xFFFFFFFF
      && (v7 = (unsigned int)v6 * (unsigned __int128)0x10uLL, v8 = 0, is_mul_ok((unsigned int)v6, 0x10uLL)) )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( *a1 )
        Heap = (char *)RtlReAllocateHeap(ProcessHeap, DWORD2(v7), *a1, 16LL * (unsigned int)v6);
      else
        Heap = (char *)RtlAllocateHeap(ProcessHeap, DWORD2(v7), 16LL * (unsigned int)v6);
      v11 = Heap;
      if ( Heap )
      {
        memset_0(&Heap[16 * *a2], 0, 16LL * ((unsigned int)v6 - *a2));
        *a2 = v6;
        *a1 = v11;
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
  return v8;
}
