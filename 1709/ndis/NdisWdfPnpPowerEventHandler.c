/*
 * XREFs of NdisWdfPnpPowerEventHandler @ 0x1C00E9D70
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetDevicePower @ 0x1C001FA4C (ndisSetDevicePower.c)
 *     ndisWdfDeviceObjectCleanup @ 0x1C00650C4 (ndisWdfDeviceObjectCleanup.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C0070D84 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0072500 (-ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00725E0 (-ndisAoAcResumeRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ndisStartDeviceSynchronous @ 0x1C00C0AB8 (ndisStartDeviceSynchronous.c)
 *     ndisSetSystemPower @ 0x1C00C6804 (ndisSetSystemPower.c)
 *     NdisWdfMiniportDataPathPause @ 0x1C00E9CC0 (NdisWdfMiniportDataPathPause.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00EB720 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00EBA58 (ndisWdfPostReleaseHardware.c)
 *     ndisWdfPreReleaseHardware @ 0x1C00EBB30 (ndisWdfPreReleaseHardware.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F32B0 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 */

__int64 __fastcall NdisWdfPnpPowerEventHandler(struct _NDIS_MINIPORT_BLOCK *DeferredContext, int a2, int a3)
{
  char v6; // bp
  __int64 v7; // r8
  unsigned int PowerCompleteStatus; // edi
  struct _NDIS_MINIPORT_AOAC *AoAc; // rcx
  union _POWER_STATE v10; // r8d
  unsigned int started; // eax
  struct _NDIS_MINIPORT_AOAC *v12; // rcx
  int Timeout; // [rsp+20h] [rbp-38h]
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0;
  ndisReferencePackage((__int64)&ndisPkgs);
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  DeferredContext->PowerCompleteStatus = -1073741637;
  if ( a2 > 12 )
  {
    switch ( a2 )
    {
      case 14:
      case 15:
        ndisSetSystemPower(0LL, 0LL, (__int64)DeferredContext, 4);
        goto LABEL_39;
      case 17:
        started = ndisWdfPreReleaseHardware(DeferredContext);
        break;
      case 18:
        started = ndisWdfPostReleaseHardware(DeferredContext);
        break;
      case 19:
        DeferredContext->PnPDeviceState = NdisPnPDeviceStopped;
        NdisWdfMiniportDataPathPause((__int64)DeferredContext);
LABEL_16:
        PowerCompleteStatus = 0;
        goto LABEL_48;
      case 20:
        started = ndisWdfDeviceObjectCleanup(DeferredContext);
        break;
      default:
LABEL_33:
        PowerCompleteStatus = -1073741811;
        goto LABEL_48;
    }
LABEL_23:
    PowerCompleteStatus = started;
    goto LABEL_48;
  }
  switch ( a2 )
  {
    case 12:
      PowerCompleteStatus = -1073741822;
      goto LABEL_48;
    case 0:
      started = ndisStartDeviceSynchronous((int *)DeferredContext, 0LL, v7);
      goto LABEL_23;
    case 6:
      started = ndisPnPIrpSurpriseRemoval(0LL, DeferredContext, 0LL, &v16, &v16);
      goto LABEL_23;
    case 7:
      started = ndisPnPIrpRemoveDevice(DeferredContext->DeviceObject, DeferredContext, 0LL, (__int64)&v16);
      goto LABEL_23;
    case 9:
      if ( a3 == 14 )
      {
        ndisSetSystemPower(0LL, 0LL, (__int64)DeferredContext, 1);
        v6 = 1;
      }
      AoAc = DeferredContext->AoAc;
      if ( AoAc )
        ndisAoAcResumeRefTimeAccumulation(AoAc);
      _InterlockedOr((volatile signed __int32 *)&DeferredContext->InterlockedFlags, 2u);
      Timeout = a3;
      v10.SystemState = PowerSystemWorking;
      goto LABEL_42;
  }
  if ( a2 != 10 )
  {
    if ( a2 == 11 )
    {
      if ( DeferredContext->SelectiveSuspend )
        ndisSelectiveSuspendClearStop((__int64)DeferredContext, 9);
      if ( (DeferredContext->PnPFlags & 0x200000) != 0 && ndisAoAcCapable
        || (DeferredContext->FilterPnPFlags & 0x200) != 0 )
      {
        if ( DeferredContext->AoAc )
          ndisAoAcStart(DeferredContext);
      }
      goto LABEL_16;
    }
    goto LABEL_33;
  }
LABEL_39:
  v12 = DeferredContext->AoAc;
  if ( v12 )
    ndisAoAcPauseRefTimeAccumulation(v12);
  _InterlockedOr((volatile signed __int32 *)&DeferredContext->InterlockedFlags, 4u);
  Timeout = a2;
  v10.SystemState = PowerSystemSleeping3;
LABEL_42:
  DeferredContext->PowerCompleteEvent = &Event;
  PowerCompleteStatus = ndisSetDevicePower(0LL, 0LL, v10, (ULONG_PTR)DeferredContext, Timeout);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  DeferredContext->PowerCompleteEvent = 0LL;
  if ( v6 && DeferredContext->SelectiveSuspend )
    ndisSelectiveSuspendClearStop((__int64)DeferredContext, 6);
  if ( PowerCompleteStatus == 259 || PowerCompleteStatus == -1073741802 )
    PowerCompleteStatus = DeferredContext->PowerCompleteStatus;
LABEL_48:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return PowerCompleteStatus;
}
