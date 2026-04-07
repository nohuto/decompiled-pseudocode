/*
 * XREFs of ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180033C78
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180010F30 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180012CFC (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x1800148B0 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x1800227C8 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180094958 (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPushTransformInstruction::Create(struct CResource *a1, struct CPushTransformInstruction **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rax
  struct CPushTransformInstruction *v5; // rax
  struct CPushTransformInstruction *v6; // rdi
  unsigned int v7; // ebx
  CBaseObject *v8; // rcx

  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (struct CPushTransformInstruction *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x18uLL);
  else
    v5 = (struct CPushTransformInstruction *)v4(WPF::g_pProcessHeap, 24LL);
  v6 = v5;
  v7 = 0;
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 1;
    *(_QWORD *)v5 = &CPushTransformInstruction::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v8 = (CBaseObject *)*((_QWORD *)v6 + 2);
    if ( v8 )
      CBaseObject::Release(v8);
    *((_QWORD *)v6 + 2) = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    *a2 = v6;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Eu);
  }
  return v7;
}
