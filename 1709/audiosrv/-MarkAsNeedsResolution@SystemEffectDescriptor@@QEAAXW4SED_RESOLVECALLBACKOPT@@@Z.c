/*
 * XREFs of ?MarkAsNeedsResolution@SystemEffectDescriptor@@QEAAXW4SED_RESOLVECALLBACKOPT@@@Z @ 0x1800BD118
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18002294C (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 * Callees:
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x180020164 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 */

void __fastcall SystemEffectDescriptor::MarkAsNeedsResolution(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int i; // edi

  if ( *(_BYTE *)(a1 + 52) )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
    {
      if ( (a2 & *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                          a1 + 32,
                                          i)
                           + 16LL)) != 0 )
        *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                a1 + 32,
                                i)
                 + 20LL) = 1;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
  }
}
