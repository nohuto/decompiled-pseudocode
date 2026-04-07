/*
 * XREFs of ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourceProperty@@@Z @ 0x18009490C
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800934D0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddBinding@CAnimationResource@@QEAAJIW4Enum@DwmResourceProperty@@@Z @ 0x1800A6E44 (-AddBinding@CAnimationResource@@QEAAJIW4Enum@DwmResourceProperty@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_BindIfPresent(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 616);
  if ( v5 )
  {
    v6 = CAnimationResource::AddBinding(v5, a3, a4);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x7F4u);
  }
  return v4;
}
