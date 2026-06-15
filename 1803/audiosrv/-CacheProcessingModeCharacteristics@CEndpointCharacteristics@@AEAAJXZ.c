/*
 * XREFs of ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800E9DC0
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180050E64 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800ED3F8 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800ED954 (-WriteProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengi.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheProcessingModeCharacteristics(CEndpointCharacteristics *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_QWORD *)this + 24)
    || (result = CEndpointCharacteristics::WriteProcessingModeCharacteristics(this, 3LL), (int)result >= 0) )
  {
    if ( *((_QWORD *)this + 23) )
      return CEndpointCharacteristics::WriteProcessingModeCharacteristics(this, 0LL);
  }
  return result;
}
