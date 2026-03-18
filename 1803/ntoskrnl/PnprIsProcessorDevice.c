/*
 * XREFs of PnprIsProcessorDevice @ 0x140734710
 * Callers:
 *     PnprAddDeviceResources @ 0x140733870 (PnprAddDeviceResources.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IoGetDeviceInterfaces @ 0x14048FF60 (IoGetDeviceInterfaces.c)
 *     IoGetDevicePropertyData @ 0x140587390 (IoGetDevicePropertyData.c)
 */

char __fastcall PnprIsProcessorDevice(PDEVICE_OBJECT Pdo, char a2, unsigned int *a3, void *a4)
{
  char v5; // bl
  unsigned int Data; // [rsp+40h] [rbp-18h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-14h] BYREF
  PVOID P; // [rsp+48h] [rbp-10h] BYREF
  ULONG Type; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  if ( a2 )
  {
    if ( IoGetDeviceInterfaces(&GUID_DEVICE_PROCESSOR, Pdo, 0, (PZZWSTR *)&P) >= 0 )
    {
      if ( *(_WORD *)P )
      {
        ExFreePoolWithTag(P, 0);
        if ( IoGetDevicePropertyData(Pdo, &PROCESSOR_NUMBER_PKEY, 0, 0, 4u, &Data, &RequiredSize, &Type) >= 0
          && Type == 7
          && (int)HalGetProcessorIdByNtNumber(Data, a4) >= 0 )
        {
          *a3 = Data;
          return 1;
        }
      }
    }
  }
  else if ( IoGetDevicePropertyData(Pdo, &DEVPKEY_Spare_Processor_Apic_Id, 0, 0, 4u, a4, &RequiredSize, &Type) >= 0
         && Type == 7 )
  {
    *a3 = -1;
    return 1;
  }
  return v5;
}
