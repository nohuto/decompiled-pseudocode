/*
 * XREFs of ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002362C
 * Callers:
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180022310 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x18005A5A4 (-GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B64E0 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x180020164 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x1800233B0 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18005ADF8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18005AE7C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800B00F4 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetSupportedProcessingModes(__int64 a1, __int64 *a2, int a3)
{
  int v5; // esi
  __int64 *v6; // rax
  int v7; // esi
  __int64 v8; // r14
  int v9; // ebp
  int v10; // ecx
  _QWORD *v11; // rdx
  __int64 v12; // r15
  int v13; // ebp
  __int64 v14; // rax
  _OWORD *v15; // rax
  __int64 v17; // rdx
  unsigned int i; // ebp
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // r9
  __int64 v24; // r8
  bool v25; // sf
  int v26; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 )
  {
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)a1);
    v5 = 0;
    if ( *(int *)(a1 + 40) > 0 )
    {
      while ( 2 )
      {
        for ( i = 0;
              (signed int)i < *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                       a1 + 32,
                                                       v5)
                                        + 8LL);
              ++i )
        {
          v19 = (_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                            a1 + 32,
                            v5);
          v20 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v19, i);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(a2, v20) == -1 )
          {
            v21 = (_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                              a1 + 32,
                              v5);
            v22 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v21, i);
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a2, v22) )
            {
              v17 = 584LL;
LABEL_26:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v17,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                (const char *)0x8007000ELL,
                v26);
              return 2147942414LL;
            }
          }
        }
        if ( ++v5 < *(_DWORD *)(a1 + 40) )
          continue;
        break;
      }
    }
    v6 = *(__int64 **)(a1 + 16);
    if ( v6 )
    {
      v7 = 0;
      if ( *((int *)v6 + 2) > 0 )
      {
        v8 = 0LL;
        do
        {
          if ( v7 < 0 || v7 >= *((_DWORD *)v6 + 2) )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x180052792LL);
          }
          v9 = *((_DWORD *)a2 + 2);
          v10 = 0;
          v11 = (_QWORD *)(*v6 + 16LL * v7);
          if ( v9 > 0 )
          {
            while ( 1 )
            {
              v23 = (_QWORD *)(*a2 + 16LL * v10);
              v24 = *v23 - *v11;
              if ( *v23 == *v11 )
                v24 = v23[1] - v11[1];
              if ( !v24 )
                break;
              if ( ++v10 >= v9 )
                goto LABEL_9;
            }
          }
          else
          {
LABEL_9:
            v10 = -1;
          }
          if ( v10 == -1 )
          {
            if ( v7 >= *((_DWORD *)v6 + 2) )
            {
              RaiseException(0xC000008C, 1u, 0, 0LL);
              JUMPOUT(0x18005277CLL);
            }
            v12 = *v6;
            if ( v9 == *((_DWORD *)a2 + 3) )
            {
              if ( *((_DWORD *)a2 + 3) )
              {
                v25 = (v9 & 0x40000000) != 0;
                v13 = 2 * v9;
                if ( v25 )
                  goto LABEL_25;
              }
              else
              {
                v13 = 1;
              }
              if ( (unsigned __int64)v13 > 0x7FFFFFF || (v14 = _o__recalloc(*a2, v13, 16LL)) == 0 )
              {
LABEL_25:
                v17 = 596LL;
                goto LABEL_26;
              }
              *((_DWORD *)a2 + 3) = v13;
              *a2 = v14;
            }
            v15 = (_OWORD *)(*a2 + 16LL * *((int *)a2 + 2));
            if ( v15 )
              *v15 = *(_OWORD *)(v8 + v12);
            ++*((_DWORD *)a2 + 2);
          }
          v6 = *(__int64 **)(a1 + 16);
          ++v7;
          v8 += 16LL;
        }
        while ( v7 < *((_DWORD *)v6 + 2) );
      }
    }
  }
  else
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(a2, a1);
    if ( *((_DWORD *)a2 + 2) != *(_DWORD *)(a1 + 8) )
    {
      v17 = 570LL;
      goto LABEL_26;
    }
  }
  return 0LL;
}
