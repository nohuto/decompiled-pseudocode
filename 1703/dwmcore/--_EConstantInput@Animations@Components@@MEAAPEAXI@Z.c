/*
 * XREFs of ??_EConstantInput@Animations@Components@@MEAAPEAXI@Z @ 0x18002ABD0
 * Callers:
 *     ?FinalRelease@Input@Animations@Components@@MEAAXXZ @ 0x18002AB10 (-FinalRelease@Input@Animations@Components@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

Components::Animations::ConstantInput *__fastcall Components::Animations::ConstantInput::`vector deleting destructor'(
        Components::Animations::ConstantInput *this,
        char a2)
{
  *(_QWORD *)this = &Components::Animations::Input::`vftable';
  if ( (a2 & 1) != 0 )
    HeapFree(WPF::g_processHeap, 0, this);
  return this;
}
