/*
 * XREFs of ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18002115C
 * Callers:
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180020C90 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x1800268E0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::SetClipMargins(CAtlasedRectsVisual *this, const struct _MARGINS *a2)
{
  unsigned int v2; // ebx
  _DWORD *v5; // rcx
  void *(__fastcall *v7)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v8; // rax
  void (__fastcall *v9)(CVisual *__hidden, unsigned int); // rax
  __int64 v10; // rax

  v2 = 0;
  if ( !a2 )
  {
    if ( !*((_QWORD *)this + 34) )
      return v2;
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    v10 = *(_QWORD *)this;
    *((_QWORD *)this + 34) = 0LL;
    v9 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(v10 + 24);
    goto LABEL_16;
  }
  v5 = (_DWORD *)*((_QWORD *)this + 34);
  if ( !v5 )
  {
    v7 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v7 == WPF::ProcessHeapImpl::Alloc )
      v8 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
    else
      v8 = v7(WPF::g_pProcessHeap, 16uLL);
    *((_QWORD *)this + 34) = v8;
    if ( !v8 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x146u);
      return v2;
    }
LABEL_12:
    *(struct _MARGINS *)*((_QWORD *)this + 34) = *a2;
    v9 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v9 == CVisual::SetDirtyFlags )
    {
      CVisual::SetDirtyFlags(this, 0x2000u);
      return v2;
    }
LABEL_16:
    v9(this, 0x2000u);
    return v2;
  }
  if ( a2->cxLeftWidth != *v5 || a2->cxRightWidth != v5[1] || a2->cyTopHeight != v5[2] || a2->cyBottomHeight != v5[3] )
    goto LABEL_12;
  return v2;
}
