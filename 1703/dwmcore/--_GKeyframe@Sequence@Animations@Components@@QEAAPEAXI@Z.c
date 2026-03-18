/*
 * XREFs of ??_GKeyframe@Sequence@Animations@Components@@QEAAPEAXI@Z @ 0x1801360FC
 * Callers:
 *     ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x1800C1200 (-SetSize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180136130 (-Release@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 */

Components::Animations::Sequence::Keyframe *__fastcall Components::Animations::Sequence::Keyframe::`scalar deleting destructor'(
        Components::Animations::Sequence::Keyframe *this)
{
  _DWORD *v2; // rcx

  v2 = (_DWORD *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v2 )
  {
    if ( v2[2]-- == 1 )
      WPF::ProcessHeapImpl::Free(v2);
  }
  Components::Animations::RefPtr<Components::Animations::Input>::Release((char *)this + 8);
  return this;
}
