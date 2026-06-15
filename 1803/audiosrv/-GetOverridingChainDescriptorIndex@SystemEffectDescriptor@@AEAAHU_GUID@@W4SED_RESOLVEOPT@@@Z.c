/*
 * XREFs of ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x180036810
 * Callers:
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x1800367AC (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800368F0 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180050660 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::GetOverridingChainDescriptorIndex(__int64 a1, _QWORD *a2, int a3)
{
  int v5; // ebx
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
  volatile signed __int32 *v18; // rbx

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
          JUMPOUT(0x180092110LL);
        }
        if ( *(_BYTE *)(*(_QWORD *)(v7 + *(_QWORD *)v6) + 20LL) )
        {
          v16 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v6, v5);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v16, a2) != -1 )
            break;
        }
        ++v5;
        v7 += 16LL;
        if ( v5 >= *(_DWORD *)(a1 + 40) )
          goto LABEL_8;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
      v17 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v6, v5);
      v18 = *(volatile signed __int32 **)(v17 + 8);
      if ( v18 )
      {
        _InterlockedIncrement(v18 + 2);
        v18 = *(volatile signed __int32 **)(v17 + 8);
      }
      if ( (int)SystemEffectChainDescriptor::Resolve(
                  *(SystemEffectChainDescriptor **)v17,
                  (struct SystemEffectDescriptor *)a1) < 0 )
      {
        if ( v18 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v18);
        if ( a1 != -56 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
        return 0xFFFFFFFFLL;
      }
      if ( v18 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v18);
      if ( a1 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
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
      JUMPOUT(0x18009214ALL);
    }
    v10 = *(__int64 **)(i + *(_QWORD *)(a1 + 32));
    v11 = 0;
    v12 = *((_DWORD *)v10 + 2);
    if ( v12 <= 0 )
    {
LABEL_20:
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
          goto LABEL_20;
      }
    }
    if ( v11 != -1 )
      break;
    if ( (signed int)++v8 >= *(_DWORD *)(a1 + 40) )
      return 0xFFFFFFFFLL;
  }
  return v8;
}
