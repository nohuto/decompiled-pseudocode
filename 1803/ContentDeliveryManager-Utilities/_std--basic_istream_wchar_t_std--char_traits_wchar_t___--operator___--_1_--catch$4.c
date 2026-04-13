/*
 * XREFs of _std::basic_istream_wchar_t_std::char_traits_wchar_t___::operator___::_1_::catch$4 @ 0x1800C83DB
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800C10B3 (_CxxThrowException_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::basic_istream_wchar_t_std::char_traits_wchar_t___::operator___::_1_::catch_4(
        __int64 a1,
        __int64 a2)
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
  return &loc_18008B4EE;
}
