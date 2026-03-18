/*
 * XREFs of ACPIThermalQueryCoolingInterfaces @ 0x1C003D444
 * Callers:
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C003BA14 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIThermalActivateConstraint @ 0x1C003BBA4 (ACPIThermalActivateConstraint.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall ACPIThermalQueryCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  signed int v3; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // rbp
  __int64 v5; // r8
  char *PoolWithTag; // rax
  char *v7; // rdi
  PIO_WORKITEM WorkItem; // rax
  KIRQL v9; // dl
  _QWORD *v10; // rcx
  _DWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  if ( *(_BYTE *)(a1 + 616) )
  {
    v3 = 259;
    if ( *(_QWORD *)(a1 + 608) )
      v3 = 0;
  }
  else
  {
    v3 = -1073741823;
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
  if ( v3 == 259 )
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(a1 + 736));
    if ( !AttachedDeviceReference )
      return (unsigned int)-1073741810;
    v12[0] = 0;
    v12[1] = 1;
    RtlInitUnicodeString(&DestinationString, L"ACPI Thermal Zones");
    if ( RootDeviceExtension )
      v5 = *(_QWORD *)(RootDeviceExtension + 720);
    else
      v5 = 0LL;
    v3 = PoCreateThermalRequest(&v14, AttachedDeviceReference, v5, v12, 0x80000000);
    if ( v3 >= 0 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x54706341u);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x48uLL);
        *((_QWORD *)v7 + 3) = v7 + 16;
        *((_QWORD *)v7 + 2) = v7 + 16;
        v7[42] = 100;
        *((_QWORD *)v7 + 4) = a1;
        WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 720));
        *((_QWORD *)v7 + 6) = WorkItem;
        if ( WorkItem )
        {
          *((_QWORD *)v7 + 8) = v14;
          v7[40] = PoGetThermalRequestSupport(v14, 0LL);
          v7[41] = PoGetThermalRequestSupport(v14, 1LL);
          v9 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
          if ( *(_BYTE *)(a1 + 616) && !*(_QWORD *)(a1 + 608) )
          {
            *(_QWORD *)(a1 + 608) = v7;
            v10 = (_QWORD *)qword_1C00669D8;
            if ( *(__int64 **)qword_1C00669D8 != &AcpiThermalClientList )
              __fastfail(3u);
            *(_QWORD *)v7 = &AcpiThermalClientList;
            *((_QWORD *)v7 + 1) = v10;
            *v10 = v7;
            qword_1C00669D8 = (__int64)v7;
            v7 = 0LL;
          }
          v3 = *(_QWORD *)(a1 + 608) == 0LL ? 0xC00000BB : 0;
          KeReleaseSpinLock(&AcpiThermalConstraintLock, v9);
          if ( !v7 )
            goto LABEL_24;
          PoDeleteThermalRequest(*((_QWORD *)v7 + 8));
          IoFreeWorkItem(*((PIO_WORKITEM *)v7 + 6));
        }
        else
        {
          v3 = -1073741670;
        }
        ExFreePoolWithTag(v7, 0x54706341u);
      }
      else
      {
        v3 = -1073741670;
      }
    }
LABEL_24:
    ObfDereferenceObject(AttachedDeviceReference);
  }
  return (unsigned int)v3;
}
