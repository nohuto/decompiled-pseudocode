/*
 * XREFs of ??1?$ComPtr@VCClassicWindowExternal@@@WRL@Microsoft@@QEAA@XZ @ 0x180037964
 * Callers:
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7a26999a8ff8ee75627551ee74790a9c___::Run_::_1_::dtor$0 @ 0x18019956F (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7a26999a8ff8ee75627551ee74790a9c___--Run_-.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIClassicWindowExternal@@U?$InterfaceList@UIClassicWindowContainer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180037D60 (-Release@-$RuntimeClass@U-$InterfaceList@UIClassicWindowExternal@@U-$InterfaceList@UIClassicWind.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CClassicWindowExternal>::~ComPtr<CClassicWindowExternal>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IClassicWindowExternal,Microsoft::WRL::Details::InterfaceList<IClassicWindowContainer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
