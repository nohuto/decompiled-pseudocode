/*
 * XREFs of ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18016D30C
 * Callers:
 *     ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x18012C3C4 (-ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTR.c)
 *     ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x18012C450 (-ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x18012C574 (-ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTER.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x18012C5EC (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 *     ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x18012C658 (-ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTR.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x18012C6CC (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_I.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x18012CA58 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTE.c)
 * Callees:
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18016E874 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

void __fastcall CInteractionTracker::NotifyRequestIgnored(CInteractionTracker *this)
{
  bool ShouldNotify; // al
  __int64 v2; // rcx
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // r10
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF

  ShouldNotify = CInteractionTracker::ShouldNotify(this, 0xAu);
  v3 = 0;
  if ( ShouldNotify )
  {
    v4 = *(_QWORD *)(v2 + 48);
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1352LL) + 56LL);
    if ( v4 )
      v3 = *(_DWORD *)(v4 + 60);
    v6[0] = v3;
    v6[1] = *(unsigned int *)(v2 + 56);
    CoreUICallSend(v5, v6, 2LL, 4LL, 2, &unk_1801D53F7);
  }
}
