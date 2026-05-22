/*
 * XREFs of _GazeHidDevice::Initialize_::_1_::dtor$1 @ 0x1800E7495
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GazeHidDevice::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<_HIDP_BUTTON_CAPS [0]>::~unique_ptr<_HIDP_BUTTON_CAPS [0]>(*(void ***)(a2 + 64));
}
