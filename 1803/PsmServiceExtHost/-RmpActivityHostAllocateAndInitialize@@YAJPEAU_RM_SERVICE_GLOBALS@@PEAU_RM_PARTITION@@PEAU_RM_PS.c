/*
 * XREFs of ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E17C
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D158 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     ?RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18000E0D4 (-RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E2FC (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x18000E448 (-RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAX@Z.c)
 *     ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E5C4 (-RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z @ 0x18000E6C0 (-RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z.c)
 *     ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E880 (-HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall RmpActivityHostAllocateAndInitialize(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PARTITION *a2,
        struct _RM_PSM_HOST_INFO *a3,
        char a4,
        struct _RM_ACTIVITY_HOST **a5)
{
  PVOID Heap; // rax
  __int64 v10; // rbx
  unsigned int v11; // esi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int State; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x5C8uLL);
  v10 = (__int64)Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x5C8uLL);
    *(_QWORD *)(v10 + 48) = a1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a2) <= 1 )
      __fastfail(0xEu);
    *(_QWORD *)(v10 + 56) = a2;
    *(_QWORD *)(v10 + 1416) = v10 + 1408;
    *(_QWORD *)(v10 + 1408) = v10 + 1408;
    RmpObjectHeaderInitialize(v10, *((_QWORD *)a3 + 68), 0);
    v11 = a4 & 1;
    HampHostInitialize(v11, a3, (struct _RM_HAM_ACTIVITY_HOST *)(v10 + 64));
    v12 = (_QWORD *)(v10 + 1008);
    v13 = 2LL;
    do
    {
      v12[2] = 0LL;
      v12[1] = v12;
      *v12 = v12;
      v12 += 3;
      --v13;
    }
    while ( v13 );
    State = RmpPartitionAddRemoveHost(a2, 1, *((_DWORD *)a3 + 133));
    if ( State >= 0 )
    {
      State = RmpEnforcementInfoInitializeCommon((struct _RM_ACTIVITY_HOST *)v10);
      if ( State >= 0 )
      {
        if ( v11 )
          *(_DWORD *)(v10 + 1156) |= 0x180u;
        State = RmpSystemReferenceHostWithPsm((struct _RM_ACTIVITY_HOST *)v10, (void **)(v10 + 1104));
        if ( State >= 0 )
        {
          State = HampHostAllocateState(
                    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 1312),
                    (struct _RM_HAM_ACTIVITY_HOST *)(v10 + 64));
          if ( State >= 0 )
          {
            State = TpAllocWork(v10 + 1384, RmpActivityHostCommitUseUpdateWorker, v10, 0LL);
            if ( State >= 0 )
            {
              *a5 = (struct _RM_ACTIVITY_HOST *)v10;
              v10 = 0LL;
              State = 0;
            }
          }
        }
      }
    }
    if ( v10 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v10);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
