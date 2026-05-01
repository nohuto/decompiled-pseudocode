/*
 * XREFs of ??_G?$DelegateInvokeHelper@UIAsyncCallback@@V_lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_@@$0?0J@?$DelegateArgTraits@P8IAsyncCallback@@EAAJJ@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18011E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_::__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_ @ 0x18011D7CC (_lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_--__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (IAsyncCallback::*)(long)>::DelegateInvokeHelper<IAsyncCallback,_lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_,-1,long>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_::__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
