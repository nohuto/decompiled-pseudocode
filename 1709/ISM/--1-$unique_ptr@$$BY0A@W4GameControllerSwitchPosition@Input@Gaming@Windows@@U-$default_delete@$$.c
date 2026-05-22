/*
 * XREFs of ??1?$unique_ptr@$$BY0A@W4GameControllerSwitchPosition@Input@Gaming@Windows@@U?$default_delete@$$BY0A@W4GameControllerSwitchPosition@Input@Gaming@Windows@@@std@@@std@@QEAA@XZ @ 0x180076C58
 * Callers:
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$2 @ 0x1800D00C4 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$2.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$3 @ 0x1800D00D7 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$3.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$4 @ 0x1800D00EA (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$4.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$5 @ 0x1800D00FD (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$5.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$6 @ 0x1800D0110 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$6.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$7 @ 0x1800D0123 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$7.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$8 @ 0x1800D0136 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$8.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$9 @ 0x1800D0149 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$9.c)
 *     _EnumerateDevices_::_1_::dtor$1 @ 0x1800D0B9C (_EnumerateDevices_--_1_--dtor$1.c)
 *     _WGIController::_WGIController_::_1_::dtor$7 @ 0x1800D15C9 (_WGIController--_WGIController_--_1_--dtor$7.c)
 *     _WGIController::_WGIController_::_1_::dtor$8 @ 0x1800D15D9 (_WGIController--_WGIController_--_1_--dtor$8.c)
 *     _WGIController::_WGIController_::_1_::dtor$9 @ 0x1800D15E9 (_WGIController--_WGIController_--_1_--dtor$9.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<enum Windows::Gaming::Input::GameControllerSwitchPosition [0]>::~unique_ptr<enum Windows::Gaming::Input::GameControllerSwitchPosition [0]>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
