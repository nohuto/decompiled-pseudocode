/*
 * XREFs of VfWdfObjectGetTypedContext @ 0x1C00D61C4
 * Callers:
 *     VfEvtDeviceD0Entry @ 0x1C00D6280 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00D63A0 (VfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     VfEvtDeviceD0Exit @ 0x1C00D6440 (VfEvtDeviceD0Exit.c)
 *     VfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00D6560 (VfEvtDeviceD0ExitPreInterruptsDisabled.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00D6600 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceQueryRemove @ 0x1C00D6730 (VfEvtDeviceQueryRemove.c)
 *     VfEvtDeviceQueryStop @ 0x1C00D67C0 (VfEvtDeviceQueryStop.c)
 *     VfEvtDeviceRelationsQuery @ 0x1C00D6850 (VfEvtDeviceRelationsQuery.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00D68E0 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtDeviceSelfManagedIoCleanup @ 0x1C00D6A00 (VfEvtDeviceSelfManagedIoCleanup.c)
 *     VfEvtDeviceSelfManagedIoFlush @ 0x1C00D6A90 (VfEvtDeviceSelfManagedIoFlush.c)
 *     VfEvtDeviceSelfManagedIoInit @ 0x1C00D6B20 (VfEvtDeviceSelfManagedIoInit.c)
 *     VfEvtDeviceSelfManagedIoRestart @ 0x1C00D6BB0 (VfEvtDeviceSelfManagedIoRestart.c)
 *     VfEvtDeviceSelfManagedIoSuspend @ 0x1C00D6C40 (VfEvtDeviceSelfManagedIoSuspend.c)
 *     VfEvtDeviceSurpriseRemoval @ 0x1C00D6CD0 (VfEvtDeviceSurpriseRemoval.c)
 *     VfEvtDeviceUsageNotification @ 0x1C00D6D60 (VfEvtDeviceUsageNotification.c)
 *     VfEvtDeviceUsageNotificationEx @ 0x1C00D6E00 (VfEvtDeviceUsageNotificationEx.c)
 *     VfEvtIoCanceledOnQueue @ 0x1C00D6EA0 (VfEvtIoCanceledOnQueue.c)
 *     VfEvtIoDefault @ 0x1C00D6F30 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00D70F0 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00D72C0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00D7490 (VfEvtIoRead.c)
 *     VfEvtIoResume @ 0x1C00D7650 (VfEvtIoResume.c)
 *     VfEvtIoStop @ 0x1C00D76E0 (VfEvtIoStop.c)
 *     VfEvtIoWrite @ 0x1C00D77D0 (VfEvtIoWrite.c)
 * Callees:
 *     WPP_IFR_SF_sq @ 0x1C00397D4 (WPP_IFR_SF_sq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

char *__fastcall VfWdfObjectGetTypedContext(unsigned __int64 Handle, const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  _FX_DRIVER_GLOBALS **v3; // r8
  unsigned __int16 v4; // ax
  char *v5; // rax
  const char *_a1; // rcx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]

  v3 = (_FX_DRIVER_GLOBALS **)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
    v3 = (_FX_DRIVER_GLOBALS **)((char *)v3 - *(unsigned __int16 *)v3);
  if ( !Handle )
    FxVerifierNullBugCheck(v3[2], retaddr);
  if ( !TypeInfo )
    FxVerifierNullBugCheck(v3[2], retaddr);
  v4 = *((_WORD *)v3 + 5);
  if ( v4 && (v5 = (char *)v3 + v4) != 0LL )
  {
    while ( *((const _WDF_OBJECT_CONTEXT_TYPE_INFO **)v5 + 4) != TypeInfo )
    {
      v5 = (char *)*((_QWORD *)v5 + 1);
      if ( !v5 )
        goto LABEL_11;
    }
    return v5 + 48;
  }
  else
  {
LABEL_11:
    _a1 = "<no typename given>";
    if ( TypeInfo->ContextName )
      _a1 = TypeInfo->ContextName;
    WPP_IFR_SF_sq(v3[2], 3u, 0x12u, 0xAu, WPP_Verifier_cpp_Traceguids, _a1, (const void *)Handle);
    return 0LL;
  }
}
