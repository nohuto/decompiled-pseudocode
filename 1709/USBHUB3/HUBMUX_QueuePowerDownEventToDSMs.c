/*
 * XREFs of HUBMUX_QueuePowerDownEventToDSMs @ 0x1C000DDFC
 * Callers:
 *     HUBHSM_NotifyingHubStopToDevices @ 0x1C0007940 (HUBHSM_NotifyingHubStopToDevices.c)
 *     HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset @ 0x1C00080D0 (HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset.c)
 *     HUBHSM_WaitingForDevicesToReleaseReferenceOnSuspend @ 0x1C0008110 (HUBHSM_WaitingForDevicesToReleaseReferenceOnSuspend.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueuePowerDownEventToDSMs(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  KIRQL v5; // r12
  int v6; // esi
  __int64 v7; // rcx
  int v8; // edi
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // r15
  _QWORD *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // [rsp+30h] [rbp-38h] BYREF
  _QWORD **v19; // [rsp+38h] [rbp-30h]

  v2 = a1;
  v19 = &v18;
  v3 = a1 + 2312;
  v18 = &v18;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2312));
  _InterlockedOr((volatile signed __int32 *)(v3 + 32), 8u);
  v6 = 0;
  v7 = *(_QWORD *)(v3 + 64);
  v8 = 0;
  while ( 1 )
  {
    v12 = v7 - 192;
    v13 = (__int64 *)(v12 + 192);
    if ( v3 + 64 == v12 + 192 )
      break;
    if ( (*(_DWORD *)(v12 + 240) & 2) != 0 )
    {
      ++v8;
      _InterlockedOr((volatile signed __int32 *)(v12 + 240), 4u);
    }
    v9 = v19;
    ++v6;
    v10 = (_QWORD *)(v12 + 208);
    if ( *v19 != &v18 )
      __fastfail(3u);
    *(_QWORD *)(v12 + 216) = v19;
    *v10 = &v18;
    *v9 = v10;
    v19 = (_QWORD **)(v12 + 208);
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v12);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v11,
      "DSM PnPPower Tag",
      1980LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
    v7 = *v13;
  }
  *(_DWORD *)(v3 + 12) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v5);
  if ( !v6 )
    goto LABEL_12;
  v14 = v18 - 26;
  v15 = *v18 - 208LL;
  if ( &v18 != v18 )
  {
    do
    {
      HUBSM_AddEvent((__int64)(v14 + 63), a2);
      v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              v14);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v16,
        "DSM PnPPower Tag",
        2029LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
      v17 = (_QWORD *)(v15 + 208);
      v14 = (_QWORD *)v15;
      v15 = *(_QWORD *)(v15 + 208) - 208LL;
    }
    while ( &v18 != v17 );
    v2 = a1;
  }
  if ( !v8 )
LABEL_12:
    HUBSM_AddEvent(v2 + 1256, 2018);
}
