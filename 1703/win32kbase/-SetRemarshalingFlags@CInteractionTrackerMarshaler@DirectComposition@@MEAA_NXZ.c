/*
 * XREFs of ?SetRemarshalingFlags@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0146B20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0143810 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::SetRemarshalingFlags(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  char v1; // di

  *((_DWORD *)this + 4) &= 0xF20203FF;
  v1 = 0;
  *((_BYTE *)this + 364) |= 4u;
  *((_DWORD *)this + 77) = 0;
  if ( (unsigned __int8)DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this)
    || *((float *)this + 12) != 0.0
    || *((float *)this + 13) != 0.0
    || *((float *)this + 34) != 1.0
    || *((_DWORD *)this + 76)
    || *((_DWORD *)this + 80)
    || *((_QWORD *)this + 23)
    || *((_QWORD *)this + 24)
    || *((_QWORD *)this + 34)
    || *((_QWORD *)this + 35)
    || *((_QWORD *)this + 25)
    || *((_QWORD *)this + 26)
    || *((_QWORD *)this + 27) )
  {
    return 1;
  }
  return v1;
}
