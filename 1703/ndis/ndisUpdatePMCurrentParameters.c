/*
 * XREFs of ndisUpdatePMCurrentParameters @ 0x1C004CF7C
 * Callers:
 *     ndisFilterIndicatePMCapabilities @ 0x1C004AFD8 (ndisFilterIndicatePMCapabilities.c)
 *     ndisOpenIndicatePMCapabilities @ 0x1C004C174 (ndisOpenIndicatePMCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisUpdatePMCurrentParameters(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  a2[1] &= a1[2];
  a2[2] &= a1[7];
  result = (unsigned int)(a1[12] - 2);
  if ( (unsigned int)result > 2 )
    a2[3] &= ~1u;
  return result;
}
