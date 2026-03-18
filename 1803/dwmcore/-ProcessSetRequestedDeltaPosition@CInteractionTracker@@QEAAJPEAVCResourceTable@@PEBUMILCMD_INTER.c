/*
 * XREFs of ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x180195104
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x180194A5C (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x1801965BC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedDeltaPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION *a3)
{
  float v4; // xmm1_4
  int v6; // eax
  float v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((float *)this + 17) + *((float *)a3 + 3);
  v8[0] = *((float *)this + 16) + *((float *)a3 + 2);
  v8[2] = 0.0;
  v8[1] = v4;
  if ( CInteractionTracker::SetRequestedPosition(this, (const struct D2DVector3 *)v8) )
  {
    v6 = *((_DWORD *)this + 40);
    if ( v6 <= *((_DWORD *)a3 + 5) )
      v6 = *((_DWORD *)a3 + 5);
    *((_DWORD *)this + 40) = v6;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  return 0LL;
}
