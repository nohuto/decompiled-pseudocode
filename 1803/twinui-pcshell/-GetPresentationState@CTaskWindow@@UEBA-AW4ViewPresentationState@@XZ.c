/*
 * XREFs of ?GetPresentationState@CTaskWindow@@UEBA?AW4ViewPresentationState@@XZ @ 0x1800476A0
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x18004C0C0 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C8C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTaskWindow::GetPresentationState(__int64 a1)
{
  return *(unsigned int *)(a1 + 136);
}
