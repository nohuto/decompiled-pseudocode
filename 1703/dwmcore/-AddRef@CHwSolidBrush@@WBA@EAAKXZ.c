/*
 * XREFs of ?AddRef@CHwSolidBrush@@WBA@EAAKXZ @ 0x1800D65E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CHwSolidBrush::AddRef()
{
  return LocalMILObject<CMILBrushLinearGradient>::Release();
}
