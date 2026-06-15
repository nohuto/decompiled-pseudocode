/*
 * XREFs of ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x1800107FC
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180011CC0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x180033678 (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800109B0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??0?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z @ 0x1800109E0 (--0-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180010A50 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::GetOverridingChainDescriptorIndex(__int64 a1, _QWORD *a2, int a3)
{
  int v5; // edi
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned int v8; // ecx
  __int64 i; // r8
  __int64 *v10; // rdx
  int v11; // eax
  int v12; // r10d
  __int64 v13; // r11
  __int64 v14; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  SystemEffectChainDescriptor *v19; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+38h] [rbp-20h]

  v21 = -2LL;
  if ( !a3 )
  {
    v5 = 0;
    if ( *(int *)(a1 + 40) > 0 )
    {
      v6 = a1 + 32;
      v7 = 0LL;
      while ( 1 )
      {
        if ( v5 < 0 || v5 >= *(_DWORD *)(v6 + 8) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x1800664A9LL);
        }
        if ( *(_BYTE *)(*(_QWORD *)(v7 + *(_QWORD *)v6) + 16LL) )
        {
          v16 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v6, (unsigned int)v5);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v16, a2) != -1 )
            break;
        }
        ++v5;
        v7 += 16LL;
        if ( v5 >= *(_DWORD *)(a1 + 40) )
          goto LABEL_8;
      }
      Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 56, (__int64)&lpCriticalSection);
      v17 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v6, (unsigned int)v5);
      std::shared_ptr<SystemEffectChainDescriptor>::shared_ptr<SystemEffectChainDescriptor>(&v19, v17);
      if ( (int)SystemEffectChainDescriptor::Resolve(v19, (struct SystemEffectDescriptor *)a1) < 0 )
      {
        if ( v20 )
          std::_Ref_count_base::_Decref(v20);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return 0xFFFFFFFFLL;
      }
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
    }
  }
LABEL_8:
  v8 = 0;
  if ( *(int *)(a1 + 40) <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( i < 0 || (signed int)v8 >= *(_DWORD *)(a1 + 40) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x1800664BFLL);
    }
    v10 = *(__int64 **)(i + *(_QWORD *)(a1 + 32));
    v11 = 0;
    v12 = *((_DWORD *)v10 + 2);
    if ( v12 <= 0 )
    {
LABEL_21:
      v11 = -1;
    }
    else
    {
      v13 = *v10;
      while ( 1 )
      {
        v14 = *(_QWORD *)(v13 + 16LL * v11) - *a2;
        if ( !v14 )
          v14 = *(_QWORD *)(v13 + 16LL * v11 + 8) - a2[1];
        if ( !v14 )
          break;
        if ( ++v11 >= v12 )
          goto LABEL_21;
      }
    }
    if ( v11 != -1 )
      break;
    if ( (signed int)++v8 >= *(_DWORD *)(a1 + 40) )
      return 0xFFFFFFFFLL;
  }
  return v8;
}
