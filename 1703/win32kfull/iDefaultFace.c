/*
 * XREFs of iDefaultFace @ 0x1C02374B8
 * Callers:
 *     bVtfdLoadFont @ 0x1C023714C (bVtfdLoadFont.c)
 *     vVtfdFill_IFIMetrics @ 0x1C02374E8 (vVtfdFill_IFIMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall iDefaultFace(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 80);
  if ( *(unsigned __int16 *)(a1 + 83) > 0x190u )
    return v1 != 0 ? 3 : 1;
  else
    return v1 != 0 ? 2 : 0;
}
