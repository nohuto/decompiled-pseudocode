/*
 * XREFs of ?HampDepGroupCreate@@YAJPEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001EEBC
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18000F210 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCESS_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035B0C (-RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCES.c)
 *     ?RmpHamFindOrCreateDependencyGroup@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_HAM_DEPENDENCY_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@PEAK4@Z @ 0x180040364 (-RmpHamFindOrCreateDependencyGroup@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_H.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001ABE8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupInitialize@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001EF50 (-HampDepGroupInitialize@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupCreate(struct _HAM_DEPENDENCY_GROUP **a1)
{
  struct _HAM_DEPENDENCY_GROUP *Heap; // rax
  struct _HAM_DEPENDENCY_GROUP *v3; // rbx
  int v4; // edi

  Heap = (struct _HAM_DEPENDENCY_GROUP *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x88uLL);
  v3 = Heap;
  if ( Heap )
  {
    HampDepGroupInitialize(Heap);
    v4 = TpAllocWork((char *)v3 + 112, HampDepGroupStateWorker, v3, 0LL);
    if ( v4 >= 0 )
      v4 = 0;
    if ( v4 >= 0 )
    {
      *a1 = v3;
      v4 = 0;
      v3 = 0LL;
    }
    if ( v3 )
      HampDepGroupDereference(v3);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
