/*
 * XREFs of ?SetRemarshalingFlags@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014A7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CComponentTransform2DMarshaler::SetRemarshalingFlags(
        DirectComposition::CComponentTransform2DMarshaler *this)
{
  *((_DWORD *)this + 4) &= 0xFFFFE07F;
  return *((float *)this + 20) != 0.0
      || *((float *)this + 14) != 0.0
      || *((float *)this + 15) != 0.0
      || *((float *)this + 16) != 0.0
      || *((float *)this + 17) != 0.0
      || *((float *)this + 18) != 0.0
      || *((float *)this + 19) != 0.0
      || *((float *)this + 21) != 1.0
      || *((float *)this + 22) != 1.0
      || *((float *)this + 23) != 1.0
      || *((float *)this + 24) != 0.0
      || *((float *)this + 25) != 0.0
      || *((float *)this + 26) != 1.0
      || *((float *)this + 27) != 0.0
      || *((float *)this + 28) != 0.0;
}
