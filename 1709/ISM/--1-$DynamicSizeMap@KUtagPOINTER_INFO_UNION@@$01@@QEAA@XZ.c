/*
 * XREFs of ??1?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAA@XZ @ 0x180011294
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$3 @ 0x1800CCBEE (_Win32kInterop--Win32kInterop_--_1_--dtor$3.c)
 *     _Win32kInterop::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x1800CCC4E (_Win32kInterop--_scalar_deleting_destructor__--_1_--dtor$3.c)
 *     _GestureTargetingTarget::GestureTargetingTarget_::_1_::dtor$2 @ 0x1800CCEB5 (_GestureTargetingTarget--GestureTargetingTarget_--_1_--dtor$2.c)
 *     _GestureTargetingTarget::GestureTargetingTarget_::_1_::dtor$3 @ 0x1800CCEC5 (_GestureTargetingTarget--GestureTargetingTarget_--_1_--dtor$3.c)
 *     _GestureTargetingTarget::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x1800CCEF5 (_GestureTargetingTarget--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     _GestureTargetingTarget::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x1800CCF05 (_GestureTargetingTarget--_scalar_deleting_destructor__--_1_--dtor$3.c)
 *     _GestureTargetingTarget::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x1800CCF15 (_GestureTargetingTarget--_scalar_deleting_destructor__--_1_--dtor$4.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$1 @ 0x1800CCF99 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$1.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$8 @ 0x1800CD01B (_DWMInputRouter--DWMInputRouter_--_1_--dtor$8.c)
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$1 @ 0x1800CD148 (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$1.c)
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$8 @ 0x1800CD1CA (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$8.c)
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$23 @ 0x1800CD2E7 (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$23.c)
 *     _DWMCursorBroker::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x1800CD9D2 (_DWMCursorBroker--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     _PointerInfoAdapter::PointerInfoAdapter_::_1_::dtor$1 @ 0x1800CFCB0 (_PointerInfoAdapter--PointerInfoAdapter_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::~DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>(
        void **a1)
{
  operator delete(*a1);
}
