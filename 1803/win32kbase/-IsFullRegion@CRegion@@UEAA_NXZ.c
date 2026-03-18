/*
 * XREFs of ?IsFullRegion@CRegion@@UEAA_NXZ @ 0x1C00C25C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRegion::IsFullRegion(CRegion *this)
{
  return *((_DWORD *)this + 3) == 1;
}
