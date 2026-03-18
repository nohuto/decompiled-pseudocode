/*
 * XREFs of ?SetRemarshalingFlags@CRenderTargetTargetMarshaler@DirectComposition@@EEAA_NXZ @ 0x1C0144760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CRenderTargetTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CRenderTargetTargetMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x60u;
  if ( *((_DWORD *)this + 16) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 30) != 1.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_DWORD *)this + 31) )
    *((_DWORD *)this + 4) |= 0x200u;
  return 1;
}
