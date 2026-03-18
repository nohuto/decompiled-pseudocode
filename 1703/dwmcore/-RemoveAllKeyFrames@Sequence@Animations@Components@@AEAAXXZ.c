/*
 * XREFs of ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x1800910F4
 * Callers:
 *     ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@@Z @ 0x18002C150 (-ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationTy.c)
 *     ??_EAnimation@Animations@Components@@UEAAPEAXI@Z @ 0x18002C1E0 (--_EAnimation@Animations@Components@@UEAAPEAXI@Z.c)
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180090EF8 (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?FinalRelease@Input@Animations@Components@@MEAAXXZ @ 0x18002AB10 (-FinalRelease@Input@Animations@Components@@MEAAXXZ.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800C1174 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Components::Animations::Sequence::RemoveAllKeyFrames(Components::Animations::Sequence *this)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  Components::Animations::Input *(__fastcall ***v5)(Components::Animations::Input *, char); // rcx
  bool v6; // zf
  void (*v7)(void); // rax
  _DWORD *v8; // r8

  v1 = *((int *)this + 2);
  if ( v1 > 0 )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)this;
      v5 = *(Components::Animations::Input *(__fastcall ****)(Components::Animations::Input *, char))(v3 + *(_QWORD *)this + 8);
      *(_QWORD *)(v3 + *(_QWORD *)this + 8) = 0LL;
      if ( v5 )
      {
        v6 = (*((_DWORD *)v5 + 2))-- == 1;
        if ( v6 )
        {
          v7 = (void (*)(void))(*v5)[6];
          if ( (char *)v7 == (char *)Components::Animations::Input::FinalRelease )
            Components::Animations::Input::FinalRelease(v5);
          else
            v7();
        }
      }
      v8 = *(_DWORD **)(v3 + v4 + 16);
      *(_QWORD *)(v3 + v4 + 16) = 0LL;
      if ( v8 )
      {
        v6 = v8[2]-- == 1;
        if ( v6 )
          HeapFree(WPF::g_processHeap, 0, v8);
      }
      v3 += 24LL;
      --v1;
    }
    while ( v1 );
  }
  Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::RemoveAll(this);
  *((_BYTE *)this + 264) &= ~4u;
}
