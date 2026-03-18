/*
 * XREFs of ?AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnimation@Animations@Components@@@Z @ 0x18002A4B8
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x18002A46C (-AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z.c)
 *     ?ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@@Z @ 0x18002C150 (-ApiCreate@Animation@Animations@Components@@QEAAJPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationTy.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall AnCreateAnimation(int a1, __int64 a2, struct Components::Animations::Animation **a3)
{
  struct Components::Animations::Animation *v6; // rdi
  int v7; // ebx
  int v8; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (struct Components::Animations::Animation *)WPF::ProcessHeapImpl::AllocClear(0x50uLL);
  if ( !v6 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  *(_QWORD *)v6 = &Components::Animations::Animation::`vftable';
  *((_QWORD *)v6 + 1) = 0LL;
  v7 = a1 - 18;
  if ( v7 )
  {
    v10 = v7 - 17;
    if ( v10 )
    {
      v11 = v10 - 17;
      if ( v11 )
      {
        v12 = v11 - 17;
        if ( v12 )
        {
          if ( (unsigned int)(v12 - 1) > 1 )
          {
            v8 = -2147024809;
            goto LABEL_16;
          }
        }
      }
    }
  }
  v8 = Components::Animations::Animation::ApiCreate(v6, a2);
  if ( v8 < 0 )
  {
LABEL_16:
    AnDestroyAnimation(v6);
    *a3 = 0LL;
    return (unsigned int)v8;
  }
  *a3 = v6;
  return 0;
}
