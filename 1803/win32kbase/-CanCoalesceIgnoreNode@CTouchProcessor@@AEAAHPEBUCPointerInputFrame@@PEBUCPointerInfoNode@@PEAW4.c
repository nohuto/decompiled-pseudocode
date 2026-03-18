/*
 * XREFs of ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C010D98C
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C010E970 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C011178C (-FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C011733C (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CanCoalesceIgnoreNode(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        enum CPointerCoalesce *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct CPointerInfoNode *NodeInFrame; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx

  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((CTouchProcessor *)this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  if ( (*(_DWORD *)a3 & 0x2000) == 0 && !(unsigned int)CPointerInfoNode::IsFullyReleased(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  NodeInFrame = CTouchProcessor::FindNodeInFrame((CTouchProcessor *)this, a2, *((_WORD *)a3 + 118), 0LL);
  if ( !NodeInFrame )
  {
    *(_DWORD *)a4 = 3;
    return 0LL;
  }
  if ( (*(_DWORD *)NodeInFrame & 0x2000) == 0 && !(unsigned int)CPointerInfoNode::IsFullyReleased(a3) )
  {
    *(_DWORD *)a4 = 20;
    return 0LL;
  }
  if ( *(_DWORD *)a4 != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
  return 1LL;
}
