/*
 * XREFs of ?SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014B330
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01434A0 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CExpressionMarshaler *this)
{
  char v1; // di

  *((_DWORD *)this + 4) &= ~0x800u;
  v1 = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 55) = 0;
  if ( *((_QWORD *)this + 28) )
    *((_DWORD *)this + 4) &= ~0x1000u;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_QWORD *)this + 15) && *((_QWORD *)this + 17) )
  {
    return 1;
  }
  return v1;
}
