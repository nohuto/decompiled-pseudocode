/*
 * XREFs of _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$1 @ 0x1800D00B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::wstring::_Tidy_deallocate((unsigned __int64 *)(*(_QWORD *)(a2 + 64) + 16LL));
}
