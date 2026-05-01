/*
 * XREFs of ??_G?$DelegateInvokeHelper@UIAsyncCallback@@AEAV_lambda_82653b4bf8fe7eb395fd3d07d923a539_@@$0?0J@?$DelegateArgTraits@P8IAsyncCallback@@EAAJJ@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18009D7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC88 (-InternalRelease@-$ComPtr@VCAppViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (IAsyncCallback::*)(long)>::DelegateInvokeHelper<IAsyncCallback,_lambda_82653b4bf8fe7eb395fd3d07d923a539_ &,-1,long>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
