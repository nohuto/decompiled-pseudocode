/*
 * XREFs of _lambda_639d6738ffd80580db82ce4ed229ae7f_::_lambda_639d6738ffd80580db82ce4ed229ae7f_ @ 0x180138358
 * Callers:
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180138C10 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 *__fastcall lambda_639d6738ffd80580db82ce4ed229ae7f_::_lambda_639d6738ffd80580db82ce4ed229ae7f_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  *a1 = *a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
  v5 = *a3;
  a1[1] = *a3;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 64);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 64), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      return a1;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v6 + 16),
      (volatile int *)v5);
  }
  return a1;
}
