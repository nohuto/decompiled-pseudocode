/*
 * XREFs of RaUnitQueryInterfaceIrp @ 0x1C0011FC8
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0005620 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaUnitIgnorePnpIrp @ 0x1C00607E8 (RaUnitIgnorePnpIrp.c)
 *     PortQueryInterfacePdoInfo @ 0x1C00695EC (PortQueryInterfacePdoInfo.c)
 */

__int64 __fastcall RaUnitQueryInterfaceIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  BOOL v5; // edi
  GUID *InterfaceType; // rcx
  GUID *v8; // rcx
  __int64 v10; // r8
  int v11; // eax
  unsigned int InterfacePdoInfo; // r8d

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 1;
  InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( InterfaceType == &GUID_STORAGE_QUERY_PDO_INFO
    || RtlCompareMemory(InterfaceType, &GUID_STORAGE_QUERY_PDO_INFO, 0x10uLL) == 16 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 && (v11 = *(_DWORD *)(a1 + 40)) != 0 && (unsigned int)(v11 - 5) > 1 )
    {
      InterfacePdoInfo = PortQueryInterfacePdoInfo(
                           (unsigned int)*(_QWORD *)(a1 + 96) + 16,
                           (_DWORD)a2,
                           *(_QWORD *)(v10 + 8),
                           (unsigned int)*(_QWORD *)(a1 + 96) + 8,
                           *(_QWORD *)(a1 + 96) + 16LL,
                           **(_BYTE **)(a1 + 96) & 0x1F,
                           *(_DWORD *)(v10 + 4356));
    }
    else
    {
      a2->IoStatus.Information = 0LL;
      InterfacePdoInfo = -1073741810;
    }
  }
  else
  {
    v8 = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
    if ( v8 != &GUID_THERMAL_COOLING_INTERFACE )
      v5 = RtlCompareMemory(v8, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16;
    if ( !v5 )
      return RaUnitIgnorePnpIrp(v8, a2);
    InterfacePdoInfo = -1073741637;
  }
  return RaidCompleteRequestEx(a2, 0, InterfacePdoInfo);
}
