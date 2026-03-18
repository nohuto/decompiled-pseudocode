/*
 * XREFs of ExMapHandleToPointer @ 0x1404B7800
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     ObpCloseHandle @ 0x1404B5E0C (ObpCloseHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404B6ACC (RtlpAtomMapAtomToHandleEntry.c)
 *     PspClearProcessThreadCidRefs @ 0x1404B7BE4 (PspClearProcessThreadCidRefs.c)
 *     ObQueryObjectAuditingByHandle @ 0x1404B8520 (ObQueryObjectAuditingByHandle.c)
 *     PspThreadDelete @ 0x140511DD0 (PspThreadDelete.c)
 *     ExMapHandleToPointerEx @ 0x140512180 (ExMapHandleToPointerEx.c)
 *     RtlpFreeHandleForAtom @ 0x140547F54 (RtlpFreeHandleForAtom.c)
 *     ObSetHandleAttributes @ 0x140560C10 (ObSetHandleAttributes.c)
 *     RtlpInsertStringAtom @ 0x140571CA4 (RtlpInsertStringAtom.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x14003EC38 (ExLockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1405A4D70 (ExpLookupHandleTableEntry.c)
 */

_QWORD *__fastcall ExMapHandleToPointer(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r9
  _QWORD *v4; // rbx

  if ( (a2 & 0x3FC) != 0
    && (v2 = (_QWORD *)ExpLookupHandleTableEntry(a1, a2), (v4 = v2) != 0LL)
    && ExLockHandleTableEntry(v3, v2) )
  {
    return v4;
  }
  else
  {
    return 0LL;
  }
}
