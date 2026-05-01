/*
 * XREFs of ??1?$ComPtr@VViewRectProvider@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x180247644
 * Callers:
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$3 @ 0x180247585 (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$3.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$4 @ 0x180247598 (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::ViewRectProvider>::~ComPtr<KeyboardHosting::ViewRectProvider>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(a1);
}
