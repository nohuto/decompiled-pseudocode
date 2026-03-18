/*
 * XREFs of ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C0035144
 * Callers:
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0033F80 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z @ 0x1C00345CC (-DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z.c)
 *     NtDCompositionRetireFrame @ 0x1C0037500 (NtDCompositionRetireFrame.c)
 * Callees:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C0035174 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CCompositionFrame::Release(
        DirectComposition::CCompositionFrame *this,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v4; // edi

  v4 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v4 && this )
  {
    if ( *((_DWORD *)this + 20) != 3 )
      DirectComposition::CCompositionFrame::Discard(this);
    Win32FreePool(this, a2, a3);
  }
  return v4;
}
