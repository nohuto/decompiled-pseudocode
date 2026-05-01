/*
 * XREFs of ??_E?$__abi_FunctorCapture@V_lambda_59c80d91275ef09dee0ea9ccd3ec1c84_@@XPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Details@Platform@@UEAAPEAXI@Z @ 0x18011F050
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture<_lambda_59c80d91275ef09dee0ea9ccd3ec1c84_,void,Windows::UI::Xaml::Window __gc *,HWND__ *>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rcx

  v4 = Block[2];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (volatile signed __int32 *)Block[1];
  if ( v5 )
  {
    Block[1] = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  }
  *Block = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
