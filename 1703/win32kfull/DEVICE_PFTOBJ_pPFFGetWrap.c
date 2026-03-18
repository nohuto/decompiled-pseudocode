/*
 * XREFs of DEVICE_PFTOBJ_pPFFGetWrap @ 0x1C024A460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
struct PFF *__fastcall DEVICE_PFTOBJ_pPFFGetWrap(DEVICE_PFTOBJ *this, unsigned __int64 a2, struct PFF ***a3)
{
  return DEVICE_PFTOBJ::pPFFGet(this, a2, a3);
}
