/*
 * XREFs of ?HampAppCreate@@YAJPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x180045FCC
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_KEY@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x1800460A8 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_KEY@@PEAU_HAM_PACKAGE_INFO@@PEA.c)
 * Callees:
 *     ?HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z @ 0x1800461F4 (-HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z.c)
 */

__int64 __fastcall HampAppCreate(struct _HAM_PACKAGE *a1, struct _RM_PSM_KEY *a2, struct _HAM_APPLICATION **a3)
{
  struct _HAM_APPLICATION *Heap; // rax
  unsigned int v7; // ebx
  struct _HAM_APPLICATION *v8; // rdi

  Heap = (struct _HAM_APPLICATION *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x258uLL);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    HampAppInitialize(a1, a2, Heap);
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
