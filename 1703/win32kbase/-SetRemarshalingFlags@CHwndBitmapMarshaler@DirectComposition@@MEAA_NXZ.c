/*
 * XREFs of ?SetRemarshalingFlags@CHwndBitmapMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0147C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHwndBitmapMarshaler::SetRemarshalingFlags(
        DirectComposition::CHwndBitmapMarshaler *this)
{
  if ( *((_QWORD *)this + 5) )
    *((_DWORD *)this + 4) |= 0x20u;
  return (*((unsigned __int8 *)this + 16) >> 5) & 1;
}
