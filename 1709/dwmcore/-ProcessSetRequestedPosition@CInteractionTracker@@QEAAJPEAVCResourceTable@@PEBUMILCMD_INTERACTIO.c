/*
 * XREFs of ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x18016CDB0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18016C2A8 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18016E37C (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION *a3)
{
  int v3; // xmm1_4
  int v6; // ecx
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a3 + 3);
  v8[0] = *((_DWORD *)a3 + 2);
  v8[1] = v3;
  v8[2] = 0;
  if ( CInteractionTracker::SetRequestedPosition(this, (const struct D2DVector3 *)v8) )
  {
    v6 = *((_DWORD *)a3 + 5);
    if ( *((_DWORD *)this + 40) > v6 )
      v6 = *((_DWORD *)this + 40);
    *((_BYTE *)this + 620) |= 4u;
    *((_DWORD *)this + 40) = v6;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  return 0LL;
}
