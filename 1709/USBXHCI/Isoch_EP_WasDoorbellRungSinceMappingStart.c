/*
 * XREFs of Isoch_EP_WasDoorbellRungSinceMappingStart @ 0x1C0028250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Isoch_EP_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  return *(_DWORD *)(a1 + 328) & 1;
}
