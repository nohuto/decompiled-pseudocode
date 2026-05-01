/*
 * XREFs of ?IsInHighZOrderBand@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x18002A690
 * Callers:
 *     ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800202B0 (-OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     ?IsInHighZOrderBand@CClassicWindowExternal@@UEAAHXZ @ 0x180005800 (-IsInHighZOrderBand@CClassicWindowExternal@@UEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::IsInHighZOrderBand(CWin32ApplicationView *this, int *a2)
{
  CClassicWindowExternal *v2; // rcx
  __int64 (*v4)(void); // rax
  int v5; // eax

  v2 = (CClassicWindowExternal *)*((_QWORD *)this + 26);
  v4 = *(__int64 (**)(void))(*(_QWORD *)v2 + 64LL);
  if ( (char *)v4 == (char *)CClassicWindowExternal::IsInHighZOrderBand )
    v5 = CClassicWindowExternal::IsInHighZOrderBand(v2);
  else
    v5 = v4();
  *a2 = v5;
  return 0LL;
}
