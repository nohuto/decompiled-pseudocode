/*
 * XREFs of _lambda_667eb01a999704ac1c933d543c16abf4_::operator() @ 0x18004C4DC
 * Callers:
 *     std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call @ 0x18004CF90 (std--_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std--allocator_int__long__ea_18004CF90.c)
 * Callees:
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180010434 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18002F1FC (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800336DC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180038FC0 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 *     _lambda_82fd590d05af8f6990bd8d28cab4a19a_::operator() @ 0x180039704 (_lambda_82fd590d05af8f6990bd8d28cab4a19a_--operator().c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800461C8 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBG@Z @ 0x180046900 (--$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBG@Z.c)
 *     ??$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBG@Z @ 0x180047320 (--$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBG@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_667eb01a999704ac1c933d543c16abf4_::operator()(
        __int64 a1,
        __int64 a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  int v6; // eax
  int DelayedAECInsertionPolicy; // ebx
  struct _AEC_POLICY_RESULTS *v8; // r14
  GUID *v9; // rax
  int v10; // eax
  int updated; // edi
  _OWORD *v13; // rdx
  __int64 v14; // r11
  _OWORD *v15; // rdx
  __int64 v16; // r11
  int v17; // eax
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-60h]
  int v22; // [rsp+20h] [rbp-60h]
  LPVOID pv; // [rsp+30h] [rbp-50h] BYREF
  PROPVARIANT pvar; // [rsp+38h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-40h]
  struct _AEC_POLICY_RESULTS *v26; // [rsp+48h] [rbp-38h]
  int v27; // [rsp+50h] [rbp-30h] BYREF
  __int64 v28; // [rsp+58h] [rbp-28h]
  GUID v29; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v28 = -2LL;
  pvar = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*(_QWORD *)a1 + 32LL) + 40LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 32LL),
         &PKEY_AecPolicyResults,
         &pvar);
  DelayedAECInsertionPolicy = v6;
  if ( v6 >= 0 )
  {
    v8 = v26;
    if ( (_WORD)pvar == 65 && (_DWORD)v25 == 68 && *(_DWORD *)v26 == 4 )
    {
      DelayedAECInsertionPolicy = EffectPolicy::GetDelayedAECInsertionPolicy(
                                    *(struct CEndpointCharacteristics **)a1,
                                    *(struct IPropertyStore **)(*(_QWORD *)a1 + 32LL),
                                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)a2,
                                    (enum INBOX_AEC_INSERTION_POLICY *)&v27,
                                    v26);
      if ( DelayedAECInsertionPolicy < 0 )
      {
LABEL_7:
        PropVariantClear(&pvar);
LABEL_35:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x79B,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)DelayedAECInsertionPolicy);
        return (unsigned int)DelayedAECInsertionPolicy;
      }
      v9 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
      if ( v27 != 2 )
        v9 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
      v29 = *v9;
      if ( v27 > 0 )
      {
        if ( v27 <= 2 )
        {
          DelayedAECInsertionPolicy = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                                        (SystemEffectDescriptor *)a2,
                                        a3,
                                        1u,
                                        &v29,
                                        2,
                                        0);
          if ( DelayedAECInsertionPolicy < 0 )
            goto LABEL_7;
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               (__int64 *)(*(_QWORD *)a1 + 16 * (*(int *)(a2 + 48) + 4LL)),
                               &GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2) != -1 )
          {
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v16 + 1488, v15) )
              goto LABEL_17;
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
              (__int64 *)(*(_QWORD *)a1 + 16 * (*(int *)(a2 + 48) + 4LL)),
              &GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2);
          }
          if ( *((_DWORD *)v8 + 16) == 7 )
          {
            v17 = *(_DWORD *)(*(_QWORD *)a1 + 1664LL);
            if ( v17 )
            {
              *(_DWORD *)(*(_QWORD *)a1 + 1664LL) = v17 - 1;
              *((_BYTE *)a3 + 16) = 1;
            }
          }
LABEL_26:
          *(_OWORD *)((char *)v8 + 44) = *(_OWORD *)lambda_82fd590d05af8f6990bd8d28cab4a19a_::operator()(
                                                      (__int64 *)(a1 + 80),
                                                      (__int64)&v29,
                                                      *(_DWORD *)(a2 + 48));
          pv = 0LL;
          v18 = *(__int64 **)(*(_QWORD *)a1 + 16LL);
          v19 = *v18;
          v20 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::operator&((__int64)&pv);
          (*(void (__fastcall **)(__int64 *, __int64))(v19 + 40))(v18, v20);
          if ( *((_DWORD *)v8 + 15) == 4 )
            LogAecEffectPolicy<8>();
          else
            LogAecEffectPolicy<70368744177672>();
          DelayedAECInsertionPolicy = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*(_QWORD *)a1 + 32LL)
                                                                                               + 48LL))(
                                        *(_QWORD *)(*(_QWORD *)a1 + 32LL),
                                        &PKEY_AecPolicyResults,
                                        &pvar);
          PropVariantClear(&pvar);
          if ( DelayedAECInsertionPolicy >= 0 )
            DelayedAECInsertionPolicy = 0;
          else
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x79B,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)DelayedAECInsertionPolicy,
              v22);
          if ( pv )
            CoTaskMemFree(pv);
          return (unsigned int)DelayedAECInsertionPolicy;
        }
        if ( v27 == 3 )
        {
          v10 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                  (__int64 *)(*(_QWORD *)a1 + 64LL),
                  &GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2);
          updated = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                      (SystemEffectDescriptor *)a2,
                      a3,
                      1u,
                      &v29,
                      1,
                      v10 != -1);
          if ( updated < 0 )
          {
            PropVariantClear(&pvar);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x79B,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)updated);
            return (unsigned int)updated;
          }
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               (__int64 *)(*(_QWORD *)a1 + 1488LL),
                               &GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2) != -1 )
          {
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v14 + 64, v13) )
            {
LABEL_17:
              DelayedAECInsertionPolicy = -2147024882;
              goto LABEL_35;
            }
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
              (__int64 *)(*(_QWORD *)a1 + 1488LL),
              &GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2);
          }
          goto LABEL_26;
        }
      }
    }
    PropVariantClear(&pvar);
    DelayedAECInsertionPolicy = -2147418113;
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x79B,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v6,
    v21);
  return (unsigned int)DelayedAECInsertionPolicy;
}
