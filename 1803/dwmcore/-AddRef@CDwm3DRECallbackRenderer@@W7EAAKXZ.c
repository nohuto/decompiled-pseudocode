/*
 * XREFs of ?AddRef@CDwm3DRECallbackRenderer@@W7EAAKXZ @ 0x1800DDC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDwm3DRECallbackRenderer::AddRef(__int64 a1)
{
  return CFrictionAccelerator::AddRef((CFrictionAccelerator *)(a1 - 8));
}
