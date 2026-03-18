/*
 * XREFs of ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800C1174
 * Callers:
 *     ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@@Z @ 0x18002C150 (-ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationTy.c)
 *     ??_EAnimation@Animations@Components@@UEAAPEAXI@Z @ 0x18002C1E0 (--_EAnimation@Animations@Components@@UEAAPEAXI@Z.c)
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x1800910F4 (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x1800C1200 (-SetSize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::RemoveAll(char **a1)
{
  int v1; // esi
  __int64 v3; // rdi
  char *v4; // rbp
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  void *v7; // rcx
  bool v8; // zf

  v1 = 0;
  if ( *((int *)a1 + 2) > 0 )
  {
    v3 = 0LL;
    do
    {
      v4 = *a1;
      v5 = *(_DWORD **)&(*a1)[v3 + 16];
      *(_QWORD *)&(*a1)[v3 + 16] = 0LL;
      if ( v5 )
      {
        v8 = v5[2]-- == 1;
        if ( v8 )
          WPF::ProcessHeapImpl::Free(v5);
      }
      v6 = *(_DWORD **)&v4[v3 + 8];
      *(_QWORD *)&v4[v3 + 8] = 0LL;
      if ( v6 )
      {
        v8 = v6[2]-- == 1;
        if ( v8 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 48LL))(v6);
      }
      ++v1;
      v3 += 24LL;
    }
    while ( v1 < *((_DWORD *)a1 + 2) );
  }
  v7 = *a1;
  if ( *a1 != (char *)(a1 + 2) && v7 )
    WPF::ProcessHeapImpl::Free(v7);
  *((_DWORD *)a1 + 2) = 0;
  *a1 = (char *)(a1 + 2);
  *((_DWORD *)a1 + 3) = 8;
}
