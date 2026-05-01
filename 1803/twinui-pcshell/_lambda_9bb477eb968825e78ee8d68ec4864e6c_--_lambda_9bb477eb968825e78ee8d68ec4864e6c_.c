/*
 * XREFs of _lambda_9bb477eb968825e78ee8d68ec4864e6c_::_lambda_9bb477eb968825e78ee8d68ec4864e6c_ @ 0x1801AC0DC
 * Callers:
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemEventArgs@@@Z @ 0x1801AA49C (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArg.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 *__fastcall lambda_9bb477eb968825e78ee8d68ec4864e6c_::_lambda_9bb477eb968825e78ee8d68ec4864e6c_(
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
    v6 = *(_QWORD *)(v5 + 80);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 80), v6 + 1, v6);
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
