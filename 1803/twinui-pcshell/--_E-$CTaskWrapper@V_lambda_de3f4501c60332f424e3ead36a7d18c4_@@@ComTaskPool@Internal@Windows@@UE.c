/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_de3f4501c60332f424e3ead36a7d18c4_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180071710
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_de3f4501c60332f424e3ead36a7d18c4_::__lambda_de3f4501c60332f424e3ead36a7d18c4_ @ 0x180071640 (_lambda_de3f4501c60332f424e3ead36a7d18c4_--__lambda_de3f4501c60332f424e3ead36a7d18c4_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de3f4501c60332f424e3ead36a7d18c4_>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  lambda_de3f4501c60332f424e3ead36a7d18c4_::__lambda_de3f4501c60332f424e3ead36a7d18c4_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
