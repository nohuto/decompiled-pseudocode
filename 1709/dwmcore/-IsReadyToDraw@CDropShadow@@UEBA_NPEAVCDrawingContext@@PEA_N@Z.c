/*
 * XREFs of ?IsReadyToDraw@CDropShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180160D90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800407C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveMaskBrushNoRef@CDropShadow@@AEBAPEAVCSpriteVisualContent@@PEAVCVisual@@@Z @ 0x1801609CC (-GetEffectiveMaskBrushNoRef@CDropShadow@@AEBAPEAVCSpriteVisualContent@@PEAVCVisual@@@Z.c)
 */

char __fastcall CDropShadow::IsReadyToDraw(CDropShadow *this, struct CDrawingContext *a2, bool *a3)
{
  char v3; // bl
  struct CVisual *CurrentVisual; // rax
  struct CSpriteVisualContent *EffectiveMaskBrushNoRef; // rax

  v3 = 0;
  *a3 = 0;
  if ( a2 )
    CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
  else
    CurrentVisual = 0LL;
  EffectiveMaskBrushNoRef = CDropShadow::GetEffectiveMaskBrushNoRef(this, CurrentVisual);
  if ( !EffectiveMaskBrushNoRef
    || (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, bool *))(*(_QWORD *)EffectiveMaskBrushNoRef + 240LL))(
         EffectiveMaskBrushNoRef,
         a2,
         a3) )
  {
    return 1;
  }
  return v3;
}
