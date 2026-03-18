/*
 * XREFs of ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801A4A58
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1801A4968 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1801A4AB0 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 * Callees:
 *     ?CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ @ 0x1801A49F8 (-CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CHolographicExclusiveView::DeactivateSwapChain(CHolographicExclusiveView *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 74) )
  {
    v2 = *((_QWORD *)this + 10);
    if ( v2 )
      v3 = *(_QWORD *)(v2 + 464);
    else
      v3 = 0LL;
    if ( v3 )
      NtSetCompositionSurfaceAnalogExclusive(*((_QWORD *)this + 15), 0LL);
    if ( *((_BYTE *)this + 73) )
      CHolographicExclusiveView::CloseSurfaceHandles((HANDLE *)this);
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_BYTE *)this + 72) = 0;
  }
}
