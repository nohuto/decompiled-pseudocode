/*
 * XREFs of ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180013120
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BB0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAPOWrapperClient@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAPOAuxiliaryInputConfiguration@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013770 (-Release@-$RuntimeClass@U-$InterfaceList@UIAPOWrapperClient@@U-$InterfaceList@UIAudioProcessingO.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180016FF0 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
        _QWORD *a1,
        __int64 *a2,
        unsigned int *a3,
        __int64 a4)
{
  int (***v8)(CAPOWrapperClient *__hidden, const struct _GUID *, void **); // rdi
  _DWORD *v9; // rax
  _QWORD *v10; // rbx
  CAudioDGProcess *v11; // rcx
  unsigned int v12; // r12d
  __int64 v13; // r13
  _QWORD *v14; // r15
  HRESULT Instance; // ebx
  int (*v16)(CAPOWrapperClient *__hidden, const struct _GUID *, void **); // rax
  __int64 v17; // rax
  void (*v18)(void); // rax
  __int64 (__fastcall *v19)(LPVOID); // rax
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  HRESULT v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int (***v25)(CAPOWrapperClient *__hidden, const struct _GUID *, void **); // [rsp+48h] [rbp-B8h]
  _DWORD *v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  _DWORD *v28; // [rsp+60h] [rbp-A0h]
  _DWORD *v29; // [rsp+68h] [rbp-98h]
  GUID v30; // [rsp+70h] [rbp-90h] BYREF
  GUID ActivityId; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  HRESULT *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]

  v27 = -2LL;
  *a1 = 0LL;
  v8 = 0LL;
  v25 = 0LL;
  v9 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v26 = v9;
  v28 = v9;
  if ( v9 )
  {
    v29 = v9;
    v9[11] = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IAudioProcessingObject'};
    *((_QWORD *)v9 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAPOAuxiliaryInputConfiguration,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>,1,0>'};
    *((_QWORD *)v9 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
    *((_QWORD *)v9 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>,1,0>'};
    v11 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v10 = &CAPOWrapperClient::`vftable';
    v10[1] = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObject'};
    v10[2] = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAPOAuxiliaryInputConfiguration,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>,1,0>'};
    v10[3] = &CAPOWrapperClient::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
    v10[4] = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>,1,0>'};
    v10[6] = 0LL;
    v10[7] = 0LL;
    *((_DWORD *)v10 + 16) = 0;
    CAudioDGProcess::LockADGProcess(v11);
    v8 = (int (***)(CAPOWrapperClient *__hidden, const struct _GUID *, void **))v10;
    v25 = (int (***)(CAPOWrapperClient *__hidden, const struct _GUID *, void **))v10;
    v26 = 0LL;
    v12 = *a3;
    v13 = *a2;
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    EventActivityIdControl(1u, &ActivityId);
    v14 = v10 + 6;
    Instance = CoCreateInstance(
                 &GUID_3a8b5a92_80b0_48b3_8197_701ecd3261e4,
                 0LL,
                 0x17u,
                 &GUID_69fed9b6_5405_48b8_3db0_4ca492fc3677,
                 (LPVOID *)v10 + 6);
    v23 = Instance;
    if ( Instance >= 0 )
    {
      v30 = ActivityId;
      Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, __int64, int (***)(CAPOWrapperClient *__hidden, const struct _GUID *, void **)))(*(_QWORD *)*v14 + 24LL))(
                   *v14,
                   &v30,
                   v13,
                   v12,
                   a4,
                   v8 + 7);
      v23 = Instance;
      if ( Instance >= 0 )
        goto LABEL_6;
    }
    if ( (unsigned int)dword_18012A2A0 > 2 )
    {
      TlgCreateSz(&pDesc, "CAPOWrapperClient::RuntimeClassInitialize");
      v24 = 44;
      v34 = &v24;
      v35 = 4LL;
      v36 = &v23;
      v37 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v21, v22, 5u, &pData);
      Instance = v23;
    }
    if ( Instance >= 0 )
    {
LABEL_6:
      v16 = **v8;
      if ( v16 == CAPOWrapperClient::QueryInterface )
      {
        v17 = *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1
            - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
        if ( *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
          v17 = *(_QWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4
              - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
        if ( v17 || *((_DWORD *)v8 + 16) )
        {
          *a1 = v8 + 1;
          v18 = (void (*)(void))v8[1][1];
          if ( (char *)v18 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAPOWrapperClient,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAPOAuxiliaryInputConfiguration,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef )
          {
            _InterlockedIncrement((volatile signed __int32 *)v8 + 13);
            v8 = v25;
          }
          else
          {
            v18();
          }
          Instance = 0;
        }
        else
        {
          *a1 = 0LL;
          Instance = -2147467262;
        }
      }
      else
      {
        Instance = ((__int64 (__fastcall *)(int (***)(CAPOWrapperClient *__hidden, const struct _GUID *, void **), GUID *, _QWORD *))v16)(
                     v8,
                     &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
                     a1);
      }
    }
  }
  else
  {
    Instance = -2147024882;
  }
  if ( v8 )
  {
    v19 = (__int64 (__fastcall *)(LPVOID))(*v8)[2];
    if ( v19 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAPOWrapperClient,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAPOAuxiliaryInputConfiguration,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAPOWrapperClient,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAPOAuxiliaryInputConfiguration,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v8);
    else
      v19(v8);
  }
  return (unsigned int)Instance;
}
