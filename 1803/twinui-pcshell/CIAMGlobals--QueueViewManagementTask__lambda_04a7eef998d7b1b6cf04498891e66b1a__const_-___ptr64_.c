/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a__const_&___ptr64_ @ 0x18000F1E0
 * Callers:
 *     ?_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIApplicationView@@@Z @ 0x18003F97C (-_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIn.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a__const_____ptr64_(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v3; // rdi
  PVOID Ptr; // rbx
  unsigned int v5; // edi
  PVOID v6; // r14
  __int64 v7; // rbp
  unsigned int v8; // r12d
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // r15
  PVOID v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF

  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v6 = Ptr;
    v14 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v7 = *a2;
    v15 = v7;
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v7);
    v8 = (unsigned int)v3[15].Ptr;
    v9 = 0LL;
    v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    v12 = 0LL;
    if ( v10 )
    {
      *v10 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
      *((_DWORD *)v10 + 3) = 1;
      *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v11 = off_18031E9E8;
      v11[2] = 0LL;
      if ( v11 + 2 != &v14 )
      {
        v11[2] = Ptr;
        v6 = 0LL;
        v14 = 0LL;
      }
      v11[3] = 0LL;
      if ( v11 + 3 != &v15 )
      {
        v11[3] = v7;
        v7 = 0LL;
        v15 = 0LL;
      }
      v9 = v11;
      v12 = v11;
    }
    v5 = v12 == 0LL ? 0x8007000E : 0;
    if ( v12 )
    {
      v5 = Windows::Internal::ComTaskPool::s_QueuePoolTask(0LL, 2LL, v8, v9, -2LL, 0LL, v14, v15);
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    }
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v7);
    if ( v6 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    v5 = -2147023728;
  }
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v5;
}
