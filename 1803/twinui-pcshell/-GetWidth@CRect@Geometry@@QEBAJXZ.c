/*
 * XREFs of ?GetWidth@CRect@Geometry@@QEBAJXZ @ 0x180097320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Geometry::CRect::GetWidth(Geometry::CRect *this)
{
  return (unsigned int)(*((_DWORD *)this + 2) - *(_DWORD *)this);
}
