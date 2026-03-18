/*
 * XREFs of ?SetRemarshalingFlags@CGenericInkMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0141BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CGenericInkMarshaler::SetRemarshalingFlags(
        DirectComposition::CGenericInkMarshaler *this)
{
  bool v1; // zf

  *((_DWORD *)this + 4) &= 0xFFFFFF9F;
  *((_DWORD *)this + 33) = 0;
  v1 = *((_QWORD *)this + 18) == 0LL;
  *((_BYTE *)this + 136) = 1;
  if ( !v1 )
    *((_DWORD *)this + 4) &= ~0x80u;
  return 1;
}
