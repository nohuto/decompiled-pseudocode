/*
 * XREFs of ?SetCallback@CSnapAssistViewController@@UEAAXPEAUISnapAssistCallback@@@Z @ 0x180284DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSnapAssistViewController::SetCallback(CSnapAssistViewController *this, struct ISnapAssistCallback *a2)
{
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(
    (__int64 *)this + 2,
    (__int64)a2);
}
