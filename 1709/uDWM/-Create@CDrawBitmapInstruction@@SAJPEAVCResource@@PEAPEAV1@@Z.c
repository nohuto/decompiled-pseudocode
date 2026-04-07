/*
 * XREFs of ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180034C60
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18000FDA4 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18002250C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008B88C (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawBitmapInstruction::Create(struct CResource *a1, struct CDrawBitmapInstruction **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rax
  struct CDrawBitmapInstruction *v5; // rax
  struct CDrawBitmapInstruction *v6; // rdi
  unsigned int v7; // ebx
  CBaseObject *v8; // rcx

  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (struct CDrawBitmapInstruction *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x18uLL);
  else
    v5 = (struct CDrawBitmapInstruction *)v4(WPF::g_pProcessHeap, 24LL);
  v6 = v5;
  v7 = 0;
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 1;
    *(_QWORD *)v5 = &CDrawBitmapInstruction::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v8 = (CBaseObject *)*((_QWORD *)v6 + 2);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *((_QWORD *)v6 + 2) = 0LL;
    }
    if ( a1 )
    {
      *((_QWORD *)v6 + 2) = a1;
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    }
    *a2 = v6;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Du);
  }
  return v7;
}
