/*
 * XREFs of ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180042940
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800428E0 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800336DC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     _lambda_82fd590d05af8f6990bd8d28cab4a19a_::operator() @ 0x180039704 (_lambda_82fd590d05af8f6990bd8d28cab4a19a_--operator().c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180039790 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004421C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800461C8 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBG@Z @ 0x180046900 (--$LogAecEffectPolicy@$0EAAAAAAAAAAI@@@YAXAEBU_AEC_POLICY_RESULTS@@PEBG@Z.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180046A64 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSy.c)
 *     ??$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBG@Z @ 0x180047320 (--$LogAecEffectPolicy@$07@@YAXAEBU_AEC_POLICY_RESULTS@@PEBG@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::_Func_class_long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Reset_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64__std::_Wrap_alloc_std::allocator_std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_______ @ 0x18004C338 (std--_Func_class_long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_--_.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x1800BBE4C (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::AugmentOEMSpeechProcessingSupport(CEndpointCharacteristics *this)
{
  struct IPropertyStore *v2; // rdx
  int AECInsertionPolicy; // ebx
  __int64 v4; // rdx
  int v6; // esi
  GUID *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  int OverridingChain; // eax
  unsigned int v13; // r14d
  __int64 v14; // rbx
  int v15; // eax
  int v16; // [rsp+28h] [rbp-E0h]
  LPVOID pv; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v18[3]; // [rsp+50h] [rbp-B8h] BYREF
  CEndpointCharacteristics *v19; // [rsp+68h] [rbp-A0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp-98h] BYREF
  int *v21; // [rsp+80h] [rbp-88h]
  _BYTE v22[80]; // [rsp+88h] [rbp-80h] BYREF
  CEndpointCharacteristics *v23; // [rsp+D8h] [rbp-30h]
  __int64 v24; // [rsp+E8h] [rbp-20h]
  _OWORD v25[5]; // [rsp+F8h] [rbp-10h] BYREF
  CEndpointCharacteristics *v26; // [rsp+148h] [rbp+40h]
  GUID v27; // [rsp+158h] [rbp+50h] BYREF
  int v28[20]; // [rsp+168h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v24 = -2LL;
  if ( *((_DWORD *)this + 37) == 1 )
  {
    v19 = this;
    memset(v28, 255, 0x44uLL);
    v28[0] = 4;
    AECInsertionPolicy = EffectPolicy::GetAECInsertionPolicy(
                           this,
                           v2,
                           (CEndpointCharacteristics *)((char *)this + 608),
                           (enum INBOX_AEC_INSERTION_POLICY *)&v18[1],
                           (struct _AEC_POLICY_RESULTS *)v28);
    if ( AECInsertionPolicy < 0 )
    {
      v4 = 1806LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v4,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)AECInsertionPolicy,
        v16);
      return (unsigned int)AECInsertionPolicy;
    }
    v6 = v18[1];
    if ( !LODWORD(v18[1]) )
      goto LABEL_40;
    v7 = &GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
    if ( LODWORD(v18[1]) != 2 )
      v7 = &GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3;
    v27 = *v7;
    if ( !*((_DWORD *)this + 10) )
    {
      *((_DWORD *)this + 10) = 1;
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)this + 64);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            (__int64)this + 64,
                            &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
      {
        v8 = 1818LL;
LABEL_12:
        AECInsertionPolicy = -2147024882;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)AECInsertionPolicy,
          v16);
        return (unsigned int)AECInsertionPolicy;
      }
      *(_QWORD *)&v22[56] = 0LL;
      *(GUID *)&v18[1] = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
      AECInsertionPolicy = SystemEffectDescriptor::CreateOverridingChain(
                             (int)this + 608,
                             (unsigned int)&v18[1],
                             1,
                             (unsigned int)&v27,
                             2,
                             0,
                             (__int64)v22);
      if ( AECInsertionPolicy < 0 )
      {
        v4 = 1819LL;
        goto LABEL_4;
      }
      *((_DWORD *)this + 344) = 1;
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                            (char *)this + 1392,
                            v9,
                            &GUID_00000000_0000_0000_0000_000000000000) )
      {
        v8 = 1823LL;
        goto LABEL_12;
      }
      goto LABEL_40;
    }
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         (__int64 *)this + 8,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                            (char *)this + 64,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        AECInsertionPolicy = -2147418113;
        v8 = 1831LL;
        goto LABEL_13;
      }
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            (__int64)this + 64,
                            &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
      {
        v8 = 1832LL;
        goto LABEL_12;
      }
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                            (char *)this + 1392,
                            v10,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v8 = 1834LL;
        goto LABEL_12;
      }
    }
    if ( v6 > 0 )
    {
      if ( v6 <= 2 )
      {
        *(_QWORD *)&v22[56] = 0LL;
        *(GUID *)&v18[1] = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
        OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                            (int)this + 608,
                            (unsigned int)&v18[1],
                            1,
                            (unsigned int)&v27,
                            2,
                            0,
                            (__int64)v22);
        v13 = OverridingChain;
        if ( OverridingChain < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x737,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)OverridingChain,
            v16);
          return v13;
        }
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             (__int64 *)this + 8,
                             &GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2) != -1 )
        {
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                (__int64)this + 1488,
                                &GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2) )
          {
            v8 = 1851LL;
            goto LABEL_12;
          }
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
            (char *)this + 64,
            &GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2);
        }
LABEL_40:
        if ( (v6 & 0xFFFFFFFB) == 0 )
        {
LABEL_42:
          pv = 0LL;
          v14 = *((_QWORD *)this + 2);
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
            &pv,
            0LL);
          (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &pv);
          if ( v28[15] == 4 )
            LogAecEffectPolicy<8>(v28, pv);
          else
            LogAecEffectPolicy<70368744177672>(v28, pv);
          pvar[0] = (PROPVARIANT)65;
          pvar[1] = (PROPVARIANT)68;
          v21 = v28;
          v15 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 4) + 48LL))(
                  *((_QWORD *)this + 4),
                  &PKEY_AecPolicyResults,
                  pvar);
          AECInsertionPolicy = v15;
          if ( v15 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x7B6,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v15,
              v16);
            if ( pv )
              CoTaskMemFree(pv);
            return (unsigned int)AECInsertionPolicy;
          }
          v21 = 0LL;
          PropVariantClear(pvar);
          if ( pv )
            CoTaskMemFree(pv);
          return 0LL;
        }
LABEL_41:
        *(_OWORD *)&v28[11] = *(_OWORD *)lambda_82fd590d05af8f6990bd8d28cab4a19a_::operator()(
                                           (__int64 *)&v19,
                                           (__int64)&v27,
                                           0);
        goto LABEL_42;
      }
      if ( v6 == 3 )
      {
        v11 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                (__int64 *)this + 8,
                &GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2);
        *(_QWORD *)&v22[56] = 0LL;
        *(GUID *)&v18[1] = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
        AECInsertionPolicy = SystemEffectDescriptor::CreateOverridingChain(
                               (int)this + 608,
                               (unsigned int)&v18[1],
                               1,
                               (unsigned int)&v27,
                               1,
                               v11 != -1,
                               (__int64)v22);
        if ( AECInsertionPolicy < 0 )
        {
          v4 = 1841LL;
          goto LABEL_4;
        }
        goto LABEL_41;
      }
      if ( v6 == 4 )
      {
        v19 = (CEndpointCharacteristics *)v22;
        *(_QWORD *)v22 = this;
        *(_OWORD *)&v22[8] = *(_OWORD *)v28;
        *(_OWORD *)&v22[24] = *(_OWORD *)&v28[4];
        *(_OWORD *)&v22[40] = *(_OWORD *)&v28[8];
        *(_OWORD *)&v22[56] = *(_OWORD *)&v28[12];
        *(_DWORD *)&v22[72] = v28[16];
        v23 = this;
        v25[0] = *(_OWORD *)v22;
        v25[1] = *(_OWORD *)&v22[16];
        v25[2] = *(_OWORD *)&v22[32];
        v25[3] = *(_OWORD *)&v22[48];
        v25[4] = *(_OWORD *)&v22[64];
        v26 = this;
        *(_QWORD *)&v22[56] = 0LL;
        std::_Func_class_long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Reset_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64__std::_Wrap_alloc_std::allocator_std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_______(
          v22,
          v25);
        v27 = GUID_fc1cfc9b_b9d6_4cfa_b5e0_4bb2166878b2;
        AECInsertionPolicy = SystemEffectDescriptor::CreateOverridingChain(
                               (int)this + 608,
                               (unsigned int)&v27,
                               0,
                               0,
                               2,
                               0,
                               (__int64)v22);
        if ( AECInsertionPolicy < 0 )
        {
          v4 = 1947LL;
          goto LABEL_4;
        }
        goto LABEL_42;
      }
    }
    AECInsertionPolicy = -2147418113;
    v8 = 1951LL;
    goto LABEL_13;
  }
  return 0LL;
}
