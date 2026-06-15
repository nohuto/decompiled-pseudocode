/*
 * XREFs of _lambda_541a0aba8a0dd1ccbfde03220634244f_::operator() @ 0x180064580
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_541a0aba8a0dd1ccbfde03220634244f__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call @ 0x180064CE0 (std--_Func_impl_no_alloc__lambda_541a0aba8a0dd1ccbfde03220634244f__long_SystemEffec_ea_180064CE0.c)
 * Callees:
 *     ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800500FC (-LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     _lambda_e86e403555f745251996716a8cfcb9a8_::operator() @ 0x180050854 (_lambda_e86e403555f745251996716a8cfcb9a8_--operator().c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x1800531AC (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180053910 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _lambda_7f4a656a268d6d0b9fd67fb138151b91_::operator() @ 0x180064978 (_lambda_7f4a656a268d6d0b9fd67fb138151b91_--operator().c)
 *     ?PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBU_tagpropertykey@@PEBU_AEC_POLICY_RESULTS@@@Z @ 0x180064BA4 (-PersistAECPolicy@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x18009729C (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x1800972B4 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x1800ECFDC (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800F0EE8 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_541a0aba8a0dd1ccbfde03220634244f_::operator()(
        struct _GUID *a1,
        int *a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  int DelayedAECInsertionPolicy; // ebx
  struct _AEC_POLICY_RESULTS *v7; // r12
  __int64 Data1; // rax
  int v9; // ebx
  GUID *v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  int v14; // eax
  struct CEndpointCharacteristics *v15; // rbx
  _OWORD *v16; // rdx
  __int64 v17; // r11
  unsigned int v18; // eax
  __int64 v19; // r11
  _OWORD *v20; // rdx
  __int64 v21; // r11
  unsigned int v22; // eax
  __int64 v23; // r11
  int v24; // eax
  __int64 *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rax
  PROPVARIANT pvar; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h]
  struct _AEC_POLICY_RESULTS *v30; // [rsp+40h] [rbp-40h]
  int v31; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int16 *v32[2]; // [rsp+50h] [rbp-30h] BYREF
  struct _GUID v33; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v32[1] = (unsigned __int16 *)-2LL;
  pvar = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  DelayedAECInsertionPolicy = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, PROPVARIANT *))(**(_QWORD **)(*(_QWORD *)&a1->Data1 + 32LL)
                                                                                                  + 40LL))(
                                *(_QWORD *)(*(_QWORD *)&a1->Data1 + 32LL),
                                a1->Data4,
                                &pvar);
  if ( DelayedAECInsertionPolicy < 0 )
    goto LABEL_39;
  v7 = v30;
  if ( (_WORD)pvar != 65 || (_DWORD)v29 != 68 || *(_DWORD *)v30 != 5 )
    goto LABEL_38;
  v33 = a1[6];
  DelayedAECInsertionPolicy = EffectPolicy::GetDelayedAECInsertionPolicy(
                                *(struct CEndpointCharacteristics **)&a1->Data1,
                                *(struct IPropertyStore **)(*(_QWORD *)&a1->Data1 + 32LL),
                                (struct SystemEffectDescriptor *)a2,
                                &v33,
                                (enum INBOX_AEC_INSERTION_POLICY *)&v31,
                                v30);
  if ( DelayedAECInsertionPolicy >= 0 )
  {
    Data1 = (int)a1[7].Data1;
    v9 = v31;
    if ( v31 == 2 )
    {
      v10 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
      if ( (_DWORD)Data1 != 3 )
        v10 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
    }
    else
    {
      v10 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
    }
    v33 = *v10;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         (__int64 *)(*(_QWORD *)&a1->Data1 + 16 * (Data1 + 4)),
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      if ( !v9 )
        goto LABEL_34;
      v11 = lambda_7f4a656a268d6d0b9fd67fb138151b91_::operator()(a1[7].Data4);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7E3,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
    }
    if ( !v9 )
      goto LABEL_34;
    if ( v9 > 0 )
    {
      if ( v9 <= 2 )
      {
        DelayedAECInsertionPolicy = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                                      (SystemEffectDescriptor *)a2,
                                      a3,
                                      1u,
                                      (__int64)&v33,
                                      2,
                                      0);
        if ( DelayedAECInsertionPolicy < 0 )
          goto LABEL_6;
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             (__int64 *)(*(_QWORD *)&a1->Data1 + 16 * (a2[12] + 4LL)),
                             &a1[6].Data1) != -1 )
        {
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                16LL * (int)a1[7].Data1 + v21 + 1496,
                                v20) )
            goto LABEL_23;
          v22 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                  (__int64 *)(*(_QWORD *)&a1->Data1 + 16 * (a2[12] + 4LL)),
                  &a1[6].Data1);
          if ( v22 != -1 )
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v23, v22);
        }
        if ( *((_DWORD *)v7 + 16) == 8 )
        {
          v24 = *(_DWORD *)(*(_QWORD *)&a1->Data1 + 8584LL);
          if ( v24 )
          {
            *(_DWORD *)(*(_QWORD *)&a1->Data1 + 8584LL) = v24 - 1;
            *((_DWORD *)a3 + 4) = 1;
          }
        }
LABEL_34:
        *(_OWORD *)((char *)v7 + 44) = *(_OWORD *)lambda_e86e403555f745251996716a8cfcb9a8_::operator()(
                                                    (__int64 *)a1[9].Data4,
                                                    (__int64)&v33);
        v32[0] = 0LL;
        v25 = *(__int64 **)(*(_QWORD *)&a1->Data1 + 16LL);
        v26 = *v25;
        v27 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator&(v32);
        (*(void (__fastcall **)(__int64 *, __int64))(v26 + 40))(v25, v27);
        v33 = a1[6];
        LogAecEffectPolicyInsertion(v7, v32[0], &v33, a1[7].Data1);
        DelayedAECInsertionPolicy = CEndpointCharacteristics::PersistAECPolicy(
                                      *(CEndpointCharacteristics **)&a1->Data1,
                                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a1[7].Data1,
                                      (const struct _tagpropertykey *)a1->Data4,
                                      v7);
        PropVariantClear(&pvar);
        if ( DelayedAECInsertionPolicy >= 0 )
          DelayedAECInsertionPolicy = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7E3,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)DelayedAECInsertionPolicy);
        wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(v32);
        return (unsigned int)DelayedAECInsertionPolicy;
      }
      if ( v9 == 3 )
      {
        v14 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                (__int64 *)(*(_QWORD *)&a1->Data1 + 16 * ((int)a1[7].Data1 + 4LL)),
                &a1[6].Data1);
        DelayedAECInsertionPolicy = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                                      (SystemEffectDescriptor *)a2,
                                      a3,
                                      1u,
                                      (__int64)&v33,
                                      1,
                                      v14 != -1);
        if ( DelayedAECInsertionPolicy < 0 )
          goto LABEL_6;
        v15 = *(struct CEndpointCharacteristics **)&a1->Data1;
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             (__int64 *)(16LL * (int)a1[7].Data1 + *(_QWORD *)&a1->Data1 + 1496LL),
                             &a1[6].Data1) != -1 )
        {
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                (__int64)v15 + 16 * v17 + 64,
                                v16) )
          {
LABEL_23:
            DelayedAECInsertionPolicy = -2147024882;
            goto LABEL_39;
          }
          v18 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                  (__int64 *)(*(_QWORD *)&a1->Data1 + 16LL * (int)a1[7].Data1 + 1496),
                  &a1[6].Data1);
          if ( v18 != -1 )
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v19 + 1496, v18);
        }
        goto LABEL_34;
      }
    }
LABEL_38:
    PropVariantClear(&pvar);
    DelayedAECInsertionPolicy = -2147418113;
    goto LABEL_39;
  }
LABEL_6:
  PropVariantClear(&pvar);
LABEL_39:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7E3,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DelayedAECInsertionPolicy);
  return (unsigned int)DelayedAECInsertionPolicy;
}
