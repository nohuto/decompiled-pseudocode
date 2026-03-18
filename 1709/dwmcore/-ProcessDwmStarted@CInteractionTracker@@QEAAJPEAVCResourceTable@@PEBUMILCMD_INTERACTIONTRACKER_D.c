/*
 * XREFs of ?ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMSTARTED@@@Z @ 0x18016C744
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessDwmStarted(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_DWMSTARTED *a3)
{
  *((_DWORD *)this + 84) = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a3 + 2) )
  {
    *((_DWORD *)this + 16) = *((_DWORD *)a3 + 3);
    *(_QWORD *)((char *)this + 68) = *((unsigned int *)a3 + 4);
    CResource::InvalidateAnimationSources(this);
    CResource::InvalidateAnimationSources(this);
    *((_DWORD *)this + 28) = *((_DWORD *)a3 + 5);
    CResource::InvalidateAnimationSources(this);
    CResource::InvalidateAnimationSources(this);
    *((_BYTE *)this + 620) |= 0x22u;
  }
  return 0LL;
}
