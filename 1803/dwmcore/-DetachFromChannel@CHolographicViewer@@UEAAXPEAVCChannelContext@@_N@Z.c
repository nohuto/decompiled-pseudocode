/*
 * XREFs of ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801FC060
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1801F90A8 (-RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 */

void __fastcall CHolographicViewer::DetachFromChannel(CHolographicViewer *this, struct CChannelContext *a2)
{
  RTL_SRWLOCK *v3; // rcx

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 19);
  if ( v3 && *((_BYTE *)this + 144) )
    CHolographicManager::RemoveHolographicViewer(v3, this);
  CHolographicViewer::Dispose((CHolographicViewer *)((char *)this + 64));
}
