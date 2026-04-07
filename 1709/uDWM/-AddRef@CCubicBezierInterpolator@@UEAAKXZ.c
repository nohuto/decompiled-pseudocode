/*
 * XREFs of ?AddRef@CCubicBezierInterpolator@@UEAAKXZ @ 0x180036DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCubicBezierInterpolator::AddRef(CCubicBezierInterpolator *this)
{
  __int64 result; // rax

  result = (unsigned int)(*((_DWORD *)this + 19) + 1);
  *((_DWORD *)this + 19) = result;
  return result;
}
