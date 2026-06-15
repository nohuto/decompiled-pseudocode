/*
 * XREFs of _lambda_d9b0be7eda368bff9c92e9d9b278ea98_::operator() @ 0x1800B07F0
 * Callers:
 *     std::_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call @ 0x1800B8A60 (std--_Func_impl__lambda_d9b0be7eda368bff9c92e9d9b278ea98__std--allocator_int__long__ea_1800B8A60.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005ABB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18005ADF8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_a89b631c09f285a4d3ef916a35e3beda_::operator() @ 0x1800B04EC (_lambda_a89b631c09f285a4d3ef916a35e3beda_--operator().c)
 *     _lambda_e86e403555f745251996716a8cfcb9a8_::operator() @ 0x1800B0C10 (_lambda_e86e403555f745251996716a8cfcb9a8_--operator().c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800B792C (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BB780 (-LogAecEffectPolicyInsertion@@YAXAEBU_AEC_POLICY_RESULTS@@PEBGU_GUID@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x1800BD7F8 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800BDBCC (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d9b0be7eda368bff9c92e9d9b278ea98_::operator()(struct _GUID *a1, int *a2, __int64 a3)
{
  int v6; // eax
  int DelayedAECInsertionPolicy; // ebx
  struct _AEC_POLICY_RESULTS *v8; // r12
  int v9; // ebx
  GUID *v10; // rax
  int v11; // eax
  unsigned int updated; // r14d
  int v14; // eax
  struct CEndpointCharacteristics *v15; // rbx
  _OWORD *v16; // rdx
  __int64 v17; // r11
  _OWORD *v18; // rdx
  __int64 v19; // r11
  int v20; // eax
  __int64 v21; // rbx
  LPVOID pv; // [rsp+30h] [rbp-50h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-40h]
  struct _AEC_POLICY_RESULTS *v25; // [rsp+48h] [rbp-38h]
  int v26; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+58h] [rbp-28h]
  struct _GUID v28; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v27 = -2LL;
  pvar = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, PROPVARIANT *))(**(_QWORD **)(*(_QWORD *)&a1->Data1 + 32LL)
                                                                           + 40LL))(
         *(_QWORD *)(*(_QWORD *)&a1->Data1 + 32LL),
         a1->Data4,
         &pvar);
  DelayedAECInsertionPolicy = v6;
  if ( v6 >= 0 )
  {
    v8 = v25;
    if ( (_WORD)pvar == 65 && (_DWORD)v24 == 68 && *(_DWORD *)v25 == 5 )
    {
      v28 = a1[6];
      DelayedAECInsertionPolicy = EffectPolicy::GetDelayedAECInsertionPolicy(
                                    *(struct CEndpointCharacteristics **)&a1->Data1,
                                    *(struct IPropertyStore **)(*(_QWORD *)&a1->Data1 + 32LL),
                                    (struct SystemEffectDescriptor *)a2,
                                    &v28,
                                    (enum INBOX_AEC_INSERTION_POLICY *)&v26,
                                    v25);
      if ( DelayedAECInsertionPolicy < 0 )
      {
LABEL_7:
        PropVariantClear(&pvar);
LABEL_41:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7D7,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)DelayedAECInsertionPolicy);
        return (unsigned int)DelayedAECInsertionPolicy;
      }
      v9 = v26;
      if ( v26 == 2 )
      {
        v10 = &GUID_7ecead6d_6452_4ded_b567_7bb9947d7669;
        if ( a1[7].Data1 != 3 )
          v10 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
      }
      else
      {
        v10 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
      }
      v28 = *v10;
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           (__int64 *)(*(_QWORD *)&a1->Data1 + 16 * ((int)a1[7].Data1 + 4LL)),
                           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
      {
        if ( !v9 )
          goto LABEL_35;
        v11 = lambda_a89b631c09f285a4d3ef916a35e3beda_::operator()((int *)a1[7].Data4);
        updated = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x7D7,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v11);
          return updated;
        }
      }
      if ( !v9 )
        goto LABEL_35;
      if ( v9 > 0 )
      {
        if ( v9 <= 2 )
        {
          updated = SystemEffectDescriptor::UpdateEffectsInOverridingChain(a2, a3, 1LL, &v28, 2, 0);
          if ( (updated & 0x80000000) != 0 )
          {
            PropVariantClear(&pvar);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7D7,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)updated);
            return updated;
          }
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               (__int64 *)(*(_QWORD *)&a1->Data1 + 16 * (a2[12] + 4LL)),
                               &a1[6].Data1) != -1 )
          {
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                  16LL * (int)a1[7].Data1 + v19 + 1496,
                                  v18) )
              goto LABEL_25;
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
              *(_QWORD *)&a1->Data1 + 16 * (a2[12] + 4LL),
              &a1[6]);
          }
          if ( *((_DWORD *)v8 + 16) == 8 )
          {
            v20 = *(_DWORD *)(*(_QWORD *)&a1->Data1 + 8520LL);
            if ( v20 )
            {
              *(_DWORD *)(*(_QWORD *)&a1->Data1 + 8520LL) = v20 - 1;
              *(_DWORD *)(a3 + 16) = 1;
            }
          }
LABEL_35:
          *(_OWORD *)((char *)v8 + 44) = *(_OWORD *)lambda_e86e403555f745251996716a8cfcb9a8_::operator()(
                                                      a1[9].Data4,
                                                      &v28);
          pv = 0LL;
          v21 = *(_QWORD *)(*(_QWORD *)&a1->Data1 + 16LL);
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
            &pv,
            0LL);
          (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v21 + 40LL))(v21, &pv);
          v28 = a1[6];
          LogAecEffectPolicyInsertion(
            v8,
            (const unsigned __int16 *)pv,
            &v28,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a1[7].Data1);
          DelayedAECInsertionPolicy = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, PROPVARIANT *))(**(_QWORD **)(*(_QWORD *)&a1->Data1 + 32LL) + 48LL))(
                                        *(_QWORD *)(*(_QWORD *)&a1->Data1 + 32LL),
                                        a1->Data4,
                                        &pvar);
          PropVariantClear(&pvar);
          if ( DelayedAECInsertionPolicy >= 0 )
            DelayedAECInsertionPolicy = 0;
          else
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x7D7,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)DelayedAECInsertionPolicy);
          if ( pv )
            CoTaskMemFree(pv);
          return (unsigned int)DelayedAECInsertionPolicy;
        }
        if ( v9 == 3 )
        {
          v14 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                  (__int64 *)(*(_QWORD *)&a1->Data1 + 16 * ((int)a1[7].Data1 + 4LL)),
                  &a1[6].Data1);
          DelayedAECInsertionPolicy = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                                        a2,
                                        a3,
                                        1LL,
                                        &v28,
                                        1,
                                        v14 != -1);
          if ( DelayedAECInsertionPolicy < 0 )
            goto LABEL_7;
          v15 = *(struct CEndpointCharacteristics **)&a1->Data1;
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               (__int64 *)(16LL * (int)a1[7].Data1 + *(_QWORD *)&a1->Data1 + 1496LL),
                               &a1[6].Data1) != -1 )
          {
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                  (__int64)v15 + v17 + 64,
                                  v16) )
            {
LABEL_25:
              DelayedAECInsertionPolicy = -2147024882;
              goto LABEL_41;
            }
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
              *(_QWORD *)&a1->Data1 + 1496LL + 16LL * (int)a1[7].Data1,
              &a1[6]);
          }
          goto LABEL_35;
        }
      }
    }
    PropVariantClear(&pvar);
    DelayedAECInsertionPolicy = -2147418113;
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x7D7,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)DelayedAECInsertionPolicy;
}
