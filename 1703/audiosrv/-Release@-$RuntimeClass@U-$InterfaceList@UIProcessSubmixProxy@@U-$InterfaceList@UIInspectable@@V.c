/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIProcessSubmixProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900
 * Callers:
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800086F0 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180009F00 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ??$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@$$QEAPEAUPROCESS_SUBMIX_DESCRIPTOR@@$$QEAPEAUIStreamGroupProxy@@AEAK@Z @ 0x18002DC64 (--$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEA.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIProcessSubmixProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180058580 (-Release@-$RuntimeClass@U-$InterfaceList@UIProcessSubmixProxy@@U-$InterfaceList@UII_ea_180058580.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIProcessSubmixProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180058590 (-Release@-$RuntimeClass@U-$InterfaceList@UIProcessSubmixProxy@@U-$InterfaceList@UII_ea_180058590.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIProcessSubmixProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800585A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIProcessSubmixProxy@@U-$InterfaceList@UII_ea_1800585A0.c)
 * Callees:
 *     ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x180008090 (--_GCProcessSubmixProxy@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
        CProcessSubmixProxy *this,
        __int64 a2)
{
  signed __int64 v2; // rax
  CProcessSubmixProxy *v3; // r8
  unsigned __int32 v4; // ebx
  signed __int64 v6; // rtt
  CProcessSubmixProxy *(__fastcall *v7)(CProcessSubmixProxy *, char); // rax

  v2 = *((_QWORD *)this + 5);
  v3 = this;
  while ( v2 >= 0 )
  {
    v4 = v2 - 1;
    v6 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v2 - 1, v2);
    if ( v6 == v2 )
      goto LABEL_4;
  }
  v4 = _InterlockedDecrement((volatile signed __int32 *)(2 * v2 + 16));
LABEL_4:
  if ( !v4 )
  {
    if ( this )
    {
      v7 = *(CProcessSubmixProxy *(__fastcall **)(CProcessSubmixProxy *, char))(*(_QWORD *)this + 48LL);
      if ( v7 == CProcessSubmixProxy::`scalar deleting destructor' )
        CProcessSubmixProxy::`scalar deleting destructor'(this, 1);
      else
        ((void (__fastcall *)(CProcessSubmixProxy *, __int64, CProcessSubmixProxy *))v7)(this, 1LL, this);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(CAudioDGProcess *, __int64, CProcessSubmixProxy *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        a2,
        v3);
  }
  return v4;
}
