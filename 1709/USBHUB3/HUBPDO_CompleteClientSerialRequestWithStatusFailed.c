/*
 * XREFs of HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C001194C
 * Callers:
 *     HUBDSM_CompletingClientRequestOnFailureInDisabled @ 0x1C0019070 (HUBDSM_CompletingClientRequestOnFailureInDisabled.c)
 *     HUBDSM_IssuingPortCycleAndCompletingClientRequestOnEnumFailue @ 0x1C00195B0 (HUBDSM_IssuingPortCycleAndCompletingClientRequestOnEnumFailue.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C000A7EC (McTemplateK0pqq.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C00116A0 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBPDO_CompleteClientSerialRequestWithStatusFailed(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  int USBDErrorFromNTStatus; // eax
  __int16 v6; // ax
  __int16 v7; // ax
  __int64 v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+28h] [rbp-40h]
  _QWORD v11[5]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 456);
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  memset(v11, 0, sizeof(v11));
  LOWORD(v11[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    v11);
  if ( LODWORD(v11[3]) == 2228227 )
  {
    v4 = v11[1];
    USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(-1073741823);
    *(_DWORD *)(v4 + 4) = USBDErrorFromNTStatus;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
      McTemplateK0pqq(
        *(unsigned __int16 *)(v4 + 2),
        &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24),
        *(unsigned __int16 *)(v4 + 2),
        USBDErrorFromNTStatus);
    v6 = *(_WORD *)(v4 + 2);
    if ( v6 == 1 || v6 == 59 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x10u);
    v7 = *(_WORD *)(v4 + 2);
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        *(_QWORD *)(v4 + 40) = -1LL;
      }
      else if ( v7 == 59 )
      {
        *(_QWORD *)(v4 + 56) = -1LL;
      }
    }
    else
    {
      *(_QWORD *)(v4 + 32) = 0LL;
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
  {
    LODWORD(v10) = -1073741823;
    LODWORD(v9) = v11[3];
    McTemplateK0pqq(
      v3,
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
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v1,
           3221225473LL);
}
