/*
 * XREFs of ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00600E8
 * Callers:
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00606B4 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006C900 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C009F778 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A272C (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C005EDF8 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0060210 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00768D8 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     VidSchiResumeFlipQueues @ 0x1C00BC34C (VidSchiResumeFlipQueues.c)
 *     VidSchSignalPagingFences @ 0x1C00BE1E4 (VidSchSignalPagingFences.c)
 *     VidSchWaitForPagingFence @ 0x1C00BE7D0 (VidSchWaitForPagingFence.c)
 */

void __fastcall VIDMM_GLOBAL::EndPreparation(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        PRKEVENT Event,
        char a4,
        SIZE_T a5,
        VIDMM_FENCE_STORAGE_PAGE **a6)
{
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD **v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rsi
  _QWORD *v21; // rax
  _QWORD *v22; // r15
  _QWORD *v23; // rcx
  __int64 v24; // rbx
  _QWORD *v25; // rax
  unsigned int v26; // ecx
  bool v27; // [rsp+68h] [rbp+10h] BYREF

  v27 = 0;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  v10 = 0;
  if ( a2 == -1 )
  {
    if ( *((_DWORD *)this + 1748) )
    {
      do
      {
        v11 = 0;
        v12 = 1560LL * v10;
        if ( *(_DWORD *)(*((_QWORD *)this + 5090) + v12 + 24) )
        {
          do
          {
            v13 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v11 + *(_DWORD *)(*((_QWORD *)this + 5090) + v12 + 20)));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 160LL))(v13);
            ++v11;
          }
          while ( v11 < *(_DWORD *)(*((_QWORD *)this + 5090) + v12 + 24) );
        }
        if ( a4 )
          VIDMM_GLOBAL::SignalMonitoredFence(this, v10, a6, a5, &v27);
        VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, v10++);
      }
      while ( v10 < *((_DWORD *)this + 1748) );
    }
  }
  else
  {
    v15 = 1560LL * a2;
    v16 = v15 + *((_QWORD *)this + 5090);
    if ( *(_DWORD *)(v16 + 24) )
    {
      do
      {
        v17 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v10 + *(_DWORD *)(v16 + 20)));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 160LL))(v17);
        ++v10;
        v16 = v15 + *((_QWORD *)this + 5090);
      }
      while ( v10 < *(_DWORD *)(v16 + 24) );
    }
    if ( a4 )
      VIDMM_GLOBAL::SignalMonitoredFence(this, a2, a6, a5, &v27);
    VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, a2);
  }
  v14 = (_QWORD **)((char *)this + 42000);
  if ( *v14 != v14 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a2);
    v20 = *v14;
    while ( v20 != v14 )
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
  }
  if ( *((_BYTE *)this + 42016) )
  {
    VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL), 0xFFFFFFFFLL);
    *((_BYTE *)this + 42016) = 0;
  }
  if ( !a4 || v27 )
  {
    if ( Event )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, a2);
      KeSetEvent(Event, 0, 0);
    }
  }
  else
  {
    VidSchSignalPagingFences(
      *(_QWORD *)(*((_QWORD *)this + 2) + 528LL),
      (unsigned int)&a6,
      (unsigned int)&a5,
      a4,
      a2,
      0);
    if ( a2 == -1 )
    {
      v26 = *((_DWORD *)this + 1748);
      if ( v26 > 1 )
        VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL), a6, a5, (unsigned int)((1 << v26) - 1));
    }
  }
  *((_QWORD *)this + 877) = 0LL;
  *((_QWORD *)this + 878) = 0LL;
  *((_DWORD *)this + 2) = 0;
}
