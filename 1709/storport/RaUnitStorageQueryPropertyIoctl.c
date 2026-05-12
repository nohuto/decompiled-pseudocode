/*
 * XREFs of RaUnitStorageQueryPropertyIoctl @ 0x1C005F0E0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0005984 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     McTemplateK0pq @ 0x1C002B808 (McTemplateK0pq.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C003D218 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C003D360 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C003D528 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C005F1E8 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C0063694 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C00645A4 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0064680 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 */

NTSTATUS __fastcall RaUnitStorageQueryPropertyIoctl(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-38h]
  GUID v8; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) < 8u )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    return RaidCompleteRequestEx((PIRP)a2, 0, 0xC00000EF);
  }
  else
  {
    v4 = **(_DWORD **)(a2 + 24);
    if ( v4 )
    {
      switch ( v4 )
      {
        case 2:
          return RaUnitStorageQueryDeviceIdPropertyIoctl(a1);
        case 48:
          return RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl(a1);
        case 12:
          return RaUnitStorageQueryDevicePowerPropertyIoctl(a1);
        case 50:
          return RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl(a1, (IRP *)a2);
        case 52:
          return RaUnitStorageQueryDeviceTemperaturePropertyIoctl(a1, (IRP *)a2);
        case 54:
          return RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl(a1, (IRP *)a2);
        default:
          if ( StorEtwLoggingEnabled )
          {
            *(_QWORD *)&v8.Data1 = 0LL;
            *(_QWORD *)v8.Data4 = 0LL;
            IoGetActivityIdIrp(a2, &v8);
            if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x80000) != 0 )
            {
              v7 = *(_DWORD *)(a2 + 48);
              McTemplateK0pq(v5, &EventNonReadWriteRequestComplete, &v8, a2, v7);
            }
          }
          ++*(_BYTE *)(a2 + 67);
          *(_QWORD *)(a2 + 184) += 72LL;
          return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
      }
    }
    else
    {
      return RaUnitStorageQueryDevicePropertyIoctl(a1);
    }
  }
}
