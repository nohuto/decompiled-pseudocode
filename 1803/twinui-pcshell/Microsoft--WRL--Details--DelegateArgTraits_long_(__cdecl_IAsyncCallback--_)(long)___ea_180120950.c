/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4__&___ptr64__1_long_::Invoke @ 0x180120950
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800F6660 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_1800F6660.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x18012596C (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4______ptr64__1_long_::Invoke(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  signed int v7; // eax
  unsigned int v8; // ebx
  _QWORD v10[41]; // [rsp+30h] [rbp-148h] BYREF

  v1 = *(_QWORD *)(a1 + 360);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v10,
    (_QWORD *)(a1 + 48));
  v3 = *(unsigned int *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 16);
  v10[0] = &CAppViewManagerTelemetry::SwitchAsyncWorker::`vftable';
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD *, __int64))CAppViewManager::_ContinueSwitchAsyncWorker)(
         v6,
         v5,
         v4,
         v3,
         v10,
         v1);
  v8 = v7;
  if ( v7 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v7);
  return v8;
}
