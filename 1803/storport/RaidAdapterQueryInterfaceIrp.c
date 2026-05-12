/*
 * XREFs of RaidAdapterQueryInterfaceIrp @ 0x1C0027010
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00125A4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaForwardIrp @ 0x1C00104D0 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     McTemplateK0pq @ 0x1C0023FBC (McTemplateK0pq.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C0034CBC (RaidAdapterQueryCoolingInterface.c)
 *     PortQueryInterfaceFdoInfo @ 0x1C0067964 (PortQueryInterfaceFdoInfo.c)
 *     PortQueryInterfaceFdoQdr @ 0x1C00679A0 (PortQueryInterfaceFdoQdr.c)
 */

NTSTATUS __fastcall RaidAdapterQueryInterfaceIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  BOOL v3; // edi
  GUID *InterfaceType; // rcx
  _BOOL8 v7; // rcx
  signed int InterfaceFdoInfo; // eax
  __int64 v9; // rcx
  GUID *v11; // rcx
  _BOOL8 v12; // rcx
  GUID *v13; // rcx
  int Status; // [rsp+20h] [rbp-48h]
  GUID v15; // [rsp+30h] [rbp-38h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 1;
  InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  v7 = InterfaceType == &GUID_STORAGE_QUERY_FDO_INFO
    || RtlCompareMemory(InterfaceType, &GUID_STORAGE_QUERY_FDO_INFO, 0x10uLL) == 16;
  if ( v7 )
  {
    InterfaceFdoInfo = PortQueryInterfaceFdoInfo(v7, a2, *(_QWORD *)(a1 + 32));
  }
  else
  {
    v11 = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
    v12 = v11 == &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS
       || RtlCompareMemory(v11, &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS, 0x10uLL) == 16;
    if ( !v12 )
    {
      v13 = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
      if ( v13 != &GUID_THERMAL_COOLING_INTERFACE )
        v3 = RtlCompareMemory(v13, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16;
      if ( !v3 )
        goto LABEL_7;
      InterfaceFdoInfo = RaidAdapterQueryCoolingInterface(a1, a2);
      if ( InterfaceFdoInfo < 0 )
        goto LABEL_7;
      return RaidCompleteRequestEx(a2, 0, InterfaceFdoInfo);
    }
    InterfaceFdoInfo = PortQueryInterfaceFdoQdr(v12, a2, *(_QWORD *)(a1 + 4456));
  }
  a2->IoStatus.Status = InterfaceFdoInfo;
  if ( InterfaceFdoInfo < 0 )
    return RaidCompleteRequestEx(a2, 0, InterfaceFdoInfo);
LABEL_7:
  if ( StorEtwLoggingEnabled )
  {
    *(_QWORD *)&v15.Data1 = 0LL;
    *(_QWORD *)v15.Data4 = 0LL;
    IoGetActivityIdIrp(a2, &v15);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
    {
      Status = a2->IoStatus.Status;
      McTemplateK0pq(v9, &EventPnpRequestComplete, &v15, a2, Status);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
