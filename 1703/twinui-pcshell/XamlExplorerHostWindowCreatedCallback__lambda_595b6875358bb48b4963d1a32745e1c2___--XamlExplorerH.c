/*
 * XREFs of XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2___::XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2___ @ 0x180141E3C
 * Callers:
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2_____lambda_595b6875358bb48b4963d1a32745e1c2___ @ 0x180141CF4 (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2___::XamlExplorerHostWindowCreatedCallback__lambda_595b6875358bb48b4963d1a32745e1c2___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 result; // rax

  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)a1);
  *(_DWORD *)(a1 + 36) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::FtmBase'};
  *(_QWORD *)(a1 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IXamlExplorerHostWindowCreatedCallback,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = off_180241400;
  *(_QWORD *)(a1 + 24) = off_180241450;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(a2 + 16));
  *(_QWORD *)(a1 + 56) = v4;
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(a2 + 24));
  *(_QWORD *)(a1 + 64) = v5;
  v6 = *(_QWORD *)(a2 + 32);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(a2 + 32));
  *(_QWORD *)(a1 + 72) = v6;
  v7 = *(_QWORD *)(a2 + 40);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  result = a1;
  *(_QWORD *)(a1 + 80) = v7;
  return result;
}
