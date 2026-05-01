/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18026A82C
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___::CMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___ @ 0x18026A7C4 (CMultitaskingViewTaskCallback__lambda_9d128d93ab32f25580f43de7f914180a___--CMultitaskingViewTask.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf_____lambda_a07bbd685e96231049fd04a75b23a5bf__const_&___ptr64_ @ 0x18026AF30 (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23.c)
 *     CMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___::CMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___ @ 0x18026BDC8 (CMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___--CMultitaskingViewTask.c)
 *     CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___::CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___ @ 0x18026F71C (CMultitaskingViewTaskCallback__lambda_582c6993ad05377755ea5aed50f4c8b6___--CMultitaskingViewTask.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18002BE80 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewTaskCallback@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIMultitaskingViewTaskCallback@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18026A88C (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewT.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>(
        __int64 a1)
{
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)a1);
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewTaskCallback>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IMultitaskingViewTaskCallback>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewTaskCallback>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IMultitaskingViewTaskCallback>>(a1 + 32);
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IMultitaskingViewTaskCallback>>'};
  *(_QWORD *)(a1 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewTaskCallback>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IMultitaskingViewTaskCallback>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
