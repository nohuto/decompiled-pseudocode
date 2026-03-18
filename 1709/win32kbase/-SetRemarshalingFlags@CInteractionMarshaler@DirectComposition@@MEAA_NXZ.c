/*
 * XREFs of ?SetRemarshalingFlags@CInteractionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0143AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CInteractionMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionMarshaler *this)
{
  char v1; // al
  bool result; // al

  *((_DWORD *)this + 4) &= 0xFFFFFEDF;
  if ( *((_QWORD *)this + 27) )
    *((_DWORD *)this + 4) |= 0x40u;
  v1 = *((_BYTE *)this + 280);
  if ( (v1 & 0x1F) != 0 )
    *((_DWORD *)this + 4) |= 0x200u;
  if ( *((_QWORD *)this + 33) )
    *((_DWORD *)this + 4) |= 0x400u;
  if ( *((_QWORD *)this + 34) )
    *((_DWORD *)this + 4) |= 0x2000u;
  if ( (v1 & 0x60) != 0x60 )
    *((_DWORD *)this + 4) |= 0x800u;
  *((_DWORD *)this + 13) |= 0xFu;
  result = 1;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 35) |= 0xFu;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 52) = 0;
  return result;
}
