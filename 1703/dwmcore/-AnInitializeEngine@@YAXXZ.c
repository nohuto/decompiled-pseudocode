/*
 * XREFs of ?AnInitializeEngine@@YAXXZ @ 0x1800C6048
 * Callers:
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18002F76C (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801812D0 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?PreInitClass@Time@Animations@Components@@SAJXZ @ 0x1800C6104 (-PreInitClass@Time@Animations@Components@@SAJXZ.c)
 */

void AnInitializeEngine(void)
{
  if ( !byte_18024127C )
  {
    byte_18024127C = 1;
    Components::Animations::Time::PreInitClass();
    Components::Animations::AnimationManager::InitClass();
  }
}
