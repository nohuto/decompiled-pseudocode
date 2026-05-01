/*
 * XREFs of Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_f97e502977231261323c7abaa91e6529__&___ptr64_1__1___lambda_f97e502977231261323c7abaa91e6529__&___ptr64_ @ 0x180045998
 * Callers:
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_f97e502977231261323c7abaa91e6529__&___ptr64_ @ 0x180044430 (Microsoft--WRL--Callback_IAsyncCallback__lambda_f97e502977231261323c7abaa91e6529__-___ptr64_.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_f97e502977231261323c7abaa91e6529______ptr64_1__1___lambda_f97e502977231261323c7abaa91e6529______ptr64_(
        volatile signed __int32 **a1,
        __int64 *a2)
{
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // rcx

  *a1 = 0LL;
  v4 = (char *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v6 = *a2;
    *((_QWORD *)v5 + 2) = *a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *(_OWORD *)(v5 + 24) = *(_OWORD *)(a2 + 1);
    *((_QWORD *)v5 + 5) = a2[3];
    *(_QWORD *)v5 = off_1801A96B8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
  }
  return a1;
}
