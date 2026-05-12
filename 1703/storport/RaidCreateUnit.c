/*
 * XREFs of RaidCreateUnit @ 0x1C0016ED0
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C00151E4 (RaidBusEnumeratorGetUnit.c)
 * Callees:
 *     RaidUnitAllocateResources @ 0x1C0017048 (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C0017468 (RaidZeroUnit.c)
 *     RaUnitSetQueueDepth @ 0x1C001AF68 (RaUnitSetQueueDepth.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001D930 (RaidAdapterPoFxActivateComponent.c)
 */

NTSTATUS __fastcall RaidCreateUnit(__int64 a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  char *DeviceExtension; // rbx
  char v6; // al
  int Resources; // edi
  __int64 v8; // rcx
  char v9; // dl
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp+8h] BYREF

  result = IoCreateDevice(*(PDRIVER_OBJECT *)(*(_QWORD *)(a1 + 8) + 8LL), 0xA80u, 0LL, 0x2Du, 0x180u, 0, &DeviceObject);
  if ( result >= 0 )
  {
    DeviceExtension = (char *)DeviceObject->DeviceExtension;
    RaidZeroUnit(DeviceExtension);
    *((_QWORD *)DeviceExtension + 3) = a1;
    *((_QWORD *)DeviceExtension + 1) = DeviceObject;
    *(_WORD *)(DeviceExtension + 1445) = 256;
    DeviceExtension[1447] = 1;
    DeviceObject->Flags |= 0x10u;
    DeviceObject->Flags |= 0x1000u;
    *(_DWORD *)(*((_QWORD *)DeviceExtension + 1) + 152LL) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
    *((_DWORD *)DeviceExtension + 10) = 0;
    v6 = (*(_BYTE *)(a1 + 4988) + 3) & 0xFC;
    if ( ((*(unsigned __int8 *)(a1 + 4988) + 3) & 0xFFFFFFFC) > 0xFF )
      v6 = -1;
    DeviceExtension[1444] = v6;
    Resources = RaidUnitAllocateResources(DeviceExtension);
    if ( Resources < 0 )
    {
      IoDeleteDevice(DeviceObject);
      return Resources;
    }
    else
    {
      RaUnitSetQueueDepth(
        DeviceExtension,
        *(unsigned int *)(*((_QWORD *)DeviceExtension + 3) + 516LL),
        *(unsigned int *)(*((_QWORD *)DeviceExtension + 3) + 512LL));
      DeviceExtension[153] &= ~0x80u;
      v8 = *((_QWORD *)DeviceExtension + 3);
      *((_QWORD *)DeviceExtension + 182) = 0LL;
      DeviceExtension[152] &= ~0x80u;
      v9 = DeviceExtension[153];
      DeviceExtension[437] = 1;
      if ( *(_QWORD *)(v8 + 5088) )
      {
        if ( (*(_BYTE *)(v8 + 109) & 4) == 0 )
        {
          DeviceExtension[153] = v9 | 8;
          RaidAdapterPoFxActivateComponent(v8, 0LL);
        }
      }
      *((_DWORD *)DeviceExtension + 378) = 10;
      result = 0;
      *((_DWORD *)DeviceExtension + 379) = 25;
      *((_DWORD *)DeviceExtension + 380) = 125;
      *a2 = DeviceExtension;
    }
  }
  return result;
}
