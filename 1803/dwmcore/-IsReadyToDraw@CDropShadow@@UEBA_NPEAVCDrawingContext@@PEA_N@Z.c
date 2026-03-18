/*
 * XREFs of ?IsReadyToDraw@CDropShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18018A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveMaskBrushNoRef@CDropShadow@@AEBAPEAVCSpriteVisualContent@@PEAVCVisual@@@Z @ 0x18018A26C (-GetEffectiveMaskBrushNoRef@CDropShadow@@AEBAPEAVCSpriteVisualContent@@PEAVCVisual@@@Z.c)
 */

char __fastcall CDropShadow::IsReadyToDraw(__int64 **this, struct CDrawingContext *a2, bool *a3)
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
    || (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, bool *))(*(_QWORD *)EffectiveMaskBrushNoRef + 272LL))(
         EffectiveMaskBrushNoRef,
         a2,
         a3) )
  {
    return 1;
  }
  return v3;
}
