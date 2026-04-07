/*
 * XREFs of ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x180027234
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180028B10 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002BD04 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x18004A270 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180017800 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180025B30 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180026940 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002DB70 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::BringDesktopToFront(CWindowList *this, struct CVisual *a2)
{
  __int64 v2; // rax
  CVisual *v5; // rcx
  void (*v6)(void); // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-10h]
  __int16 v14; // [rsp+3Ch] [rbp-Ch]

  v2 = *((_QWORD *)this + 10);
  v13 = -1;
  v14 = 0;
  v12 = v2 + 32;
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v12) )
  {
    v5 = *(CVisual **)(*(_QWORD *)(v12 + 16) + 8LL * v13);
    if ( v5 != a2 )
    {
      v6 = *(void (**)(void))(*(_QWORD *)v5 + 88LL);
      if ( (char *)v6 == (char *)CVisual::SetOpacity )
        CVisual::SetOpacity(v5, 0.0);
      else
        v6();
    }
  }
  (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 88LL))(a2);
  v7 = CVisual::MoveToFront(a2, 0);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x54Bu);
  }
  else
  {
    v9 = CWindowList::MoveTransitionAndTouchVisualToFront(this);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x54Cu);
    }
    else
    {
      v10 = CVisual::RenderRecursive(*((CVisual **)this + 10));
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x54Du);
    }
  }
  return v8;
}
