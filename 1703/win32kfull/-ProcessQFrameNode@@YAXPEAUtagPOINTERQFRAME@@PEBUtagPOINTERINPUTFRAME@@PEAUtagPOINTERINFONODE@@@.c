/*
 * XREFs of ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0199B78
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C0198870 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C01990A0 (-EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRA.c)
 *     xxxSetManipulationInputTarget @ 0x1C019B290 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C0198218 (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0199CC4 (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6964 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

void __fastcall ProcessQFrameNode(
        struct tagPOINTERQFRAME *a1,
        const struct tagPOINTERINPUTFRAME *a2,
        struct tagPOINTERINFONODE *a3)
{
  const struct tagPOINTERINFONODE *v6; // rcx
  _DWORD *v7; // r8
  BOOL v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // [rsp+40h] [rbp+8h] BYREF

  v8 = (unsigned int)IsManipulationThreadNode(a3) && (v7[1] & 0x200) == 0;
  if ( ((*v7 & 4) == 0 && a2 || (unsigned int)IsManipulationThreadNode(v6)) && !v8 )
    ProcessWindowEnterLeave(a2, a3);
  v9 = *((_DWORD *)a1 + 5);
  if ( (v9 & 1) != 0 && v8 )
  {
    *((_DWORD *)a1 + 6) = 22;
    *((_DWORD *)a1 + 5) = v9 & 0xFFFFFFFE;
  }
  v10 = *((_DWORD *)a1 + 5);
  if ( (v10 & 1) != 0 && (*(_DWORD *)a3 & 1) == 0 )
  {
    *((_DWORD *)a1 + 6) = 2;
    *((_DWORD *)a1 + 5) = v10 & 0xFFFFFFFE;
  }
  v11 = *((_DWORD *)a1 + 5);
  if ( (v11 & 1) != 0 )
  {
    v12 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 8) != 0 || (v12 & 0x10) != 0 || (v12 & 0x40) != 0 || (v12 & 0x20) != 0 )
    {
      *((_DWORD *)a1 + 6) = 16;
      *((_DWORD *)a1 + 5) = v11 & 0xFFFFFFFE;
    }
  }
  v13 = *((_DWORD *)a1 + 5);
  if ( (v13 & 8) == 0 && (*(_DWORD *)a3 & 0x100000) != 0 && !v8 )
  {
    *((_DWORD *)a1 + 6) = 9;
    *((_DWORD *)a1 + 5) = v13 | 8;
  }
  v14 = *((_DWORD *)a1 + 5);
  if ( (v14 & 1) == 0 || (v14 & 8) != 0 )
    *((_DWORD *)a1 + 5) = v14 & 0xFFFFFFFD;
  if ( (*((_DWORD *)a1 + 5) & 2) != 0 )
  {
    v15 = 1;
    *((_DWORD *)a1 + 5) ^= (*((_DWORD *)a1 + 5) ^ (2
                                                 * CanCoalesceNodeWithPrevious(
                                                     a2,
                                                     a3,
                                                     0LL,
                                                     a1,
                                                     (enum tagPOINTERCOALESCE *)&v15))) & 2;
    if ( (*((_DWORD *)a1 + 5) & 2) == 0 )
      *((_DWORD *)a1 + 6) = v15;
  }
}
