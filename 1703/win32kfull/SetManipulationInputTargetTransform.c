/*
 * XREFs of SetManipulationInputTargetTransform @ 0x1C01CD740
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z @ 0x1C00F9BC0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_KPEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C01CD5E0 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 */

__int64 __fastcall SetManipulationInputTargetTransform(
        __int64 a1,
        struct tagWND *a2,
        void *a3,
        struct tagWND *a4,
        __int64 a5,
        int a6)
{
  __int64 v9; // rbx

  if ( a6 )
    return 0LL;
  v9 = *(_QWORD *)(a1 + 80);
  if ( a2 )
  {
    if ( !*(_QWORD *)(v9 + 352) )
      InputTransform::SetCompositionInput(*(InputTransform **)(a1 + 80), a2, a3);
  }
  return InputTransform::OnInput((struct _EX_PUSH_LOCK **)v9, (struct tagWND *)a3, a4, a4);
}
