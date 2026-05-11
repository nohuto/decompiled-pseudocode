/*
 * XREFs of USBHwSelectAudioConfiguration @ 0x1C001BE9C
 * Callers:
 *     USBDeviceStart @ 0x1C001AEF0 (USBDeviceStart.c)
 * Callees:
 *     memmove @ 0x1C0008100 (memmove.c)
 *     USBHwAllocateAndBag @ 0x1C001B7EC (USBHwAllocateAndBag.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C001B834 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBParseCreateMIDLegacyInterfaceList @ 0x1C001CE70 (USBParseCreateMIDLegacyInterfaceList.c)
 *     USBParseCreateInterfaceList @ 0x1C001CF48 (USBParseCreateInterfaceList.c)
 */

__int64 __fastcall USBHwSelectAudioConfiguration(__int64 a1)
{
  __int64 v2; // rdi
  struct _USB_CONFIGURATION_DESCRIPTOR *v3; // r13
  UCHAR bNumInterfaces; // al
  void *v5; // rbx
  int v6; // ebx
  struct _USB_CONFIGURATION_DESCRIPTOR *v7; // rcx
  int v8; // eax
  struct _USBD_INTERFACE_LIST_ENTRY *v9; // rsi
  struct _USBD_INTERFACE_LIST_ENTRY *ConfigurationRequest; // rax
  PUSBD_INTERFACE_LIST_ENTRY v11; // rbp
  unsigned int v12; // r14d
  void *v13; // rbx
  struct _USBD_INTERFACE_LIST_ENTRY *v14; // r15
  unsigned __int16 *p_Length; // r12
  struct _USBD_INTERFACE_INFORMATION *PoolWithTag; // rax
  PUSBD_INTERFACE_LIST_ENTRY InterfaceList; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v3 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(v2 + 40);
  bNumInterfaces = v3->bNumInterfaces;
  if ( bNumInterfaces )
  {
    v5 = *(void **)(a1 + 8);
    InterfaceList = (PUSBD_INTERFACE_LIST_ENTRY)ExAllocatePoolWithTag(
                                                  (POOL_TYPE)512,
                                                  16 * ((unsigned int)bNumInterfaces + 1),
                                                  0x41627845u);
    if ( InterfaceList )
      v6 = USBHwAllocateAndBag((PVOID *)&InterfaceList, v5);
    else
      v6 = -1073741670;
    if ( v6 >= 0 )
    {
      v7 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(v2 + 40);
      v8 = *(_BYTE *)(v2 + 5) ? USBParseCreateMIDLegacyInterfaceList(v7) : USBParseCreateInterfaceList(v7);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v9 = InterfaceList;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v6 = -1073741438;
  }
  v9 = (struct _USBD_INTERFACE_LIST_ENTRY *)a1;
LABEL_13:
  if ( v6 >= 0 )
  {
    ConfigurationRequest = (struct _USBD_INTERFACE_LIST_ENTRY *)USBD_CreateConfigurationRequestEx(v3, v9);
    InterfaceList = ConfigurationRequest;
    v11 = ConfigurationRequest;
    if ( ConfigurationRequest )
    {
      v6 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), (ULONG_PTR)ConfigurationRequest);
      if ( SHIDWORD(v11->InterfaceDescriptor) < 0 )
        v6 = -1073741808;
      if ( v6 >= 0 )
      {
        v12 = 0;
        *(_QWORD *)(v2 + 24) = v11[2].InterfaceDescriptor;
        if ( v3->bNumInterfaces )
        {
          do
          {
            v13 = *(void **)(a1 + 8);
            v14 = &v9[v12];
            p_Length = &v14->Interface->Length;
            PoolWithTag = (struct _USBD_INTERFACE_INFORMATION *)ExAllocatePoolWithTag(
                                                                  (POOL_TYPE)512,
                                                                  *p_Length,
                                                                  0x41627845u);
            v14->Interface = PoolWithTag;
            if ( PoolWithTag )
              v6 = USBHwAllocateAndBag((PVOID *)&v14->Interface, v13);
            else
              v6 = -1073741670;
            if ( v6 >= 0 )
              memmove(v14->Interface, p_Length, *p_Length);
            ++v12;
          }
          while ( v12 < v3->bNumInterfaces );
          v11 = InterfaceList;
        }
        if ( v6 >= 0 )
          *(_QWORD *)(v2 + 16) = v9;
      }
      ExFreePool(v11);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
