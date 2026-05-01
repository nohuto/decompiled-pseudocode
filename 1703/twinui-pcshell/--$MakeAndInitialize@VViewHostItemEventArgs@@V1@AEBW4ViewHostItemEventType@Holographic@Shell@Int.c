/*
 * XREFs of ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$T@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@@012@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEA$$T@Z @ 0x1800DEBB0
 * Callers:
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800D9E64 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA4AC (-_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA590 (-_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DAC2C (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VViewHostItemEventArgsBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DD0F0 (-Release@-$RuntimeClass@U-$InterfaceList@VViewHostItemEventArgsBase@@VNil@Details@WRL@Microsoft@.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VViewEventArgsBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DD190 (-AddRef@-$RuntimeClass@U-$InterfaceList@VViewEventArgsBase@@VNil@Details@WRL@Microsoft@@@Details.c)
 *     ??0ViewHostItemEventArgs@@QEAA@XZ @ 0x1800E0320 (--0ViewHostItemEventArgs@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHostItemEventArgs,ViewHostItemEventArgs,enum Windows::Internal::Shell::Holographic::ViewHostItemEventType const &,std::nullptr_t>(
        volatile signed __int64 **a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v4; // edi
  volatile signed __int64 *v5; // rcx
  ViewHostItemEventArgs *v8; // rax
  ViewHostItemEventArgs *v9; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rcx

  v4 = 0;
  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewHostItemEventArgsBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v5);
  }
  *a1 = 0LL;
  v8 = (ViewHostItemEventArgs *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = ViewHostItemEventArgs::ViewHostItemEventArgs(v8);
    v10 = *a3;
    v11 = (__int64)v9;
    *((_DWORD *)v9 + 8) = *a2;
    if ( *((_QWORD *)v9 + 5) != v10 )
    {
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v12 = *(_QWORD *)(v11 + 40);
      *(_QWORD *)(v11 + 40) = v10;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewEventArgsBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(v11);
    *a1 = (volatile signed __int64 *)v11;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewHostItemEventArgsBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
