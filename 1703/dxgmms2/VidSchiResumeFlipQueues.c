/*
 * XREFs of VidSchiResumeFlipQueues @ 0x1C00AB01C
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00942F0 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?ResumeFlipQueuesIfSuspendedForMove@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A3834 (-ResumeFlipQueuesIfSuspendedForMove@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C00262F8 (VidSchiMarkFlipQueuesRunningStateOnPresentInfo.c)
 */

void __fastcall VidSchiResumeFlipQueues(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi

  v2 = (__int64 *)(a1 + 2992);
  v3 = 16LL;
  do
  {
    if ( *v2 )
      VidSchiMarkFlipQueuesRunningStateOnPresentInfo(a1, *v2, 1);
    ++v2;
    --v3;
  }
  while ( v3 );
  VidSchiUnwaitFlipQueueUnderSchedulerSpinLock(a1);
}
