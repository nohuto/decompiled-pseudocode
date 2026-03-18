/*
 * XREFs of ?SetRemarshalingFlags@CHolographicDisplayMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014D190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CHolographicDisplayMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicDisplayMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 8) && *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_BYTE *)this + 114) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_BYTE *)this + 112) && *((_BYTE *)this + 113) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x400u;
  return 1;
}
