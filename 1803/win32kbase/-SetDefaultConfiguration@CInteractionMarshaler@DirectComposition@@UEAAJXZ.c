/*
 * XREFs of ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0004340
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C0003F84 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetDefaultConfiguration(
        DirectComposition::CInteractionMarshaler *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 316);
  *((_DWORD *)this + 4) |= 0x800u;
  *((_BYTE *)this + 316) = v1 & 0xCE | 1;
  return DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(this);
}
