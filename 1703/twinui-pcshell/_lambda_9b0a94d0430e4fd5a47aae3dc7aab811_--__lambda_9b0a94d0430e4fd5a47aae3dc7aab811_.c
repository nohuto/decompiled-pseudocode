/*
 * XREFs of _lambda_9b0a94d0430e4fd5a47aae3dc7aab811_::__lambda_9b0a94d0430e4fd5a47aae3dc7aab811_ @ 0x180129C3C
 * Callers:
 *     _CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188____::_1_::dtor$2 @ 0x1801A0A27 (_CreationThreadDispatcher--RunAsync__lambda_e5d643bc643c8a09454132ff8d011188____--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_9b0a94d0430e4fd5a47aae3dc7aab811_::__lambda_9b0a94d0430e4fd5a47aae3dc7aab811_(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(volatile signed __int32 **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  }
  return result;
}
