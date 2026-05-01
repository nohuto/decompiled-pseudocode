/*
 * XREFs of ?TakeForeground@Win32BackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x1801B9520
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801B569C (--0-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801B61D0 (--1Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z @ 0x1801B90C4 (-StartActivity@Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801B91A4 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvid.c)
 */

__int64 __fastcall Win32BackedViewHostItem::TakeForeground(
        Win32BackedViewHostItem *this,
        enum Windows::Internal::ComposableShell::ForegroundPolicyResult *a2)
{
  int v4; // edx
  _QWORD v6[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v6,
    (__int64)"Win32BackedViewHostItem_TakeForeground");
  v4 = *((_DWORD *)this + 30);
  v6[0] = &HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::`vftable';
  HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::StartActivity(
    (HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground *)v6,
    v4);
  *(_DWORD *)a2 = 2;
  if ( *((_BYTE *)this + 280) && SetForegroundWindow(*((HWND *)this + 9)) )
    *(_DWORD *)a2 = 0;
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v6);
  HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::~Win32BackedViewHostItem_TakeForeground((HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground *)v6);
  return 0LL;
}
