/*
 * XREFs of ?SetRemarshalingFlags@CMaskBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0149710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CMaskBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CMaskBrushMarshaler *this)
{
  if ( *((_QWORD *)this + 5) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 6) )
    *((_DWORD *)this + 4) |= 0x40u;
  return 1;
}
