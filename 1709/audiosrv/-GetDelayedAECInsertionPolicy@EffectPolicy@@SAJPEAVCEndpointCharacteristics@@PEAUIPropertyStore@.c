/*
 * XREFs of ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800BDBCC
 * Callers:
 *     _lambda_d9b0be7eda368bff9c92e9d9b278ea98_::operator() @ 0x1800B07F0 (_lambda_d9b0be7eda368bff9c92e9d9b278ea98_--operator().c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18001E4E0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x1800BC5D4 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z @ 0x1800BDF4C (-IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z.c)
 *     ?IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800BE038 (-IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800BE0F8 (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EffectPolicy::GetDelayedAECInsertionPolicy(
        struct CEndpointCharacteristics *this,
        struct IPropertyStore *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *a3,
        struct _GUID *a4,
        enum INBOX_AEC_INSERTION_POLICY *a5,
        struct _AEC_POLICY_RESULTS *a6)
{
  _OWORD *v9; // rdi
  _OWORD *v10; // rbx
  int DefaultEffectChainClsids; // eax
  unsigned int v12; // r15d
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v20; // [rsp+40h] [rbp-89h] BYREF
  int v21; // [rsp+48h] [rbp-81h] BYREF
  BOOL v22; // [rsp+50h] [rbp-79h] BYREF
  int v23; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v24; // [rsp+60h] [rbp-69h] BYREF
  __int64 v25; // [rsp+68h] [rbp-61h] BYREF
  __int64 v26; // [rsp+70h] [rbp-59h] BYREF
  LPVOID v27; // [rsp+78h] [rbp-51h] BYREF
  _OWORD *v28; // [rsp+80h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-41h] BYREF
  struct _GUID *v30; // [rsp+90h] [rbp-39h]
  _QWORD v31[3]; // [rsp+98h] [rbp-31h] BYREF
  struct _GUID v32; // [rsp+B0h] [rbp-19h] BYREF
  struct IPropertyStore *v33; // [rsp+C0h] [rbp-9h]
  __int64 v34; // [rsp+C8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  v34 = -2LL;
  v30 = a4;
  v33 = a2;
  *(_QWORD *)&v32.Data1 = this;
  v27 = 0LL;
  v9 = 0LL;
  pv = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v31[0] = 0LL;
  v31[1] = 0LL;
  v10 = 0LL;
  v28 = 0LL;
  if ( !EffectPolicy::IsMicArray(a2, a6) || EffectPolicy::IsValidMicArrayForAEC(this, a3[12], a2, a6) )
  {
    DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                                 (SystemEffectDescriptor *)a3,
                                 (struct CAudioSignalProcessingModeArray *)v31,
                                 &v20,
                                 (struct _GUID **)&pv);
    v12 = DefaultEffectChainClsids;
    v9 = pv;
    if ( DefaultEffectChainClsids >= 0 )
    {
      v22 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              (__int64 *)this + 2 * *((int *)a3 + 12) + 8,
              v30) != -1;
      v28 = v9;
      v21 = 1;
      v23 = 2;
      DefaultEffectChainClsids = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
                                   &v26,
                                   &v23,
                                   &v22,
                                   &v21,
                                   &v20,
                                   &v28);
      v12 = DefaultEffectChainClsids;
      if ( DefaultEffectChainClsids >= 0 )
      {
        v10 = *(_OWORD **)(*(_QWORD *)&v32.Data1 + 16LL);
        v28 = v10;
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 8LL))(v10);
        v32 = *v30;
        if ( (*(int (__fastcall **)(__int64, _OWORD *, struct _GUID *, __int64, _DWORD, _QWORD, __int64 *))(*(_QWORD *)v26 + 24LL))(
               v26,
               v10,
               &v32,
               1LL,
               *((_DWORD *)a3 + 12),
               0LL,
               &v25) >= 0
          && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v25 + 24LL))(
               v25,
               &v27,
               &v24,
               0LL) >= 0 )
        {
          *((_DWORD *)a6 + 9) = 0;
          if ( v24 )
          {
            v14 = v27;
            v15 = v24;
            do
            {
              v16 = *v14 - *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *v14 == *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v16 = v14[1] - *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v16 )
                *((_DWORD *)a6 + 9) |= 2u;
              v17 = *v14 - *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *v14 == *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v17 = v14[1] - *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v17 )
                *((_DWORD *)a6 + 9) |= 4u;
              v18 = *v14 - *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *v14 == *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v18 = v14[1] - *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v18 )
                *((_DWORD *)a6 + 9) |= 8u;
              v14 += 2;
              --v15;
            }
            while ( v15 );
          }
        }
        if ( (*((_BYTE *)a6 + 36) & 4) != 0 && (*((_DWORD *)a3 + 12) == 3 || (*((_BYTE *)a6 + 36) & 2) != 0) )
        {
          EffectPolicy::IsIntegratedAudioDevice(v33, (int *)a6 + 10);
          if ( *((_DWORD *)a6 + 1) == 2 && *((_DWORD *)a6 + 10) )
          {
            *(_DWORD *)a5 = 2;
            *((_DWORD *)a6 + 16) = 0;
          }
          else if ( (*((_BYTE *)a6 + 36) & 8) != 0 )
          {
            *(_DWORD *)a5 = 0;
            *((_DWORD *)a6 + 16) = 9;
          }
          else
          {
            *(_DWORD *)a5 = 3;
            *((_DWORD *)a6 + 16) = 7;
          }
        }
        else
        {
          *(_DWORD *)a5 = 2;
          *((_DWORD *)a6 + 16) = 8;
        }
        goto LABEL_36;
      }
      v13 = 317LL;
    }
    else
    {
      v13 = 308LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
      (const char *)(unsigned int)DefaultEffectChainClsids);
    goto LABEL_37;
  }
  *(_DWORD *)a5 = 2;
  *((_DWORD *)a6 + 16) = 5;
LABEL_36:
  *((_DWORD *)a6 + 15) = *(_DWORD *)a5;
  v12 = 0;
LABEL_37:
  if ( v10 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v31);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  CoTaskMemFree(v9);
  CoTaskMemFree(v27);
  return v12;
}
