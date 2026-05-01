/*
 * XREFs of ?IsEqualByApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18004C810
 * Callers:
 *     _lambda_c35d5355421e51b91e1b7dc40faf7951_::operator() @ 0x18001DBC0 (_lambda_c35d5355421e51b91e1b7dc40faf7951_--operator().c)
 *     ?ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18002CB00 (-ApplicationChanged@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@.c)
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x180044430 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 *     ??$FindEx@VCImmersiveAppFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180070844 (--$FindEx@VCImmersiveAppFinderByApplication@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicat.c)
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x1800709D0 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180029F40 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180029F40.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall CImmersiveApp::IsEqualByApp(CImmersiveApp *this, struct IImmersiveApplication *a2, int *a3)
{
  struct IImmersiveApplication *v3; // r9
  __int64 result; // rax
  __int64 (__fastcall **v7)(struct IImmersiveApplication *, GUID *, volatile signed __int64 **); // r8
  __int64 v8; // r8
  volatile signed __int64 *v9; // r9
  volatile signed __int64 *v10; // r9
  int v11; // ebx
  int CanCastTo; // eax
  unsigned int (__fastcall *v13)(__int64); // rax
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  volatile int *v16; // rdx
  int v17; // ebx
  volatile signed __int64 *v18; // r10
  __int64 (__fastcall *v19)(CImmersiveApp *); // rax
  signed __int64 v20; // rax
  unsigned int v21; // ecx
  signed __int64 v22; // rtt
  volatile signed __int64 *v23; // r10
  __int64 (__fastcall *v24)(CImmersiveApp *); // rax
  signed __int64 v25; // rax
  unsigned int v26; // ecx
  signed __int64 v27; // rtt
  volatile signed __int64 *v28; // [rsp+40h] [rbp+8h] BYREF
  volatile signed __int64 *v29; // [rsp+50h] [rbp+18h] BYREF

  v3 = (CImmersiveApp *)((char *)this - 88);
  if ( this != (CImmersiveApp *)88 && a2 )
  {
    if ( v3 == a2 )
    {
      *a3 = 1;
      return 0LL;
    }
    v7 = *(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, volatile signed __int64 **))v3;
    v28 = 0LL;
    v29 = 0LL;
    if ( (char *)*v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::QueryInterface )
    {
      v28 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        v13 = *(unsigned int (__fastcall **)(__int64))(v8 + 8);
        v28 = v9;
        if ( v13 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::AddRef )
        {
          v14 = *((_QWORD *)v9 + 32);
          while ( v14 >= 0 )
          {
            if ( (_DWORD)v14 == 0x7FFFFFFF )
              goto LABEL_23;
            v15 = v14;
            v14 = _InterlockedCompareExchange64(v9 + 32, v14 + 1, v14);
            if ( v15 == v14 )
            {
              v11 = 0;
              goto LABEL_25;
            }
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v14 + 16));
          v11 = 0;
        }
        else
        {
          v13((__int64)v9);
LABEL_23:
          v11 = 0;
        }
      }
      else
      {
        if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
        {
          v28 = v10;
          v11 = 0;
        }
        else
        {
          if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000003_0000_0000_c000_000000000046) )
          {
            v28 = v10;
            v11 = 0;
          }
          else
          {
            CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::CanCastTo(
                          (__int64)(v10 + 4),
                          (int *)&GUID_00000000_0000_0000_c000_000000000046,
                          &v28);
            v10 = v28;
            v11 = CanCastTo;
          }
          if ( v11 < 0 )
            goto LABEL_52;
        }
        (*(void (__fastcall **)(volatile signed __int64 *))(*v10 + 8))(v10);
      }
    }
    else
    {
      v11 = (*v7)(v3, &GUID_00000000_0000_0000_c000_000000000046, &v28);
    }
LABEL_25:
    if ( v11 >= 0 )
    {
      v17 = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, volatile signed __int64 **))a2)(
              a2,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v29);
      if ( v17 < 0 )
        goto LABEL_38;
      v18 = v29;
      v19 = *(__int64 (__fastcall **)(CImmersiveApp *))(*v29 + 16);
      if ( v19 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release )
      {
        v20 = *((_QWORD *)v29 + 32);
        while ( v20 >= 0 )
        {
          if ( (_DWORD)v20 == 0x7FFFFFFF )
            goto LABEL_38;
          v21 = v20 - 1;
          v22 = v20;
          v20 = _InterlockedCompareExchange64(v18 + 32, v20 - 1, v20);
          if ( v22 == v20 )
            goto LABEL_34;
        }
        v21 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v20 + 16), v16);
LABEL_34:
        if ( v21
          || ((*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v18 + 48))(v18, 1LL),
              !Microsoft::WRL::Details::ModuleBase::module_) )
        {
LABEL_38:
          v23 = v28;
          v24 = *(__int64 (__fastcall **)(CImmersiveApp *))(*v28 + 16);
          if ( v24 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::Release )
          {
            v25 = *((_QWORD *)v28 + 32);
            while ( v25 >= 0 )
            {
              if ( (_DWORD)v25 == 0x7FFFFFFF )
                goto LABEL_49;
              v26 = v25 - 1;
              v27 = v25;
              v25 = _InterlockedCompareExchange64(v23 + 32, v25 - 1, v25);
              if ( v27 == v25 )
                goto LABEL_45;
            }
            v26 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v25 + 16), v16);
LABEL_45:
            if ( v26
              || ((*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v23 + 48))(v23, 1LL),
                  !Microsoft::WRL::Details::ModuleBase::module_) )
            {
LABEL_49:
              if ( v17 >= 0 && v28 == v29 )
              {
                result = 0LL;
                *a3 = 1;
                return result;
              }
              goto LABEL_52;
            }
            v24 = *(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                            + 16LL);
          }
          ((void (*)(void))v24)();
          goto LABEL_49;
        }
        v19 = *(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      }
      ((void (*)(void))v19)();
      goto LABEL_38;
    }
LABEL_52:
    result = 0LL;
    *a3 = 0;
    return result;
  }
  *a3 = 0;
  return 0LL;
}
