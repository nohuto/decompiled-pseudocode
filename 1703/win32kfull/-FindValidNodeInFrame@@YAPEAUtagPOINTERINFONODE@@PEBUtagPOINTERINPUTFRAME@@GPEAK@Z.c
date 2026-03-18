/*
 * XREFs of ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01992B0
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C0198218 (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 *     ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C0198454 (-CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z.c)
 *     ?GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0199608 (-GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0199CC4 (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C019B290 (xxxSetManipulationInputTarget.c)
 *     ?_SuppressDeadzoneContactsInFrameAndGetNext@PalmRejection@@YAPEAXPEAUtagPOINTERINPUTFRAME@@0UtagPOINT@@@Z @ 0x1C01D43EC (-_SuppressDeadzoneContactsInFrameAndGetNext@PalmRejection@@YAPEAXPEAUtagPOINTERINPUTFRAME@@0Utag.c)
 * Callees:
 *     ?FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01991B4 (-FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

struct tagPOINTERINFONODE *__fastcall FindValidNodeInFrame(
        const struct tagPOINTERINPUTFRAME *a1,
        __int16 a2,
        unsigned int *a3)
{
  struct tagPOINTERINFONODE *NodeInFrame; // rax
  __int64 v5; // r11
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  NodeInFrame = FindNodeInFrame(a1, a2, &v7);
  if ( !NodeInFrame || !(unsigned int)IsPointerInfoNodeValid(NodeInFrame) )
    return 0LL;
  if ( a3 )
    *a3 = v7;
  return (struct tagPOINTERINFONODE *)v5;
}
