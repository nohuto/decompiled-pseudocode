/*
 * XREFs of ?Initialize@CCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C015CD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0151F40 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositeEffectMarshaler::Initialize(
        DirectComposition::CCompositeEffectMarshaler *this)
{
  *((_DWORD *)this + 22) = 0;
  return DirectComposition::CFilterEffectMarshaler::Initialize(this);
}
