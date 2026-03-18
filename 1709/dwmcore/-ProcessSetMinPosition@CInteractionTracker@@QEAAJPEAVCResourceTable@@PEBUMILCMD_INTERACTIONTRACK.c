/*
 * XREFs of ?ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMINPOSITION@@@Z @ 0x18016CCE4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016DFF8 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetMinPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETMINPOSITION *a3)
{
  int v3; // xmm1_4
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_DWORD *)a3 + 3);
  v5[0] = *((_DWORD *)a3 + 2);
  v5[2] = 0;
  v5[1] = v3;
  CInteractionTracker::SetMinPosition(this, (const struct D2DVector3 *)v5);
  return 0LL;
}
