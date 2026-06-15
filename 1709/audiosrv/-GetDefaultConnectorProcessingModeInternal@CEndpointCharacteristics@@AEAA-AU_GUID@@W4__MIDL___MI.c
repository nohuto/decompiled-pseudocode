/*
 * XREFs of ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18002153C
 * Callers:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022274 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180022664 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18005A44C (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180020BD0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x1800233B0 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18005AE7C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 */

GUID *__fastcall CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
        CEndpointCharacteristics *a1,
        GUID *a2,
        int a3,
        int a4)
{
  int v4; // edi
  int v6; // r14d
  char *v9; // rcx
  __int64 v10; // rbx
  int v11; // edx
  int v12; // eax
  _QWORD *v13; // r8
  GUID v14; // xmm0
  _QWORD *v15; // rax
  GUID *result; // rax

  v4 = 0;
  v6 = 0;
  if ( a3 != 2 )
    v6 = a3;
  if ( v6 || CEndpointCharacteristics::AreEnhancementsEnabled(a1) )
  {
    if ( !a4 )
    {
      v10 = 96LL * v6;
      SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)a1 + v10 + 232));
      SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)a1 + v10 + 616));
      SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)a1 + v10 + 1000));
    }
    v9 = (char *)a1 + 16 * v6 + 64;
  }
  else
  {
    v9 = (char *)a1 + 128;
  }
  v11 = *((_DWORD *)v9 + 2);
  if ( v11 )
  {
    v12 = 0;
    if ( v11 <= 0 )
    {
LABEL_14:
      v12 = -1;
    }
    else
    {
      while ( 1 )
      {
        v13 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v12);
        if ( *v13 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1
          && v13[1] == *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4 )
        {
          break;
        }
        if ( ++v12 >= v11 )
          goto LABEL_14;
      }
    }
    if ( v12 == -1 )
    {
      if ( v11 <= 0 )
      {
LABEL_21:
        v4 = -1;
      }
      else
      {
        while ( 1 )
        {
          v15 = (_QWORD *)(*(_QWORD *)v9 + 16LL * v4);
          if ( *v15 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
            && v15[1] == *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
          {
            break;
          }
          if ( ++v4 >= v11 )
            goto LABEL_21;
        }
      }
      if ( v4 == -1 )
        v14 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v9, 0LL);
      else
        v14 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v14 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
  }
  else
  {
    v14 = GUID_00000000_0000_0000_0000_000000000000;
  }
  result = a2;
  *a2 = v14;
  return result;
}
