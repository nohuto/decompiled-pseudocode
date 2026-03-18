/*
 * XREFs of HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x1C0011AF8
 * Callers:
 *     HUBDSM_CompletingClientRequestOnFailureInConfigured @ 0x1C0019050 (HUBDSM_CompletingClientRequestOnFailureInConfigured.c)
 *     HUBDSM_CompletingClientUnconfigureRequestWithFailure @ 0x1C00190D0 (HUBDSM_CompletingClientUnconfigureRequestWithFailure.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C000A7EC (McTemplateK0pqq.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBPDO_CompleteClientSerialRequestWithLastStatus(__int64 a1)
{
  int v1; // esi
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int16 v6; // ax
  __int16 v7; // ax
  __int64 v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+28h] [rbp-50h]
  _QWORD v11[5]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_DWORD *)(a1 + 1560);
  v3 = *(_QWORD *)(a1 + 456);
  memset(v11, 0, sizeof(v11));
  LOWORD(v11[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v3,
    v11);
  if ( LODWORD(v11[3]) == 2228227 )
  {
    v5 = v11[1];
    *(_DWORD *)(v11[1] + 4LL) = *(_DWORD *)(a1 + 1564);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
      McTemplateK0pqq(
        *(unsigned __int16 *)(v5 + 2),
        &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24),
        *(unsigned __int16 *)(v5 + 2),
        *(_DWORD *)(v5 + 4));
    v6 = *(_WORD *)(v5 + 2);
    if ( v6 == 1 || v6 == 59 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x10u);
    v7 = *(_WORD *)(v5 + 2);
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        *(_QWORD *)(v5 + 40) = -1LL;
      }
      else if ( v7 == 59 )
      {
        *(_QWORD *)(v5 + 56) = -1LL;
      }
    }
    else
    {
      *(_QWORD *)(v5 + 32) = 0LL;
    }
  }
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 1560) = 0LL;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
  {
    LODWORD(v10) = v1;
    LODWORD(v9) = v11[3];
    McTemplateK0pqq(
      v4,
      &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24),
      v9,
      v10);
  }
  if ( (*(_DWORD *)(a1 + 1636) & 0x40) != 0 )
  {
    *(_QWORD *)(a1 + 1516) = 0LL;
    *(_QWORD *)(a1 + 1524) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFBF);
  }
  if ( v1 >= 0 )
    v1 = -1073741823;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v3,
           (unsigned int)v1);
}
