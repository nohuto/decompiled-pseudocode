/*
 * XREFs of ?Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x18000F61C
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180010F30 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180094654 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Initialize@CDrawTileImageInstruction@@AEAAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@M@Z @ 0x18000F7EC (-Initialize@CDrawTileImageInstruction@@AEAAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@M@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawTileImageInstruction::Create(
        struct CResource *a1,
        const struct tagRECT *a2,
        const struct tagPOINT *a3,
        float a4,
        struct CDrawTileImageInstruction **a5)
{
  void *(*v8)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct CDrawTileImageInstruction *v9; // rax
  struct CDrawTileImageInstruction *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi

  v8 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v8 == WPF::ProcessHeapImpl::AllocClear )
    v9 = (struct CDrawTileImageInstruction *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x38uLL);
  else
    v9 = (struct CDrawTileImageInstruction *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v8)(
                                               WPF::g_pProcessHeap,
                                               56LL);
  v10 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 1;
    *(_QWORD *)v9 = &CDrawTileImageInstruction::`vftable';
    v11 = CDrawTileImageInstruction::Initialize(v9, a1, a2, a3, a4);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x34u);
    }
    else
    {
      *a5 = v10;
      v10 = 0LL;
    }
    if ( v10 )
      CBaseObject::Release(v10);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x32u);
  }
  return v12;
}
