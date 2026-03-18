/*
 * XREFs of ?ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMSTARTED@@@Z @ 0x18012CD04
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessDwmStarted(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_DWMSTARTED *a3)
{
  *((_DWORD *)this + 81) = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a3 + 2) )
  {
    *((_DWORD *)this + 16) = *((_DWORD *)a3 + 3);
    *(_QWORD *)((char *)this + 68) = *((unsigned int *)a3 + 4);
    CResource::InvalidateAnimationSources(this, 1LL);
    CResource::InvalidateAnimationSources(this, 52LL);
    *((_DWORD *)this + 28) = *((_DWORD *)a3 + 5);
    CResource::InvalidateAnimationSources(this, 2LL);
    CResource::InvalidateAnimationSources(this, 53LL);
    *((_BYTE *)this + 592) |= 9u;
  }
  return 0LL;
}
