/*
 * XREFs of ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00586F0
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00561E0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0058B5C (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0092E38 (-EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0094954 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00587DC (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     VidSchSignalPagingFences @ 0x1C006F99C (VidSchSignalPagingFences.c)
 *     ?ResumeFlipQueuesIfSuspendedForMove@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A3834 (-ResumeFlipQueuesIfSuspendedForMove@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00A9660 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     VidSchWaitForPagingFence @ 0x1C00ACE6C (VidSchWaitForPagingFence.c)
 */

void __fastcall VIDMM_GLOBAL::EndPreparation(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct _KEVENT *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6)
{
  unsigned int v6; // ebx
  unsigned int v10; // r14d
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // ecx
  __int64 v17; // [rsp+28h] [rbp-50h]
  char v18; // [rsp+80h] [rbp+8h] BYREF
  char v19; // [rsp+98h] [rbp+20h] BYREF

  v6 = 0;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  for ( *((_QWORD *)this + 465) = (char *)this + 3720; v6 < *((_DWORD *)this + 1604); ++v6 )
  {
    v10 = 0;
    v11 = 472LL * v6;
    if ( *(_DWORD *)(*((_QWORD *)this + 5021) + v11 + 24) )
    {
      do
      {
        v12 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v10 + *(_DWORD *)(*((_QWORD *)this + 5021) + v11 + 20)));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 144LL))(v12);
        ++v10;
      }
      while ( v10 < *(_DWORD *)(*((_QWORD *)this + 5021) + v11 + 24) );
    }
    VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, v6);
  }
  if ( *((_BYTE *)this + 41712) )
  {
    v13 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * *((unsigned int *)this + 10429));
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, *(_DWORD *)(v13 + 404));
    v14 = *(_QWORD *)(v13 + 48);
    v15 = *(_QWORD *)(v13 + 176);
    v19 = 0;
    VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
      v15,
      0,
      v14,
      0,
      (__int64)VIDMM_SEGMENT::ResumeDevicesOnAllocationCB,
      v13,
      0LL,
      (__int64)&v18,
      (__int64)&v19);
    VIDMM_SEGMENT::ResumeFlipQueuesIfSuspendedForMove((VIDMM_SEGMENT *)v13);
    *((_BYTE *)this + 41712) = 0;
    *((_DWORD *)this + 10429) = -1;
  }
  if ( a4 )
  {
    LOBYTE(v17) = 0;
    VidSchSignalPagingFences(
      *(_QWORD *)(*((_QWORD *)this + 2) + 416LL),
      (unsigned int)&a6,
      (unsigned int)&a5,
      a4,
      -1,
      v17);
    v16 = *((_DWORD *)this + 1604);
    if ( v16 > 1 )
      VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)this + 2) + 416LL), a6, a5, (unsigned int)((1 << v16) - 1));
  }
  else if ( a3 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
    KeSetEvent(a3, 0, 0);
  }
  *((_QWORD *)this + 805) = 0LL;
  *((_QWORD *)this + 806) = 0LL;
  *((_DWORD *)this + 2) = 0;
}
