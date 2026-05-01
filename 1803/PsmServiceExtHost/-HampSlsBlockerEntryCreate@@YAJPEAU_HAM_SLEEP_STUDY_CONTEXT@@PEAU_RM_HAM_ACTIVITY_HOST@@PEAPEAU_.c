/*
 * XREFs of ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180068D3C
 * Callers:
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x1800699B4 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     ?HampSlsBlockerEntryInitialize@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180068F20 (-HampSlsBlockerEntryInitialize@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_E.c)
 */

__int64 __fastcall HampSlsBlockerEntryCreate(
        struct _HAM_SLEEP_STUDY_CONTEXT *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **a3)
{
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *Heap; // rax
  unsigned int v6; // ebx
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v7; // rdi

  Heap = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x58uLL);
  v6 = 0;
  v7 = Heap;
  if ( Heap )
  {
    HampSlsBlockerEntryInitialize(a2, Heap);
    *a3 = v7;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
