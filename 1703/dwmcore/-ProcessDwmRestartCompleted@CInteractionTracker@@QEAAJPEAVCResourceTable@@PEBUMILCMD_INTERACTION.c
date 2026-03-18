/*
 * XREFs of ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z @ 0x18012CE14
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x18016C20C (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18016C71C (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 */

__int64 __fastcall CInteractionTracker::ProcessDwmRestartCompleted(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED *a3)
{
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  *((_BYTE *)this + 592) &= ~8u;
  CInteractionTracker::CheckForOutOfBounds(this);
  if ( !*((_DWORD *)this + 35) )
  {
    v4 = *((_DWORD *)this + 18);
    v6 = *((_QWORD *)this + 8);
    v7 = v4;
    CInteractionTracker::AddPendingStateChange(this, 0LL, &v6);
  }
  return 0LL;
}
