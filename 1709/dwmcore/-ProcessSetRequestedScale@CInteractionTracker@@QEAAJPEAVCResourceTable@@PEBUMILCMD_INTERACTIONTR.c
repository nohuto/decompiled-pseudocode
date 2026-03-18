/*
 * XREFs of ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x18016CF0C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18016C2A8 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x18016E420 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedScale(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE *a3)
{
  int v5; // ecx

  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 3) ^ _xmm;
  *((_DWORD *)this + 32) = *((_DWORD *)a3 + 4) ^ _xmm;
  if ( CInteractionTracker::SetRequestedScale(this, *((float *)a3 + 2)) )
  {
    v5 = *((_DWORD *)a3 + 6);
    if ( *((_DWORD *)this + 40) > v5 )
      v5 = *((_DWORD *)this + 40);
    *((_BYTE *)this + 620) |= 4u;
    *((_DWORD *)this + 40) = v5;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  return 0LL;
}
