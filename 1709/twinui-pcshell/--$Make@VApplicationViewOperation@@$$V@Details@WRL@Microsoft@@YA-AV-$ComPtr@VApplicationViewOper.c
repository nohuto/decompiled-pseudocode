/*
 * XREFs of ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18010397C
 * Callers:
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF238 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FFBF8 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FFED0 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180100138 (-_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x18010D490 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<ApplicationViewOperation,>(
        volatile signed __int32 **a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  volatile signed __int32 *v4; // rcx

  *a1 = 0LL;
  v2 = operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0xD8uLL);
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 2));
    v3[13] = 1;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewOperation,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationViewOperation'};
    *((_QWORD *)v3 + 1) = &ApplicationViewOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = &ApplicationViewOperation::`vftable'{for `IApplicationViewOperation'};
    *((_QWORD *)v3 + 1) = &ApplicationViewOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    v3[18] = 0;
    *((_BYTE *)v3 + 76) = 0;
    *((_QWORD *)v3 + 12) = 0LL;
    v3[26] = 0;
    *((_BYTE *)v3 + 108) = 0;
    memset(v3 + 28, 0, 0x28uLL);
    v3[38] = 0;
    *((_QWORD *)v3 + 20) = 0LL;
    v3[42] = 0;
    memset(v3 + 43, 0, 0x20uLL);
    *((_BYTE *)v3 + 204) = 0;
    *((_QWORD *)v3 + 26) = 0LL;
    v4 = *a1;
    if ( *a1 && _InterlockedExchangeAdd(v4 + 13, 0xFFFFFFFF) == 1 )
    {
      if ( v4 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 216LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    *a1 = v3;
  }
  return a1;
}
