/*
 * XREFs of ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x18016C670
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x18016AF3C (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x18016C2A8 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyScaleImpulse(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE *a3)
{
  float v5; // xmm1_4
  int v6; // ecx
  struct CResourceTable *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *((_BYTE *)this + 620) |= 0x10u;
  LODWORD(v8) = *((_DWORD *)a3 + 3) ^ _xmm;
  v5 = *((float *)a3 + 2);
  HIDWORD(v8) = *((_DWORD *)a3 + 4) ^ _xmm;
  if ( CInteractionTracker::ApplyScaleImpulse(this, v5, (const struct D2DVector2 *)&v8) )
  {
    v6 = *((_DWORD *)a3 + 5);
    if ( *((_DWORD *)this + 40) > v6 )
      v6 = *((_DWORD *)this + 40);
    *((_DWORD *)this + 40) = v6;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  *((_BYTE *)this + 620) &= ~0x10u;
  return 0LL;
}
