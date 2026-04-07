/*
 * XREFs of ?Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180034828
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x1800344FC (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180037688 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18009D6D8 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleInstruction::Create(struct IDwmChannel *a1, struct CRectangleInstruction **a2)
{
  unsigned int v2; // ebx
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *, size_t); // rax
  _DWORD *v6; // rax

  v2 = 0;
  if ( !a2 )
  {
    v2 = -2147024809;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x13u);
    return v2;
  }
  v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v5 == WPF::ProcessHeapImpl::AllocClear )
    v6 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
  else
    v6 = (_DWORD *)v5(WPF::g_pProcessHeap, 48LL);
  if ( v6 )
  {
    v6[2] = 1;
    *(_QWORD *)v6 = &CRectangleInstruction::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v2 = -2147024882;
    goto LABEL_13;
  }
  *((_QWORD *)v6 + 5) = a1;
  *a2 = (struct CRectangleInstruction *)v6;
  return v2;
}
