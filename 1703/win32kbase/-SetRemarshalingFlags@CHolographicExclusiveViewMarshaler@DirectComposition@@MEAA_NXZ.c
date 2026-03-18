/*
 * XREFs of ?SetRemarshalingFlags@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0144D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::SetRemarshalingFlags(
        DirectComposition::CHolographicExclusiveViewMarshaler *this)
{
  char v1; // dl

  *((_DWORD *)this + 4) |= 0x20u;
  v1 = 0;
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_DWORD *)this + 10) || (*((_DWORD *)this + 4) & 0x40) != 0 )
    return 1;
  return v1;
}
