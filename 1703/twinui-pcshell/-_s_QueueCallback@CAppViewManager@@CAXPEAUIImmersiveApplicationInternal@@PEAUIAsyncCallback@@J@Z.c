/*
 * XREFs of ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@PEAUIAsyncCallback@@J@Z @ 0x1800422CC
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x18003F7A8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180040140 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCall.c)
 *     Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b__&___ptr64_1__1_::Invoke @ 0x180044BE0 (Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_c5bad73058b4167fadc00bcfc86ad84b__-.c)
 * Callees:
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x1800421C8 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x1800472D0 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppViewManager::_s_QueueCallback(
        struct IImmersiveApplicationInternal *a1,
        struct IAsyncCallback *a2,
        int a3)
{
  __int64 v5; // rcx
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  if ( (int)CMarshaledInterface::Marshal(&v6, &GUID_ea8a389b_437d_4791_aa14_5dca004bc92a, a2, 2LL) >= 0 )
    CAppViewManager::_s_QueueCallback(a1, (struct CMarshaledInterface *)&v6, a3);
  v5 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
