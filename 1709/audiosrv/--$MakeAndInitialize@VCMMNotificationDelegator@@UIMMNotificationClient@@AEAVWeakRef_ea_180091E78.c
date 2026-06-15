/*
 * XREFs of ??$MakeAndInitialize@VCMMNotificationDelegator@@UIMMNotificationClient@@AEAVWeakRef@WRL@Microsoft@@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIMMNotificationClient@@@WRL@Microsoft@@@012@AEAVWeakRef@12@AEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180091E78
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18002A098 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMMNotificationDelegator,IMMNotificationClient,Microsoft::WRL::WeakRef &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001>(
        __int64 *a1,
        _QWORD *a2,
        int *a3,
        int *a4)
{
  __int64 v6; // rcx

  v6 = *a1;
  if ( v6 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return Microsoft::WRL::Details::MakeAndInitialize<CMMNotificationDelegator,IMMNotificationClient,Microsoft::WRL::WeakRef &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001>(
           a1,
           a2,
           a3,
           a4);
}
