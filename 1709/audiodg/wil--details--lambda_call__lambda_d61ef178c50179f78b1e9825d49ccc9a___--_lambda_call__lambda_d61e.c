/*
 * XREFs of wil::details::lambda_call__lambda_d61ef178c50179f78b1e9825d49ccc9a___::_lambda_call__lambda_d61ef178c50179f78b1e9825d49ccc9a___ @ 0x140031518
 * Callers:
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$3 @ 0x1400217A4 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$3.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$5 @ 0x1400217BC (_FillAPOInitSystemEffectsStructure_--_1_--dtor$5.c)
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
