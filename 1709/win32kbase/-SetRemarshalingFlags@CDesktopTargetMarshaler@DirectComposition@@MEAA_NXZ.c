/*
 * XREFs of ?SetRemarshalingFlags@CDesktopTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0143BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CDesktopTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CDesktopTargetMarshaler *this)
{
  *((_DWORD *)this + 4) |= 0x20u;
  if ( *((_QWORD *)this + 7) )
    *((_DWORD *)this + 4) |= 0x40u;
  if ( *((_QWORD *)this + 8) )
    *((_DWORD *)this + 4) |= 0x80u;
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_BYTE *)this + 52) )
    *((_DWORD *)this + 4) |= 0x100u;
  if ( *((_BYTE *)this + 53) )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_DWORD *)this + 20) || *((_DWORD *)this + 22) || *((_DWORD *)this + 21) || *((_DWORD *)this + 23) )
    *((_DWORD *)this + 4) |= 0x800u;
  return (*((_DWORD *)this + 4) & 0xFC0) != 0;
}
