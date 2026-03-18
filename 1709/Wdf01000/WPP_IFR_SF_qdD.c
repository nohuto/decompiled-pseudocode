/*
 * XREFs of WPP_IFR_SF_qDd @ 0x1C0073AB8
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0004650 (imp_WdfRequestSend.c)
 *     FxIoTargetSendIoctl @ 0x1C0024710 (FxIoTargetSendIoctl.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C00313E0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     imp_WdfDmaTransactionAllocateResources @ 0x1C0066990 (imp_WdfDmaTransactionAllocateResources.c)
 *     imp_WdfDmaTransactionInitialize @ 0x1C0067030 (imp_WdfDmaTransactionInitialize.c)
 *     imp_WdfCompanionTargetSendTaskSynchronously @ 0x1C0073C00 (imp_WdfCompanionTargetSendTaskSynchronously.c)
 *     imp_WdfDeviceInitSetRemoveLockOptions @ 0x1C0075900 (imp_WdfDeviceInitSetRemoveLockOptions.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C007809C (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C007AF98 (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z @ 0x1C0082368 (-DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0089EB0 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C008FD38 (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 * Callees:
 *     FxIFR @ 0x1C000CF30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006EA34 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qDd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const void *_a2,
        unsigned int _a3,
        unsigned int globals_0)
{
  int v11; // eax
  unsigned __int64 v12; // r11

  v11 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( _bittest(&v11, ((_BYTE)id - 1) & 0x1F) )
  {
    v12 = (unsigned __int64)id >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v12 + 1) >= 2u )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v12),
        43LL,
        _a1,
        traceGuid,
        &_a2,
        8LL,
        &_a3,
        4LL,
        &globals_0,
        4LL,
        0LL);
  }
  FxIFR(globals, 2u, id, _a1, traceGuid, &_a2, 8LL, &_a3, 4LL, &globals_0, 4LL, 0LL);
}
