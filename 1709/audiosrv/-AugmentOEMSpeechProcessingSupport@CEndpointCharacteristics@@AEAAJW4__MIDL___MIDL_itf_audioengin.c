/*
 * XREFs of ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800B21B4
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B1548 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18005A578 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005ABB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18005ADF8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::_Func_class_long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Reset_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64__std::_Wrap_alloc_std::allocator_std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_______ @ 0x1800AF760 (std--_Func_class_long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_--_.c)
 *     _lambda_a89b631c09f285a4d3ef916a35e3beda_::operator() @ 0x1800B04EC (_lambda_a89b631c09f285a4d3ef916a35e3beda_--operator().c)
 *     _lambda_e86e403555f745251996716a8cfcb9a8_::operator() @ 0x1800B0C10 (_lambda_e86e403555f745251996716a8cfcb9a8_--operator().c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800B792C (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BB780 (-LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BC460 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800BD9F8 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSy.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(
        CEndpointCharacteristics *this,
        __int32 a2,
        struct _GUID *a3)
{
  __int64 v4; // r15
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  BOOL v8; // eax
  unsigned int Data1; // r13d
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
  BOOL IsConnectorModeSupported; // ebx
  int v22; // eax
  _OWORD *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rbx
  int v26; // eax
  unsigned __int16 *v27; // [rsp+48h] [rbp-C0h] BYREF
  struct _GUID v28; // [rsp+58h] [rbp-B0h] BYREF
  int v29[2]; // [rsp+68h] [rbp-A0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp-98h] BYREF
  _OWORD *v31; // [rsp+80h] [rbp-88h]
  _BYTE v32[56]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-48h]
  __int64 v34; // [rsp+C8h] [rbp-40h]
  _BYTE v35[96]; // [rsp+D8h] [rbp-30h]
  struct _GUID v36; // [rsp+138h] [rbp+30h]
  _BYTE v37[72]; // [rsp+148h] [rbp+40h]
  _OWORD v38[11]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v39; // [rsp+248h] [rbp+140h]
  struct _GUID v40; // [rsp+258h] [rbp+150h] BYREF
  __int128 v41; // [rsp+268h] [rbp+160h] BYREF
  int v42; // [rsp+278h] [rbp+170h]
  __m256i v43; // [rsp+280h] [rbp+178h] BYREF
  __m256i v44; // [rsp+2A0h] [rbp+198h] BYREF
  _OWORD v45[5]; // [rsp+2C8h] [rbp+1C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v34 = -2LL;
  v4 = a2;
  if ( *((_DWORD *)this + 37) == 1 )
  {
    if ( a2 == 3 )
    {
      v6 = &PKEY_KeywordSpeechAecPolicyResults;
    }
    else
    {
      v7 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1;
      if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data1 )
        v7 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2.Data4;
      v8 = v7 == 0;
      v6 = &PKEY_SpeechAecPolicyResults;
      if ( !v8 )
        v6 = &PKEY_CommunicationsAecPolicyResults;
    }
    v41 = *(_OWORD *)v6;
    v42 = v6[4];
    v44.m256i_i64[0] = (__int64)this;
    v44.m256i_i32[2] = a2;
    *(struct _GUID *)((char *)&v44.m256i_u64[1] + 4) = *a3;
    v43.m256i_i32[0] = a2;
    *(_OWORD *)((char *)v43.m256i_i64 + 4) = *(_OWORD *)((char *)&v44.m256i_u64[1] + 4);
    v43.m256i_i64[3] = (__int64)this;
    memset(v45, 255, 0x44uLL);
    LODWORD(v45[0]) = 5;
    v40 = *a3;
    Data1 = 96 * v4 + (_DWORD)this + 616;
    *(_QWORD *)&v28.Data1 = (char *)this + 96 * v4 + 616;
    AECInsertionPolicy = EffectPolicy::GetAECInsertionPolicy(
                           this,
                           v10,
                           *(struct SystemEffectDescriptor **)&v28.Data1,
                           &v40,
                           (enum INBOX_AEC_INSERTION_POLICY *)v29,
                           (struct _AEC_POLICY_RESULTS *)v45);
    if ( AECInsertionPolicy < 0 )
    {
      v12 = 1866LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)AECInsertionPolicy);
      return (unsigned int)AECInsertionPolicy;
    }
    v14 = v29[0];
    if ( !v29[0] )
      goto LABEL_46;
    if ( v29[0] == 2 )
    {
      v15 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
      if ( (_DWORD)v4 != 3 )
        v15 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
    }
    else
    {
      v15 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
    }
    v40 = *v15;
    if ( !*((_DWORD *)this + v4 + 10) )
    {
      OverridingChain = lambda_a89b631c09f285a4d3ef916a35e3beda_::operator()(v43.m256i_i32);
      if ( OverridingChain < 0 )
      {
        v17 = 1877LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v17,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)OverridingChain);
        return (unsigned int)OverridingChain;
      }
      v33 = 0LL;
      v28 = *a3;
      OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                          96 * (int)v4 + (int)this + 616,
                          (unsigned int)&v28,
                          1,
                          (unsigned int)&v40,
                          2,
                          0,
                          (__int64)v32);
      if ( OverridingChain < 0 )
      {
        v17 = 1878LL;
        goto LABEL_21;
      }
LABEL_46:
      if ( (v14 & 0xFFFFFFFB) == 0 )
      {
LABEL_48:
        v27 = 0LL;
        v25 = *((_QWORD *)this + 2);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&v27,
          0LL);
        (*(void (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v25 + 40LL))(v25, &v27);
        v40 = *a3;
        LogAecEffectPolicyInsertion(
          (const struct _AEC_POLICY_RESULTS *)v45,
          v27,
          &v40,
          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v4);
        pvar[0] = (PROPVARIANT)65;
        pvar[1] = (PROPVARIANT)68;
        v31 = v45;
        v26 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 4) + 48LL))(
                *((_QWORD *)this + 4),
                &v41,
                pvar);
        AECInsertionPolicy = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x7F2,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v26);
          if ( v27 )
            CoTaskMemFree(v27);
          return (unsigned int)AECInsertionPolicy;
        }
        v31 = 0LL;
        PropVariantClear(pvar);
        if ( v27 )
          CoTaskMemFree(v27);
        return 0LL;
      }
LABEL_47:
      *(struct _GUID *)((char *)&v45[2] + 12) = *lambda_e86e403555f745251996716a8cfcb9a8_::operator()(
                                                   (__int64)&v44,
                                                   &v40);
      goto LABEL_48;
    }
    v18 = 16 * v4;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         (__int64 *)this + 2 * v4 + 8,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1
      && v14 != 4 )
    {
      v19 = lambda_a89b631c09f285a4d3ef916a35e3beda_::operator()(v43.m256i_i32);
      if ( v19 < 0 )
      {
        v20 = 1885LL;
LABEL_28:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v20,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v19);
        return (unsigned int)v19;
      }
      Data1 = v28.Data1;
    }
    if ( v14 > 0 )
    {
      if ( v14 <= 2 )
      {
        v33 = 0LL;
        v28 = *a3;
        v19 = SystemEffectDescriptor::CreateOverridingChain(
                Data1,
                (unsigned int)&v28,
                1,
                (unsigned int)&v40,
                2,
                0,
                (__int64)v32);
        if ( v19 < 0 )
        {
          v20 = 1898LL;
          goto LABEL_28;
        }
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             (__int64 *)((char *)this + v18 + 64),
                             a3) == -1 )
          goto LABEL_46;
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                             (__int64)this + v18 + 1496,
                             v23) )
        {
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove((char *)this + v18 + 64, a3);
          goto LABEL_46;
        }
        AECInsertionPolicy = -2147024882;
        v24 = 1902LL;
LABEL_43:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)AECInsertionPolicy);
        return (unsigned int)AECInsertionPolicy;
      }
      if ( v14 == 3 )
      {
        v22 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                (__int64 *)((char *)this + v18 + 64),
                a3);
        v33 = 0LL;
        v28 = *a3;
        AECInsertionPolicy = SystemEffectDescriptor::CreateOverridingChain(
                               Data1,
                               (unsigned int)&v28,
                               1,
                               (unsigned int)&v40,
                               1,
                               v22 != -1,
                               (__int64)v32);
        if ( AECInsertionPolicy < 0 )
        {
          v12 = 1892LL;
          goto LABEL_10;
        }
        goto LABEL_47;
      }
      if ( v14 == 4 )
      {
        *(_QWORD *)&v28.Data1 = v32;
        v40 = *a3;
        IsConnectorModeSupported = CEndpointCharacteristics::IsConnectorModeSupported(this, v4, &v40);
        *(_QWORD *)v35 = this;
        *(_OWORD *)&v35[8] = v41;
        *(_DWORD *)&v35[24] = v42;
        *(_OWORD *)&v35[28] = v45[0];
        *(_OWORD *)&v35[44] = v45[1];
        *(_OWORD *)&v35[60] = v45[2];
        *(_OWORD *)&v35[76] = v45[3];
        *(_DWORD *)&v35[92] = v45[4];
        v36 = *a3;
        *(_DWORD *)v37 = v4;
        *(__m256i *)&v37[8] = v43;
        *(__m256i *)&v37[40] = v44;
        v38[0] = *(_OWORD *)v35;
        v38[1] = *(_OWORD *)&v35[16];
        v38[2] = *(_OWORD *)&v35[32];
        v38[3] = *(_OWORD *)&v35[48];
        v38[4] = *(_OWORD *)&v35[64];
        v38[5] = *(_OWORD *)&v35[80];
        v38[6] = v36;
        v38[7] = *(_OWORD *)v37;
        v38[8] = *(_OWORD *)&v43.m256i_u64[1];
        v38[9] = *(_OWORD *)&v37[32];
        v38[10] = *(_OWORD *)&v44.m256i_u64[1];
        v39 = v44.m256i_i64[3];
        v33 = 0LL;
        std::_Func_class_long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Reset_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64__std::_Wrap_alloc_std::allocator_std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_______(
          (__int64)v32,
          v38);
        v40 = *a3;
        AECInsertionPolicy = SystemEffectDescriptor::CreateOverridingChain(
                               Data1,
                               (unsigned int)&v40,
                               0,
                               0,
                               1,
                               IsConnectorModeSupported,
                               (__int64)v32);
        if ( AECInsertionPolicy < 0 )
        {
          v12 = 2007LL;
          goto LABEL_10;
        }
        goto LABEL_48;
      }
    }
    AECInsertionPolicy = -2147418113;
    v24 = 2011LL;
    goto LABEL_43;
  }
  return 0LL;
}
