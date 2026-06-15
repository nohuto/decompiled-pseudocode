/*
 * XREFs of ??$MakeAndInitialize@VCProcessSubmixProxy@@UIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixProxy@@AEAPEAUProcessSubmixParams@@$$QEAPEAUPROCESS_SUBMIX_DESCRIPTOR@@$$QEAPEAUIStreamGroupProxy@@AEAK@Z @ 0x18002DC64
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180009F00 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     ??0CProcessSubmixProxy@@QEAA@XZ @ 0x180007C60 (--0CProcessSubmixProxy@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x180008200 (-RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DE.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIProcessSubmixProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800087E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIProcessSubmixProxy@@U-$InterfaceList@UIInspect.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIProcessSubmixProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIProcessSubmixProxy@@U-$InterfaceList@UIInspectable@@V.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixProxy,IProcessSubmixProxy,ProcessSubmixParams * &,PROCESS_SUBMIX_DESCRIPTOR *,IStreamGroupProxy *,unsigned long &>(
        _QWORD *a1,
        const struct ProcessSubmixParams **a2,
        struct PROCESS_SUBMIX_DESCRIPTOR **a3,
        struct IStreamGroupProxy **a4)
{
  CProcessSubmixProxy *v8; // rbx
  CProcessSubmixProxy *v9; // rax
  __int64 v10; // rdx
  int v11; // edi
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD *); // rax
  int Interface; // eax
  __int64 (__fastcall *v14)(CProcessSubmixProxy *, __int64); // rax

  *a1 = 0LL;
  v8 = 0LL;
  v9 = (CProcessSubmixProxy *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v8 = CProcessSubmixProxy::CProcessSubmixProxy(v9);
    v11 = CProcessSubmixProxy::RuntimeClassInitialize(v8, *a2, *a3, *a4);
    if ( v11 >= 0 )
    {
      v12 = **(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v8;
      if ( v12 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface )
        Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
                      (__int64)v8,
                      (__int64)&GUID_5e790b7d_f599_4860_a1a3_71ec94c032e1,
                      a1);
      else
        Interface = v12((__int64)v8, (__int64)&GUID_5e790b7d_f599_4860_a1a3_71ec94c032e1, a1);
      v11 = Interface;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  if ( v8 )
  {
    v14 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, __int64))(*(_QWORD *)v8 + 16LL);
    if ( v14 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IProcessSubmixProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
        v8,
        v10);
    else
      ((void (__fastcall *)(CProcessSubmixProxy *))v14)(v8);
  }
  return (unsigned int)v11;
}
