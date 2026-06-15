/*
 * XREFs of ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180038FC0
 * Callers:
 *     _lambda_667eb01a999704ac1c933d543c16abf4_::operator() @ 0x18004C4DC (_lambda_667eb01a999704ac1c933d543c16abf4_--operator().c)
 * Callees:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BB0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UICompositeSystemEffect@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013980 (-Release@-$RuntimeClass@U-$InterfaceList@UICompositeSystemEffect@@U-$InterfaceList@UIAudioProces.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x1800139E0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?IsMicArray@@YA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180038AF0 (-IsMicArray@@YA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z.c)
 *     ?IsValidMicArrayForAEC@@YA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180038BB0 (-IsValidMicArrayForAEC@@YA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180039510 (-GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18004415C (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsIntegratedAudioDevice@@YAJPEAUIPropertyStore@@PEAH@Z @ 0x1800C13B8 (-IsIntegratedAudioDevice@@YAJPEAUIPropertyStore@@PEAH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EffectPolicy::GetDelayedAECInsertionPolicy(
        struct CEndpointCharacteristics *a1,
        struct IPropertyStore *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *a3,
        enum INBOX_AEC_INSERTION_POLICY *a4,
        struct _AEC_POLICY_RESULTS *a5)
{
  struct IAudioProcessingObject *v9; // rdi
  struct IAudioProcessingObject *v10; // rbx
  int DefaultEffectChainClsids; // eax
  unsigned int v12; // r14d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // edx
  __int64 (__fastcall *v14)(CCompositeSystemEffect *, struct IMMDevice *, struct _GUID *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioProcessingObject **, struct IAudioSystemEffects2 **); // rax
  int v15; // eax
  HRESULT (__stdcall *GetEffectsList)(IAudioSystemEffects2 *, LPGUID *, UINT *, HANDLE); // rax
  int v17; // eax
  void (*v18)(void); // rax
  __int64 v20; // rdx
  struct _GUID *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+28h] [rbp-81h]
  unsigned int v26; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-59h] BYREF
  struct IAudioSystemEffects2 *v28; // [rsp+58h] [rbp-51h] BYREF
  struct _GUID *v29; // [rsp+60h] [rbp-49h] BYREF
  int v30; // [rsp+68h] [rbp-41h] BYREF
  BOOL v31; // [rsp+70h] [rbp-39h] BYREF
  int v32; // [rsp+78h] [rbp-31h] BYREF
  CCompositeSystemEffect *v33; // [rsp+80h] [rbp-29h] BYREF
  struct IAudioProcessingObject *v34; // [rsp+88h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v36[2]; // [rsp+98h] [rbp-11h] BYREF
  struct _GUID v37; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+57h]

  v38 = -2LL;
  v29 = 0LL;
  v9 = 0LL;
  pv = 0LL;
  v33 = 0LL;
  v28 = 0LL;
  v36[0] = 0LL;
  v36[1] = 0LL;
  v10 = 0LL;
  v34 = 0LL;
  if ( IsMicArray(a2, a5) && !IsValidMicArrayForAEC(a1, a3[12], a2, a5) )
  {
    *(_DWORD *)a4 = 2;
    *((_DWORD *)a5 + 16) = 5;
LABEL_14:
    *((_DWORD *)a5 + 15) = *(_DWORD *)a4;
    v12 = 0;
    goto LABEL_15;
  }
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               (SystemEffectDescriptor *)a3,
                               (struct CAudioSignalProcessingModeArray *)v36,
                               &v26,
                               (struct _GUID **)&pv);
  v12 = DefaultEffectChainClsids;
  v9 = (struct IAudioProcessingObject *)pv;
  if ( DefaultEffectChainClsids < 0 )
  {
    v20 = 264LL;
  }
  else
  {
    v31 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
            (__int64 *)a1 + 8,
            &GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2) != -1;
    v34 = v9;
    v30 = 1;
    v32 = 2;
    DefaultEffectChainClsids = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
                                 (__int64 (__fastcall ****)(__int64, const struct _GUID *, __int64))&v33,
                                 &v32,
                                 &v31,
                                 &v30,
                                 &v26,
                                 (_OWORD **)&v34);
    v12 = DefaultEffectChainClsids;
    if ( DefaultEffectChainClsids >= 0 )
    {
      v10 = (struct IAudioProcessingObject *)*((_QWORD *)a1 + 2);
      v34 = v10;
      ((void (__fastcall *)(struct IAudioProcessingObject *))v10->lpVtbl->AddRef)(v10);
      v37 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
      v13 = *((_DWORD *)a3 + 12);
      v14 = *(__int64 (__fastcall **)(CCompositeSystemEffect *, struct IMMDevice *, struct _GUID *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, struct IAudioProcessingObject **, struct IAudioSystemEffects2 **))(*(_QWORD *)v33 + 24LL);
      if ( v14 == CCompositeSystemEffect::Initialize )
        v15 = CCompositeSystemEffect::Initialize(v33, (struct IMMDevice *)v10, &v37, 1, v13, 0LL, &v28);
      else
        v15 = v14(v33, (struct IMMDevice *)v10, &v37, 1, v13, 0LL, &v28);
      if ( v15 >= 0 )
      {
        GetEffectsList = v28->lpVtbl->GetEffectsList;
        v17 = (char *)GetEffectsList == (char *)CCompositeSystemEffect::GetEffectsList
            ? CCompositeSystemEffect::GetEffectsList((CCompositeSystemEffect *)v28, &v29, &v27, 0LL)
            : ((__int64 (__fastcall *)(struct IAudioSystemEffects2 *, struct _GUID **, unsigned int *, _QWORD))GetEffectsList)(
                v28,
                &v29,
                &v27,
                0LL);
        if ( v17 >= 0 )
        {
          *((_DWORD *)a5 + 9) = 0;
          if ( v27 )
          {
            v21 = v29;
            v22 = v27;
            do
            {
              v23 = *(_QWORD *)&v21->Data1 - *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *(_QWORD *)&v21->Data1 == *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v23 = *(_QWORD *)v21->Data4 - *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v23 )
                *((_DWORD *)a5 + 9) |= 2u;
              v24 = *(_QWORD *)&v21->Data1 - *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *(_QWORD *)&v21->Data1 == *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v24 = *(_QWORD *)v21->Data4 - *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v24 )
                *((_DWORD *)a5 + 9) |= 4u;
              ++v21;
              --v22;
            }
            while ( v22 );
          }
        }
      }
      if ( *((_DWORD *)a5 + 9) == 6 )
      {
        IsIntegratedAudioDevice(a2, (int *)a5 + 10);
        if ( *((_DWORD *)a5 + 1) == 2 && *((_DWORD *)a5 + 10) )
        {
          *(_DWORD *)a4 = 2;
          *((_DWORD *)a5 + 16) = 0;
        }
        else
        {
          *(_DWORD *)a4 = 3;
          *((_DWORD *)a5 + 16) = 6;
        }
      }
      else
      {
        *(_DWORD *)a4 = 2;
        *((_DWORD *)a5 + 16) = 7;
      }
      goto LABEL_14;
    }
    v20 = 273LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v20,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
    (const char *)(unsigned int)DefaultEffectChainClsids,
    v25);
LABEL_15:
  if ( v10 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v10->lpVtbl->Release)(v10);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v36);
  if ( v28 )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v28->lpVtbl->Release)(v28);
  if ( v33 )
  {
    v18 = *(void (**)(void))(*(_QWORD *)v33 + 16LL);
    if ( (char *)v18 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ICompositeSystemEffect,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ICompositeSystemEffect,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v33);
    else
      v18();
  }
  CoTaskMemFree(v9);
  CoTaskMemFree(v29);
  return v12;
}
