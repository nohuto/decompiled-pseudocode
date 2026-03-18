/*
 * XREFs of ?CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C01A3D6C
 * Callers:
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C01A40F8 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 * Callees:
 *     ?FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01A4D2C (-FindNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01A52A8 (-IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall CanCoalesceIgnoreNode(
        const struct tagPOINTERINPUTFRAME *a1,
        const struct tagPOINTERINFONODE *a2,
        enum tagPOINTERCOALESCE *a3)
{
  struct tagPOINTERINFONODE *NodeInFrame; // rax
  _DWORD *v4; // r11
  _DWORD *v6; // r11

  NodeInFrame = FindNodeInFrame(a1, *((_WORD *)a2 + 30), 0LL);
  if ( !NodeInFrame )
  {
    *v4 = 3;
    return 0LL;
  }
  if ( (*(_DWORD *)NodeInFrame & 0x2000) == 0 && !(unsigned int)IsNodeFullyReleased(NodeInFrame) )
  {
    *v6 = 20;
    return 0LL;
  }
  return 1LL;
}
