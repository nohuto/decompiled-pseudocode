/*
 * XREFs of _lambda_1b6451e4c080ccabeb3922fbf3bb257d_::_lambda_1b6451e4c080ccabeb3922fbf3bb257d_ @ 0x1801B563C
 * Callers:
 *     ??$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAUITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUITitleBarChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVWin32BackedViewHostItem@@AEBQEAUITitleBarChangedEventArgs@Holographic@Shell@Internal@Windows@@@Z @ 0x1801B44E4 (--$AsyncInvokeAll@PEAVWin32BackedViewHostItem@@PEAUITitleBarChangedEventArgs@Holographic@Shell@I.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 *__fastcall lambda_1b6451e4c080ccabeb3922fbf3bb257d_::_lambda_1b6451e4c080ccabeb3922fbf3bb257d_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // r9
  __int64 *v4; // r10
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  v3 = *a2;
  v4 = a3;
  *a1 = *a2;
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 96);
    while ( v6 >= 0 )
    {
      if ( (_DWORD)v6 != 0x7FFFFFFF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 96), v6 + 1, v6);
        if ( v7 != v6 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v6 + 16),
      (volatile int *)((unsigned __int64)v6 >> 63));
  }
LABEL_8:
  a1[1] = *v4;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1 + 1);
  return a1;
}
