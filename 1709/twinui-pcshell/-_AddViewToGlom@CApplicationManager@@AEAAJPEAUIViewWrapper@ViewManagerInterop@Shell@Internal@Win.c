/*
 * XREFs of ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180014C68
 * Callers:
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3@@Z @ 0x18000DE00 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3.c)
 *     ?TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x18000E0A0 (-TransferWindowBetweenGloms@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInter.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180012B3C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x1800071C0 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x18001D798 (-StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_AddViewToGlom(
        __int64 a1,
        __int64 a2,
        struct IImmersiveApplicationInternal *a3,
        int a4,
        __int64 a5)
{
  const unsigned __int16 *v9; // rbx
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  struct IImmersiveApplicationInternal *v15[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v17; // [rsp+80h] [rbp-80h]
  int *v18; // [rsp+88h] [rbp-78h]
  int *v19; // [rsp+90h] [rbp-70h]
  int v20; // [rsp+98h] [rbp-68h] BYREF
  char v21; // [rsp+9Ch] [rbp-64h]
  int v22; // [rsp+C0h] [rbp-40h] BYREF
  const char *v23; // [rsp+C8h] [rbp-38h]
  __int64 v24; // [rsp+D0h] [rbp-30h]
  char v25; // [rsp+D8h] [rbp-28h]
  __int64 v26; // [rsp+E0h] [rbp-20h]
  _BYTE v27[144]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v28; // [rsp+178h] [rbp+78h]
  __int64 v29; // [rsp+180h] [rbp+80h]
  __int64 v30; // [rsp+188h] [rbp+88h]
  __int64 v31; // [rsp+190h] [rbp+90h]

  v15[1] = (struct IImmersiveApplicationInternal *)-2LL;
  v9 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a3 + 24LL))(a3);
  v16[1] = 0LL;
  v16[2] = v16;
  v16[3] = 0LL;
  v17 = 0;
  v18 = &v22;
  v19 = &v20;
  v20 = 0;
  v21 = 0;
  v25 = 0;
  v22 = 0;
  v23 = "AddWindowToGlom";
  v24 = 0LL;
  v26 = 1LL;
  v28 = 0LL;
  v29 = 0LL;
  memset(v27, 0, sizeof(v27));
  v30 = 0LL;
  v31 = 0LL;
  v16[0] = &CAppManagerTelemetry::AddWindowToGlom::`vftable';
  CAppManagerTelemetry::AddWindowToGlom::StartActivity((CAppManagerTelemetry::AddWindowToGlom *)v16, v9);
  v14 = 0LL;
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v14);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64))(**(_QWORD **)(a1 + 584) + 32LL))(
          *(_QWORD *)(a1 + 584),
          0LL,
          &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
          v10);
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveApplicationInternal *, _QWORD, __int64, int, __int64))(*(_QWORD *)v14 + 48LL))(
            v14,
            a3,
            0LL,
            a2,
            a4,
            a5);
    if ( v11 >= 0 && !a4 )
    {
      v15[0] = a3;
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a3 + 8LL))(a3);
      v11 = CActivationBasedAppAndGlomCollection::PositionNewCreatedApp(
              (CActivationBasedAppAndGlomCollection *)(a1 + 632),
              v15);
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a3 + 16LL))(a3);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v16, (unsigned int)v11);
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v16[0] = &CAppManagerTelemetry::AddWindowToGlom::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v16);
  return (unsigned int)v11;
}
