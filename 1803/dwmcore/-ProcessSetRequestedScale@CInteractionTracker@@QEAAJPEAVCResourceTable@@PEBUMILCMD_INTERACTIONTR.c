/*
 * XREFs of ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x1801952D0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x180194A5C (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x18019665C (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedScale(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE *a3)
{
  int v5; // eax

  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 3) ^ _xmm;
  *((_DWORD *)this + 32) = *((_DWORD *)a3 + 4) ^ _xmm;
  if ( CInteractionTracker::SetRequestedScale(this, *((float *)a3 + 2)) )
  {
    v5 = *((_DWORD *)this + 40);
    if ( v5 <= *((_DWORD *)a3 + 6) )
      v5 = *((_DWORD *)a3 + 6);
    *((_BYTE *)this + 676) |= 4u;
    *((_DWORD *)this + 40) = v5;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  return 0LL;
}
