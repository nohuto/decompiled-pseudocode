/*
 * XREFs of ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800516AC
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180051604 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800500FC (-LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     _lambda_e86e403555f745251996716a8cfcb9a8_::operator() @ 0x180050854 (_lambda_e86e403555f745251996716a8cfcb9a8_--operator().c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180052E4C (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800532AC (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180053910 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18005BE28 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     std::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)_::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)___lambda_541a0aba8a0dd1ccbfde03220634244f__void_ @ 0x180063A5C (std--function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr6.c)
 *     _lambda_7f4a656a268d6d0b9fd67fb138151b91_::operator() @ 0x180064978 (_lambda_7f4a656a268d6d0b9fd67fb138151b91_--operator().c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x180064BA4 (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x1800ECFDC (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(
        CEndpointCharacteristics *this,
        __int32 a2,
        struct _GUID *a3)
{
  __int64 v4; // r15
  struct _tagpropertykey *v6; // rcx
  __int64 v7; // rcx
  BOOL v8; // eax
  struct SystemEffectDescriptor *v9; // r13
  struct IPropertyStore *v10; // rdx
  int AECInsertionPolicy; // ebx
  __int64 v12; // rdx
  int v14; // ebx
  GUID *v15; // rax
  int OverridingChain; // r14d
  __int64 v17; // rdx
  __int64 v18; // r14
  int v19; // r13d
  __int64 v20; // rdx
  BOOL v21; // ebx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // [rsp+28h] [rbp-E0h]
  LPVOID pv; // [rsp+58h] [rbp-B0h] BYREF
  int v30[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-A0h]
  _BYTE v32[96]; // [rsp+78h] [rbp-90h]
  struct _GUID v33; // [rsp+D8h] [rbp-30h]
  _BYTE v34[72]; // [rsp+E8h] [rbp-20h]
  _BYTE v35[64]; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v36[11]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v37; // [rsp+228h] [rbp+120h]
  struct _GUID v38; // [rsp+238h] [rbp+130h] BYREF
  struct _tagpropertykey v39; // [rsp+248h] [rbp+140h] BYREF
  __m256i v40; // [rsp+260h] [rbp+158h] BYREF
  __int64 v41; // [rsp+298h] [rbp+190h]
  __m256i v42; // [rsp+2A0h] [rbp+198h] BYREF
  _OWORD v43[2]; // [rsp+2C8h] [rbp+1C0h] BYREF
  __m256i v44; // [rsp+2E8h] [rbp+1E0h]
  int v45; // [rsp+308h] [rbp+200h]
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v31 = -2LL;
  v4 = a2;
  if ( *((_DWORD *)this + 37) == 1 )
  {
    if ( a2 == 3 )
    {
      v6 = (struct _tagpropertykey *)&PKEY_KeywordSpeechAecPolicyResults;
    }
    else
    {
      v7 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1;
      if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1 )
        v7 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data4;
      v8 = v7 == 0;
      v6 = (struct _tagpropertykey *)&PKEY_SpeechAecPolicyResults;
      if ( !v8 )
        v6 = (struct _tagpropertykey *)&PKEY_CommunicationsAecPolicyResults;
    }
    v39 = *v6;
    v42.m256i_i64[0] = (__int64)this;
    v42.m256i_i32[2] = a2;
    *(struct _GUID *)((char *)&v42.m256i_u64[1] + 4) = *a3;
    v40.m256i_i32[0] = a2;
    *(_OWORD *)((char *)v40.m256i_i64 + 4) = *(_OWORD *)((char *)&v42.m256i_u64[1] + 4);
    v40.m256i_i64[3] = (__int64)this;
    memset_0(v43, 255, 0x44uLL);
    LODWORD(v43[0]) = 5;
    v38 = *a3;
    v9 = (CEndpointCharacteristics *)((char *)this + 96 * v4 + 616);
    AECInsertionPolicy = EffectPolicy::GetAECInsertionPolicy(
                           this,
                           v10,
                           v9,
                           &v38,
                           (enum INBOX_AEC_INSERTION_POLICY *)v30,
                           (struct _AEC_POLICY_RESULTS *)v43);
    if ( AECInsertionPolicy < 0 )
    {
      v12 = 1878LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)AECInsertionPolicy,
        v28);
      return (unsigned int)AECInsertionPolicy;
    }
    v14 = v30[0];
    if ( !v30[0] )
      goto LABEL_45;
    if ( v30[0] == 2 )
    {
      v15 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
      if ( (_DWORD)v4 != 3 )
        v15 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
    }
    else
    {
      v15 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
    }
    v38 = *v15;
    if ( !*((_DWORD *)this + v4 + 10) )
    {
      OverridingChain = lambda_7f4a656a268d6d0b9fd67fb138151b91_::operator()(&v40);
      if ( OverridingChain < 0 )
      {
        v17 = 1889LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)OverridingChain,
          v28);
        return (unsigned int)OverridingChain;
      }
      v41 = 0LL;
      OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                          (CEndpointCharacteristics *)((char *)this + 96 * v4 + 616),
                          2,
                          0,
                          (__int64)&v40);
      if ( OverridingChain < 0 )
      {
        v17 = 1890LL;
        goto LABEL_21;
      }
LABEL_45:
      if ( (v14 & 0xFFFFFFFB) == 0 )
      {
LABEL_47:
        v26 = *((_QWORD *)this + 2);
        pv = 0LL;
        (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v26 + 40LL))(v26, &pv);
        v38 = *a3;
        LogAecEffectPolicyInsertion(
          (const struct _AEC_POLICY_RESULTS *)v43,
          (const unsigned __int16 *)pv,
          &v38,
          (unsigned int)v4);
        v27 = CEndpointCharacteristics::PersistAECPolicy(
                this,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v4,
                &v39,
                (const struct _AEC_POLICY_RESULTS *)v43);
        AECInsertionPolicy = v27;
        if ( v27 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7F9,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v27,
            v28);
          if ( pv )
            CoTaskMemFree(pv);
          return (unsigned int)AECInsertionPolicy;
        }
        if ( pv )
          CoTaskMemFree(pv);
        return 0LL;
      }
LABEL_46:
      *(_OWORD *)((char *)&v44.m256i_u64[1] + 4) = *(_OWORD *)lambda_e86e403555f745251996716a8cfcb9a8_::operator()(
                                                                v42.m256i_i64,
                                                                (__int64)&v38);
      goto LABEL_47;
    }
    v18 = 16 * v4;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         (char *)this + 16 * v4 + 64,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1
      && v14 != 4 )
    {
      v19 = lambda_7f4a656a268d6d0b9fd67fb138151b91_::operator()(&v40);
      if ( v19 < 0 )
      {
        v20 = 1897LL;
        goto LABEL_28;
      }
      v9 = (CEndpointCharacteristics *)((char *)this + 96 * v4 + 616);
    }
    if ( v14 > 0 )
    {
      if ( v14 <= 2 )
      {
        v41 = 0LL;
        v19 = SystemEffectDescriptor::CreateOverridingChain(v9, 2, 0, (__int64)&v40);
        if ( v19 >= 0 )
        {
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               (char *)this + v18 + 64,
                               a3) != -1 )
          {
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                  (char *)this + v18 + 1496,
                                  v24) )
            {
              AECInsertionPolicy = -2147024882;
              v12 = 1914LL;
              goto LABEL_10;
            }
            v25 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((char *)this + v18 + 64, a3);
            if ( v25 != -1 )
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt((char *)this + v18 + 64, v25);
          }
          goto LABEL_45;
        }
        v20 = 1910LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v19,
          v28);
        return (unsigned int)v19;
      }
      if ( v14 == 3 )
      {
        v23 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((char *)this + v18 + 64, a3);
        v41 = 0LL;
        AECInsertionPolicy = SystemEffectDescriptor::CreateOverridingChain(v9, 1, v23 != -1, (__int64)&v40);
        if ( AECInsertionPolicy < 0 )
        {
          v12 = 1904LL;
          goto LABEL_10;
        }
        goto LABEL_46;
      }
      if ( v14 == 4 )
      {
        v38 = *a3;
        v21 = CEndpointCharacteristics::IsConnectorModeSupported(
                this,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v4,
                &v38) != 0;
        *(_QWORD *)v32 = this;
        *(struct _tagpropertykey *)&v32[8] = v39;
        *(_OWORD *)&v32[28] = v43[0];
        *(_OWORD *)&v32[44] = v43[1];
        *(__m256i *)&v32[60] = v44;
        *(_DWORD *)&v32[92] = v45;
        v33 = *a3;
        *(_DWORD *)v34 = v4;
        *(__m256i *)&v34[8] = v40;
        *(__m256i *)&v34[40] = v42;
        v36[0] = *(_OWORD *)v32;
        v36[1] = *(_OWORD *)&v32[16];
        v36[2] = *(_OWORD *)&v32[32];
        v36[3] = *(_OWORD *)&v32[48];
        v36[4] = *(_OWORD *)((char *)v44.m256i_i64 + 4);
        v36[5] = *(_OWORD *)&v32[80];
        v36[6] = v33;
        v36[7] = *(_OWORD *)v34;
        v36[8] = *(_OWORD *)&v40.m256i_u64[1];
        v36[9] = *(_OWORD *)&v34[32];
        v36[10] = *(_OWORD *)&v42.m256i_u64[1];
        v37 = v42.m256i_i64[3];
        v22 = std::function_long___cdecl_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64__::function_long___cdecl_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64____lambda_541a0aba8a0dd1ccbfde03220634244f__void_(
                v35,
                v36);
        v38 = *a3;
        AECInsertionPolicy = SystemEffectDescriptor::CreateOverridingChain(v9, 1, v21, v22);
        if ( AECInsertionPolicy < 0 )
        {
          v12 = 2019LL;
          goto LABEL_10;
        }
        goto LABEL_47;
      }
    }
    AECInsertionPolicy = -2147418113;
    v12 = 2023LL;
    goto LABEL_10;
  }
  return 0LL;
}
