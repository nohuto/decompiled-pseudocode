/*
 * XREFs of ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005B7DC
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0058E30 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005BDB4 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C009A32C (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009C700 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051D88 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C005B8F0 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     VidSchSignalPagingFences @ 0x1C00759EC (VidSchSignalPagingFences.c)
 *     VidSchiResumeFlipQueues @ 0x1C00B3930 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00B5850 (VidSchWaitForPagingFence.c)
 */

void __fastcall VIDMM_GLOBAL::EndPreparation(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _KEVENT *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6)
{
  unsigned int v7; // ebx
  char v8; // r13
  unsigned int v11; // r15d
  __int64 v12; // r14
  __int64 v13; // rcx
  _QWORD **v14; // r15
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // r14
  _QWORD *v21; // rax
  _QWORD *v22; // r13
  _QWORD *v23; // rcx
  __int64 v24; // rbx
  _QWORD *v25; // rax
  unsigned int v26; // ecx

  v7 = 0;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  v8 = a4;
  if ( a2 == -1 )
  {
    if ( *((_DWORD *)this + 1604) )
    {
      do
      {
        v11 = 0;
        v12 = 1552LL * v7;
        if ( *(_DWORD *)(*((_QWORD *)this + 5021) + v12 + 24) )
        {
          do
          {
            v13 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v11 + *(_DWORD *)(*((_QWORD *)this + 5021) + v12 + 20)));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 160LL))(v13);
            ++v11;
          }
          while ( v11 < *(_DWORD *)(*((_QWORD *)this + 5021) + v12 + 24) );
        }
        VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, v7++);
      }
      while ( v7 < *((_DWORD *)this + 1604) );
    }
  }
  else
  {
    v15 = 1552LL * a2;
    v16 = v15 + *((_QWORD *)this + 5021);
    if ( *(_DWORD *)(v16 + 24) )
    {
      do
      {
        v17 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v7 + *(_DWORD *)(v16 + 20)));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 160LL))(v17);
        ++v7;
        v16 = v15 + *((_QWORD *)this + 5021);
      }
      while ( v7 < *(_DWORD *)(v16 + 24) );
    }
    VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, a2);
  }
  v14 = (_QWORD **)((char *)this + 41424);
  if ( *v14 != v14 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a2);
    v20 = *v14;
    if ( *v14 != v14 )
    {
      do
      {
        v21 = (_QWORD *)*v20;
        v22 = v20 - 36;
        if ( *(_QWORD **)(*v20 + 8LL) != v20 || (v23 = (_QWORD *)v20[1], (_QWORD *)*v23 != v20) )
          __fastfail(3u);
        *v23 = v21;
        v21[1] = v23;
        *v20 = 0LL;
        v20 = v21;
        if ( (*((_DWORD *)v22 + 13) & 7) != 0 )
        {
          v24 = v22[4];
          v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v18, v19);
          v25[7] = 0LL;
          v25[3] = 270LL;
          v25[4] = 63LL;
          v25[5] = v22;
          v25[6] = v24;
          WdLogEvent5_WdCriticalError(v25);
        }
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v22);
      }
      while ( v20 != v14 );
      v8 = a4;
    }
  }
  if ( *((_BYTE *)this + 41440) )
  {
    VidSchiResumeFlipQueues(*(struct _VIDSCH_GLOBAL **)(*((_QWORD *)this + 2) + 512LL));
    *((_BYTE *)this + 41440) = 0;
  }
  if ( v8 )
  {
    VidSchSignalPagingFences(
      *(_QWORD *)(*((_QWORD *)this + 2) + 512LL),
      (unsigned int)&a6,
      (unsigned int)&a5,
      a4,
      a2,
      0);
    if ( a2 == -1 )
    {
      v26 = *((_DWORD *)this + 1604);
      if ( v26 > 1 )
        VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)this + 2) + 512LL), a6, a5, (unsigned int)((1 << v26) - 1));
    }
  }
  else if ( a3 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a2);
    KeSetEvent(a3, 0, 0);
  }
  *((_QWORD *)this + 805) = 0LL;
  *((_QWORD *)this + 806) = 0LL;
  *((_DWORD *)this + 2) = 0;
}
