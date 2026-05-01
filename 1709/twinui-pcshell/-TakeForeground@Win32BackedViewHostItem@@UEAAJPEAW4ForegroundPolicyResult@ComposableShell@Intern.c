/*
 * XREFs of ?TakeForeground@Win32BackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x180108E10
 * Callers:
 *     <none>
 * Callees:
 *     ?StartActivity@Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z @ 0x1801079C8 (-StartActivity@Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z.c)
 *     ??1?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180107B34 (--1-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180108F3C (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180109358 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvid.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall Win32BackedViewHostItem::TakeForeground(
        Win32BackedViewHostItem *this,
        enum Windows::Internal::ComposableShell::ForegroundPolicyResult *a2)
{
  int v4; // edx
  _QWORD v6[4]; // [rsp+20h] [rbp-E0h] BYREF
  int v7; // [rsp+40h] [rbp-C0h]
  int *v8; // [rsp+48h] [rbp-B8h]
  int *v9; // [rsp+50h] [rbp-B0h]
  int v10; // [rsp+58h] [rbp-A8h] BYREF
  char v11; // [rsp+5Ch] [rbp-A4h]
  int v12; // [rsp+80h] [rbp-80h] BYREF
  const char *v13; // [rsp+88h] [rbp-78h]
  __int64 v14; // [rsp+90h] [rbp-70h]
  char v15; // [rsp+98h] [rbp-68h]
  __int64 v16; // [rsp+A0h] [rbp-60h]
  _BYTE v17[144]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v18; // [rsp+138h] [rbp+38h]
  __int64 v19; // [rsp+140h] [rbp+40h]
  __int64 v20; // [rsp+148h] [rbp+48h]
  __int64 v21; // [rsp+150h] [rbp+50h]

  v16 = 1LL;
  v6[1] = 0LL;
  v6[2] = v6;
  v6[3] = 0LL;
  v8 = &v12;
  v7 = 0;
  v9 = &v10;
  v10 = 0;
  v13 = "Win32BackedViewHostItem_TakeForeground";
  v11 = 0;
  v15 = 0;
  v12 = 0;
  v14 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  memset(v17, 0, sizeof(v17));
  v4 = *((_DWORD *)this + 26);
  v6[0] = &HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::`vftable';
  v20 = 0LL;
  v21 = 0LL;
  HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::StartActivity(
    (HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground *)v6,
    v4);
  *(_DWORD *)a2 = 2;
  if ( IsWindowVisible(*((HWND *)this + 9)) && SetForegroundWindow(*((HWND *)this + 9)) )
    *(_DWORD *)a2 = 0;
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(v6);
  v6[0] = &HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v6);
  return 0LL;
}
