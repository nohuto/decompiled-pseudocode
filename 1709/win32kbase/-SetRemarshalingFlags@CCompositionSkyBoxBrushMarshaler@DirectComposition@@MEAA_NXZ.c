/*
 * XREFs of ?SetRemarshalingFlags@CCompositionSkyBoxBrushMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0148050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCompositionSkyBoxBrushMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionSkyBoxBrushMarshaler *this)
{
  if ( *((_DWORD *)this + 14) != 63 )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( *((float *)this + 15) != 0.0 || *((float *)this + 16) != 0.0 || *((float *)this + 17) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((float *)this + 18) != 100.0 )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_BYTE *)this + 76) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 6) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 5) )
    *((_DWORD *)this + 4) |= 0x200u;
  return 1;
}
