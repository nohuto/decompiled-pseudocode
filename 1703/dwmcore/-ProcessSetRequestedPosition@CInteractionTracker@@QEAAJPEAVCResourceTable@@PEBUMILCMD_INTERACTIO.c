/*
 * XREFs of ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x18012C5EC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18016D30C (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18016E1BC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
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
    if ( *((_DWORD *)this + 37) > v6 )
      v6 = *((_DWORD *)this + 37);
    *((_DWORD *)this + 37) = v6;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this, *((_DWORD *)a3 + 5));
  }
  return 0LL;
}
