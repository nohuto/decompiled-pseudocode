/*
 * XREFs of ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18001E2B0
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001E900 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D720 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EE00 (-QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001F420 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClien.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
        void **a1,
        __int64 *a2,
        unsigned int *a3,
        __int64 a4)
{
  CAPOWrapperClient *v8; // rax
  CAPOWrapperClient *v9; // rbx
  CAudioDGProcess *v10; // rcx
  unsigned int v11; // r13d
  HRESULT Instance; // edi
  int (*v13)(CAPOWrapperClient *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  void (__fastcall *v15)(CAPOWrapperClient *); // rax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  HRESULT v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  CAPOWrapperClient *v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  CAPOWrapperClient *v23; // [rsp+60h] [rbp-A0h]
  CAPOWrapperClient *v24; // [rsp+68h] [rbp-98h]
  CAPOWrapperClient *v25; // [rsp+70h] [rbp-90h]
  GUID v26; // [rsp+80h] [rbp-80h] BYREF
  GUID ActivityId; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  HRESULT *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]

  v22 = -2LL;
  *a1 = 0LL;
  v8 = (CAPOWrapperClient *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v21 = v8;
  v23 = v8;
  if ( !v8 )
    return 2147942414LL;
  v24 = v8;
  *((_DWORD *)v8 + 11) = 1;
  *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::`vftable';
  *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)v8 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v8 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
  *((_QWORD *)v8 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
  v10 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v9 = &CAPOWrapperClient::`vftable';
  *((_QWORD *)v9 + 1) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)v9 + 2) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v9 + 3) = &CAPOWrapperClient::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
  *((_QWORD *)v9 + 4) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal>'};
  *((_QWORD *)v9 + 6) = 0LL;
  *((_QWORD *)v9 + 7) = 0LL;
  *((_DWORD *)v9 + 16) = 0;
  CAudioDGProcess::LockADGProcess(v10);
  v25 = v9;
  v21 = 0LL;
  v11 = *a3;
  v20 = *a2;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EventActivityIdControl(1u, &ActivityId);
  Instance = CoCreateInstance(
               &GUID_3a8b5a92_80b0_48b3_8197_701ecd3261e4,
               0LL,
               0x17u,
               &GUID_69fed9b6_5405_48b8_3db0_4ca492fc3677,
               (LPVOID *)v9 + 6);
  v19 = Instance;
  if ( Instance >= 0 )
  {
    v26 = ActivityId;
    Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, __int64, __int64))(**((_QWORD **)v9 + 6)
                                                                                            + 24LL))(
                 *((_QWORD *)v9 + 6),
                 &v26,
                 v20,
                 v11,
                 a4,
                 (__int64)v9 + 56);
    v19 = Instance;
    if ( Instance >= 0 )
      goto LABEL_6;
  }
  if ( (unsigned int)dword_18014A3F0 > 2 )
  {
    TlgCreateSz(&pDesc, "CAPOWrapperClient::RuntimeClassInitialize");
    LODWORD(v20) = 44;
    v30 = &v20;
    v31 = 4LL;
    v32 = &v19;
    v33 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3F0, &unk_1801122EC, v17, v18, 5u, &pData);
    Instance = v19;
  }
  if ( Instance >= 0 )
  {
LABEL_6:
    v13 = **(int (***)(CAPOWrapperClient *__hidden, const struct _GUID *, void **))v9;
    if ( v13 == CAPOWrapperClient::QueryInterface )
      Interface = CAPOWrapperClient::QueryInterface(v9, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, a1);
    else
      Interface = ((__int64 (__fastcall *)(CAPOWrapperClient *, GUID *, void **))v13)(
                    v9,
                    &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
                    a1);
    Instance = Interface;
  }
  if ( v9 )
  {
    v15 = *(void (__fastcall **)(CAPOWrapperClient *))(*(_QWORD *)v9 + 16LL);
    if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::Release(v9);
    else
      v15(v9);
  }
  return (unsigned int)Instance;
}
