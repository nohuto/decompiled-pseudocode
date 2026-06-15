/*
 * XREFs of ?RemoveAt@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHH@Z @ 0x1800BD2B0
 * Callers:
 *     ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x1800BD374 (-RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArra.c)
 * Callees:
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180020188 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v4; // rsi
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // r9
  const void *v8; // rdx
  size_t v9; // r8

  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
    return 0LL;
  v4 = 16LL * a2;
  std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v4 + *(_QWORD *)a1);
  v5 = *(_DWORD *)(a1 + 8);
  if ( a2 != v5 - 1 )
  {
    v6 = (unsigned int)(v5 - a2);
    v7 = v4 + *(_QWORD *)a1;
    v8 = (const void *)(v7 + 16);
    v9 = 16LL * ((int)v6 - 1);
    if ( v9 )
    {
      if ( !v7 || v7 == -16 )
      {
        *(_DWORD *)_o__errno(v6, v8) = 22;
        goto LABEL_10;
      }
      if ( 16LL * (int)v6 < v9 )
      {
        *(_DWORD *)_o__errno(v6, v8) = 34;
LABEL_10:
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove((void *)(v4 + *(_QWORD *)a1), v8, v9);
    }
  }
  --*(_DWORD *)(a1 + 8);
  return 1LL;
}
