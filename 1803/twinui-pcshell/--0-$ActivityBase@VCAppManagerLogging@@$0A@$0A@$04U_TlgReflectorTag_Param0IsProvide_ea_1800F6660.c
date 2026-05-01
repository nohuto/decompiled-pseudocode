/*
 * XREFs of ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800F6660
 * Callers:
 *     _lambda_2791fcf0aaab69d566675f60a729cea4_::_lambda_2791fcf0aaab69d566675f60a729cea4_ @ 0x18011D124 (_lambda_2791fcf0aaab69d566675f60a729cea4_--_lambda_2791fcf0aaab69d566675f60a729cea4_.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4__&___ptr64__1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4__&___ptr64__1_long_ @ 0x18011D2EC (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18011D2EC.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_2791fcf0aaab69d566675f60a729cea4__&___ptr64__1_long_::Invoke @ 0x180120950 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_180120950.c)
 *     ?Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA?AV12@XZ @ 0x180121B64 (-Split@SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA-AV12@XZ.c)
 *     _lambda_903271a3a8fd35b15ad2f56780cfef6a_::_lambda_903271a3a8fd35b15ad2f56780cfef6a_ @ 0x1801364E8 (_lambda_903271a3a8fd35b15ad2f56780cfef6a_--_lambda_903271a3a8fd35b15ad2f56780cfef6a_.c)
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180137C00 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ??4?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18000FF50 (--4-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800182E0 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    1);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 13) = 0LL;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_BYTE *)a1 + 120) = 0;
  *((_DWORD *)a1 + 33) = 0;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x90uLL);
  *((_QWORD *)a1 + 37) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::operator=((__int64)a1, a2);
  return a1;
}
