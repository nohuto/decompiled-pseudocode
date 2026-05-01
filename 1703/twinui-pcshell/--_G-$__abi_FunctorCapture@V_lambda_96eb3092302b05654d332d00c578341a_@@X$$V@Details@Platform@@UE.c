/*
 * XREFs of ??_G?$__abi_FunctorCapture@V_lambda_96eb3092302b05654d332d00c578341a_@@X$$V@Details@Platform@@UEAAPEAXI@Z @ 0x18012A170
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture<_lambda_96eb3092302b05654d332d00c578341a_,void,>::`scalar deleting destructor'(
        _QWORD *Block,
        char a2)
{
  volatile signed __int32 *v4; // rcx

  v4 = (volatile signed __int32 *)Block[2];
  if ( v4 )
  {
    Block[2] = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  }
  *Block = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
