/*
 * XREFs of RaidInitializeDma @ 0x1C00654C0
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C00255D4 (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x1C002A6A4 (RaidInitializePerfOpts.c)
 *     StorPortGetUncachedExtension @ 0x1C00307C0 (StorPortGetUncachedExtension.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     RaidAreDriversDmarCompatible @ 0x1C002C9B0 (RaidAreDriversDmarCompatible.c)
 */

__int64 __fastcall RaidInitializeDma(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4, char a5)
{
  bool v9; // si
  int v10; // ecx
  int v11; // eax
  unsigned __int8 v12; // al
  char v13; // al
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+20h] [rbp-50h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v9 = a5 || (*(_DWORD *)(a3 + 220) & 8) != 0;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  v10 = 3;
  if ( v9 )
  {
    DeviceDescription.Version = 3;
    DeviceDescription.DmaRequestLine = 0;
    DeviceDescription.DeviceAddress.QuadPart = 0LL;
    v11 = 3;
  }
  else
  {
    v12 = *(_BYTE *)(a3 + 88);
    DeviceDescription.Version = 0;
    DeviceDescription.DemandMode = v12;
    DeviceDescription.Dma32BitAddresses = *(_BYTE *)(a3 + 87);
    DeviceDescription.DmaSpeed = *(_DWORD *)(a3 + 44);
    v11 = 2;
  }
  *(_DWORD *)(a1 + 28) = v11;
  DeviceDescription.DmaChannel = *(_DWORD *)(a3 + 32);
  DeviceDescription.InterfaceType = *(_DWORD *)(a3 + 8);
  DeviceDescription.BusNumber = *(_DWORD *)(a3 + 4);
  DeviceDescription.DmaWidth = *(_DWORD *)(a3 + 40);
  DeviceDescription.ScatterGather = *(_BYTE *)(a3 + 81);
  DeviceDescription.Master = *(_BYTE *)(a3 + 82);
  DeviceDescription.DmaPort = *(_DWORD *)(a3 + 36);
  DeviceDescription.MaximumLength = *(_DWORD *)(a3 + 24);
  v13 = *(_BYTE *)(a3 + 144);
  DeviceDescription.AutoInitialize = 0;
  if ( v13 == 1 )
  {
    v10 = 2;
LABEL_16:
    *(_DWORD *)(a1 + 24) = v10;
    if ( v9 )
      DeviceDescription.DmaAddressWidth = 64;
    else
      DeviceDescription.Dma64BitAddresses = 1;
    goto LABEL_19;
  }
  if ( (unsigned __int8)(v13 - 2) <= 2u )
    goto LABEL_16;
  *(_DWORD *)(a1 + 24) = 1;
  if ( v9 )
    DeviceDescription.DmaAddressWidth = 32;
  else
    DeviceDescription.Dma64BitAddresses = 0;
LABEL_19:
  DmaAdapter = IoGetDmaAdapter(a2, &DeviceDescription, (PULONG)(a1 + 12));
  *(_QWORD *)a1 = DmaAdapter;
  if ( !DmaAdapter )
    return 3221225626LL;
  *(_BYTE *)(a1 + 8) = RaidAreDriversDmarCompatible(a2);
  return 0LL;
}
