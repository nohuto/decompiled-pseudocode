/*
 * XREFs of VidSchGetNodeOrdinal @ 0x1C00561F4
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0012370 (VidSchiDriverNodeEngineToSchedulerNode.c)
 */

__int64 __fastcall VidSchGetNodeOrdinal(__int64 a1, unsigned int a2, int a3)
{
  return VidSchiDriverNodeEngineToSchedulerNode(a1, a3, a2);
}
