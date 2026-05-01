/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_e17c3c341f54d35a13f5e5412be3822e_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800B0D40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e17c3c341f54d35a13f5e5412be3822e_::__lambda_e17c3c341f54d35a13f5e5412be3822e_ @ 0x1800AE094 (_lambda_e17c3c341f54d35a13f5e5412be3822e_--__lambda_e17c3c341f54d35a13f5e5412be3822e_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e17c3c341f54d35a13f5e5412be3822e_>::`vector deleting destructor'(
        __int64 *Block,
        char a2)
{
  lambda_e17c3c341f54d35a13f5e5412be3822e_::__lambda_e17c3c341f54d35a13f5e5412be3822e_(Block + 2);
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
