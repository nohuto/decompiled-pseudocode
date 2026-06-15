/*
 * XREFs of ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800334D4
 * Callers:
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x180033158 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180079C78 (-GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010540 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800109B0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800336DC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180046104 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetSupportedProcessingModes(__int64 a1, __int64 a2, int a3)
{
  int v5; // edi
  __int64 v6; // rax
  int v7; // edi
  __int64 v9; // r14
  int i; // ebp
  __int64 *v11; // rax
  __int64 v12; // rax
  int v13; // ecx
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 )
  {
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)a1);
    v5 = 0;
    if ( *(int *)(a1 + 40) > 0 )
    {
      v9 = 0LL;
      while ( 2 )
      {
        for ( i = 0; ; ++i )
        {
          if ( v5 < 0 || v5 >= *(_DWORD *)(a1 + 40) )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x1800767E7LL);
          }
          if ( i >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + v9) + 8LL) )
            break;
          v11 = (__int64 *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a1 + 32, v5);
          v12 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v11, i);
          v13 = 0;
          v14 = (_QWORD *)v12;
          if ( *(int *)(a2 + 8) <= 0 )
          {
LABEL_16:
            v13 = -1;
          }
          else
          {
            while ( 1 )
            {
              v15 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v13);
              v16 = *v15 - *v14;
              if ( *v15 == *v14 )
                v16 = v15[1] - v14[1];
              if ( !v16 )
                break;
              if ( ++v13 >= *(_DWORD *)(a2 + 8) )
                goto LABEL_16;
            }
          }
          if ( v13 == -1 )
          {
            v17 = (__int64 *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a1 + 32, v5);
            v18 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v17, i);
            if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a2, v18) )
            {
              v20 = 551LL;
              goto LABEL_28;
            }
          }
        }
        ++v5;
        v9 += 16LL;
        if ( v5 < *(_DWORD *)(a1 + 40) )
          continue;
        break;
      }
    }
    v6 = *(_QWORD *)(a1 + 16);
    if ( !v6 )
      return 0LL;
    v7 = 0;
    if ( *(int *)(v6 + 8) <= 0 )
      return 0LL;
    while ( 1 )
    {
      v19 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v6, v7);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(a2, v19) == -1 )
      {
        v21 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*(_QWORD *)(a1 + 16), v7);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a2, v21) )
          break;
      }
      v6 = *(_QWORD *)(a1 + 16);
      if ( ++v7 >= *(_DWORD *)(v6 + 8) )
        return 0LL;
    }
    v20 = 563LL;
  }
  else
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(a2, a1);
    if ( *(_DWORD *)(a2 + 8) == *(_DWORD *)(a1 + 8) )
      return 0LL;
    v20 = 537LL;
  }
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v22);
  return 2147942414LL;
}
