/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_3debc4ca9d8e656fb3713c45e37949b6_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801C0F10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_ @ 0x1801C0740 (_lambda_ebd42d67d4ed24c24d65003e6952ebf6_--__lambda_ebd42d67d4ed24c24d65003e6952ebf6_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_3debc4ca9d8e656fb3713c45e37949b6_>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x190);
  return a1;
}
