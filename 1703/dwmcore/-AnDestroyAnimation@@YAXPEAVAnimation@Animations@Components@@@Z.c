/*
 * XREFs of ?AnDestroyAnimation@@YAXPEAVAnimation@Animations@Components@@@Z @ 0x18002A46C
 * Callers:
 *     ?AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnimation@Animations@Components@@@Z @ 0x18002A4B8 (-AnCreateAnimation@@YAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUIKeyframeAnimationOwner@@PEAPEAVAnima.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18002F7D8 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180030FE8 (--1CKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??_EAnimation@Animations@Components@@UEAAPEAXI@Z @ 0x18002C1E0 (--_EAnimation@Animations@Components@@UEAAPEAXI@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AnDestroyAnimation(struct Components::Animations::Animation *this)
{
  void *(__fastcall *v2)(Components::Animations::Animation *__hidden, unsigned int); // rax

  if ( this )
  {
    if ( (*((_BYTE *)this + 72) & 4) != 0 )
      Components::Animations::Animation::ApiReset(this, 0);
    v2 = *(void *(__fastcall **)(Components::Animations::Animation *__hidden, unsigned int))(*(_QWORD *)this + 96LL);
    if ( v2 == Components::Animations::Animation::`vector deleting destructor' )
      Components::Animations::Animation::`vector deleting destructor'(this, 1u);
    else
      v2(this, 1u);
  }
}
