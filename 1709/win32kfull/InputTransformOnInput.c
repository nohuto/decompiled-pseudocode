/*
 * XREFs of InputTransformOnInput @ 0x1C01D18B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0103250 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall InputTransformOnInput(
        __int64 a1,
        struct tagWND *a2,
        struct tagWND *a3,
        const struct tagINPUT_TRANSFORM *a4)
{
  return InputTransform::OnInput(*(struct _EX_PUSH_LOCK ***)(a1 + 80), a2, a3, a4);
}
