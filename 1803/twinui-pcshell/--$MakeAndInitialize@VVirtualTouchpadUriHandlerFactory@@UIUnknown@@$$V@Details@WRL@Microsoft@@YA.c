/*
 * XREFs of ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180223FEC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802245C0 (-CreateInstance@-$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?AddRef@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18008DCA0 (-AddRef@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18008DCF0 (-Release@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@UIClassFactory@@VNil@Details@23@V5623@V5623@V5623@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18008DDE4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@UIClassFactory@@VNil@D.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0VirtualTouchpadUriHandlerFactory@@QEAA@XZ @ 0x180224300 (--0VirtualTouchpadUriHandlerFactory@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVirtualTouchpadUriHandlerFactory@@@WRL@Microsoft@@QEAAXPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x1802244A0 (-Attach@-$ComPtr@VVirtualTouchpadUriHandlerFactory@@@WRL@Microsoft@@QEAAXPEAVVirtualTouchpadUriH.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualTouchpadUriHandlerFactory,IUnknown,>(__int64 *a1)
{
  VirtualTouchpadUriHandlerFactory *v2; // rax
  int CanCastTo; // edi
  VirtualTouchpadUriHandlerFactory *v4; // rax
  BOOL IsEqualGUID; // eax
  _DWORD *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  volatile int *v9; // rdx
  void (*v10)(void); // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (VirtualTouchpadUriHandlerFactory *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = VirtualTouchpadUriHandlerFactory::VirtualTouchpadUriHandlerFactory(v2);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<VirtualTouchpadUriHandlerFactory>::Attach(&v12, v4);
    *a1 = 0LL;
    IsEqualGUID = InlineIsEqualGUID(
                    &GUID_00000000_0000_0000_c000_000000000046,
                    &GUID_00000000_0000_0000_c000_000000000046);
    v7 = v12;
    v8 = v12;
    if ( IsEqualGUID )
    {
      *a1 = v12;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v8);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<6>,0,IClassFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                    v12,
                    v6);
      if ( CanCastTo >= 0 )
      {
        v10 = *(void (**)(void))(*(_QWORD *)*a1 + 8LL);
        if ( (char *)v10 == (char *)Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef )
          Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
            *a1,
            (volatile int *)Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef);
        else
          v10();
      }
    }
    if ( v7 )
      Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        v7,
        v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
