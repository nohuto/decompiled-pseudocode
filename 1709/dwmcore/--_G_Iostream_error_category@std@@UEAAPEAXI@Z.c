/*
 * XREFs of ??_G_Iostream_error_category@std@@UEAAPEAXI@Z @ 0x18011E290
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

std::_Iostream_error_category *__fastcall std::_Iostream_error_category::`scalar deleting destructor'(
        std::_Iostream_error_category *this,
        char a2)
{
  *(_QWORD *)this = &std::error_category::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
