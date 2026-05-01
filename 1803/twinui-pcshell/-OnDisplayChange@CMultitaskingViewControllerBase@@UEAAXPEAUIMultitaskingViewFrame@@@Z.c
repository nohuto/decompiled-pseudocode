/*
 * XREFs of ?OnDisplayChange@CMultitaskingViewControllerBase@@UEAAXPEAUIMultitaskingViewFrame@@@Z @ 0x18028CDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMultitaskingViewControllerBase::OnDisplayChange(
        CMultitaskingViewControllerBase *this,
        struct IMultitaskingViewFrame *a2)
{
  CMultitaskingViewControllerBase::_DismissView((CMultitaskingViewControllerBase *)((char *)this - 8));
}
