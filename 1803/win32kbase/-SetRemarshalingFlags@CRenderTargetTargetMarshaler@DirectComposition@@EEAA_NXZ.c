/*
 * XREFs of ?SetRemarshalingFlags@CRenderTargetTargetMarshaler@DirectComposition@@EEAA_NXZ @ 0x1C014CC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CRenderTargetTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CRenderTargetTargetMarshaler *this)
{
  int v1; // eax

  *((_DWORD *)this + 4) |= 0x60u;
  v1 = *((_DWORD *)this + 4);
  if ( *((_DWORD *)this + 16) )
  {
    v1 |= 0x80u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((float *)this + 30) != 1.0 )
  {
    v1 |= 0x100u;
    *((_DWORD *)this + 4) = v1;
  }
  if ( *((_DWORD *)this + 31) )
    *((_DWORD *)this + 4) = v1 | 0x200;
  return 1;
}
