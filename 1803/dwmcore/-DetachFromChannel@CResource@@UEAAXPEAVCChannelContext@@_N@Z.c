/*
 * XREFs of ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180051170
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x18002D55C (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18003F9F0 (-DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?FreeCommentForResource@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x18017FC54 (-FreeCommentForResource@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 */

void __fastcall CResource::DetachFromChannel(CResource *this, CAnimationLoggingManager **a2)
{
  CAnimationLoggingManager **v3; // rcx

  v3 = (CAnimationLoggingManager **)*((_QWORD *)this + 6);
  if ( a2 == v3 )
  {
    if ( (*((_BYTE *)this + 32) & 0x10) != 0 )
    {
      CAnimationLoggingManager::FreeCommentForResource(v3[7], this);
      *((_DWORD *)this + 8) &= ~0x10u;
    }
    *((_QWORD *)this + 6) = 0LL;
  }
}
