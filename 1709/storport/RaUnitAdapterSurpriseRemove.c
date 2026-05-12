/*
 * XREFs of RaUnitAdapterSurpriseRemove @ 0x1C000E510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitAdapterSurpriseRemove(__int64 a1)
{
  *(_BYTE *)(a1 + 152) &= ~4u;
  return 0LL;
}
