/*
 * XREFs of ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A58E8
 * Callers:
 *     ?ProcessPointerInfoNodeEnterLeave@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A5740 (-ProcessPointerInfoNodeEnterLeave@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A579C (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     xxxSetManipulationInputTarget @ 0x1C01A6F54 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01A4E28 (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB660 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall ProcessWindowEnterLeave(const struct tagPOINTERINPUTFRAME *a1, struct tagPOINTERINFONODE *a2)
{
  __int64 v4; // rdi
  struct tagPOINTERINFONODE *v5; // r8
  struct tagPOINTERINFONODE *ValidNodeInFrame; // rax
  int v8; // ecx
  __int64 v9; // rax
  int v10; // eax

  v4 = 0LL;
  if ( a1 && (ValidNodeInFrame = FindValidNodeInFrame(a1, *((_WORD *)a2 + 30), 0LL), (v5 = ValidNodeInFrame) != 0LL) )
  {
    if ( *(char *)ValidNodeInFrame < 0 )
      v5 = 0LL;
    if ( v5 )
    {
      if ( (*(_DWORD *)v5 & 4) != 0 || (*(_DWORD *)v5 & 0x400) != 0 )
        v4 = *((_QWORD *)v5 + 10);
      else
        v4 = *((_QWORD *)v5 + 3);
    }
  }
  else if ( !(unsigned int)IsManipulationThreadNode(a2) )
  {
    return 0LL;
  }
  v8 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x400) != 0 )
    v9 = *((_QWORD *)a2 + 10);
  else
    v9 = *((_QWORD *)a2 + 3);
  if ( v4 == v9 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 1) & 0x200) != 0
    && ((v10 = *((_DWORD *)a2 + 17), (v10 & 4) != 0) || (v10 & 0x40000) != 0)
    && (v10 & 0x10000) == 0 )
  {
    *(_DWORD *)a2 = v8 | 0x40;
    if ( v5 )
    {
      *(_DWORD *)v5 |= 0x20u;
LABEL_24:
      *(_DWORD *)(*((_QWORD *)a1 + 12) + 40LL * *((unsigned int *)v5 + 2) + 20) &= ~1u;
    }
  }
  else
  {
    *(_DWORD *)a2 = v8 | 8;
    if ( v5 )
    {
      *(_DWORD *)v5 |= 0x10u;
      goto LABEL_24;
    }
  }
  return 1LL;
}
