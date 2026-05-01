/*
 * XREFs of ??$Make@VCClassicWindow@@AEAPEAUHWND__@@AEAPEAUIClassicWindow@@AEAPEAUIImmersiveMonitor@@AEAW4CLASSIC_WINDOW_STATE@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCClassicWindow@@@12@AEAPEAUHWND__@@AEAPEAUIClassicWindow@@AEAPEAUIImmersiveMonitor@@AEAW4CLASSIC_WINDOW_STATE@@@Z @ 0x180038310
 * Callers:
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x180033A10 (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIClassicWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180037EB0 (-Release@-$RuntimeClass@U-$InterfaceList@UIClassicWindow@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<CClassicWindow,HWND__ * &,IClassicWindow * &,IImmersiveMonitor * &,enum CLASSIC_WINDOW_STATE &>(
        volatile signed __int32 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5)
{
  _DWORD *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rbp
  int v13; // r15d

  *a1 = 0LL;
  v9 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = *a4;
    v11 = *a3;
    v12 = *a2;
    v13 = *a5;
    *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IClassicWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v9[3] = 1;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_QWORD *)v9 + 2) = v12;
    *(_QWORD *)v9 = &CClassicWindow::`vftable';
    *((_QWORD *)v9 + 3) = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 8) = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v9[18] = v13;
    *((_QWORD *)v9 + 10) = 0LL;
    v9[8] = 0;
    v9[9] = 0;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IClassicWindow,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(*a1);
    *a1 = v9;
  }
  return a1;
}
