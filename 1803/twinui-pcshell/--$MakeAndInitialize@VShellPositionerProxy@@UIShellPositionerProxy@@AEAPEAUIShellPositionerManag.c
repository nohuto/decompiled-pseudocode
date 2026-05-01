/*
 * XREFs of ??$MakeAndInitialize@VShellPositionerProxy@@UIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Z @ 0x18000B870
 * Callers:
 *     ?GetPositionerProxy@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerProxy@@@Z @ 0x180024430 (-GetPositionerProxy@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPr.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B0C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBa.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B560 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCAppl_ea_18002B560.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellPositionerProxy,IShellPositionerProxy,IShellPositionerManager * &,IApplicationView * &>(
        _QWORD *a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64),
        __int64 *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // esi
  void (__fastcall *v9)(struct Microsoft::WRL::Details::ModuleBase *); // rax
  __int64 v10; // rdi
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64); // r15
  __int64 v12; // rcx
  int v13; // eax
  volatile int *v14; // rdx
  unsigned int (__fastcall *v15)(__int64); // rax
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a1 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 3) = 1;
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<10>,IShellPositionerProxy>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v9 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL);
      if ( (char *)v9 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
      else
        v9(Microsoft::WRL::Details::ModuleBase::module_);
    }
    *v7 = &ShellPositionerProxy::`vftable';
    v7[2] = 0LL;
    v7[3] = 0LL;
    v10 = *a3;
    v11 = *a2;
    v12 = v7[2];
    if ( v12 )
    {
      v7[2] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = (**v11)(v11, &GUID_f653a7c5_4df3_41d7_b4c3_cf03747de20c, (__int64)(v7 + 2));
    v8 = v13;
    if ( v13 >= 0 )
    {
      if ( v7[3] != v10 )
      {
        if ( v10 )
        {
          v15 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL);
          if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef )
          {
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::AddRef(v10);
          }
          else if ( v15 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::AddRef )
          {
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::AddRef(v10);
          }
          else
          {
            v15(v10);
          }
        }
        v16 = v7[3];
        v7[3] = v10;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      *a1 = v7;
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\positionerproxy.cpp",
        (const char *)(unsigned int)v13,
        -2);
    }
    if ( v7 )
    {
      if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v7 + 12), v14) )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*v7 + 32LL))(v7, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
