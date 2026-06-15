/*
 * XREFs of ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800F0EE8
 * Callers:
 *     _lambda_541a0aba8a0dd1ccbfde03220634244f_::operator() @ 0x180064580 (_lambda_541a0aba8a0dd1ccbfde03220634244f_--operator().c)
 * Callees:
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18000B3C0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x1800535EC (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180053A60 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z @ 0x1800F127C (-IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z.c)
 *     ?IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800F1368 (-IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800F1428 (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
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
  unsigned int v12; // r14d
  __int64 v13; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v14; // r14
  int v15; // eax
  _QWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v22; // [rsp+40h] [rbp-89h] BYREF
  int v23; // [rsp+48h] [rbp-81h] BYREF
  BOOL v24; // [rsp+50h] [rbp-79h] BYREF
  int v25; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-69h] BYREF
  __int64 v27; // [rsp+68h] [rbp-61h] BYREF
  __int64 v28; // [rsp+70h] [rbp-59h] BYREF
  LPVOID v29; // [rsp+78h] [rbp-51h] BYREF
  _OWORD *v30; // [rsp+80h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-41h] BYREF
  __int128 v32; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v33[2]; // [rsp+A0h] [rbp-29h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v34; // [rsp+B0h] [rbp-19h]
  struct IPropertyStore *v35; // [rsp+B8h] [rbp-11h]
  __int64 v36; // [rsp+C0h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  v36 = -2LL;
  *(_QWORD *)&v32 = a4;
  v34 = a3;
  v35 = a2;
  v29 = 0LL;
  v9 = 0LL;
  pv = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v33[0] = 0LL;
  v33[1] = 0LL;
  v10 = 0LL;
  v30 = 0LL;
  if ( !EffectPolicy::IsMicArray(a2, a6) || EffectPolicy::IsValidMicArrayForAEC(this, a3[12], a2, a6) )
  {
    DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                                 (SystemEffectDescriptor *)a3,
                                 (struct CAudioSignalProcessingModeArray *)v33,
                                 &v22,
                                 (struct _GUID **)&pv);
    v12 = DefaultEffectChainClsids;
    v9 = pv;
    if ( DefaultEffectChainClsids >= 0 )
    {
      v24 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              (__int64 *)this + 2 * *((int *)a3 + 12) + 8,
              (_QWORD *)v32) != -1;
      v30 = v9;
      v23 = 1;
      v25 = 2;
      DefaultEffectChainClsids = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
                                   &v28,
                                   &v25,
                                   &v24,
                                   &v23,
                                   &v22,
                                   &v30);
      v12 = DefaultEffectChainClsids;
      if ( DefaultEffectChainClsids >= 0 )
      {
        v10 = (_OWORD *)*((_QWORD *)this + 2);
        v30 = v10;
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 8LL))(v10);
        v32 = *(_OWORD *)v32;
        v14 = v34;
        if ( (*(int (__fastcall **)(__int64, _OWORD *, __int128 *, __int64, _DWORD, _QWORD, __int64 *))(*(_QWORD *)v28 + 24LL))(
               v28,
               v10,
               &v32,
               1LL,
               *((_DWORD *)v34 + 12),
               0LL,
               &v27) >= 0
          && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v27 + 24LL))(
               v27,
               &v29,
               &v26,
               0LL) >= 0 )
        {
          *((_DWORD *)a6 + 9) = 0;
          if ( v26 )
          {
            v15 = 0;
            v16 = v29;
            v17 = v26;
            do
            {
              v18 = *v16 - *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *v16 == *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v18 = v16[1] - *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v18 )
              {
                v15 |= 2u;
                *((_DWORD *)a6 + 9) = v15;
              }
              v19 = *v16 - *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *v16 == *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v19 = v16[1] - *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( v19 )
              {
                v15 = *((_DWORD *)a6 + 9);
              }
              else
              {
                v15 |= 4u;
                *((_DWORD *)a6 + 9) = v15;
              }
              v20 = *v16 - *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
              if ( *v16 == *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1 )
                v20 = v16[1] - *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
              if ( !v20 )
              {
                v15 |= 8u;
                *((_DWORD *)a6 + 9) = v15;
              }
              v16 += 2;
              --v17;
            }
            while ( v17 );
          }
        }
        if ( (*((_BYTE *)a6 + 36) & 4) != 0 && (*((_DWORD *)v14 + 12) == 3 || (*((_BYTE *)a6 + 36) & 2) != 0) )
        {
          EffectPolicy::IsIntegratedAudioDevice(v35, (int *)a6 + 10);
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
        goto LABEL_37;
      }
      v13 = 320LL;
    }
    else
    {
      v13 = 311LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
      (const char *)(unsigned int)DefaultEffectChainClsids);
    goto LABEL_38;
  }
  *(_DWORD *)a5 = 2;
  *((_DWORD *)a6 + 16) = 5;
LABEL_37:
  *((_DWORD *)a6 + 15) = *(_DWORD *)a5;
  v12 = 0;
LABEL_38:
  if ( v10 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v33);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  CoTaskMemFree(v9);
  CoTaskMemFree(v29);
  return v12;
}
