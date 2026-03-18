/*
 * XREFs of DeleteMaybeSpecialRgn @ 0x1C00435C0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 */

__int64 __fastcall DeleteMaybeSpecialRgn(HBRUSH a1)
{
  __int64 result; // rax

  if ( (unsigned __int64)a1 > 2 )
    return GreDeleteObject(a1);
  return result;
}
