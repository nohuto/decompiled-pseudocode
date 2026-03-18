/*
 * XREFs of ?ShouldInvalidateHardwareProtectedResource@CD3DSurface@@UEBA_NXZ @ 0x1801AAEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CD3DSurface::ShouldInvalidateHardwareProtectedResource(CD3DSurface *this)
{
  return (*((_DWORD *)this + 45) & 0x80000) != 0;
}
