/*
 * XREFs of SepComputeSidSignature @ 0x1404622B8
 * Callers:
 *     SepRmReferenceFindCap @ 0x140248A28 (SepRmReferenceFindCap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepComputeSidSignature(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 1LL;
  v2 = *(unsigned int *)(a1 + 4LL * ((unsigned int)*(unsigned __int8 *)(a1 + 1) - 1) + 8);
  if ( v2 )
    return (unsigned int)v2;
  return result;
}
