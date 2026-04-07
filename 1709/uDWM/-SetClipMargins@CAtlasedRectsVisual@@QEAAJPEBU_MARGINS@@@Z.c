/*
 * XREFs of ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18000AE44
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001B5D0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800233A0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::SetClipMargins(CAtlasedRectsVisual *this, const struct _MARGINS *a2)
{
  unsigned int v2; // ebx
  _DWORD *v5; // rcx
  char v6; // al
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = 0;
  if ( a2 )
  {
    v5 = (_DWORD *)*((_QWORD *)this + 34);
    if ( v5 )
    {
      if ( a2->cxLeftWidth != *v5
        || a2->cxRightWidth != v5[1]
        || a2->cyTopHeight != v5[2]
        || (v6 = 0, a2->cyBottomHeight != v5[3]) )
      {
        v6 = 1;
      }
      if ( !v6 )
        return v2;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
             WPF::g_pProcessHeap,
             16LL);
      *((_QWORD *)this + 34) = v8;
      if ( !v8 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x146u);
        return v2;
      }
    }
    *(struct _MARGINS *)*((_QWORD *)this + 34) = *a2;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
    return v2;
  }
  if ( *((_QWORD *)this + 34) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    v9 = *(_QWORD *)this;
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(v9 + 24))(this, 0x2000LL);
  }
  return v2;
}
