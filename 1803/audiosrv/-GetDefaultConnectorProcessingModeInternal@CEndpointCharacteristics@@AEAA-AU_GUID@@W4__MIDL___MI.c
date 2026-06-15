/*
 * XREFs of ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180038AA0
 * Callers:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180014500 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x1800360A0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800497AC (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180095AB0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180095D94 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x1800365C0 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

GUID *__fastcall CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
        __int64 a1,
        GUID *a2,
        int a3,
        int a4)
{
  int v4; // edi
  int v6; // r14d
  __int64 v9; // rcx
  BOOL v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rbx
  int v13; // edx
  int v14; // ecx
  __int64 v15; // r10
  __int64 v16; // r9
  GUID v17; // xmm0
  GUID *result; // rax
  PROPVARIANT pvar; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+28h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v6 = 0;
  if ( a3 != 2 )
    v6 = a3;
  if ( v6 )
    goto LABEL_10;
  v9 = *(_QWORD *)(a1 + 56);
  v10 = 1;
  if ( !v9 )
    goto LABEL_10;
  pvar = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
         v9,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v10 = v20 == 0;
  }
  PropVariantClear(&pvar);
  if ( v10 )
  {
LABEL_10:
    if ( !a4 )
    {
      v12 = 96LL * v6;
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v12 + a1 + 232));
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v12 + a1 + 616));
      SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v12 + a1 + 1000));
    }
    v11 = a1 + 16 * (v6 + 4LL);
  }
  else
  {
    v11 = a1 + 128;
  }
  v13 = *(_DWORD *)(v11 + 8);
  if ( v13 )
  {
    v14 = 0;
    if ( v13 <= 0 )
      goto LABEL_23;
    v15 = *(_QWORD *)v11;
    while ( *(_QWORD *)(v15 + 16LL * v14) != *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1
         || *(_QWORD *)(v15 + 16LL * v14 + 8) != *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 )
    {
      if ( ++v14 >= v13 )
        goto LABEL_19;
    }
    if ( v14 != -1 )
    {
      result = a2;
      *a2 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      return result;
    }
LABEL_19:
    v16 = *(_QWORD *)v11;
    while ( *(_QWORD *)(v16 + 16LL * v4) != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
         || *(_QWORD *)(v16 + 16LL * v4 + 8) != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
    {
      if ( ++v4 >= v13 )
        goto LABEL_23;
    }
    if ( v4 == -1 )
    {
LABEL_23:
      v17 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v11, 0);
      result = a2;
      *a2 = v17;
    }
    else
    {
      result = a2;
      *a2 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
  }
  else
  {
    result = a2;
    *a2 = GUID_00000000_0000_0000_0000_000000000000;
  }
  return result;
}
