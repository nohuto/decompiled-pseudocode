/*
 * XREFs of ACPIFilterRemoveNonPresentDevices @ 0x1C0013214
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0083480 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C008B94C (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIExtListTestElement @ 0x1C00133B8 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C0013970 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C0016AB4 (ACPIExtListStartEnum.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0044AE8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x1C00582F0 (ACPIThermalReleaseCoolingInterfaces.c)
 *     EnableDisableRegions @ 0x1C0090400 (EnableDisableRegions.c)
 *     IsPciBus @ 0x1C00941E8 (IsPciBus.c)
 *     ACPIInitStopDevice @ 0x1C009F658 (ACPIInitStopDevice.c)
 */

__int64 __fastcall ACPIFilterRemoveNonPresentDevices(__int64 a1, _DWORD *a2)
{
  __int64 i; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  bool v9; // bp
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  _QWORD v13[6]; // [rsp+20h] [rbp-48h] BYREF
  int v14; // [rsp+50h] [rbp-18h]

  v13[1] = 0LL;
  v13[0] = a1 + 752;
  v13[5] = 768LL;
  v13[2] = &AcpiDeviceTreeLock;
  v14 = 1;
  for ( i = ACPIExtListStartEnum(v13); ; i = ACPIExtListEnumNext(v13) )
  {
    LOBYTE(v4) = 1;
    v5 = i;
    result = ACPIExtListTestElement(v13, v4);
    if ( !(_BYTE)result )
      break;
    if ( (*(_BYTE *)(v5 + 8) & 0x60) == 0x40 )
    {
      v7 = 0LL;
      if ( *a2 )
      {
        while ( *(_QWORD *)(v5 + 736) != *(_QWORD *)&a2[2 * v7 + 2] )
        {
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= *a2 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        v8 = *(_QWORD *)(v5 + 952) & 0x8000LL;
        v9 = (*(_QWORD *)(v5 + 952) & 0x8000) != 0;
        if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v5 + 720)) || v8 )
        {
          LOBYTE(v11) = v9;
          EnableDisableRegions(*(_QWORD *)(v5 + 712), 0LL, v11);
        }
        v12 = *(_DWORD *)(v5 + 952);
        *(_DWORD *)(v5 + 320) = 5;
        if ( (*(_QWORD *)&v12 & 0x800000LL) != 0 )
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 8), 0xFFFFFFFFFFFFF7FFuLL);
        else
          _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x800uLL);
        LOBYTE(v10) = 1;
        ACPIInitStopDevice(v5, v10);
        ACPIThermalReleaseCoolingInterfaces(v5);
        ACPIBuildSurpriseRemovedExtension(v5);
      }
    }
  }
  return result;
}
