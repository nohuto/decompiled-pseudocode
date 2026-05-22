/*
 * XREFs of ?DeliverInput@MagnifierTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x1800A6A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MagnifierTarget::DeliverInput(__int64 a1, struct InputInfo *a2)
{
  return MagnifierTarget::DeliverInput((SessionBasedPointerDeviceArbitration **)(a1 - 8), a2);
}
