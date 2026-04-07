/*
 * XREFs of ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x180030038
 * Callers:
 *     ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x18002E02C (-_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawOcclusionRectangleInstruction::Create(
        const struct tagRECT *a1,
        struct CDrawOcclusionRectangleInstruction **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int128 v6; // xmm0

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         48LL);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 8) = 1;
    *(_QWORD *)v5 = &CDrawOcclusionRectangleInstruction::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (__int128)*a1;
    *a2 = (struct CDrawOcclusionRectangleInstruction *)v5;
    *(_OWORD *)(v5 + 32) = v6;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x47u);
  }
  return v4;
}
