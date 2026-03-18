/*
 * XREFs of ?SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0146570
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0141BE0 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  char v1; // di

  *((_DWORD *)this + 4) &= 0xE44203FF;
  v1 = 0;
  *((_BYTE *)this + 388) |= 4u;
  *((_DWORD *)this + 83) = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || *((float *)this + 12) != 0.0
    || *((float *)this + 13) != 0.0
    || *((float *)this + 34) != 1.0
    || *((_DWORD *)this + 82)
    || *((_DWORD *)this + 86)
    || *((_QWORD *)this + 23)
    || *((_QWORD *)this + 24)
    || *((_QWORD *)this + 37)
    || *((_QWORD *)this + 38)
    || *((_QWORD *)this + 25)
    || *((_QWORD *)this + 26)
    || *((_QWORD *)this + 27)
    || *((_QWORD *)this + 28) )
  {
    return 1;
  }
  return v1;
}
