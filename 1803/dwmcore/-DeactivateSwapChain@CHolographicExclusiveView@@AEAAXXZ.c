/*
 * XREFs of ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801F9E98
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1801F9D00 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1801F9EF4 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFD34 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ @ 0x1801F9E38 (-CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CHolographicExclusiveView::DeactivateSwapChain(CHolographicExclusiveView *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 74) )
  {
    v2 = *((_QWORD *)this + 11);
    if ( v2 )
      v3 = *(_QWORD *)(v2 + 88);
    else
      v3 = 0LL;
    if ( v3 )
      NtSetCompositionSurfaceAnalogExclusive(*((_QWORD *)this + 17), 0LL);
    if ( *((_BYTE *)this + 73) )
      CHolographicExclusiveView::CloseSurfaceHandles((HANDLE *)this);
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_BYTE *)this + 72) = 0;
  }
}
