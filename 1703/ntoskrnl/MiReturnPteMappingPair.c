/*
 * XREFs of MiReturnPteMappingPair @ 0x140225E00
 * Callers:
 *     MiSlowRotateCopy @ 0x140214204 (MiSlowRotateCopy.c)
 *     MiCopyDirectMapHeader @ 0x1406B74BC (MiCopyDirectMapHeader.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MiReturnPteMappingPair(__int64 a1)
{
  unsigned __int8 result; // al

  result = *(_BYTE *)(a1 + 8);
  if ( result == 17 )
    return MiReleasePtes((__int64)&qword_14036D0A0, *(_QWORD **)(a1 + 16), 2u);
  __writecr8(result);
  return result;
}
