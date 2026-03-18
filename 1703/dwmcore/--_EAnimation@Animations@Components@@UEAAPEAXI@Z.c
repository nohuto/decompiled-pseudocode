/*
 * XREFs of ??_EAnimation@Animations@Components@@UEAAPEAXI@Z @ 0x18002C1E0
 * Callers:
 *     ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x18002A46C (-AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x1800910F4 (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800C1174 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 */

Components::Animations::Animation *__fastcall Components::Animations::Animation::`vector deleting destructor'(
        Components::Animations::Animation *this,
        char a2)
{
  _QWORD *v4; // rdi
  void *v5; // rcx

  *(_QWORD *)this = &Components::Animations::Animation::`vftable';
  v4 = (_QWORD *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    Components::Animations::Sequence::RemoveAllKeyFrames(*((Components::Animations::Sequence **)this + 1));
    v5 = (void *)v4[29];
    if ( v5 )
      WPF::ProcessHeapImpl::Free(v5);
    Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::RemoveAll(v4);
    WPF::ProcessHeapImpl::Free(v4);
  }
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
