/*
 * XREFs of ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800338C4
 * Callers:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180002CD0 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800186C0 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001BD78 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001BE20 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z @ 0x18001F370 (-Initialize@CTopLevelWindow@@MEAAJPEAUIDwmChannel@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003A580 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CCanvasVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800189F0 (-Initialize@CCanvasVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180025DA4 (--0CVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvasVisual::Create(struct IDwmChannel *a1, CBaseObject ***a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rax
  CVisual *v5; // rax
  CBaseObject **v6; // rbx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(CBaseObject **, struct IDwmChannel *); // rax
  int v9; // eax
  unsigned int v10; // edi

  if ( !a2 )
  {
    v10 = -2147024809;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x15u);
    return v10;
  }
  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CVisual *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x118uLL);
  else
    v5 = (CVisual *)v4(WPF::g_pProcessHeap, 280LL);
  v6 = (CBaseObject **)v5;
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
  v8 = (__int64 (__fastcall *)(CBaseObject **, struct IDwmChannel *))*((_QWORD *)*v6 + 1);
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
    CBaseObject::Release((CBaseObject *)v6);
  return v10;
}
