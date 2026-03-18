/*
 * XREFs of ?SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0148F50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0143A50 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CConditionalExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CConditionalExpressionMarshaler *this)
{
  char v1; // bl

  *((_DWORD *)this + 4) &= ~0x800u;
  v1 = 0;
  if ( *((_QWORD *)this + 15) )
    *((_DWORD *)this + 4) &= ~0x400u;
  *((_DWORD *)this + 29) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_DWORD *)this + 28)
    || *((_QWORD *)this + 15) )
  {
    return 1;
  }
  return v1;
}
