/*
 * XREFs of wil::details::lambda_call__lambda_d61ef178c50179f78b1e9825d49ccc9a___::_lambda_call__lambda_d61ef178c50179f78b1e9825d49ccc9a___ @ 0x1800DC540
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180020320 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     _CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics_::_1_::dtor$7 @ 0x18003970B (_CEndpointCharacteristicsCache--GetAliasedEndpointCharacteristics_--_1_--dtor$7.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$3 @ 0x1800DCD9B (_FillAPOInitSystemEffectsStructure_--_1_--dtor$3.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$5 @ 0x1800DCDB3 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::lambda_call__lambda_d61ef178c50179f78b1e9825d49ccc9a___::_lambda_call__lambda_d61ef178c50179f78b1e9825d49ccc9a___(
        __int64 a1)
{
  HRESULT result; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return PropVariantClear(*(PROPVARIANT **)a1);
  }
  return result;
}
