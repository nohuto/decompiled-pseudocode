/*
 * XREFs of ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C0013648
 * Callers:
 *     NtDCompositionRetireFrame @ 0x1C00130E0 (NtDCompositionRetireFrame.c)
 *     NtDCompositionDiscardFrame @ 0x1C0013DF0 (NtDCompositionDiscardFrame.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0015728 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0015964 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z @ 0x1C0015D4C (-DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z.c)
 * Callees:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00136E4 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CCompositionFrame::Release(DirectComposition::CCompositionFrame *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
  {
    if ( *((_DWORD *)this + 20) != 3 )
      DirectComposition::CCompositionFrame::Discard(this);
    Win32FreePool(this);
  }
  return v2;
}
