/*
 * XREFs of ProcLibDeviceCreate @ 0x1C00247E8
 * Callers:
 *     EvtDriverDeviceAdd @ 0x1C0024540 (EvtDriverDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005280 (memset.c)
 */

__int64 __fastcall ProcLibDeviceCreate(char *DeferredContext)
{
  int v2; // edi
  _QWORD v4[9]; // [rsp+30h] [rbp-48h] BYREF

  DeferredContext[77] = 0;
  *((_DWORD *)DeferredContext + 176) = 100;
  *((_DWORD *)DeferredContext + 177) = 100;
  memset(v4, 0, 0x38uLL);
  v4[3] = 0x100000001LL;
  LODWORD(v4[0]) = 56;
  v4[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, char *))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            DeferredContext);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, char *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         v4,
         DeferredContext + 208);
  if ( v2 < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x1Au,
      (__int64)&WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids,
      v2);
  }
  else
  {
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 744), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 808), (PKDEFERRED_ROUTINE)QuickCapTraceDpc, DeferredContext);
    KeInitializeTimerEx((PKTIMER)DeferredContext + 14, NotificationTimer);
    KeInitializeDpc((PRKDPC)DeferredContext + 15, (PKDEFERRED_ROUTINE)LongCapTraceDpc, DeferredContext);
  }
  return (unsigned int)v2;
}
