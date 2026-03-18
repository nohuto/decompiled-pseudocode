/*
 * XREFs of ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x18012C450
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18016C284 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18016D30C (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyPositionImpulse(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE *a3)
{
  int v4; // xmm1_4
  int v6; // ecx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)this + 592) |= 4u;
  v4 = *((_DWORD *)a3 + 3);
  v8[0] = *((_DWORD *)a3 + 2);
  v8[2] = 0;
  v8[1] = v4;
  if ( CInteractionTracker::ApplyPositionImpulse(this, (const struct D2DVector3 *)v8) )
  {
    v6 = *((_DWORD *)a3 + 4);
    if ( *((_DWORD *)this + 37) > v6 )
      v6 = *((_DWORD *)this + 37);
    *((_DWORD *)this + 37) = v6;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this, *((_DWORD *)a3 + 4));
  }
  *((_BYTE *)this + 592) &= ~4u;
  return 0LL;
}
