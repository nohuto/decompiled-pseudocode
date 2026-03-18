/*
 * XREFs of ?SetRemarshalingFlags@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01579C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149E90 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CComponentTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CComponentTransform3DMarshaler *this)
{
  char v2; // al
  char v3; // cl

  *((_DWORD *)this + 4) &= 0xFFFFC07F;
  v2 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2
    || *((float *)this + 26) != 0.0
    || *((float *)this + 17) != 0.0
    || *((float *)this + 18) != 0.0
    || *((float *)this + 27) != 1.0
    || *((float *)this + 28) != 1.0
    || *((float *)this + 29) != 1.0
    || *((float *)this + 14) != 0.0
    || *((float *)this + 15) != 0.0
    || *((float *)this + 16) != 0.0
    || *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 0.0
    || *((float *)this + 25) != 1.0
    || *((float *)this + 19) != 0.0
    || *((float *)this + 20) != 0.0
    || *((float *)this + 21) != 0.0
    || *((float *)this + 22) != 1.0
    || *((float *)this + 30) != 1.0
    || *((float *)this + 31) != 0.0
    || *((float *)this + 32) != 0.0
    || *((float *)this + 33) != 0.0
    || *((float *)this + 34) != 0.0
    || *((float *)this + 35) != 1.0
    || *((float *)this + 36) != 0.0
    || *((float *)this + 37) != 0.0
    || *((float *)this + 38) != 0.0
    || *((float *)this + 39) != 0.0
    || *((float *)this + 40) != 1.0
    || *((float *)this + 41) != 0.0
    || *((float *)this + 42) != 0.0
    || *((float *)this + 43) != 0.0
    || *((float *)this + 44) != 0.0
    || *((float *)this + 45) != 1.0 )
  {
    return 1;
  }
  return v3;
}
