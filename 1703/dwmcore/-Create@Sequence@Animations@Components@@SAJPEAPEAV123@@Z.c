/*
 * XREFs of ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18002A570
 * Callers:
 *     ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@@Z @ 0x18002C150 (-ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationTy.c)
 * Callees:
 *     ?Create@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@SAJPEAPEAVInterpolation@23@@Z @ 0x18002A41C (-Create@-$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compo.c)
 *     ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18002AB6C (-CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Sequence::Create(struct Components::Animations::Sequence **a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  _QWORD *v4; // rax
  int Instance; // ebx
  _QWORD *v7; // rax
  void *v8; // rcx
  bool v9; // zf
  void *v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  void *lpMem; // [rsp+38h] [rbp+10h] BYREF

  if ( !Components::Animations::Sequence::s_rpDefaultValue )
  {
    lpMem = 0LL;
    Instance = Components::Animations::ConstantInput::CreateInstance((struct Components::Animations::ConstantInput **)&lpMem);
    if ( Instance < 0 )
    {
      v8 = lpMem;
      if ( lpMem )
      {
        v9 = (*((_DWORD *)lpMem + 2))-- == 1;
        if ( v9 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 48LL))(v8);
      }
      return (unsigned int)Instance;
    }
    v7 = lpMem;
    *((_QWORD *)lpMem + 2) = 0LL;
    v7[3] = 0LL;
    v7[4] = 0LL;
    v7[5] = 0LL;
    *((_DWORD *)v7 + 3) = 18;
    Components::Animations::Sequence::s_rpDefaultValue = (Components::Animations::Input *)v7;
  }
  if ( Components::Animations::Sequence::s_rpDefaultInterpolation )
  {
LABEL_3:
    v2 = WPF::ProcessHeapImpl::AllocClear(0x110uLL);
    v3 = v2;
    if ( !v2 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    memset_0(v2, 0, 0x110uLL);
    v3[3] = 8;
    *(_QWORD *)v3 = v3 + 4;
    v3[2] = 0;
    *((_QWORD *)v3 + 29) = 0LL;
    v4 = WPF::ProcessHeapImpl::AllocClear(0x20uLL);
    if ( !v4 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    *((_QWORD *)v3 + 29) = v4;
    v3[64] = 0;
    v3[65] = 1065353216;
    *a1 = (struct Components::Animations::Sequence *)v3;
    return 0;
  }
  lpMem = 0LL;
  Instance = Components::Animations::LinearInterpolation<Components::Animations::CartesianCoordinateSpace>::Create(&lpMem);
  if ( Instance >= 0 )
  {
    Components::Animations::Sequence::s_rpDefaultInterpolation = lpMem;
    goto LABEL_3;
  }
  v10 = lpMem;
  if ( lpMem )
  {
    v9 = (*((_DWORD *)lpMem + 2))-- == 1;
    if ( v9 )
      WPF::ProcessHeapImpl::Free(v10);
  }
  return (unsigned int)Instance;
}
