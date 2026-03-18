/*
 * XREFs of ?ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMSTARTED@@@Z @ 0x180194D58
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180051998 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessDwmStarted(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_DWMSTARTED *a3)
{
  *((_DWORD *)this + 87) = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a3 + 2) )
  {
    *((_DWORD *)this + 16) = *((_DWORD *)a3 + 3);
    *(_QWORD *)((char *)this + 68) = *((unsigned int *)a3 + 4);
    CResource::InvalidateAnimationSources(this, 1);
    CResource::InvalidateAnimationSources(this, 55);
    *((_DWORD *)this + 28) = *((_DWORD *)a3 + 5);
    CResource::InvalidateAnimationSources(this, 2);
    CResource::InvalidateAnimationSources(this, 56);
    *((_BYTE *)this + 676) |= 0x22u;
  }
  return 0LL;
}
