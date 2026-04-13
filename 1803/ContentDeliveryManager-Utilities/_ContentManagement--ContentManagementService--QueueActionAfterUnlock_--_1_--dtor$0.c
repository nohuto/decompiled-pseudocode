/*
 * XREFs of _ContentManagement::ContentManagementService::QueueActionAfterUnlock_::_1_::dtor$0 @ 0x1800C2D0C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementService::QueueActionAfterUnlock_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<UnlockActionHelper>::~ComPtr<UnlockActionHelper>((__int64 *)(a2 + 80));
}
