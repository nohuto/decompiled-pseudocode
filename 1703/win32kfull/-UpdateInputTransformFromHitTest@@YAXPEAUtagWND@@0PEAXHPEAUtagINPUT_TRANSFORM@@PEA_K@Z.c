/*
 * XREFs of ?UpdateInputTransformFromHitTest@@YAXPEAUtagWND@@0PEAXHPEAUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0002800
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1C00027F0 (EditionUpdateInputTransformFromHitTest.c)
 *     ?ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C019D530 (-ResolveDCompInputHandleToPwnd@@YAPEAUtagWND@@PEAUHWND__@@PEAXK_KPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x1C0002934 (-ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0062490 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C01CD5E0 (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C01CD640 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 */

void __fastcall UpdateInputTransformFromHitTest(
        struct tagWND *this,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        struct tagINPUT_TRANSFORM *a5,
        struct tagINPUT_TRANSFORM *a6)
{
  __int64 v7; // rbx
  unsigned int v8; // ebp
  int v9; // r13d
  int v12; // eax
  struct tagWND *v13; // rcx
  const struct tagINPUT_TRANSFORM *v14; // r12
  CInputQueueProp *v15; // r14
  struct tagWND *TopLevelWindow; // rcx
  struct tagWND *v17; // rcx
  unsigned __int64 *v18; // r9
  void *v19; // r8
  CInputQueueProp *v20; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v8 = 0;
  v9 = (int)a4;
  v12 = CWindowProp::GetProp<CInputQueueProp>(this, &v20);
  v14 = a6;
  if ( v12 )
  {
    v15 = v20;
    if ( *((_DWORD *)v20 + 6) )
    {
      if ( (unsigned int)CoreWindowProp::IsComponent(v13) )
      {
        a2 = this;
      }
      else
      {
        TopLevelWindow = (struct tagWND *)GetTopLevelWindow();
        if ( TopLevelWindow && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) )
          a2 = v17;
      }
      CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(v15, a2);
      if ( !v9 )
      {
        v8 = 1;
        if ( InputTransform::StoreTransform(this, a5, v14, v18) )
          InputTransform::SetCompositionInput(this, a3, v19);
        else
          v8 = 0;
      }
    }
  }
  if ( this )
    v7 = *(_QWORD *)this;
  EtwTraceDITResolveDCompInputHandleToHwnd(a3, v7, *(_QWORD *)v14, v8);
}
