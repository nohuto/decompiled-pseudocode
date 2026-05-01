/*
 * XREFs of ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000DF94
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D158 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E028 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpPsmAppFamilyAddActivityHost(struct _RM_PSM_APP_FAMILY *a1, struct _RM_ACTIVITY_HOST *a2)
{
  unsigned int v2; // ebx
  _QWORD *Heap; // rax

  v2 = 0;
  if ( *((_QWORD *)a1 + 69) )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    if ( !Heap )
      return (unsigned int)-1073741801;
    Heap[1] = 0LL;
    *Heap = a2;
    Heap[1] = *((_QWORD *)a1 + 70);
    *((_QWORD *)a1 + 70) = Heap + 1;
  }
  else
  {
    *((_QWORD *)a1 + 69) = a2;
  }
  if ( RmpActivityHostIsPple(a2) )
    *((_QWORD *)a1 + 71) = a2;
  return v2;
}
