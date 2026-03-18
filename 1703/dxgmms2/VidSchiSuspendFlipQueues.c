/*
 * XREFs of VidSchiSuspendFlipQueues @ 0x1C00AB610
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00942F0 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A17A0 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A29D8 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x1C0026140 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C00262F8 (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 */

void __fastcall VidSchiSuspendFlipQueues(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rbp
  __int64 *v3; // rdi
  __int64 v4; // r14

  v1 = (__int64 *)(a1 + 2992);
  v2 = 16LL;
  v3 = (__int64 *)(a1 + 2992);
  v4 = 16LL;
  do
  {
    if ( *v3 )
      VidSchiMarkFlipQueuesRunningStateOnPresentInfo(a1, *v3, 0);
    ++v3;
    --v4;
  }
  while ( v4 );
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1136), 1u);
  do
  {
    if ( *v1 )
      VidSchiFlushPendingHWSubmittedFlips(a1, *v1);
    ++v1;
    --v2;
  }
  while ( v2 );
  ExReleaseResourceLite((PERESOURCE)(a1 + 1136));
}
