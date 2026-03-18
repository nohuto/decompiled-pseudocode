/*
 * XREFs of ?SetRemarshalingFlags@CScreenCursorMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014BE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CScreenCursorMarshaler::SetRemarshalingFlags(
        DirectComposition::CScreenCursorMarshaler *this)
{
  if ( *((_DWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x20u;
  return 1;
}
