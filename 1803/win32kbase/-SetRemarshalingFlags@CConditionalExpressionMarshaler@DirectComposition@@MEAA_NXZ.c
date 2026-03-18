/*
 * XREFs of ?SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0155AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014B0B0 (-SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CConditionalExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CConditionalExpressionMarshaler *this)
{
  char v1; // bl
  unsigned int v2; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 4) & 0xFFFFEFFF;
  *((_DWORD *)this + 4) = v2;
  if ( *((_QWORD *)this + 17) )
    *((_DWORD *)this + 4) = v2 & 0xFFFFF7FF;
  *((_DWORD *)this + 33) = 0;
  if ( DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(this)
    || *((_DWORD *)this + 32)
    || *((_QWORD *)this + 17) )
  {
    return 1;
  }
  return v1;
}
