/*
 * XREFs of HUBPDO_EvtDeviceReleaseHardware @ 0x1C006AB50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C000135C (McTemplateK0pq.c)
 *     McTemplateK0p @ 0x1C0006374 (McTemplateK0p.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_DeleteUxdSettings @ 0x1C0071E24 (HUBREG_DeleteUxdSettings.c)
 *     HUBWNF_PublishUsbPartnerDualRoleFeatures @ 0x1C0075014 (HUBWNF_PublishUsbPartnerDualRoleFeatures.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceReleaseHardware(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  v4 = *(_QWORD *)(v3 + 24);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(v2, &USBHUB3_ETW_EVENT_DEVICE_RELEASE_HARDWARE_START, 0LL, *(_QWORD *)(v4 + 24));
  if ( *(_QWORD *)(v3 + 392) )
  {
    SleepstudyHelper_UnregisterComponent();
    *(_QWORD *)(v3 + 392) = 0LL;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  *(_BYTE *)v5 = 1;
  _InterlockedAnd((volatile signed __int32 *)(v4 + 1636), 0xFFFFBFFF);
  v6 = *(unsigned int *)(v5 + 32);
  if ( (v6 & 0x400) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v5 + 32), 0xFFFFFBFF);
  }
  else
  {
    if ( (v6 & 0x800) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v5 + 32), 0xFFFFF7FF);
      HUBREG_DeleteUxdSettings(*(_QWORD *)(v5 + 24), 1LL);
    }
    if ( (*(_DWORD *)(v4 + 1632) & 0x40000) != 0 )
    {
      HUBWNF_PublishUsbPartnerDualRoleFeatures(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 1416LL), 0LL, 0LL);
      _InterlockedAnd((volatile signed __int32 *)(v4 + 1632), 0xFFFBFFFF);
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0pq(v6, &USBHUB3_ETW_EVENT_DEVICE_RELEASE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v4 + 24), 0);
  return 0LL;
}
