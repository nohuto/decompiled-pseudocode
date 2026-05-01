/*
 * XREFs of ?OnApplicationViewChanged@AppResizeView@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802DF980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x1802E0860 (-UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z.c)
 */

__int64 __fastcall AppResizeView::OnApplicationViewChanged(__int64 a1, __int64 a2, int a3)
{
  if ( !*(_BYTE *)(a1 + 56)
    && a3 == 15
    && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 184LL))(*(_QWORD *)(a1 + 32)) )
  {
    AppResizeView::UpdateAppResizeData(a1 - 40, a1 + 100, 7LL);
  }
  return 0LL;
}
