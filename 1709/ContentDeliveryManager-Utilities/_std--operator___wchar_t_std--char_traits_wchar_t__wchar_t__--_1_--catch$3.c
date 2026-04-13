/*
 * XREFs of _std::operator___wchar_t_std::char_traits_wchar_t__wchar_t__::_1_::catch$3 @ 0x1800BCA61
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800B4273 (_CxxThrowException_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::operator___wchar_t_std::char_traits_wchar_t__wchar_t__::_1_::catch_3(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // ecx

  v2 = *(_QWORD *)(a2 + 192) + *(int *)(**(_QWORD **)(a2 + 192) + 4LL);
  v3 = *(_DWORD *)(v2 + 16) | 4;
  v4 = v3 & 0x17;
  *(_DWORD *)(v2 + 16) = v4;
  if ( (v4 & *(_DWORD *)(v2 + 20)) != 0 )
    throw;
  return &loc_1800946B7;
}
