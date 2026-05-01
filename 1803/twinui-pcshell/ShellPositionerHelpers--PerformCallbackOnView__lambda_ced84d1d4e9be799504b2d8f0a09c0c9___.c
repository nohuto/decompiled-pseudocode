/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___ @ 0x180025720
 * Callers:
 *     ?IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x180060CA0 (-IsFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800F5440 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 * Callees:
 *     ?GetPositionerProxy@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerProxy@@@Z @ 0x180024430 (-GetPositionerProxy@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPr.c)
 *     ?PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z @ 0x1800254C0 (-PerformSyncCallback@ShellPositionerProxy@@UEAAJPEAUIShellPositionerCallback@@@Z.c)
 *     ??_E?$ShellPositionerCallback@V_lambda_ced84d1d4e9be799504b2d8f0a09c0c9_@@@Details@ShellPositionerHelpers@@UEAAPEAXI@Z @ 0x180025590 (--_E-$ShellPositionerCallback@V_lambda_ced84d1d4e9be799504b2d8f0a09c0c9_@@@Details@ShellPosition.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180025610 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_ced84d1d4e9be799504b2d8f0a09c0c9___(
        IUnknown *a1,
        struct IApplicationView *a2,
        __int64 a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(unsigned __int64, struct IApplicationView *, struct IShellPositionerProxy **); // rax
  int PositionerProxy; // eax
  _OWORD *v9; // rax
  _OWORD *v10; // rbx
  _OWORD *v11; // rdi
  __int64 v12; // xmm1_8
  volatile int *v13; // rdx
  __int64 (__fastcall *v14)(ShellPositionerProxy *, struct IShellPositionerCallback *); // rax
  int v15; // eax
  void *(__fastcall *v16)(void *, char); // rax
  void (*v17)(void); // rax
  struct IShellPositionerProxy *v18; // rcx
  void *v19; // rcx
  void *ppvOut; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IShellPositionerProxy *v23; // [rsp+58h] [rbp+20h] BYREF

  ppvOut = 0LL;
  v5 = IUnknown_QueryService(
         a1,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &ppvOut);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v23 = 0LL;
    v7 = *(__int64 (__fastcall **)(unsigned __int64, struct IApplicationView *, struct IShellPositionerProxy **))(*(_QWORD *)ppvOut + 48LL);
    if ( v7 == ShellPositionerManager::GetPositionerProxy )
      PositionerProxy = ShellPositionerManager::GetPositionerProxy((unsigned __int64)ppvOut, a2, &v23);
    else
      PositionerProxy = v7((unsigned __int64)ppvOut, a2, &v23);
    v6 = PositionerProxy;
    if ( PositionerProxy >= 0 )
    {
      v9 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      v10 = v9;
      v11 = 0LL;
      if ( v9 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)v9);
        v11 = v10;
        v10[3] = *(_OWORD *)a3;
        v12 = *(_QWORD *)(a3 + 16);
        *(_QWORD *)v10 = off_18031F8F0;
        *((_QWORD *)v10 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
        *((_QWORD *)v10 + 8) = v12;
        v10 = 0LL;
      }
      if ( v10 )
        operator delete(v10);
      if ( v11 )
      {
        v14 = *(__int64 (__fastcall **)(ShellPositionerProxy *, struct IShellPositionerCallback *))(*(_QWORD *)v23 + 24LL);
        if ( v14 == ShellPositionerProxy::PerformSyncCallback )
          v15 = ShellPositionerProxy::PerformSyncCallback(v23, (struct IShellPositionerCallback *)v11);
        else
          v15 = v14(v23, (struct IShellPositionerCallback *)v11);
        v6 = v15;
        if ( v15 >= 0 )
          v6 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5C,
            (unsigned int)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
            (const char *)(unsigned int)v15,
            (int)ppvOut);
      }
      else
      {
        v6 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x59,
          (unsigned int)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
          (const char *)0x8007000ELL,
          (int)ppvOut);
      }
      if ( v11
        && !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v11 + 44), v13) )
      {
        v16 = *(void *(__fastcall **)(void *, char))(*(_QWORD *)v11 + 32LL);
        if ( v16 == ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_ced84d1d4e9be799504b2d8f0a09c0c9_>::`vector deleting destructor' )
          ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_ced84d1d4e9be799504b2d8f0a09c0c9_>::`vector deleting destructor'(
            v11,
            1);
        else
          v16(v11, 1);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
        {
          v17 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
          if ( (char *)v17 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
            Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
          else
            v17();
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (unsigned int)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
        (const char *)(unsigned int)PositionerProxy,
        (int)ppvOut);
    }
    v18 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(struct IShellPositionerProxy *))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (unsigned int)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
      (const char *)(unsigned int)v5,
      (int)ppvOut);
  }
  v19 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v6;
}
