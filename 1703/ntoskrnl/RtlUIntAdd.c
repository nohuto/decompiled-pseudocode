/*
 * XREFs of RtlUIntAdd @ 0x14004C5F0
 * Callers:
 *     EtwpGetTraceGuidInfo @ 0x140454F48 (EtwpGetTraceGuidInfo.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     EtwpGetTraceGroupInfo @ 0x14070A0B8 (EtwpGetTraceGroupInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  UINT v3; // eax

  v3 = -1;
  if ( uAugend + uAddend >= uAugend )
    v3 = uAugend + uAddend;
  *puResult = v3;
  return uAugend + uAddend < uAugend ? 0xC0000095 : 0;
}
