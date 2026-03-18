/*
 * XREFs of HUBMUX_UnregisterWithHSM @ 0x1C000E494
 * Callers:
 *     HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup @ 0x1C001A1A0 (HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup.c)
 *     HUBDSM_UnregsiteringWithHsmOnDetach @ 0x1C001A1D0 (HUBDSM_UnregsiteringWithHsmOnDetach.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_UnregisterWithHSM(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // bp
  bool v4; // si
  KIRQL v5; // r8
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  int v9; // edx

  if ( (*(_DWORD *)(a1 + 1636) & 0x40) != 0 )
  {
    *(_QWORD *)(a1 + 1516) = 0LL;
    *(_QWORD *)(a1 + 1524) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFBF);
  }
  v2 = *(_QWORD *)a1 + 2312LL;
  v3 = 0;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  if ( (*(_DWORD *)(a1 + 240) & 2) != 0 )
  {
    v3 = 1;
    --*(_DWORD *)(v2 + 28);
    _InterlockedAnd((volatile signed __int32 *)(a1 + 240), 0xFFFFFFFD);
  }
  if ( (*(_DWORD *)(a1 + 240) & 4) != 0 )
    v4 = _InterlockedAdd((volatile signed __int32 *)(v2 + 12), 0xFFFFFFFF) == 0;
  v6 = *(_QWORD *)(a1 + 192);
  if ( *(_QWORD *)(v6 + 8) != a1 + 192 || (v7 = *(_QWORD **)(a1 + 200), *v7 != a1 + 192) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v8,
    "DSM Registration Tag",
    2696LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
  if ( v4 )
  {
    if ( v3 )
      v9 = 2018;
    else
      v9 = 2014;
    HUBSM_AddEvent(*(_QWORD *)a1 + 1256LL, v9);
  }
}
