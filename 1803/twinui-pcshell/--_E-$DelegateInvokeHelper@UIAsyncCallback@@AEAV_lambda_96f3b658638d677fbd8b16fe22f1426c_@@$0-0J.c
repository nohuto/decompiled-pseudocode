/*
 * XREFs of ??_E?$DelegateInvokeHelper@UIAsyncCallback@@AEAV_lambda_96f3b658638d677fbd8b16fe22f1426c_@@$0?0J@?$DelegateArgTraits@P8IAsyncCallback@@EAAJJ@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000BAB0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800083E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (IAsyncCallback::*)(long)>::DelegateInvokeHelper<IAsyncCallback,_lambda_96f3b658638d677fbd8b16fe22f1426c_ &,-1,long>::`vector deleting destructor'(
        void **a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
