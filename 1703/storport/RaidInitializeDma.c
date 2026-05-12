/*
 * XREFs of RaidInitializeDma @ 0x1C006064C
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0019510 (RaidAdapterCompleteInitialization.c)
 *     StorPortGetUncachedExtension @ 0x1C00199A0 (StorPortGetUncachedExtension.c)
 *     RaidInitializePerfOpts @ 0x1C001CAF4 (RaidInitializePerfOpts.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaidInitializeDma(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4, char a5)
{
  bool v8; // si
  unsigned __int8 v9; // al
  char v10; // al
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DEVICE_DESCRIPTION DeviceDescription; // [rsp+20h] [rbp-50h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v8 = a5 || (*(_DWORD *)(a3 + 220) & 8) != 0;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  if ( v8 )
  {
    DeviceDescription.Version = 3;
    DeviceDescription.DmaRequestLine = 0;
    DeviceDescription.DeviceAddress.QuadPart = 0LL;
    *(_DWORD *)(a1 + 28) = 3;
  }
  else
  {
    v9 = *(_BYTE *)(a3 + 88);
    DeviceDescription.Version = 0;
    DeviceDescription.DemandMode = v9;
    DeviceDescription.Dma32BitAddresses = *(_BYTE *)(a3 + 87);
    DeviceDescription.DmaSpeed = *(_DWORD *)(a3 + 44);
    *(_DWORD *)(a1 + 28) = 2;
  }
  DeviceDescription.DmaChannel = *(_DWORD *)(a3 + 32);
  DeviceDescription.InterfaceType = *(_DWORD *)(a3 + 8);
  DeviceDescription.BusNumber = *(_DWORD *)(a3 + 4);
  DeviceDescription.DmaWidth = *(_DWORD *)(a3 + 40);
  DeviceDescription.ScatterGather = *(_BYTE *)(a3 + 81);
  DeviceDescription.Master = *(_BYTE *)(a3 + 82);
  DeviceDescription.DmaPort = *(_DWORD *)(a3 + 36);
  DeviceDescription.MaximumLength = *(_DWORD *)(a3 + 24);
  v10 = *(_BYTE *)(a3 + 144);
  DeviceDescription.AutoInitialize = 0;
  if ( v10 == 1 )
  {
    *(_DWORD *)(a1 + 24) = 2;
  }
  else if ( (unsigned __int8)(v10 - 2) > 2u )
  {
    *(_DWORD *)(a1 + 24) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 3;
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 2) > 1 )
  {
    if ( v8 )
      DeviceDescription.DmaAddressWidth = 32;
    else
      DeviceDescription.Dma64BitAddresses = 0;
  }
  else if ( v8 )
  {
    DeviceDescription.DmaAddressWidth = 64;
  }
  else
  {
    DeviceDescription.Dma64BitAddresses = 1;
  }
  DmaAdapter = IoGetDmaAdapter(a2, &DeviceDescription, (PULONG)(a1 + 8));
  *(_QWORD *)a1 = DmaAdapter;
  return DmaAdapter == 0LL ? 0xC000009A : 0;
}
