/*
 * XREFs of HUBMUX_QueuePowerUpEventToDSMs @ 0x1C000E280
 * Callers:
 *     HUBHSM_NotifyingHubResumeInS0ToDevices @ 0x1C0007840 (HUBHSM_NotifyingHubResumeInS0ToDevices.c)
 *     HUBHSM_NotifyingHubResumeToDevices @ 0x1C0007870 (HUBHSM_NotifyingHubResumeToDevices.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevices @ 0x1C00078B0 (HUBHSM_NotifyingHubResumeWithResetToDevices.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure @ 0x1C00078F0 (HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure.c)
 *     HUBHSM_WaitingForDevicesToAcquireReferenceOnStart @ 0x1C00080A0 (HUBHSM_WaitingForDevicesToAcquireReferenceOnStart.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueuePowerUpEventToDSMs(__int64 a1, int a2)
{
  __int64 v3; // rdi
  KIRQL v5; // al
  int v6; // ebx
  __int64 v7; // rdx
  KIRQL v8; // r15
  __int64 v9; // rdx
  __int64 *v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  _QWORD **v19; // [rsp+38h] [rbp-20h]

  v19 = &v18;
  v3 = a1 + 2312;
  v18 = &v18;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2312));
  v6 = 0;
  v7 = *(_QWORD *)(v3 + 64);
  v8 = v5;
  while ( 1 )
  {
    v9 = v7 - 192;
    v10 = (__int64 *)(v9 + 192);
    if ( v3 + 64 == v9 + 192 )
      break;
    if ( (*(_DWORD *)(v9 + 240) & 1) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v9 + 240), 0xFFFFFFFE);
      _InterlockedOr((volatile signed __int32 *)(v9 + 240), 4u);
      v11 = v19;
      ++v6;
      v12 = (_QWORD *)(v9 + 208);
      if ( *v19 != &v18 )
        __fastfail(3u);
      *(_QWORD *)(v9 + 216) = v19;
      *v12 = &v18;
      *v11 = v12;
      v19 = (_QWORD **)(v9 + 208);
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1632))(WdfDriverGlobals);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v13,
        "DSM PnPPower Tag",
        2338LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
    }
    v7 = *v10;
  }
  *(_DWORD *)(v3 + 12) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v8);
  if ( v6 )
  {
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
          2379LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
        v17 = (_QWORD *)(v15 + 208);
        v14 = (_QWORD *)v15;
        v15 = *(_QWORD *)(v15 + 208) - 208LL;
      }
      while ( &v18 != v17 );
    }
  }
  else
  {
    HUBSM_AddEvent(a1 + 1256, 2014);
  }
}
