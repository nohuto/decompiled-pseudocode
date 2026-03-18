/*
 * XREFs of ExMapHandleToPointer @ 0x1404FA960
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     ObQueryObjectAuditingByHandle @ 0x140428870 (ObQueryObjectAuditingByHandle.c)
 *     RtlpFreeHandleForAtom @ 0x14043139C (RtlpFreeHandleForAtom.c)
 *     ObSetHandleAttributes @ 0x14043EA90 (ObSetHandleAttributes.c)
 *     RtlpInsertStringAtom @ 0x140447F64 (RtlpInsertStringAtom.c)
 *     ExMapHandleToPointerEx @ 0x1404F6FA8 (ExMapHandleToPointerEx.c)
 *     PspThreadDelete @ 0x1404F7FA0 (PspThreadDelete.c)
 *     PspClearProcessThreadCidRefs @ 0x1404F8D74 (PspClearProcessThreadCidRefs.c)
 *     ObpCloseHandle @ 0x1404F9CCC (ObpCloseHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404FA8D4 (RtlpAtomMapAtomToHandleEntry.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1404B0F24 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x140531E20 (ExpLookupHandleTableEntry.c)
 */

__int64 *__fastcall ExMapHandleToPointer(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // r8

  if ( (a2 & 0x3FC) == 0 )
    return 0LL;
  v3 = (__int64 *)ExpLookupHandleTableEntry(a1, a2);
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
