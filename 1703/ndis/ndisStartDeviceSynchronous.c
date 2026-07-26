/*
 * XREFs of ndisStartDeviceSynchronous @ 0x1C00AB7AC
 * Callers:
 *     ndisPnPIrpStartDevice @ 0x1C00AA5E4 (ndisPnPIrpStartDevice.c)
 *     ndisStartDeviceWorkItem @ 0x1C00AB1E0 (ndisStartDeviceWorkItem.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00DFED0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C006F5F0 (ndisSelectiveSuspendClearStop.c)
 *     ndisPnPStartDevice @ 0x1C00AB254 (ndisPnPStartDevice.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00AC4FC (ndisMSetMiniportReadyForBinding.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00DA0A8 (ndisIMCheckDeviceInstance.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00DA398 (ndisIMInitializeDeviceInstance_ea_1C00DA398.c)
 */

__int64 __fastcall ndisStartDeviceSynchronous(_QWORD *DeferredContext, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  __int64 v9; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x3Fu, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (__int64)DeferredContext);
  v6 = DeferredContext[473];
  if ( (*(_BYTE *)(v6 + 26) & 0x21) == 1 )
  {
    *((_DWORD *)DeferredContext + 30) |= 0x8000u;
    if ( (unsigned __int8)ndisIMCheckDeviceInstance(v6, DeferredContext + 479, &v11) )
    {
      KeWaitForSingleObject((PVOID)(DeferredContext[473] + 416LL), Executive, 0, 0, 0LL);
      *(_QWORD *)(DeferredContext[473] + 472LL) = KeGetCurrentThread();
      v5 = ndisIMInitializeDeviceInstance(DeferredContext);
      *(_QWORD *)(DeferredContext[473] + 472LL) = 0LL;
      KeReleaseMutex((PRKMUTEX)(DeferredContext[473] + 416LL), 0);
    }
  }
  else
  {
    v5 = ndisPnPStartDevice((char *)DeferredContext, a2, a3);
    if ( v5 )
    {
      v5 = -1073741823;
    }
    else
    {
      if ( (DeferredContext[15] & 0x20000) != 0 )
      {
        v9 = *((int *)DeferredContext + 116);
        v7 = ndisMediaTypeCl;
        if ( !ndisMediaTypeCl[v9] && (_DWORD)v9 != 3 )
        {
          RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDProxy");
          ZwLoadDriver(&DestinationString);
        }
      }
      LOBYTE(v7) = 1;
      ndisMSetMiniportReadyForBinding(DeferredContext, v7, 4098LL, 0LL);
      if ( (*((_DWORD *)DeferredContext + 30) & 0x80u) == 0 && DeferredContext[560] )
        ndisSelectiveSuspendClearStop((__int64)DeferredContext, 9);
    }
  }
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(0x40u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, (__int64)DeferredContext, v5);
  return v5;
}
