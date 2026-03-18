/*
 * XREFs of ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C
 * Callers:
 *     imp_WdfRequestGetFileObject @ 0x1C0001340 (imp_WdfRequestGetFileObject.c)
 *     imp_WdfRequestGetParameters @ 0x1C00015B0 (imp_WdfRequestGetParameters.c)
 *     imp_WdfSpinLockAcquire @ 0x1C00016A0 (imp_WdfSpinLockAcquire.c)
 *     imp_WdfSpinLockRelease @ 0x1C0001750 (imp_WdfSpinLockRelease.c)
 *     imp_WdfIoQueueGetDevice @ 0x1C00017F0 (imp_WdfIoQueueGetDevice.c)
 *     imp_WdfCollectionGetItem @ 0x1C0001860 (imp_WdfCollectionGetItem.c)
 *     imp_WdfTimerGetParentObject @ 0x1C0001950 (imp_WdfTimerGetParentObject.c)
 *     imp_WdfWaitLockAcquire @ 0x1C00019C0 (imp_WdfWaitLockAcquire.c)
 *     imp_WdfCollectionGetCount @ 0x1C0001BC0 (imp_WdfCollectionGetCount.c)
 *     imp_WdfTimerStop @ 0x1C0001C50 (imp_WdfTimerStop.c)
 *     imp_WdfWaitLockRelease @ 0x1C0001E00 (imp_WdfWaitLockRelease.c)
 *     imp_WdfRequestSetCompletionRoutine @ 0x1C0001E70 (imp_WdfRequestSetCompletionRoutine.c)
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0001F90 (imp_WdfDeviceEnqueueRequest.c)
 *     imp_WdfInterruptAcquireLock @ 0x1C0002080 (imp_WdfInterruptAcquireLock.c)
 *     imp_WdfInterruptReleaseLock @ 0x1C0002100 (imp_WdfInterruptReleaseLock.c)
 *     imp_WdfIoQueueFindRequest @ 0x1C00025E0 (imp_WdfIoQueueFindRequest.c)
 *     imp_WdfInterruptGetDevice @ 0x1C0002B40 (imp_WdfInterruptGetDevice.c)
 *     imp_WdfIoQueueGetState @ 0x1C0002BB0 (imp_WdfIoQueueGetState.c)
 *     imp_WdfInterruptQueueDpcForIsr @ 0x1C0002D80 (imp_WdfInterruptQueueDpcForIsr.c)
 *     imp_WdfRequestSetInformation @ 0x1C0002DE0 (imp_WdfRequestSetInformation.c)
 *     imp_WdfRequestGetIoQueue @ 0x1C0002EC0 (imp_WdfRequestGetIoQueue.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00032B0 (imp_WdfRequestForwardToIoQueue.c)
 *     imp_WdfTimerStart @ 0x1C0003500 (imp_WdfTimerStart.c)
 *     imp_WdfRequestSend @ 0x1C0004650 (imp_WdfRequestSend.c)
 *     FxIoTargetFormatIoctl @ 0x1C0004AF0 (FxIoTargetFormatIoctl.c)
 *     imp_WdfRequestCreate @ 0x1C0006A00 (imp_WdfRequestCreate.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C0006FC0 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C00070D0 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestComplete @ 0x1C00071F0 (imp_WdfRequestComplete.c)
 *     imp_WdfRequestReuse @ 0x1C00101C0 (imp_WdfRequestReuse.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0010260 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     imp_WdfRegistryQueryValue @ 0x1C0012D20 (imp_WdfRegistryQueryValue.c)
 *     imp_WdfDeviceStopIdleActual @ 0x1C0013010 (imp_WdfDeviceStopIdleActual.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C0014940 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0014A30 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfIoQueueCreate @ 0x1C0019080 (imp_WdfIoQueueCreate.c)
 *     imp_WdfObjectCreate @ 0x1C001F010 (imp_WdfObjectCreate.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0024710 (FxIoTargetSendIoctl.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C0031160 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0031860 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfPdoRetrieveIdentificationDescription @ 0x1C0032050 (imp_WdfPdoRetrieveIdentificationDescription.c)
 *     imp_WdfRegistryClose @ 0x1C0032140 (imp_WdfRegistryClose.c)
 *     imp_WdfFileObjectWdmGetFileObject @ 0x1C0032B80 (imp_WdfFileObjectWdmGetFileObject.c)
 *     imp_WdfRequestCompleteWithInformation @ 0x1C0032BD0 (imp_WdfRequestCompleteWithInformation.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C0032E40 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfRequestWdmFormatUsingStackLocation @ 0x1C0033D80 (imp_WdfRequestWdmFormatUsingStackLocation.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0034200 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x1C0034530 (imp_WdfDeviceAddQueryInterface.c)
 *     imp_WdfFileObjectGetDevice @ 0x1C0034A20 (imp_WdfFileObjectGetDevice.c)
 *     imp_WdfDeviceResumeIdleActual @ 0x1C0034B70 (imp_WdfDeviceResumeIdleActual.c)
 *     imp_WdfRequestGetStatus @ 0x1C0034C50 (imp_WdfRequestGetStatus.c)
 *     imp_WdfRequestWdmGetIrp @ 0x1C0034CD0 (imp_WdfRequestWdmGetIrp.c)
 *     imp_WdfCommonBufferGetAlignedLogicalAddress @ 0x1C0037490 (imp_WdfCommonBufferGetAlignedLogicalAddress.c)
 *     imp_WdfCommonBufferGetAlignedVirtualAddress @ 0x1C00374E0 (imp_WdfCommonBufferGetAlignedVirtualAddress.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x1C008045C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxObjectHandleGetPtrQI(
        FxObject *Object,
        void **PPObject,
        void *Handle,
        unsigned __int16 Type,
        unsigned __int16 Offset)
{
  unsigned __int8 v8; // dl
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  const _GUID *v11; // [rsp+20h] [rbp-48h]
  FxQueryInterfaceParams params; // [rsp+50h] [rbp-18h] BYREF

  *PPObject = 0LL;
  params.Object = PPObject;
  params.Type = Type;
  params.Offset = Offset;
  if ( Object->QueryInterface(Object, &params) < 0 )
  {
    WPP_IFR_SF_qDqD(Object->m_Globals, v8, v9, v10, v11, Handle, Type, Object, Object->m_Type);
    FxVerifierBugCheckWorker(Object->m_Globals, WDF_INVALID_HANDLE, (unsigned __int64)Handle, Type);
  }
}
