/*
 * XREFs of ?SetRemarshalingFlags@CCaptureControllerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0159A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCaptureControllerMarshaler::SetRemarshalingFlags(
        DirectComposition::CCaptureControllerMarshaler *this)
{
  if ( *((_QWORD *)this + 5) )
    *((_DWORD *)this + 4) |= 0x20u;
  if ( !*((_BYTE *)this + 56) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((float *)this + 12) != 0.0 || *((float *)this + 13) != 0.0 )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x100u;
  return 1;
}
