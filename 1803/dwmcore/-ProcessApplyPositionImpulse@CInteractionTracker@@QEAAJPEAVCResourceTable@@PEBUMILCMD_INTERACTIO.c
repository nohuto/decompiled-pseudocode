/*
 * XREFs of ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x180194B64
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x180193778 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x180194A5C (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyPositionImpulse(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE *a3)
{
  int v4; // xmm1_4
  int v6; // eax
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)this + 676) |= 0x10u;
  v4 = *((_DWORD *)a3 + 3);
  v8[0] = *((_DWORD *)a3 + 2);
  v8[2] = 0;
  v8[1] = v4;
  if ( CInteractionTracker::ApplyPositionImpulse(this, (const struct D2DVector3 *)v8) )
  {
    v6 = *((_DWORD *)this + 40);
    if ( v6 <= *((_DWORD *)a3 + 4) )
      v6 = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 40) = v6;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  *((_BYTE *)this + 676) &= ~0x10u;
  return 0LL;
}
