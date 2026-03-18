/*
 * XREFs of ExMapHandleToPointer @ 0x1404D4D40
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     RtlpInsertStringAtom @ 0x140489C88 (RtlpInsertStringAtom.c)
 *     ObpCloseHandle @ 0x1404D4BEC (ObpCloseHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404D4CAC (RtlpAtomMapAtomToHandleEntry.c)
 *     PspClearProcessThreadCidRefs @ 0x1404D5438 (PspClearProcessThreadCidRefs.c)
 *     PspThreadDelete @ 0x1404FBC50 (PspThreadDelete.c)
 *     ExMapHandleToPointerEx @ 0x1404FBFD4 (ExMapHandleToPointerEx.c)
 *     ObSetHandleAttributes @ 0x140571D00 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x140572530 (ObQueryObjectAuditingByHandle.c)
 *     RtlpFreeHandleForAtom @ 0x14057CDB4 (RtlpFreeHandleForAtom.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1404B1720 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14059D508 (ExpBlockOnLockedHandleEntry.c)
 */

signed __int64 *__fastcall ExMapHandleToPointer(unsigned int *a1, __int64 a2)
{
  signed __int64 *v3; // rbx
  signed __int64 v4; // r8

  if ( (a2 & 0x3FC) == 0 )
    return 0LL;
  v3 = (signed __int64 *)ExpLookupHandleTableEntry(a1, a2);
  if ( !v3 )
    return 0LL;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v3);
      v4 = *v3;
      if ( (*v3 & 1) != 0 )
        break;
      if ( !v4 )
        return 0LL;
      ExpBlockOnLockedHandleEntry(a1, v3, v4);
    }
  }
  while ( v4 != _InterlockedCompareExchange64(v3, v4 - 1, v4) );
  return v3;
}
