/*
 * XREFs of ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001A700
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18001BCAC (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18002DFD8 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180036CBC (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180038AF0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009000C (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPopInstruction::Create(struct CPopInstruction **a1)
{
  unsigned int v2; // ebx
  void *(*v3)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct CPopInstruction *v4; // rax

  v2 = 0;
  v3 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v3 == WPF::ProcessHeapImpl::AllocClear )
    v4 = (struct CPopInstruction *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x10uLL);
  else
    v4 = (struct CPopInstruction *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v3)(
                                     WPF::g_pProcessHeap,
                                     16LL);
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &CPopInstruction::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    *a1 = v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Cu);
  }
  return v2;
}
