/*
 * XREFs of ?SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149E10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01434A0 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CConditionalExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CConditionalExpressionMarshaler *this)
{
  char v1; // bl

  *((_DWORD *)this + 4) &= ~0x1000u;
  v1 = 0;
  if ( *((_QWORD *)this + 17) )
    *((_DWORD *)this + 4) &= ~0x800u;
  *((_DWORD *)this + 33) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_DWORD *)this + 32)
    || *((_QWORD *)this + 17) )
  {
    return 1;
  }
  return v1;
}
