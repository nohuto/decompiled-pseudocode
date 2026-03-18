/*
 * XREFs of ?GetAlphaDescriptor@CLinearTransferEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ @ 0x180179E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinearTransferEffect::GetAlphaDescriptor(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 252) != 0) + 1;
}
