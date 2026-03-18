/*
 * XREFs of PipProcessEnumeratedChildDevice @ 0x1405D1B3C
 * Callers:
 *     PipEnumerateCompleted @ 0x1405D1930 (PipEnumerateCompleted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PpDevNodeInsertIntoTree @ 0x140147B9C (PpDevNodeInsertIntoTree.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     PipAllocateDeviceNode @ 0x1405DC620 (PipAllocateDeviceNode.c)
 *     PpProfileCancelTransitioningDock @ 0x140731DEC (PpProfileCancelTransitioningDock.c)
 */

void __fastcall PipProcessEnumeratedChildDevice(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rsi
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rsi
  int v8; // ebp
  __int64 v9; // rcx
  _WORD *v10; // rcx
  __int64 v11; // rcx
  unsigned __int16 *v12; // rsi
  __int64 v13; // rdx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 312);
  if ( (*(_DWORD *)(v2 + 32) & 2) != 0 )
  {
    IoAddTriageDumpDataBlock(a2, *(unsigned __int16 *)(a2 + 2));
    v9 = *(_QWORD *)(a2 + 8);
    if ( v9 )
    {
      IoAddTriageDumpDataBlock(v9, *(__int16 *)(v9 + 2));
      v10 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((int)v10, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
      }
    }
    v11 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( v11 )
    {
      v12 = (unsigned __int16 *)(v11 + 40);
      IoAddTriageDumpDataBlock(v11, 728);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((int)v12, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v12 + 1), *v12);
      }
      v13 = *(_QWORD *)(a2 + 312);
      v14 = (_WORD *)(*(_QWORD *)(v13 + 40) + 56LL);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((int)v14, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
        v13 = *(_QWORD *)(a2 + 312);
      }
      v15 = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 16LL);
      if ( v15 )
      {
        v16 = (_WORD *)(v15 + 56);
        if ( *v16 )
        {
          IoAddTriageDumpDataBlock((int)v16, 2);
          v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), *(unsigned __int16 *)(v17 + 56));
        }
      }
    }
    KeBugCheckEx(0xCAu, 4uLL, a2, 0LL, 0LL);
  }
  v5 = *(_QWORD *)(v2 + 40);
  v18 = v5;
  if ( v5 )
  {
    PipSetDevNodeFlags(v5, 16LL);
    if ( *(_DWORD *)(v5 + 568) == 4 )
      PpProfileCancelTransitioningDock(v5);
    goto LABEL_5;
  }
  v6 = PipAllocateDeviceNode(a2, &v18);
  v7 = v18;
  v8 = v6;
  if ( !v18 )
  {
LABEL_5:
    ObfDereferenceObject((PVOID)a2);
    return;
  }
  PipSetDevNodeFlags(v18, 16LL);
  *(_DWORD *)(a2 + 48) |= 0x1000u;
  PpDevNodeInsertIntoTree(a1, v7);
  if ( v8 == -1073740946 )
    PipSetDevNodeProblem(v7, 49, -1073740946);
}
