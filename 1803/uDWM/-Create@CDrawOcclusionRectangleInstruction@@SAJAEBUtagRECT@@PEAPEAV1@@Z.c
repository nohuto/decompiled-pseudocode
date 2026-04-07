/*
 * XREFs of ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x180037D6C
 * Callers:
 *     ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x180010EAC (-_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawOcclusionRectangleInstruction::Create(
        const struct tagRECT *a1,
        struct CDrawOcclusionRectangleInstruction **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

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
    *(struct tagRECT *)(v5 + 32) = *a1;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    *a2 = (struct CDrawOcclusionRectangleInstruction *)v5;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x47u);
  }
  return v4;
}
