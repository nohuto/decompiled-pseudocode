/*
 * XREFs of ??_E?$CDelayedOperation@V_lambda_a3dacda60d197dca336493a83fab45ae_@@@CDelayIAMOperations@@UEAAPEAXI@Z @ 0x180105160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall CDelayIAMOperations::CDelayedOperation<_lambda_a3dacda60d197dca336493a83fab45ae_>::`vector deleting destructor'(
        void **a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(a1 + 2);
  *a1 = &CDelayIAMOperations::COperation::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
