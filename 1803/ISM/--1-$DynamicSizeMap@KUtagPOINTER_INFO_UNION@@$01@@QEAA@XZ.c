/*
 * XREFs of ??1?$DynamicSizeMap@KUtagPOINTER_INFO_UNION@@$01@@QEAA@XZ @ 0x18001590C
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$3 @ 0x1800E3D63 (_Win32kInterop--Win32kInterop_--_1_--dtor$3.c)
 *     _PointerInfoAdapter::PointerInfoAdapter_::_1_::dtor$1 @ 0x1800E6CCE (_PointerInfoAdapter--PointerInfoAdapter_--_1_--dtor$1.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$1 @ 0x1800E78A1 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$1.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$10 @ 0x1800E7949 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

void __fastcall DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>::~DynamicSizeMap<unsigned long,tagPOINTER_INFO_UNION,2>(
        void **a1)
{
  operator delete(*a1);
}
