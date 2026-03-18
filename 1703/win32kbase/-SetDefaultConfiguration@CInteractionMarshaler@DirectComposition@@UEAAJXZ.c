/*
 * XREFs of ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@UEAAJXZ @ 0x1C000EDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetDefaultConfiguration(
        DirectComposition::CInteractionMarshaler *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 248);
  *((_DWORD *)this + 4) |= 0x800u;
  *((_BYTE *)this + 248) = v1 & 0x9E | 1;
  return DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(this);
}
