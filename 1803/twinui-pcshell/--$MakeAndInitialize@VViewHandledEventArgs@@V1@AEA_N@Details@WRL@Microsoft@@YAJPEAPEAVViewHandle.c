/*
 * XREFs of ??$MakeAndInitialize@VViewHandledEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandledEventArgs@@AEA_N@Z @ 0x1801EEAA4
 * Callers:
 *     ?OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180052E80 (-OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledR.c)
 *     ?OnBackComplete@WindowWrapperBase@@AEAAX_N@Z @ 0x1801F2AB0 (-OnBackComplete@WindowWrapperBase@@AEAAX_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0ViewHandledEventArgs@@QEAA@XZ @ 0x1801E44FC (--0ViewHandledEventArgs@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@Z @ 0x1801E4C40 (-Attach@-$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVC.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801E5C98 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHandledEventArgs,ViewHandledEventArgs,bool &>(
        _QWORD *a1,
        _BYTE *a2)
{
  unsigned int v2; // ebx
  ViewHandledEventArgs *v5; // rax
  ViewHandledEventArgs *v6; // rax
  __int64 v7; // rcx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  ViewHandledEventArgs *v12; // [rsp+40h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v5 = (ViewHandledEventArgs *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v5;
  if ( v5 )
  {
    v6 = ViewHandledEventArgs::ViewHandledEventArgs(v5);
    v11 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::ChainLinkEventArgs>::Attach(&v11, (__int64)v6);
    v7 = v11;
    *(_BYTE *)(v11 + 64) = *a2;
    v8 = *(_QWORD *)(v7 + 56);
    while ( v8 >= 0 )
    {
      if ( (_DWORD)v8 != 0x7FFFFFFF )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 56), v8 + 1, v8);
        if ( v9 != v8 )
          continue;
      }
      goto LABEL_9;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v8 + 16),
      (volatile int *)((unsigned __int64)v8 >> 63));
LABEL_9:
    *a1 = v11;
    Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
