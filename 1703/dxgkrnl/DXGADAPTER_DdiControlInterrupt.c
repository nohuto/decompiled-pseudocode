/*
 * XREFs of DXGADAPTER_DdiControlInterrupt @ 0x1C0002930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DXGADAPTER_DdiControlInterrupt(DXGADAPTER *a1, enum _DXGK_INTERRUPT_TYPE a2, unsigned __int8 a3)
{
  return DXGADAPTER::DdiControlInterrupt(a1, a2, a3);
}
