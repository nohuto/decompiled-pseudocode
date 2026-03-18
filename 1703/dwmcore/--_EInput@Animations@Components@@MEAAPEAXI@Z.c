/*
 * XREFs of ??_EInput@Animations@Components@@MEAAPEAXI@Z @ 0x180029370
 * Callers:
 *     ?FinalRelease@Input@Animations@Components@@MEAAXXZ @ 0x18002AB10 (-FinalRelease@Input@Animations@Components@@MEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

Components::Animations::Input *__fastcall Components::Animations::Input::`vector deleting destructor'(
        Components::Animations::Input *this,
        char a2)
{
  *(_QWORD *)this = &Components::Animations::Input::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
