/*
 * XREFs of GreDeleteDC @ 0x1C0061AC0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteDCInternal @ 0x1C0061E40 (bDeleteDCInternal.c)
 */

__int64 __fastcall GreDeleteDC(__int64 a1)
{
  return bDeleteDCInternal(a1, 1LL, 0LL);
}
