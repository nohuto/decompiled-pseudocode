/*
 * XREFs of _CAudioStream::RecalculateVolume_::_1_::dtor$11 @ 0x18005A708
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::RecalculateVolume_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return std::ios::~ios<char,std::char_traits<char>>(a2 + 408);
  }
  return result;
}
