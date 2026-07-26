/*
 * XREFs of ndisStartDeviceSynchronous @ 0x1C00C6274
 * Callers:
 *     ndisStartDeviceWorkItem @ 0x1C00C6200 (ndisStartDeviceWorkItem.c)
 *     ndisPnPIrpStartDevice @ 0x1C00C6D5C (ndisPnPIrpStartDevice.c)
 *     NdisLWMStartNetworkInterface @ 0x1C00EBA00 (NdisLWMStartNetworkInterface.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00EC2B0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C00715E4 (ndisSelectiveSuspendClearStop.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C67C8 (ndisMSetMiniportReadyForBinding.c)
 *     ndisPnPStartDevice @ 0x1C00C6974 (ndisPnPStartDevice.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00E5928 (ndisIMCheckDeviceInstance.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00E5C1C (ndisIMInitializeDeviceInstance_ea_1C00E5C1C.c)
 */

__int64 __fastcall ndisStartDeviceSynchronous(int *DeferredContext)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int16 v4; // ax
  _BYTE *v5; // rdx
  __int64 v7; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x3Fu, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (__int64)DeferredContext);
  v3 = *((_QWORD *)DeferredContext + 473);
  v4 = *(_WORD *)(v3 + 26);
  if ( (v4 & 1) == 0 || (v4 & 0x20) != 0 )
  {
    v2 = ndisPnPStartDevice(DeferredContext);
    if ( v2 )
    {
      v2 = -1073741823;
    }
    else
    {
      if ( (DeferredContext[30] & 0x20000) != 0 )
      {
        v7 = DeferredContext[116];
        v5 = ndisMediaTypeCl;
        if ( !ndisMediaTypeCl[v7] && (_DWORD)v7 != 3 )
        {
          RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDProxy");
          ZwLoadDriver(&DestinationString);
        }
      }
      LOBYTE(v5) = 1;
      ndisMSetMiniportReadyForBinding(DeferredContext, v5, 4098LL, 0LL);
      if ( (DeferredContext[30] & 0x80u) == 0 && *((_QWORD *)DeferredContext + 560) )
        ndisSelectiveSuspendClearStop((__int64)DeferredContext, 9);
    }
  }
  else
  {
    DeferredContext[30] |= 0x8000u;
    if ( (unsigned __int8)ndisIMCheckDeviceInstance(v3, DeferredContext + 958, &v9) )
    {
      KeWaitForSingleObject((PVOID)(*((_QWORD *)DeferredContext + 473) + 416LL), Executive, 0, 0, 0LL);
      *(_QWORD *)(*((_QWORD *)DeferredContext + 473) + 472LL) = KeGetCurrentThread();
      v2 = ndisIMInitializeDeviceInstance(DeferredContext);
      *(_QWORD *)(*((_QWORD *)DeferredContext + 473) + 472LL) = 0LL;
      KeReleaseMutex((PRKMUTEX)(*((_QWORD *)DeferredContext + 473) + 416LL), 0);
    }
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(0x40u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, (__int64)DeferredContext, v2);
  return v2;
}
