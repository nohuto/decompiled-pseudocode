/*
 * XREFs of _CAudioStream::RecalculateVolume_::_1_::dtor$10 @ 0x18003928C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::RecalculateVolume_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 72) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 72) &= ~1u;
    return std::ios::~ios<char,std::char_traits<char>>(a2 + 408);
  }
  return result;
}
