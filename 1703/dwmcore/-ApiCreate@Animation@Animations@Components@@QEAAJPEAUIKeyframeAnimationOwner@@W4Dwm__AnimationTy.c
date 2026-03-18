/*
 * XREFs of ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@@Z @ 0x18002C150
 * Callers:
 *     ?AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnimation@Animations@Components@@@Z @ 0x18002A4B8 (-AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnima.c)
 * Callees:
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18002A570 (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x1800910F4 (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800C1174 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiCreate(__int64 a1, __int64 a2, int a3)
{
  int v6; // esi
  struct Components::Animations::Sequence *v7; // rax
  struct Components::Animations::Sequence *v8; // rbx
  void *v10; // rcx
  struct Components::Animations::Sequence *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v6 = Components::Animations::Sequence::Create(&v11);
  if ( v6 < 0 )
  {
    v8 = v11;
  }
  else
  {
    *(_BYTE *)(a1 + 72) &= ~8u;
    *(_DWORD *)(a1 + 52) = 0;
    v7 = v11;
    *(_DWORD *)(a1 + 48) = a3;
    v8 = 0LL;
    *(_DWORD *)(a1 + 60) = 0;
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    v6 = 0;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 64) = a2;
    *(_DWORD *)(a1 + 40) = 1065353216;
  }
  if ( v8 )
  {
    Components::Animations::Sequence::RemoveAllKeyFrames(v8);
    v10 = (void *)*((_QWORD *)v8 + 29);
    if ( v10 )
      WPF::ProcessHeapImpl::Free(v10);
    Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::RemoveAll(v8);
    WPF::ProcessHeapImpl::Free(v8);
  }
  return (unsigned int)v6;
}
