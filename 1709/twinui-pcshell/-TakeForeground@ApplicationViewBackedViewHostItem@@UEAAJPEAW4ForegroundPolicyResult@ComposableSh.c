/*
 * XREFs of ?TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x18010F3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180107B34 (--1-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180108F3C (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsPro.c)
 *     ?StartActivity@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z @ 0x18010BE50 (-StartActivity@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@.c)
 *     ?Stop@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x18010BFBC (-Stop@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXW4Fo.c)
 *     ?get_Visibility@ApplicationViewBackedViewHostItem@@UEAAJPEAE@Z @ 0x18010D430 (-get_Visibility@ApplicationViewBackedViewHostItem@@UEAAJPEAE@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::TakeForeground(
        ApplicationViewBackedViewHostItem *this,
        enum Windows::Internal::ComposableShell::ForegroundPolicyResult *a2)
{
  int Visibility; // eax
  unsigned int v5; // ebx
  unsigned __int8 v7[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+28h] [rbp-D8h]
  _QWORD v9[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+50h] [rbp-B0h]
  int *v11; // [rsp+58h] [rbp-A8h]
  int *v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h] BYREF
  char v14; // [rsp+6Ch] [rbp-94h]
  int v15; // [rsp+90h] [rbp-70h] BYREF
  const char *v16; // [rsp+98h] [rbp-68h]
  __int64 v17; // [rsp+A0h] [rbp-60h]
  char v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  _BYTE v20[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v21; // [rsp+148h] [rbp+48h]
  __int64 v22; // [rsp+150h] [rbp+50h]
  __int64 v23; // [rsp+158h] [rbp+58h]
  __int64 v24; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v8 = -2LL;
  v9[1] = 0LL;
  v9[2] = v9;
  v9[3] = 0LL;
  v10 = 0;
  v11 = &v15;
  v12 = &v13;
  v13 = 0;
  v14 = 0;
  v18 = 0;
  v15 = 0;
  v16 = "ApplicationViewBackedViewHostItem_TakeForeground";
  v17 = 0LL;
  v19 = 1LL;
  v21 = 0LL;
  v22 = 0LL;
  memset(v20, 0, sizeof(v20));
  v23 = 0LL;
  v24 = 0LL;
  v9[0] = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::`vftable';
  HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::StartActivity(
    (HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground *)v9,
    *((_DWORD *)this + 24));
  *(_DWORD *)a2 = 2;
  v7[0] = 0;
  Visibility = ApplicationViewBackedViewHostItem::get_Visibility(
                 (ApplicationViewBackedViewHostItem *)((char *)this - 48),
                 (bool *)v7);
  v5 = Visibility;
  if ( Visibility >= 0 )
  {
    if ( v7[0] && (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 32LL))(*((_QWORD *)this + 8)) >= 0 )
      *(_DWORD *)a2 = 0;
    HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::Stop((__int64)v9, *(_DWORD *)a2);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x29B,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)Visibility);
  }
  v9[0] = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  return v5;
}
