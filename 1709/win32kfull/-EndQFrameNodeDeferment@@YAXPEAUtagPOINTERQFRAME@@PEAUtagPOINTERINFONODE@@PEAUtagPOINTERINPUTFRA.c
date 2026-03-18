/*
 * XREFs of ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C01A4C18
 * Callers:
 *     ?_AdjustEdgyFrameHwndWorker@Edgy@@YAXQEAXUtagINPUTDEST@@@Z @ 0x1C01D1BD4 (-_AdjustEdgyFrameHwndWorker@Edgy@@YAXQEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     GetInputDelegate @ 0x1C009ECC8 (GetInputDelegate.c)
 *     ?InitializeQFrameCoalesceState@@YAXPEAUtagPOINTERQFRAME@@H@Z @ 0x1C01A5274 (-InitializeQFrameCoalesceState@@YAXPEAUtagPOINTERQFRAME@@H@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01A579C (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C01A5EFC (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01A61D4 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

void __fastcall EndQFrameNodeDeferment(
        struct tagPOINTERQFRAME *a1,
        struct tagPOINTERINFONODE *a2,
        struct _LIST_ENTRY **a3,
        __int64 a4)
{
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *v7; // rbx
  __int64 v8; // r10
  struct tagPOINTERINFONODE *v9; // r10

  v4 = *a3;
  if ( *a3 == &gFrameListHead )
    goto LABEL_7;
  do
  {
    v7 = v4;
    if ( v4[3].Blink == a3[7] )
      break;
    v4 = v4->Flink;
  }
  while ( v4 != &gFrameListHead );
  if ( v4 == &gFrameListHead || HIDWORD(v7[2].Blink) == LODWORD(v7[2].Blink) )
LABEL_7:
    v7 = 0LL;
  else
    _InterlockedIncrement((volatile signed __int32 *)&v7[2].Flink + 1);
  *((_DWORD *)a2 + 1) &= ~0x100u;
  *((_DWORD *)a3 + 18) &= ~4u;
  *((_QWORD *)a1 + 1) = a4;
  InitializeQFrameCoalesceState(a1, v7 != 0LL);
  if ( GetInputDelegate(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)(v8 + 80)), 4096) )
    *(_DWORD *)v9 |= 0x100000u;
  ProcessQFrameNode(a1, (const struct tagPOINTERINPUTFRAME *)v7, v9);
  TryCoalesceQFrame((struct tagPOINTERINPUTFRAME *)a3, (const struct tagPOINTERINPUTFRAME *)v7, a1);
  if ( v7 )
    UnreferenceFrameInt((struct tagPOINTERINPUTFRAME *)v7);
}
