/*
 * XREFs of _lambda_f3af0907113bf748eb1a6fb65ef667f3_::operator() @ 0x1800B0DA0
 * Callers:
 *     std::_Func_impl__lambda_f3af0907113bf748eb1a6fb65ef667f3__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call @ 0x1800B8A80 (std--_Func_impl__lambda_f3af0907113bf748eb1a6fb65ef667f3__std--allocator_int__long__ea_1800B8A80.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x180020C30 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x180020E38 (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18005AE7C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     _lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator() @ 0x1800B019C (_lambda_759c10d6a679fdab43c4d5c1468c56ec_--operator().c)
 *     _lambda_9b7b4ff0acd9889e01bbf173a6c75851_::operator() @ 0x1800B0328 (_lambda_9b7b4ff0acd9889e01bbf173a6c75851_--operator().c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x1800B6238 (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x1800BD7F8 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_f3af0907113bf748eb1a6fb65ef667f3_::operator()(
        CEndpointCharacteristics **a1,
        SystemEffectDescriptor *a2,
        __int64 a3)
{
  int VirtualSurroundEffectMode; // r15d
  int i; // r12d
  bool v8; // bl
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v22; // [rsp+58h] [rbp-18h] BYREF

  v21[1] = -2LL;
  VirtualSurroundEffectMode = CEndpointCharacteristics::GetVirtualSurroundEffectMode(*a1);
  if ( VirtualSurroundEffectMode )
  {
    if ( (unsigned int)CEndpointCharacteristics::IsOffloadCapable(*a1) )
    {
      CEndpointCharacteristics::GetSpatialRenderingMode(*a1, &v18);
      if ( ((v18 - 1) & 0xFFFFFFFC) != 0 || v18 == 2 )
        VirtualSurroundEffectMode = 0;
    }
  }
  for ( i = 0; i < *(_DWORD *)(a3 + 8); ++i )
  {
    v22 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a3, i);
    v8 = VirtualSurroundEffectMode != 0;
    if ( VirtualSurroundEffectMode == 2 )
    {
      v19 = 0LL;
      v21[0] = 0LL;
      pv = 0LL;
      v18 = 0;
      if ( (int)lambda_9b7b4ff0acd9889e01bbf173a6c75851_::operator()((__int64)(a1 + 1), a2, &v22, &v19, v21) >= 0 )
      {
        v9 = v21[0];
        if ( v21[0] )
        {
          if ( (*(int (__fastcall **)(_QWORD, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v21[0] + 24LL))(
                 v21[0],
                 &pv,
                 &v18,
                 0LL) >= 0 )
          {
            v10 = 0;
            if ( v18 )
            {
              while ( 1 )
              {
                v9 = 2LL * v10;
                v11 = *((_QWORD *)pv + 2 * v10) - *(_QWORD *)&GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data1;
                if ( !v11 )
                  v11 = *((_QWORD *)pv + 2 * v10 + 1) - *(_QWORD *)GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data4;
                if ( !v11 )
                  break;
                v12 = *((_QWORD *)pv + 2 * v10) - *(_QWORD *)&GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data1;
                if ( !v12 )
                  v12 = *((_QWORD *)pv + 2 * v10 + 1) - *(_QWORD *)GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data4;
                if ( !v12 )
                  break;
                if ( ++v10 >= v18 )
                {
                  v8 = 1;
                  goto LABEL_21;
                }
              }
              v8 = 0;
            }
          }
        }
LABEL_21:
        if ( v8
          && v19
          && (lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v9, v19, 0xBB80u, 6u)
           || lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v13, v19, 0xBB80u, 8u)
           || lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v14, v19, 0xAC44u, 6u)
           || lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v15, v19, 0xAC44u, 8u)) )
        {
          v8 = 0;
        }
      }
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v21[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v16 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)*a1 + 8, &v22);
    SystemEffectDescriptor::UpdateEffectsInOverridingChain(
      a2,
      a3,
      v8,
      (unsigned __int64)&unk_18014B3C8 & -(__int64)v8,
      1,
      v16 != -1);
  }
  *(_DWORD *)(a3 + 16) = 28;
  return 0LL;
}
