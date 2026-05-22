/*
 * XREFs of ??1?$unique_ptr@$$BY0A@U_HIDP_BUTTON_CAPS@@U?$default_delete@$$BY0A@U_HIDP_BUTTON_CAPS@@@std@@@std@@QEAA@XZ @ 0x180018EE8
 * Callers:
 *     _InputEventPayloadBuffer::InputEventPayloadBuffer_::_1_::dtor$0 @ 0x1800E6CFB (_InputEventPayloadBuffer--InputEventPayloadBuffer_--_1_--dtor$0.c)
 *     _GazeHidDevice::Initialize_::_1_::dtor$1 @ 0x1800E7495 (_GazeHidDevice--Initialize_--_1_--dtor$1.c)
 *     _SpatialInteractionDevices::GetHandedness_::_1_::dtor$0 @ 0x1800E8C85 (_SpatialInteractionDevices--GetHandedness_--_1_--dtor$0.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$2 @ 0x1800E8D88 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$2.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$3 @ 0x1800E8D9B (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$3.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$4 @ 0x1800E8DAE (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$4.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$5 @ 0x1800E8DC1 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$5.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$6 @ 0x1800E8DD4 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$6.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$7 @ 0x1800E8DE7 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$7.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$8 @ 0x1800E8DFA (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$8.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$9 @ 0x1800E8E0D (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$9.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnumerateDevices_::_1_::dtor$1 @ 0x1800E8E2C (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_1800E8E2C.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$67 @ 0x1800E93F5 (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$67.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<_HIDP_BUTTON_CAPS [0]>::~unique_ptr<_HIDP_BUTTON_CAPS [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
