/*
 * XREFs of ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0006C9C
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1C0006C70 (EditionUpdateInputTransformFromHitTest.c)
 *     ?ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01B9B44 (-ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x1C0006D98 (-ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0006E18 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0006E78 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

void __fastcall UpdateInputTransformFromHitTest(
        struct tagWND *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        int a4,
        struct tagINPUT_TRANSFORM *a5,
        struct tagINPUT_TRANSFORM *a6)
{
  __int64 v6; // rbx
  unsigned int v10; // ebp
  __int64 Prop; // rax
  CInputQueueProp *v12; // r15
  struct tagWND *TopLevelWindow; // rax
  struct tagWND *v14; // r14
  unsigned __int64 *v15; // r9
  void *v16; // r8

  v6 = 0LL;
  v10 = 0;
  Prop = GetProp(a1, CInputQueueProp::s_atom, 1LL);
  v12 = (CInputQueueProp *)Prop;
  if ( Prop && *(_DWORD *)(Prop + 24) )
  {
    if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
    {
      a2 = a1;
    }
    else
    {
      TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
      v14 = TopLevelWindow;
      if ( TopLevelWindow && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) )
        a2 = v14;
    }
    CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(v12, a2);
    if ( !a4 )
    {
      v10 = 1;
      if ( InputTransform::StoreTransform(a1, a5, a6, v15) )
        InputTransform::SetCompositionInput(a1, a3, v16);
      else
        v10 = 0;
    }
  }
  if ( a1 )
    v6 = *(_QWORD *)a1;
  EtwTraceDITResolveDCompInputHandleToHwnd(a3, v6, *(_QWORD *)a6, v10);
}
