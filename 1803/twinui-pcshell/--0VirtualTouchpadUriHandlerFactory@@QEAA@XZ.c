/*
 * XREFs of ??0VirtualTouchpadUriHandlerFactory@@QEAA@XZ @ 0x180224300
 * Callers:
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180223FEC (--$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x1802240C0 (--$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800926E0 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$DefaultM.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1800FB878 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

VirtualTouchpadUriHandlerFactory *__fastcall VirtualTouchpadUriHandlerFactory::VirtualTouchpadUriHandlerFactory(
        VirtualTouchpadUriHandlerFactory *this)
{
  __int64 *v2; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>((__int64)this);
  *(_QWORD *)this = &VirtualTouchpadUriHandlerFactory::`vftable';
  v2 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  (*(void (__fastcall **)(__int64 *))(*v2 + 8))(v2);
  return this;
}
