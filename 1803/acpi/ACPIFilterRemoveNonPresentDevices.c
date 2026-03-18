/*
 * XREFs of ACPIFilterRemoveNonPresentDevices @ 0x1C0025034
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0071690 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C0076C58 (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0011568 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIExtListEnumNext @ 0x1C0023590 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C002367C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C00236D0 (ACPIExtListTestElement.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C003D8A4 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIInitStopDevice @ 0x1C007D3C0 (ACPIInitStopDevice.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 *     IsPciBus @ 0x1C007FD48 (IsPciBus.c)
 */

char __fastcall ACPIFilterRemoveNonPresentDevices(__int64 a1, _DWORD *a2)
{
  char *i; // rax
  ULONG_PTR v4; // rbx
  char result; // al
  __int64 v6; // rcx
  __int64 v7; // rdi
  bool v8; // bp
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  _QWORD v12[6]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+50h] [rbp-18h]

  v12[1] = 0LL;
  v12[0] = a1 + 752;
  v12[5] = 768LL;
  v12[2] = &AcpiDeviceTreeLock;
  v13 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v12); ; i = ACPIExtListEnumNext((__int64)v12) )
  {
    v4 = (ULONG_PTR)i;
    result = ACPIExtListTestElement((__int64)v12, 1);
    if ( !result )
      break;
    if ( (*(_BYTE *)(v4 + 8) & 0x60) == 0x40 )
    {
      v6 = 0LL;
      if ( *a2 )
      {
        while ( *(_QWORD *)(v4 + 736) != *(_QWORD *)&a2[2 * v6 + 2] )
        {
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= *a2 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        v7 = *(_QWORD *)(v4 + 952) & 0x8000LL;
        v8 = (*(_QWORD *)(v4 + 952) & 0x8000) != 0;
        if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v4 + 720)) || v7 )
        {
          LOBYTE(v10) = v8;
          EnableDisableRegions(*(_QWORD *)(v4 + 712), 0LL, v10);
        }
        v11 = *(_DWORD *)(v4 + 952);
        *(_DWORD *)(v4 + 320) = 5;
        if ( (*(_QWORD *)&v11 & 0x800000LL) != 0 )
          _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFFFFFFFFFFF7FFuLL);
        else
          _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x800uLL);
        LOBYTE(v9) = 1;
        ACPIInitStopDevice(v4, v9);
        ACPIThermalReleaseCoolingInterfaces(v4);
        ACPIBuildSurpriseRemovedExtension(v4);
      }
    }
  }
  return result;
}
