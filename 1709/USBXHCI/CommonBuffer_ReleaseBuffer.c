/*
 * XREFs of CommonBuffer_ReleaseBuffer @ 0x1C000FA0C
 * Callers:
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C000FE78 (XilCommonBuffer_ReleaseBuffer.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C00173A8 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C00178C8 (XilEndpoint_FreeStreamContextArray.c)
 *     Endpoint_EvaluateContextCompletion @ 0x1C0018DE0 (Endpoint_EvaluateContextCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0019520 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0019690 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C001A0D0 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C001A260 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001BBE0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     TR_AcquireSecureSegments @ 0x1C0022054 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C00228E0 (TR_CreateSecureObject.c)
 *     TR_WdfEvtCleanupCallback @ 0x1C0023A50 (TR_WdfEvtCleanupCallback.c)
 *     Crashdump_UcxEvtFreeDumpData @ 0x1C0039F00 (Crashdump_UcxEvtFreeDumpData.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C003A040 (Crashdump_UcxEvtGetDumpData.c)
 *     XilCoreCommand_FreeResources @ 0x1C003FFD8 (XilCoreCommand_FreeResources.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C004108C (XilCoreDeviceSlot_FreeResources.c)
 *     XilCoreUsbDevice_FreeResources @ 0x1C0041428 (XilCoreUsbDevice_FreeResources.c)
 * Callees:
 *     XilCoreCommonBuffer_ReleaseBufferInternal @ 0x1C0040C74 (XilCoreCommonBuffer_ReleaseBufferInternal.c)
 */

void __fastcall CommonBuffer_ReleaseBuffer(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rbx

  if ( a2[20] == 1 )
  {
    v3 = a1 + 80;
    *(_BYTE *)(a1 + 105) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    XilCoreCommonBuffer_ReleaseBufferInternal(v3, a2);
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 16), *(_BYTE *)(v3 + 25));
  }
  else
  {
    ExFreePoolWithTag(a2, 0x49434858u);
  }
}
