/*
 * XREFs of ndisStartDeviceSynchronous @ 0x1C00C0AB8
 * Callers:
 *     ndisStartDeviceWorkItem @ 0x1C00C1230 (ndisStartDeviceWorkItem.c)
 *     ndisPnPIrpStartDevice @ 0x1C00C12A4 (ndisPnPIrpStartDevice.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00E9D70 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C0070D84 (ndisSelectiveSuspendClearStop.c)
 *     ndisPnPStartDevice @ 0x1C00C0924 (ndisPnPStartDevice.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C103C (ndisMSetMiniportReadyForBinding.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00E40C8 (ndisIMCheckDeviceInstance.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00E43B8 (ndisIMInitializeDeviceInstance_ea_1C00E43B8.c)
 */

__int64 __fastcall ndisStartDeviceSynchronous(int *DeferredContext, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int16 v7; // ax
  _BYTE *v8; // rdx
  __int64 v10; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x3Fu, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, (__int64)DeferredContext);
  v6 = *((_QWORD *)DeferredContext + 473);
  v7 = *(_WORD *)(v6 + 26);
  if ( (v7 & 1) == 0 || (v7 & 0x20) != 0 )
  {
    v5 = ndisPnPStartDevice((char *)DeferredContext, a2, a3);
    if ( v5 )
    {
      v5 = -1073741823;
    }
    else
    {
      if ( (DeferredContext[30] & 0x20000) != 0 )
      {
        v10 = DeferredContext[116];
        v8 = ndisMediaTypeCl;
        if ( !ndisMediaTypeCl[v10] && (_DWORD)v10 != 3 )
        {
          RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDProxy");
          ZwLoadDriver(&DestinationString);
        }
      }
      LOBYTE(v8) = 1;
      ndisMSetMiniportReadyForBinding(DeferredContext, v8, 4098LL, 0LL);
      if ( (DeferredContext[30] & 0x80u) == 0 && *((_QWORD *)DeferredContext + 560) )
        ndisSelectiveSuspendClearStop((__int64)DeferredContext, 9);
    }
  }
  else
  {
    DeferredContext[30] |= 0x8000u;
    if ( (unsigned __int8)ndisIMCheckDeviceInstance(v6, DeferredContext + 958, &v12) )
    {
      KeWaitForSingleObject((PVOID)(*((_QWORD *)DeferredContext + 473) + 416LL), Executive, 0, 0, 0LL);
      *(_QWORD *)(*((_QWORD *)DeferredContext + 473) + 472LL) = KeGetCurrentThread();
      v5 = ndisIMInitializeDeviceInstance(DeferredContext);
      *(_QWORD *)(*((_QWORD *)DeferredContext + 473) + 472LL) = 0LL;
      KeReleaseMutex((PRKMUTEX)(*((_QWORD *)DeferredContext + 473) + 416LL), 0);
    }
  }
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0x40u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, (__int64)DeferredContext, v5);
  return v5;
}
