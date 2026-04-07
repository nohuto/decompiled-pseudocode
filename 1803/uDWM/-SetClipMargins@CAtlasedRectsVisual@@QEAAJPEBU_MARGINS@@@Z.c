/*
 * XREFs of ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x180023B44
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001B440 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180023690 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::SetClipMargins(CAtlasedRectsVisual *this, const struct _MARGINS *a2)
{
  unsigned int v3; // ebx
  struct _MARGINS *v4; // rdx
  char v6; // al
  __int64 v8; // rax

  v3 = 0;
  v4 = (struct _MARGINS *)*((_QWORD *)this + 34);
  if ( a2 )
  {
    if ( v4 )
    {
      if ( a2->cxLeftWidth != v4->cxLeftWidth
        || a2->cxRightWidth != v4->cxRightWidth
        || a2->cyTopHeight != v4->cyTopHeight
        || (v6 = 0, a2->cyBottomHeight != v4->cyBottomHeight) )
      {
        v6 = 1;
      }
      if ( !v6 )
        return v3;
    }
    else
    {
      v4 = (struct _MARGINS *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 8LL))(
                                WPF::g_pProcessHeap,
                                16LL);
      *((_QWORD *)this + 34) = v4;
      if ( !v4 )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xFCu);
        return v3;
      }
    }
    *v4 = *a2;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
    return v3;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    v8 = *(_QWORD *)this;
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(v8 + 24))(this, 0x2000LL);
  }
  return v3;
}
