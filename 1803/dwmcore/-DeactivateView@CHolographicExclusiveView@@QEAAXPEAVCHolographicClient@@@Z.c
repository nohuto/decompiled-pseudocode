/*
 * XREFs of ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1801F9EF4
 * Callers:
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFD34 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFEF0 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x1802000BC (-ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicExclusiveView::DeactivateView(
        CHolographicExclusiveView *this,
        struct CHolographicClient *a2)
{
  if ( !*((_BYTE *)this + 72) || *((_BYTE *)this + 75) )
  {
    *((_BYTE *)this + 72) = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)a2 + 3) + 96LL))(
      *((_QWORD *)a2 + 3),
      *((unsigned int *)this + 36),
      (char *)this + 152);
    CHolographicExclusiveView::DeactivateSwapChain(this);
  }
}
