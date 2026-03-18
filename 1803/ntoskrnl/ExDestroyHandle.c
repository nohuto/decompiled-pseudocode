/*
 * XREFs of ExDestroyHandle @ 0x140512040
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     AlpcpFreeMessageFunction @ 0x140511D20 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x140511DD0 (PspThreadDelete.c)
 *     RtlpFreeHandleForAtom @ 0x140547F54 (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x140571CA4 (RtlpInsertStringAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x14006F9D4 (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1405120A0 (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x1407BD7BC (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDestroyHandle(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx

  if ( *(_QWORD *)(a1 + 96) )
    ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a2, 2LL);
  v6 = ExSweepSingleHandle(a1, a3);
  ExpFreeHandleTableEntry(a1, a2, a3);
  return v6;
}
