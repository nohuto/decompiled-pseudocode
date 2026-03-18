/*
 * XREFs of ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C0198548
 * Callers:
 *     ?DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C0198FFC (-DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     ?CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C01981C8 (-CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOAL.c)
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C0198218 (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 *     ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C0198454 (-CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z.c)
 *     ?FindNodeQueuedMessage@@YAPEAUtagQMSG@@PEBUtagPOINTERINFONODE@@HPEAPEAUtagQ@@@Z @ 0x1C01991F4 (-FindNodeQueuedMessage@@YAPEAUtagQMSG@@PEBUtagPOINTERINFONODE@@HPEAPEAUtagQ@@@Z.c)
 *     ?IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01996E4 (-IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall CoalesceQFrames(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagPOINTERQFRAME *a2,
        struct tagPOINTERINPUTFRAME *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r13d
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  __int64 v11; // rbx
  int v12; // r14d
  unsigned int v13; // edi
  int v14; // edx
  const struct tagPOINTERINFONODE *v15; // rcx
  struct tagQMSG *NodeQueuedMessage; // rax
  int v17; // r14d
  __int64 v18; // r12
  unsigned int v19; // r14d
  __int64 v20; // rdi
  __int64 v21; // rbx
  struct tagQ *v22; // [rsp+30h] [rbp-48h] BYREF
  int v23; // [rsp+88h] [rbp+10h]
  int v25; // [rsp+98h] [rbp+20h] BYREF

  v3 = *((unsigned int *)a2 + 4);
  v4 = 0;
  result = qword_1C0330458;
  dword_1C0330454 = 0;
  if ( gPointerCoalesceInfo < (unsigned int)v3 )
  {
    if ( qword_1C0330458 )
    {
      Win32FreePool(qword_1C0330458);
      result = 0LL;
      gPointerCoalesceInfo = 0;
      qword_1C0330458 = 0LL;
    }
    if ( (_DWORD)v3 )
    {
      v9 = 16 * v3;
      if ( (unsigned __int64)(16 * v3) <= 0xFFFFFFFF )
      {
        if ( v9 )
        {
          result = Win32AllocPoolZInit(v9, 1885631317LL);
          qword_1C0330458 = result;
          gPointerCoalesceInfo = v3;
        }
      }
    }
  }
  if ( !result )
    return result;
  v10 = 1;
  v11 = *((_QWORD *)a1 + 11);
  v12 = 0;
  v23 = 1;
  v13 = 0;
  v25 = 1;
  if ( !*((_DWORD *)a1 + 10) )
    goto LABEL_28;
  while ( 1 )
  {
    if ( *(_DWORD *)(v11 + 8) == *(_DWORD *)a2 )
    {
      if ( (*(_DWORD *)v11 & 0x2000) == 0 && !(unsigned int)IsNodeFullyReleased((const struct tagPOINTERINFONODE *)v11) )
      {
        NodeQueuedMessage = FindNodeQueuedMessage(v15, v14, &v22);
        if ( NodeQueuedMessage )
        {
          if ( *((_QWORD *)NodeQueuedMessage + 1) )
          {
            *(_QWORD *)(qword_1C0330458 + 16LL * (unsigned int)dword_1C0330454) = v22;
            *(_QWORD *)(qword_1C0330458 + 16LL * (unsigned int)dword_1C0330454++ + 8) = NodeQueuedMessage;
            v23 = CanCoalesceNodeWithPrevious(
                    a3,
                    (const struct tagPOINTERINFONODE *)v11,
                    NodeQueuedMessage,
                    a2,
                    (enum tagPOINTERCOALESCE *)&v25);
            v10 = v23;
            if ( !v23 )
              goto LABEL_27;
            v12 = 1;
            goto LABEL_18;
          }
          v17 = 18;
        }
        else
        {
          v17 = 15;
        }
        v10 = 0;
        goto LABEL_42;
      }
      if ( !(unsigned int)CanCoalesceIgnoreNode(
                            a3,
                            (const struct tagPOINTERINFONODE *)v11,
                            (enum tagPOINTERCOALESCE *)&v25) )
        break;
    }
LABEL_18:
    ++v13;
    v11 += 216LL;
    if ( v13 >= *((_DWORD *)a1 + 10) )
      goto LABEL_24;
  }
  v10 = 0;
  v23 = 0;
LABEL_24:
  if ( !v10 )
  {
LABEL_27:
    v17 = v25;
    goto LABEL_42;
  }
  if ( !v12 )
  {
LABEL_28:
    v17 = 19;
    v23 = 0;
    v10 = 0;
    goto LABEL_29;
  }
  v17 = v25;
LABEL_29:
  v25 = v17;
  if ( v10 )
  {
    if ( *((_DWORD *)a2 + 4) != *(_DWORD *)(*((_QWORD *)a2 + 4) + 16LL) )
    {
      v17 = 17;
      v23 = 0;
      v25 = 17;
      v10 = 0;
    }
    if ( v10 )
    {
      EtwTraceBeginPointerFrameCoalesce(*((unsigned int *)a1 + 8), *((unsigned int *)a1 + 10), 1LL);
      v18 = *((_QWORD *)a1 + 11);
      if ( *((_DWORD *)a1 + 10) )
      {
        v19 = 0;
        do
        {
          if ( *(_DWORD *)(v18 + 8) == *(_DWORD *)a2
            && (*(_DWORD *)v18 & 0x2000) == 0
            && !(unsigned int)IsNodeFullyReleased((const struct tagPOINTERINFONODE *)v18) )
          {
            v20 = *(_QWORD *)(qword_1C0330458 + 16LL * v19);
            v21 = *(_QWORD *)(qword_1C0330458 + 16LL * v19 + 8);
            CoalesceNodeWithPrevious(a1, a3, (struct tagPOINTERINFONODE *)v18, v4, 1);
            DelQEntry(v20, v21, 1);
            ++v19;
          }
          ++v4;
          v18 += 216LL;
        }
        while ( v4 < *((_DWORD *)a1 + 10) );
        v10 = v23;
        v17 = v25;
      }
      EtwTraceEndPointerFrameCoalesce(*((unsigned int *)a1 + 8), *((unsigned int *)a1 + 10), 1LL);
    }
  }
LABEL_42:
  *((_DWORD *)a2 + 7) = v17;
  result = v10;
  *((_DWORD *)a2 + 5) = *((_DWORD *)a2 + 5) & 0xFFFFFFF9 | (2 * ((2 * (v10 & 1)) | v10 & 1));
  return result;
}
