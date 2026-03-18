/*
 * XREFs of ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1D44
 * Callers:
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00A1FDC (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A272C (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x1C0023AD8 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00B212C (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?MovePinnedResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B2FE0 (-MovePinnedResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B30BC (-MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00B4F2C (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     VidSchiResumeFlipQueues @ 0x1C00BC34C (VidSchiResumeFlipQueues.c)
 *     VidSchiSuspendFlipQueues @ 0x1C00BC990 (VidSchiSuspendFlipQueues.c)
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
  v15 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 2360LL);
  v16 = *(unsigned int *)(v14 + 380);
  v17 = 352 * v16;
  v18 = (*(_DWORD *)(v15 + 352 * v16 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v15 + 352 * v16 + 16) & 8) != 0 )
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
        VidSchiSuspendFlipQueues(*(_QWORD *)(*((_QWORD *)a1 + 2) + 528LL), 0xFFFFFFFFLL);
        v21 = a7;
        result = VIDMM_SEGMENT::MovePinnedResourcesOverRange((VIDMM_SEGMENT *)v14, a7, a8, a10, a11);
        if ( (int)result < 0 )
          return result;
        VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)a1 + 2) + 528LL), 0xFFFFFFFFLL);
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
    if ( *(_DWORD *)(v14 + 412) == 1 )
      v26 = *(_QWORD *)(v14 + 416);
    else
      v26 = *(_QWORD *)(v14 + 384);
    if ( v21 != v26 || v21 == VIDMM_SEGMENT::GetActiveVprEnd((VIDMM_SEGMENT *)v14) )
      v11 = 0;
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v16, 0, 0LL, 0LL, 0, v11);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, v16);
  }
  return VIDMM_SEGMENT::UpdateActiveVPRAfterMove((VIDMM_SEGMENT *)v14);
}
