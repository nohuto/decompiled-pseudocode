/*
 * XREFs of ??_G?$_Ref_count@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@UEAAPEAXI@Z @ 0x18019F6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

_QWORD *__fastcall std::_Ref_count<TOUCH_TELEMETRY_UPDATE_INFO>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(a1);
  return a1;
}
