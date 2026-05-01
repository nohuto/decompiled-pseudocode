/*
 * XREFs of _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$11 @ 0x1801EDDE1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 84) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 84) &= ~1u;
    return std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(a2 + 296);
  }
  return result;
}
