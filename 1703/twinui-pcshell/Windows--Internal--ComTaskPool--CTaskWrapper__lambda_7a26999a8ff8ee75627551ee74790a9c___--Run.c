/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7a26999a8ff8ee75627551ee74790a9c___::Run @ 0x180038AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIClassicWindowExternal@@U?$InterfaceList@UIClassicWindowContainer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180037D60 (-Release@-$RuntimeClass@U-$InterfaceList@UIClassicWindowExternal@@U-$InterfaceList@UIClassicWind.c)
 *     ??$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCClassicWindowExternal@@@12@$$QEAPEAUIClassicWindow@@@Z @ 0x180038538 (--$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCCla.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
volatile signed __int32 **__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7a26999a8ff8ee75627551ee74790a9c___::Run(
        __int64 a1)
{
  __int64 v2; // rsi
  volatile signed __int32 **result; // rax
  struct IClassicWindow *v4; // rcx
  _QWORD *v5; // rax
  struct IClassicWindow *v6; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int32 *v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 208LL))(*(_QWORD *)(a1 + 24)) )
  {
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 208LL))(*(_QWORD *)(a1 + 24));
    return (volatile signed __int32 **)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 120LL))(v2, *v5);
  }
  else
  {
    v6 = *(struct IClassicWindow **)(a1 + 24);
    result = Microsoft::WRL::Details::Make<CClassicWindowExternal,IClassicWindow *>(&v7, &v6);
    if ( v7 )
    {
      v6 = 0LL;
      result = (volatile signed __int32 **)(*(__int64 (__fastcall **)(__int64, volatile signed __int32 *, struct IClassicWindow **))(*(_QWORD *)v2 + 104LL))(
                                             v2,
                                             v7,
                                             &v6);
      if ( (int)result >= 0 )
        result = (volatile signed __int32 **)(*(__int64 (__fastcall **)(_QWORD, struct IClassicWindow *))(**(_QWORD **)(a1 + 24) + 200LL))(
                                               *(_QWORD *)(a1 + 24),
                                               v6);
      v4 = v6;
      if ( v6 )
      {
        v6 = 0LL;
        result = (volatile signed __int32 **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
    if ( v7 )
      return (volatile signed __int32 **)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IClassicWindowExternal,Microsoft::WRL::Details::InterfaceList<IClassicWindowContainer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
  }
  return result;
}
