/*
 * XREFs of HUBMUX_QueueStopAfterSuspendToAllDSMs @ 0x1C000E01C
 * Callers:
 *     HUBHSM_NotifyingHubStopToDevicesOnSuspriseRemove @ 0x1C0007970 (HUBHSM_NotifyingHubStopToDevicesOnSuspriseRemove.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueueStopAfterSuspendToAllDSMs(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  KIRQL v3; // r12
  int v4; // esi
  __int64 v5; // rcx
  int v6; // edi
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // r15
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // [rsp+30h] [rbp-38h] BYREF
  _QWORD **v17; // [rsp+38h] [rbp-30h]

  v1 = a1;
  v17 = &v16;
  v2 = a1 + 2312;
  v16 = &v16;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2312));
  _InterlockedOr((volatile signed __int32 *)(v2 + 32), 8u);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 64);
  v6 = 0;
  while ( 1 )
  {
    v10 = v5 - 192;
    v11 = (__int64 *)(v10 + 192);
    if ( v2 + 64 == v10 + 192 )
      break;
    ++v6;
    _InterlockedOr((volatile signed __int32 *)(v10 + 240), 4u);
    v7 = v17;
    ++v4;
    v8 = (_QWORD *)(v10 + 208);
    if ( *v17 != &v16 )
      __fastfail(3u);
    *(_QWORD *)(v10 + 216) = v17;
    *v8 = &v16;
    *v7 = v8;
    v17 = (_QWORD **)(v10 + 208);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v10);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v9,
      "DSM PnPPower Tag",
      2107LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
    v5 = *v11;
  }
  *(_DWORD *)(v2 + 12) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v3);
  if ( !v4 )
    goto LABEL_10;
  v12 = v16 - 26;
  v13 = *v16 - 208LL;
  if ( &v16 != v16 )
  {
    do
    {
      HUBSM_AddEvent((__int64)(v12 + 63), 4026);
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              v12);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v14,
        "DSM PnPPower Tag",
        2156LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
      v15 = (_QWORD *)(v13 + 208);
      v12 = (_QWORD *)v13;
      v13 = *(_QWORD *)(v13 + 208) - 208LL;
    }
    while ( &v16 != v15 );
    v1 = a1;
  }
  if ( !v6 )
LABEL_10:
    HUBSM_AddEvent(v1 + 1256, 2022);
}
