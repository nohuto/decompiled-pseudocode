/*
 * XREFs of ?AppViewIconFactory_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x180198270
 * Callers:
 *     ?AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z @ 0x180191B00 (-AddItemForView@AppViewDataSourceAdapter@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A52A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIIconFactory@Multitasking@ComposableShell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801984A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIIconFacto.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppViewIconFactory_CreateInstance(
        struct IApplicationView *a1,
        struct IApplicationViewIconLoader *a2,
        const struct _GUID *a3,
        void **a4)
{
  volatile signed __int64 *v7; // rax
  volatile signed __int64 *v8; // rbx
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, void **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, void **); // [rsp+40h] [rbp+18h] BYREF

  *a4 = 0LL;
  v16 = 0LL;
  v7 = (volatile signed __int64 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
LABEL_16:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x7F,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewiconfactory.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_19;
  }
  *((_QWORD *)v7 + 3) = 1LL;
  *v7 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IIconFactory>::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::IIconFactory'};
  *((_QWORD *)v7 + 1) = &AppViewIconFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v8 = (volatile signed __int64)&AppViewIconFactory::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::IIconFactory'};
  *((_QWORD *)v8 + 1) = &AppViewIconFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)v8 + 4) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  if ( *((struct IApplicationView **)v8 + 4) != a1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a1 + 8LL))(a1);
    v10 = *((_QWORD *)v8 + 4);
    *((_QWORD *)v8 + 4) = a1;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( *((struct IApplicationViewIconLoader **)v8 + 5) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationViewIconLoader *))(*(_QWORD *)a2 + 8LL))(a2);
    v11 = *((_QWORD *)v8 + 5);
    *((_QWORD *)v8 + 5) = a2;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v9 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IIconFactory>::QueryInterface(
         v8,
         &GUID_00000000_0000_0000_c000_000000000046,
         &v16);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(v8);
  if ( v9 < 0 )
    goto LABEL_16;
  v12 = (**v16)(v16, &GUID_2ddda005_932b_45bd_bdba_e25598ba2204, a4);
  v9 = v12;
  if ( v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewiconfactory.cpp",
      (const char *)(unsigned int)v12);
LABEL_19:
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, void **)))(*v13)[2])(v13);
  }
  return (unsigned int)v9;
}
