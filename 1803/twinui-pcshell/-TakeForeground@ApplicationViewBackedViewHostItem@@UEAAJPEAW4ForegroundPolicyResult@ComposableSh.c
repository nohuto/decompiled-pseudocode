/*
 * XREFs of ?TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x1801BD460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801B569C (--0-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801BB42C (--1ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z @ 0x1801BC88C (-StartActivity@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@.c)
 *     ?Stop@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x1801BCA94 (-Stop@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXW4Fo.c)
 *     ?get_Visibility@ApplicationViewBackedViewHostItem@@UEAAJPEAE@Z @ 0x1801BE3F0 (-get_Visibility@ApplicationViewBackedViewHostItem@@UEAAJPEAE@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::TakeForeground(
        ApplicationViewBackedViewHostItem *this,
        enum Windows::Internal::ComposableShell::ForegroundPolicyResult *a2)
{
  int Visibility; // eax
  unsigned int v5; // ebx
  unsigned __int8 v7[8]; // [rsp+20h] [rbp-168h] BYREF
  __int64 v8; // [rsp+28h] [rbp-160h]
  _QWORD v9[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v8 = -2LL;
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v9,
    (__int64)"ApplicationViewBackedViewHostItem_TakeForeground");
  v9[0] = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::`vftable';
  HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::StartActivity(
    (HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground *)v9,
    *((_DWORD *)this + 24));
  *(_DWORD *)a2 = 2;
  v7[0] = 0;
  Visibility = ApplicationViewBackedViewHostItem::get_Visibility(
                 (ApplicationViewBackedViewHostItem *)((char *)this - 48),
                 v7);
  v5 = Visibility;
  if ( Visibility >= 0 )
  {
    if ( v7[0] && (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 56LL))(*((_QWORD *)this + 7)) >= 0 )
      *(_DWORD *)a2 = 0;
    HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::Stop((__int64)v9, *(_DWORD *)a2);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AB,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)Visibility);
  }
  HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::~ApplicationViewBackedViewHostItem_TakeForeground((HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground *)v9);
  return v5;
}
