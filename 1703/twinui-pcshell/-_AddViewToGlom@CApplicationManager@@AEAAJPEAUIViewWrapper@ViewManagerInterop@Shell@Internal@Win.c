/*
 * XREFs of ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180014108
 * Callers:
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3@@Z @ 0x18000DB50 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3.c)
 *     ?TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x18000DDF0 (-TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInter.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001240C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x180006EA0 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$Start@PEBG@AddWindowToGlom@CAppManagerTelemetry@@SA?AV01@$$QEAPEBG@Z @ 0x1800191F0 (--$Start@PEBG@AddWindowToGlom@CAppManagerTelemetry@@SA-AV01@$$QEAPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_AddViewToGlom(
        __int64 a1,
        __int64 a2,
        struct IImmersiveApplicationInternal *a3,
        int a4,
        __int64 a5)
{
  __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  struct IImmersiveApplicationInternal *v14[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v15[40]; // [rsp+60h] [rbp-A0h] BYREF

  v14[1] = (struct IImmersiveApplicationInternal *)-2LL;
  v14[0] = (struct IImmersiveApplicationInternal *)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a3 + 24LL))(a3);
  CAppManagerTelemetry::AddWindowToGlom::Start<unsigned short const *>((CAppManagerTelemetry::AddWindowToGlom *)v15);
  v13 = 0LL;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64))(**(_QWORD **)(a1 + 512) + 32LL))(
          *(_QWORD *)(a1 + 512),
          0LL,
          &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
          v9);
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveApplicationInternal *, _QWORD, __int64, int, __int64))(*(_QWORD *)v13 + 48LL))(
            v13,
            a3,
            0LL,
            a2,
            a4,
            a5);
    if ( v10 >= 0 && !a4 )
    {
      v14[0] = a3;
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a3 + 8LL))(a3);
      v10 = CActivationBasedAppAndGlomCollection::PositionNewCreatedApp(
              (CActivationBasedAppAndGlomCollection *)(a1 + 560),
              v14);
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a3 + 16LL))(a3);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v15, (unsigned int)v10);
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v15[0] = &CAppManagerTelemetry::AddWindowToGlom::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v15);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v15);
  return (unsigned int)v10;
}
