/*
 * XREFs of ?SetViewPendingFocus@CApplicationViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18013C8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationViewManager::SetViewPendingFocus(
        CApplicationViewManager *this,
        struct IApplicationView *a2)
{
  return CApplicationViewManager::SetViewInFocusHelper((__int64)this - 136, (volatile signed __int64 *)a2, 1);
}
