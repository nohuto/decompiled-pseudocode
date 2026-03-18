/*
 * XREFs of ?SetRemarshalingFlags@CSurfaceBrushMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0148860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CSurfaceBrushMarshaler *this)
{
  if ( *((_QWORD *)this + 5) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 6) )
    *((_DWORD *)this + 4) |= 0x40u;
  *((_DWORD *)this + 4) |= 0x7C0u;
  return 1;
}
