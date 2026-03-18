/*
 * XREFs of ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004F894
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004F894 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x180051858 (-ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004ECAC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x18004F1B0 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18004F630 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18004F664 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004F894 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180054CD0 (-OnInputSinkChange@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180091874 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetInteraction(CVisual *this, struct CInteraction *a2)
{
  unsigned int v4; // ebx
  struct CInteraction *InteractionInternal; // rax
  CInteraction *v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  CVisual *v10; // rcx
  int v11; // eax

  v4 = 0;
  InteractionInternal = CVisual::GetInteractionInternal(this);
  v6 = InteractionInternal;
  if ( a2 != InteractionInternal )
  {
    if ( InteractionInternal )
    {
      CVisual::NotifyMidManipulationUpdate((__int64)this, 1u, (__int64)this);
      CInteraction::SetVisual(v6, 0LL);
      CVisual::ClearInteraction(this);
    }
    if ( a2 )
    {
      v7 = *((_QWORD *)a2 + 17);
      if ( v7 )
      {
        v10 = *(CVisual **)(v7 + 8);
        if ( v10 )
        {
          v11 = CVisual::SetInteraction(v10, 0LL);
          v4 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xBBFu);
            return v4;
          }
        }
      }
      v8 = CInteraction::SetVisual(a2, this);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xBC3u);
        return v4;
      }
      (**(void (__fastcall ***)(struct CInteraction *))a2)(a2);
      CVisual::SetInteractionInternal(this, a2);
      CVisual::NotifyMidManipulationUpdate((__int64)this, 0, (__int64)this);
    }
    CVisual::OnInputSinkChange(this);
  }
  return v4;
}
