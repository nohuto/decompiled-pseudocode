/*
 * XREFs of ProcLibDeviceCreate @ 0x1C001BA60
 * Callers:
 *     EvtDriverDeviceAdd @ 0x1C00174C0 (EvtDriverDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 */

__int64 __fastcall ProcLibDeviceCreate(char *DeferredContext)
{
  int v2; // eax
  unsigned int v3; // edi
  _QWORD v5[9]; // [rsp+30h] [rbp-48h] BYREF

  DeferredContext[77] = 0;
  *((_DWORD *)DeferredContext + 176) = 100;
  *((_DWORD *)DeferredContext + 177) = 100;
  memset(v5, 0, 0x38uLL);
  v5[3] = 0x100000001LL;
  LODWORD(v5[0]) = 56;
  v5[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, char *))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            DeferredContext);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, char *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         v5,
         DeferredContext + 208);
  v3 = v2;
  if ( v2 >= 0 )
  {
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 744), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 808), (PKDEFERRED_ROUTINE)QuickCapTraceDpc, DeferredContext);
    KeInitializeTimerEx((PKTIMER)DeferredContext + 14, NotificationTimer);
    KeInitializeDpc((PRKDPC)DeferredContext + 15, (PKDEFERRED_ROUTINE)LongCapTraceDpc, DeferredContext);
  }
  else
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x19u,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
      v2);
  }
  return v3;
}
