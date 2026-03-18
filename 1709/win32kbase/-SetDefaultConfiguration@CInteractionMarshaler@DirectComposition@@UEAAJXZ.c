/*
 * XREFs of ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0021AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C00220BC (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetDefaultConfiguration(
        DirectComposition::CInteractionMarshaler *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 280);
  *((_DWORD *)this + 4) |= 0x800u;
  *((_BYTE *)this + 280) = v1 & 0x9E | 1;
  return DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(this);
}
