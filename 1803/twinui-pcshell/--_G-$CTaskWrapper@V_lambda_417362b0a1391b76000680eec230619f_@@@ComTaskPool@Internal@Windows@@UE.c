/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_417362b0a1391b76000680eec230619f_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18017A9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_417362b0a1391b76000680eec230619f_::__lambda_417362b0a1391b76000680eec230619f_ @ 0x18017A340 (_lambda_417362b0a1391b76000680eec230619f_--__lambda_417362b0a1391b76000680eec230619f_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_417362b0a1391b76000680eec230619f_>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  lambda_417362b0a1391b76000680eec230619f_::__lambda_417362b0a1391b76000680eec230619f_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x158);
  return a1;
}
