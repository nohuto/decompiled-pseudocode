/*
 * XREFs of VidSchiSuspendFlipQueues @ 0x1C00BC990
 * Callers:
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009FD94 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1D44 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     VidSchFlushPresentReferencesAndDisableOverlays @ 0x1C00BD290 (VidSchFlushPresentReferencesAndDisableOverlays.c)
 * Callees:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C002B090 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C002B234 (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 */

void __fastcall VidSchiSuspendFlipQueues(__int64 a1, int a2)
{
  __int64 i; // rdi
  __int64 v5; // rdx
  __int64 j; // rdi
  __int64 v7; // rdx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    if ( _bittest(&a2, i) )
    {
      v5 = *(_QWORD *)(a1 + 8 * i + 3032);
      if ( v5 )
        VidSchiMarkFlipQueuesRunningStateOnPresentInfo(a1, v5, 0);
    }
  }
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1160), 1u);
  for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 40); j = (unsigned int)(j + 1) )
  {
    if ( _bittest(&a2, j) )
    {
      v7 = *(_QWORD *)(a1 + 8 * j + 3032);
      if ( v7 )
        VidSchiFlushPendingHWSubmittedFlips(a1, v7);
    }
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 1160));
}
