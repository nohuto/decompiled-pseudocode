/*
 * XREFs of ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00942F0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0094954 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x1C001F138 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A17A0 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?MovePinnedResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A2864 (-MovePinnedResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A2940 (-MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00A40CC (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     VidSchiResumeFlipQueues @ 0x1C00AB01C (VidSchiResumeFlipQueues.c)
 *     VidSchiSuspendFlipQueues @ 0x1C00AB610 (VidSchiSuspendFlipQueues.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MoveResources(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        bool *a10,
        struct _VIDMM_GLOBAL_ALLOC **a11)
{
  char v11; // si
  int v12; // ebx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rdx
  bool v18; // r15
  int v19; // ebx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rbx
  __int64 result; // rax
  unsigned __int64 v23; // r8
  unsigned __int64 ActiveVprEnd; // rax
  int v25; // edx
  __int64 v26; // rax

  v11 = 1;
  v12 = a3;
  v14 = *(_QWORD *)(*((_QWORD *)a1 + 464) + 8LL * a4);
  v15 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 2192LL);
  v16 = *(unsigned int *)(v14 + 404);
  v17 = 6 * v16;
  v18 = (*(_DWORD *)(v15 + 48 * v16 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v15 + 48 * v16 + 16) & 8) != 0 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v16, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, v16);
  }
  if ( v12 )
  {
    v19 = v12 - 1;
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        VidSchiSuspendFlipQueues(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL));
        v21 = a7;
        result = VIDMM_SEGMENT::MovePinnedResourcesOverRange((VIDMM_SEGMENT *)v14, a7, a8, a10, a11);
        if ( (int)result < 0 )
          return result;
        VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL));
      }
      else
      {
        if ( g_IsInternalRelease )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v17, a3);
          v20[5] = 0LL;
          v20[6] = 0LL;
          v20[7] = 0LL;
          v20[3] = 270LL;
          v20[4] = 9LL;
          WdLogEvent5_WdCriticalError(v20);
        }
        v21 = a7;
      }
    }
    else
    {
      v21 = a7;
      VIDMM_SEGMENT::MoveResourcesForAllocationPlacement(v14, v17, a7, a8, a9, a10, a11);
    }
  }
  else
  {
    v23 = a8;
    v21 = a7;
    if ( !a8 && !a7 && a6 )
    {
      ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd((VIDMM_SEGMENT *)v14);
      if ( v25 == 1 )
      {
        v21 = 0LL;
      }
      else if ( v25 == 2 )
      {
        v21 = v23;
        v23 = ActiveVprEnd;
      }
      else
      {
        v23 = *(_QWORD *)(v14 + 48);
        v21 = ActiveVprEnd;
      }
    }
    VIDMM_SEGMENT::DefragmentResourcesOverRange(v14, v21, v23, a9, a10, a11);
  }
  if ( v18 )
  {
    if ( *(_DWORD *)(v14 + 436) == 1 )
      v26 = *(_QWORD *)(v14 + 440);
    else
      v26 = *(_QWORD *)(v14 + 408);
    if ( v21 != v26 || v21 == VIDMM_SEGMENT::GetActiveVprEnd((VIDMM_SEGMENT *)v14) )
      v11 = 0;
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v16, 0, 0LL, 0LL, 0, v11);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, v16);
  }
  return VIDMM_SEGMENT::UpdateActiveVPRAfterMove((VIDMM_SEGMENT *)v14);
}
