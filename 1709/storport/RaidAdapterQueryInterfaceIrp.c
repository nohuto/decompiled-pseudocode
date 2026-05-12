/*
 * XREFs of RaidAdapterQueryInterfaceIrp @ 0x1C0011EA4
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0012070 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaForwardIrp @ 0x1C00122A4 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     McTemplateK0pq @ 0x1C002B808 (McTemplateK0pq.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C00377CC (RaidAdapterQueryCoolingInterface.c)
 *     PortQueryInterfaceFdoInfo @ 0x1C006953C (PortQueryInterfaceFdoInfo.c)
 *     PortQueryInterfaceFdoQdr @ 0x1C0069578 (PortQueryInterfaceFdoQdr.c)
 */

__int64 __fastcall RaidAdapterQueryInterfaceIrp(_QWORD *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  BOOL v3; // edi
  GUID *InterfaceType; // rcx
  _BOOL8 v7; // rcx
  GUID *v8; // rcx
  _BOOL8 v9; // rcx
  GUID *v10; // rcx
  __int64 v11; // rcx
  signed int InterfaceFdoInfo; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 1;
  InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  v7 = InterfaceType == &GUID_STORAGE_QUERY_FDO_INFO
    || RtlCompareMemory(InterfaceType, &GUID_STORAGE_QUERY_FDO_INFO, 0x10uLL) == 16;
  if ( v7 )
  {
    InterfaceFdoInfo = PortQueryInterfaceFdoInfo(v7, a2, a1[4]);
  }
  else
  {
    v8 = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
    v9 = v8 == &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS
      || RtlCompareMemory(v8, &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS, 0x10uLL) == 16;
    if ( !v9 )
    {
      v10 = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
      if ( v10 != &GUID_THERMAL_COOLING_INTERFACE )
        v3 = RtlCompareMemory(v10, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16;
      if ( v3 )
      {
        InterfaceFdoInfo = RaidAdapterQueryCoolingInterface(a1, a2);
        if ( InterfaceFdoInfo >= 0 )
          return RaidCompleteRequestEx(a2, 0, InterfaceFdoInfo);
      }
      goto LABEL_10;
    }
    InterfaceFdoInfo = PortQueryInterfaceFdoQdr(v9, a2, a1[557]);
  }
  a2->IoStatus.Status = InterfaceFdoInfo;
  if ( InterfaceFdoInfo < 0 )
    return RaidCompleteRequestEx(a2, 0, InterfaceFdoInfo);
LABEL_10:
  if ( StorEtwLoggingEnabled )
  {
    v14[0] = 0LL;
    v14[1] = 0LL;
    IoGetActivityIdIrp(a2, v14);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
      McTemplateK0pq(v11, &EventPnpRequestComplete, v14, a2, a2->IoStatus.Status);
  }
  return RaForwardIrp(a1[3], a2);
}
