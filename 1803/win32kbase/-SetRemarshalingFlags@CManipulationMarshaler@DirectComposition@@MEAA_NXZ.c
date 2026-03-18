/*
 * XREFs of ?SetRemarshalingFlags@CManipulationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0149970
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0148D30 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::SetRemarshalingFlags(
        DirectComposition::CManipulationMarshaler *this)
{
  int v1; // eax
  int v2; // eax

  v1 = *((_DWORD *)this + 4) | 0xC0;
  *((_DWORD *)this + 4) = v1;
  if ( *((_QWORD *)this + 86) )
  {
    if ( *((_DWORD *)this + 33) && *((_WORD *)this + 68) )
      v2 = v1 | 0x200;
    else
      v2 = v1 | 0x100;
    *((_DWORD *)this + 4) = v2;
  }
  DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  return 1;
}
