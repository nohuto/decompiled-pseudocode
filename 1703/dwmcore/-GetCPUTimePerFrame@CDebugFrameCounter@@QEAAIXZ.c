/*
 * XREFs of ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x180143C70
 * Callers:
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180146300 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ @ 0x180143CBC (-GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ.c)
 */

__int64 __fastcall CDebugFrameCounter::GetCPUTimePerFrame(CDebugFrameCounter *this)
{
  unsigned int FrameCountInternal; // eax
  __int64 v2; // r8
  unsigned __int64 v3; // r9

  if ( !*((_BYTE *)this + 24) || *((_DWORD *)this + 4) == -1 )
    return 0LL;
  FrameCountInternal = CDebugFrameCounter::GetFrameCountInternal(this);
  if ( FrameCountInternal )
    v3 = *(_QWORD *)(v2 + 32) / (unsigned __int64)FrameCountInternal;
  return (unsigned int)(v3 / 0x2710);
}
