/*
 * XREFs of ExDestroyHandle @ 0x1404F81FC
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     RtlpFreeHandleForAtom @ 0x14043139C (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x140447F64 (RtlpInsertStringAtom.c)
 *     AlpcpFreeMessageFunction @ 0x1404F7000 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x1404F7FA0 (PspThreadDelete.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x14008AB4C (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1404F825C (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x140717598 (ExpUpdateDebugInfo.c)
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
