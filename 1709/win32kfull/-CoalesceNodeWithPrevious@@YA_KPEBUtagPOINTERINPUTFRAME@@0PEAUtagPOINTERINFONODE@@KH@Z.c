/*
 * XREFs of ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C01A3FFC
 * Callers:
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C01A40F8 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C01A5EFC (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 * Callees:
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C01A4E28 (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F648C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

unsigned __int64 __fastcall CoalesceNodeWithPrevious(
        const struct tagPOINTERINPUTFRAME *a1,
        const struct tagPOINTERINPUTFRAME *a2,
        struct tagPOINTERINFONODE *a3,
        int a4,
        int a5)
{
  struct tagPOINTERINFONODE *ValidNodeInFrame; // rax
  int v9; // ecx
  struct tagPOINTERINFONODE *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // r8d
  int v14; // ecx
  int v15; // edx
  unsigned int v17; // [rsp+48h] [rbp+20h] BYREF

  ValidNodeInFrame = FindValidNodeInFrame(a2, *((_WORD *)a3 + 30), &v17);
  v9 = *((_DWORD *)a1 + 8);
  v10 = ValidNodeInFrame;
  v11 = *((_QWORD *)a3 + 2);
  v12 = *((_QWORD *)ValidNodeInFrame + 2);
  *(_DWORD *)(v12 + 32) = a4;
  *(_DWORD *)(v12 + 28) = v9;
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 36) & 0x20) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v12 + 24), 1u);
      *(_DWORD *)(v12 + 36) |= 0x20u;
      ++*(_BYTE *)(v12 + 49);
      PointerList::UnreferenceMsgData(v11, 1LL);
    }
    *(_DWORD *)(v11 + 36) |= 0x10u;
  }
  v13 = a5;
  *((_QWORD *)a3 + 2) = *((_QWORD *)v10 + 2);
  *((_DWORD *)a3 + 31) = *((_DWORD *)v10 + 31) + 1;
  *((_DWORD *)a3 + 52) = v17;
  if ( !v13 )
  {
    *(_DWORD *)a3 |= 0x80000u;
    v14 = *(_DWORD *)a3 ^ (*(_DWORD *)a3 ^ *(_DWORD *)v10) & 0x100000;
    *(_DWORD *)a3 = v14;
    v15 = v14 ^ (v14 ^ *(_DWORD *)v10) & 0x200000;
    *(_DWORD *)a3 = v15;
    *(_DWORD *)a3 = v15 ^ (v15 ^ *(_DWORD *)v10) & 0x400000;
  }
  *(_DWORD *)v10 |= 2u;
  EtwTracePointerCoalesce(*((unsigned __int16 *)a3 + 24), *((unsigned __int16 *)a3 + 30));
  return *((_QWORD *)a3 + 2);
}
