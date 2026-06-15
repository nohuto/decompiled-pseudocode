/*
 * XREFs of _CAudioStream::RecalculateVolume_::_1_::dtor$19 @ 0x180069F8C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::RecalculateVolume_::_1_::dtor_19(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 68) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 68) &= ~1u;
    return std::ios::~ios<char,std::char_traits<char>>(a2 + 296);
  }
  return result;
}
