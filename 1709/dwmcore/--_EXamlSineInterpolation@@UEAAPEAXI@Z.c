/*
 * XREFs of ??_EXamlSineInterpolation@@UEAAPEAXI@Z @ 0x180066BE0
 * Callers:
 *     ?Release@KeyframeInterpolation@@UEAAKXZ @ 0x18006A320 (-Release@KeyframeInterpolation@@UEAAKXZ.c)
 *     ?Release@KeyframeValue@@UEAAKXZ @ 0x180092E60 (-Release@KeyframeValue@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

XamlSineInterpolation *__fastcall XamlSineInterpolation::`vector deleting destructor'(
        XamlSineInterpolation *this,
        char a2)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
