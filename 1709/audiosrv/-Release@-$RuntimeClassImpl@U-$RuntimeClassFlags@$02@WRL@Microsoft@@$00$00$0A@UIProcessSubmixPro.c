/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000CCF0
 * Callers:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18000D260 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ??$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@$$QEAPEAUPROCESS_SUBMIX_DESCRIPTOR@@$$QEAPEAUIStreamGroupProxy@@AEAK@Z @ 0x180030774 (--$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800370A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPro_ea_1800370A0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800370B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPro_ea_1800370B0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800370C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPro_ea_1800370C0.c)
 *     ??1?$ComPtr@VCProcessSubmixProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18005C6D0 (--1-$ComPtr@VCProcessSubmixProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x1800124A0 (--_GCProcessSubmixProxy@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::Release(
        CProcessSubmixProxy *this)
{
  signed __int64 v1; // rax
  CProcessSubmixProxy *v2; // r8
  unsigned __int32 v3; // ebx
  signed __int64 v5; // rtt
  void *(__fastcall *v6)(CProcessSubmixProxy *__hidden, unsigned int); // rax

  v1 = *((_QWORD *)this + 5);
  v2 = this;
  while ( v1 >= 0 )
  {
    v3 = v1 - 1;
    v5 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 5, v1 - 1, v1);
    if ( v5 == v1 )
      goto LABEL_4;
  }
  v3 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_4:
  if ( !v3 )
  {
    if ( this )
    {
      v6 = *(void *(__fastcall **)(CProcessSubmixProxy *__hidden, unsigned int))(*(_QWORD *)this + 48LL);
      if ( v6 == CProcessSubmixProxy::`scalar deleting destructor' )
        CProcessSubmixProxy::`scalar deleting destructor'(this, 1u);
      else
        ((void (__fastcall *)(CProcessSubmixProxy *, __int64, CProcessSubmixProxy *))v6)(this, 1LL, this);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(CAudioDGProcess *, _QWORD, CProcessSubmixProxy *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2);
  }
  return v3;
}
