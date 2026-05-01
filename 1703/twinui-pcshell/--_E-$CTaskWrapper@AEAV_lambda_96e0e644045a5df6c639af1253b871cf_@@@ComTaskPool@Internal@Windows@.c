/*
 * XREFs of ??_E?$CTaskWrapper@AEAV_lambda_96e0e644045a5df6c639af1253b871cf_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18004EBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_96e0e644045a5df6c639af1253b871cf_ &>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
