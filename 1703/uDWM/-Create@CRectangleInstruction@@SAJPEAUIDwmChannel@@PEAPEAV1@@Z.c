/*
 * XREFs of ?Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015978
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x180015634 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003D918 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18009F618 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleInstruction::Create(struct IDwmChannel *a1, struct CRectangleInstruction **a2)
{
  unsigned int v2; // ebx
  void *(*v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v6; // rax

  v2 = 0;
  if ( !a2 )
  {
    v2 = -2147024809;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x13u);
    return v2;
  }
  v5 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v5 == WPF::ProcessHeapImpl::AllocClear )
    v6 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
  else
    v6 = (_DWORD *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v5)(WPF::g_pProcessHeap, 48LL);
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
