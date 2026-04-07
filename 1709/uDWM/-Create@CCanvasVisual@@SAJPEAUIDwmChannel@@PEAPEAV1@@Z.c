/*
 * XREFs of ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180013480
 * Callers:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800081C8 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180016860 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001BF28 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001BFD0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18001F020 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180037920 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Initialize@CCanvasVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180016B20 (-Initialize@CCanvasVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180018320 (--0CVisual@@IEAA@XZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvasVisual::Create(struct IDwmChannel *a1, struct CCanvasVisual **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CVisual *v5; // rax
  CCanvasVisual *v6; // rbx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(CCanvasVisual *__hidden, struct IDwmChannel *); // rax
  int v9; // eax
  unsigned int v10; // edi

  if ( !a2 )
  {
    v10 = -2147024809;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x15u);
    return v10;
  }
  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x118uLL);
  else
    v5 = (CVisual *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(WPF::g_pProcessHeap, 280LL);
  v6 = v5;
  if ( v5 )
  {
    CVisual::CVisual(v5);
    *(_QWORD *)(v7 + 248) = 0LL;
    *(_QWORD *)(v7 + 256) = 0LL;
    *(_DWORD *)(v7 + 264) = 0;
    *(_DWORD *)(v7 + 268) = 0;
    *(_DWORD *)(v7 + 272) = 0;
    *(_QWORD *)(v7 + 240) = 0LL;
    *(_QWORD *)v7 = &CCanvasVisual::`vftable';
  }
  if ( !v6 )
  {
    v10 = -2147024882;
    goto LABEL_17;
  }
  v8 = *(__int64 (__fastcall **)(CCanvasVisual *__hidden, struct IDwmChannel *))(*(_QWORD *)v6 + 8LL);
  if ( v8 == CCanvasVisual::Initialize )
    v9 = CCanvasVisual::Initialize(v6, a1);
  else
    v9 = v8(v6, a1);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x15u);
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v10;
}
