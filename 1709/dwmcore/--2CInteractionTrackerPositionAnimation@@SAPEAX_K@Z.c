/*
 * XREFs of ??2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z @ 0x18016A9E8
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18016B5C0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void *__fastcall CInteractionTrackerPositionAnimation::operator new()
{
  void *result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = WPF::ProcessHeapImpl::AllocClear(0x248uLL);
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
