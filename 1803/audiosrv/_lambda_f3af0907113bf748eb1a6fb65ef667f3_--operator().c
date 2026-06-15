/*
 * XREFs of _lambda_f3af0907113bf748eb1a6fb65ef667f3_::operator() @ 0x18004FEDC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call @ 0x18004FEC0 (std--_Func_impl_no_alloc__lambda_f3af0907113bf748eb1a6fb65ef667f3__long_SystemEffec_ea_18004FEC0.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x1800509E4 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x1800531AC (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x180095530 (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _lambda_4a17b05ad23a2472e1c3b39a574ceab1_::operator() @ 0x1800E91A8 (_lambda_4a17b05ad23a2472e1c3b39a574ceab1_--operator().c)
 *     _lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator() @ 0x1800E936C (_lambda_759c10d6a679fdab43c4d5c1468c56ec_--operator().c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x1800EBE40 (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_f3af0907113bf748eb1a6fb65ef667f3_::operator()(
        CEndpointCharacteristics **a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int VirtualSurroundEffectMode; // r15d
  int i; // r12d
  bool v8; // bl
  int v9; // eax
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-50h]
  unsigned int v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v23; // [rsp+58h] [rbp-18h] BYREF

  v22[1] = -2LL;
  VirtualSurroundEffectMode = CEndpointCharacteristics::GetVirtualSurroundEffectMode(*a1);
  if ( VirtualSurroundEffectMode )
  {
    if ( (unsigned int)CEndpointCharacteristics::IsOffloadCapable(*a1) )
    {
      CEndpointCharacteristics::GetSpatialRenderingMode(*a1, &v19);
      if ( ((v19 - 1) & 0xFFFFFFFC) != 0 || v19 == 2 )
        VirtualSurroundEffectMode = 0;
    }
  }
  for ( i = 0; i < *(_DWORD *)(a3 + 8); ++i )
  {
    v23 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a3, i);
    v8 = VirtualSurroundEffectMode != 0;
    if ( VirtualSurroundEffectMode == 2 )
    {
      v20 = 0LL;
      v22[0] = 0LL;
      pv = 0LL;
      v19 = 0;
      v8 = 1;
      if ( (int)lambda_4a17b05ad23a2472e1c3b39a574ceab1_::operator()(a1 + 1, a2, &v23, &v20, v22) >= 0 )
      {
        v11 = v22[0];
        if ( v22[0] )
        {
          if ( (*(int (__fastcall **)(_QWORD, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v22[0] + 24LL))(
                 v22[0],
                 &pv,
                 &v19,
                 0LL) >= 0 )
          {
            v12 = 0;
            if ( v19 )
            {
              while ( 1 )
              {
                v11 = 2LL * v12;
                v13 = *((_QWORD *)pv + 2 * v12) - *(_QWORD *)&GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data1;
                if ( !v13 )
                  v13 = *((_QWORD *)pv + 2 * v12 + 1) - *(_QWORD *)GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data4;
                if ( !v13 )
                  break;
                v14 = *((_QWORD *)pv + 2 * v12) - *(_QWORD *)&GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data1;
                if ( !v14 )
                  v14 = *((_QWORD *)pv + 2 * v12 + 1) - *(_QWORD *)GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data4;
                if ( !v14 )
                  break;
                if ( ++v12 >= v19 )
                {
                  v8 = 1;
                  goto LABEL_23;
                }
              }
              v8 = 0;
            }
          }
        }
LABEL_23:
        if ( v8
          && v20
          && ((unsigned __int8)lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v11, v20, 48000LL, 6LL)
           || (unsigned __int8)lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v15, v20, 48000LL, 8LL)
           || (unsigned __int8)lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v16, v20, 44100LL, 6LL)
           || (unsigned __int8)lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v17, v20, 44100LL, 8LL)) )
        {
          v8 = 0;
        }
      }
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v22[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v9 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((char *)*a1 + 64, &v23);
    LODWORD(v18) = 1;
    SystemEffectDescriptor::UpdateEffectsInOverridingChain(
      a2,
      a3,
      v8,
      (unsigned __int64)&unk_180189238 & -(__int64)v8,
      v18,
      v9 != -1);
  }
  *(_DWORD *)(a3 + 16) = 28;
  return 0LL;
}
