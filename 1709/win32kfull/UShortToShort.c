/*
 * XREFs of UShortToShort @ 0x1C02C2DC8
 * Callers:
 *     sfac_ReadOutlineData @ 0x1C02C4D80 (sfac_ReadOutlineData.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UShortToShort(USHORT usOperand, SHORT *psResult)
{
  if ( usOperand > 0x7FFFu )
    *psResult = -1;
  else
    *psResult = usOperand;
  return usOperand > 0x7FFFu ? 0x80070216 : 0;
}
