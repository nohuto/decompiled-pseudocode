/*
 * XREFs of RtlUIntAdd @ 0x1400382D0
 * Callers:
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 *     EtwpGetTraceGroupInfo @ 0x1407A5FA4 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x1407A62B4 (EtwpGetTraceGuidInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  UINT v3; // eax
  UINT v4; // edx
  NTSTATUS result; // eax

  v3 = uAugend + uAddend;
  v4 = -1;
  if ( v3 >= uAugend )
    v4 = v3;
  result = v3 < uAugend ? 0xC0000095 : 0;
  *puResult = v4;
  return result;
}
