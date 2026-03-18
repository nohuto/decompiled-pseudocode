/*
 * XREFs of ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x18012C658
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18016D30C (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x18016E268 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
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
    if ( *((_DWORD *)this + 37) > v5 )
      v5 = *((_DWORD *)this + 37);
    *((_DWORD *)this + 37) = v5;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this, *((_DWORD *)a3 + 6));
  }
  return 0LL;
}
