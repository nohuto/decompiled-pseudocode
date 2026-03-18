/*
 * XREFs of ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C01A40F8
 * Callers:
 *     ?DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01A4B5C (-DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     ?CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C01A3D6C (-CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOAL.c)
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C01A3DBC (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 *     ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C01A3FFC (-CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z.c)
 *     ?FindNodeQueuedMessage@@YAPEAUtagQMSG@@PEBUtagPOINTERINFONODE@@HPEAPEAUtagQ@@@Z @ 0x1C01A4D6C (-FindNodeQueuedMessage@@YAPEAUtagQMSG@@PEBUtagPOINTERINFONODE@@HPEAPEAUtagQ@@@Z.c)
 *     ?GetCoalesceInfo@@YAPEAUtagPOINTERCOALESCEINFO@@K@Z @ 0x1C01A4FF8 (-GetCoalesceInfo@@YAPEAUtagPOINTERCOALESCEINFO@@K@Z.c)
 *     ?IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01A52A8 (-IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

struct tagPOINTERCOALESCEINFO *__fastcall CoalesceQFrames(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagPOINTERQFRAME *a2,
        struct tagPOINTERINPUTFRAME *a3)
{
  struct tagPOINTERCOALESCEINFO *result; // rax
  __int64 v7; // r13
  __int64 v8; // rbx
  int v9; // r14d
  unsigned int v10; // edi
  unsigned int v11; // esi
  int v12; // edx
  const struct tagPOINTERINFONODE *v13; // rcx
  struct tagQMSG *NodeQueuedMessage; // rax
  int v15; // r14d
  unsigned int v16; // r8d
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // r13d
  __int64 v20; // r12
  unsigned int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // [rsp+38h] [rbp-40h]
  int v26; // [rsp+88h] [rbp+10h] BYREF
  struct tagPOINTERINPUTFRAME *v27; // [rsp+90h] [rbp+18h]
  struct tagQ *v28; // [rsp+98h] [rbp+20h] BYREF

  v27 = a3;
  result = GetCoalesceInfo(*((_DWORD *)a2 + 4));
  v25 = (__int64)result;
  v7 = (__int64)result;
  if ( !result )
    return result;
  v8 = *((_QWORD *)a1 + 11);
  v9 = 0;
  v10 = 0;
  v11 = 1;
  v26 = 1;
  if ( !*((_DWORD *)a1 + 10) )
  {
LABEL_20:
    v11 = 0;
    v15 = 19;
    goto LABEL_21;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v8 + 8) != *(_DWORD *)a2 )
      goto LABEL_11;
    if ( (*(_DWORD *)v8 & 0x2000) != 0 || (unsigned int)IsNodeFullyReleased((const struct tagPOINTERINFONODE *)v8) )
      break;
    NodeQueuedMessage = FindNodeQueuedMessage(v13, v12, &v28);
    if ( !NodeQueuedMessage )
    {
      v11 = 0;
      v15 = 15;
      goto LABEL_36;
    }
    if ( !*((_QWORD *)NodeQueuedMessage + 1) )
    {
      v11 = 0;
      v15 = 18;
      goto LABEL_36;
    }
    *(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL * *(unsigned int *)(v7 + 4)) = v28;
    *(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL * (unsigned int)(*(_DWORD *)(v7 + 4))++ + 8) = NodeQueuedMessage;
    v11 = CanCoalesceNodeWithPrevious(
            a3,
            (const struct tagPOINTERINFONODE *)v8,
            NodeQueuedMessage,
            a2,
            (enum tagPOINTERCOALESCE *)&v26);
    if ( !v11 )
      goto LABEL_19;
    v9 = 1;
LABEL_11:
    ++v10;
    v8 += 216LL;
    if ( v10 >= *((_DWORD *)a1 + 10) )
      goto LABEL_16;
  }
  if ( (unsigned int)CanCoalesceIgnoreNode(a3, (const struct tagPOINTERINFONODE *)v8, (enum tagPOINTERCOALESCE *)&v26) )
    goto LABEL_11;
  v11 = 0;
LABEL_16:
  if ( !v11 )
  {
LABEL_19:
    v15 = v26;
    goto LABEL_36;
  }
  if ( !v9 )
    goto LABEL_20;
  v15 = v26;
LABEL_21:
  v16 = v11;
  if ( v11 )
  {
    v17 = *((_DWORD *)a2 + 4);
    v18 = *(_DWORD *)(*((_QWORD *)a2 + 4) + 16LL);
    if ( v17 != v18 )
      v15 = 17;
    v11 = 0;
    if ( v17 == v18 )
      v11 = v16;
    LODWORD(v28) = v11;
    if ( v11 )
    {
      EtwTraceBeginPointerFrameCoalesce(*((unsigned int *)a1 + 8), *((unsigned int *)a1 + 10), 1LL);
      v26 = 0;
      v19 = 0;
      v20 = *((_QWORD *)a1 + 11);
      if ( *((_DWORD *)a1 + 10) )
      {
        v21 = v26;
        do
        {
          if ( *(_DWORD *)(v20 + 8) == *(_DWORD *)a2
            && (*(_DWORD *)v20 & 0x2000) == 0
            && !(unsigned int)IsNodeFullyReleased((const struct tagPOINTERINFONODE *)v20) )
          {
            v22 = *(_QWORD *)(v25 + 8);
            v23 = *(_QWORD *)(v22 + 16LL * v21);
            v24 = *(_QWORD *)(v22 + 16LL * v21 + 8);
            CoalesceNodeWithPrevious(a1, v27, (struct tagPOINTERINFONODE *)v20, v19, 1);
            DelQEntry((_QWORD *)(v23 + 24), v24);
            ++v21;
          }
          ++v19;
          v20 += 216LL;
        }
        while ( v19 < *((_DWORD *)a1 + 10) );
        v11 = (unsigned int)v28;
      }
      EtwTraceEndPointerFrameCoalesce(*((unsigned int *)a1 + 8), *((unsigned int *)a1 + 10), 1LL);
    }
  }
LABEL_36:
  *((_DWORD *)a2 + 7) = v15;
  result = (struct tagPOINTERCOALESCEINFO *)v11;
  *((_DWORD *)a2 + 5) = *((_DWORD *)a2 + 5) & 0xFFFFFFF9 | (2 * ((2 * (v11 & 1)) | v11 & 1));
  return result;
}
