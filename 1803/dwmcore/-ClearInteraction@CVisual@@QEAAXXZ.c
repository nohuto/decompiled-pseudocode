/*
 * XREFs of ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18004D604
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004D868 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180050F80 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18005052C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::ClearInteraction(CVisual *this)
{
  struct CInteraction *InteractionInternal; // rax

  InteractionInternal = CVisual::GetInteractionInternal(this);
  if ( InteractionInternal )
    (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)InteractionInternal + 8LL))(InteractionInternal);
  CVisual::SetInteractionInternal(this, 0LL);
}
