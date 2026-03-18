/*
 * XREFs of ?SetRemarshalingFlags@CHwndBitmapMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0148AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CHwndBitmapMarshaler::SetRemarshalingFlags(
        DirectComposition::CHwndBitmapMarshaler *this)
{
  if ( *((_QWORD *)this + 5) )
    *((_DWORD *)this + 4) |= 0x20u;
  return (*((_DWORD *)this + 4) & 0x20) != 0;
}
