/*
 * XREFs of ??_G?$_Ref_count@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@UEAAPEAXI@Z @ 0x180191A20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count<TOUCH_TELEMETRY_UPDATE_INFO>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
