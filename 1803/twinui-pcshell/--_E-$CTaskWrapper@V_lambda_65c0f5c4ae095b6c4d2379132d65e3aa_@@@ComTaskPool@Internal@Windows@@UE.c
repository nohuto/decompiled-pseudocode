/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_65c0f5c4ae095b6c4d2379132d65e3aa_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800A2220
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_65c0f5c4ae095b6c4d2379132d65e3aa_>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  std::wstring::_Tidy_deallocate((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
