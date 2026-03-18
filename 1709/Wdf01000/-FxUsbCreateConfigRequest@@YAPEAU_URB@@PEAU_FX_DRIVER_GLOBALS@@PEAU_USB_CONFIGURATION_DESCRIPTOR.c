/*
 * XREFs of ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C008FD38
 * Callers:
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0092638 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0094950 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0094C30 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     WPP_IFR_SF_qDd @ 0x1C0073AB8 (WPP_IFR_SF_qDd.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C00743B0 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 */

_URB *__fastcall FxUsbCreateConfigRequest(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _USB_CONFIGURATION_DESCRIPTOR *ConfigDesc,
        _USBD_INTERFACE_LIST_ENTRY *InterfaceList,
        unsigned int DefaultMaxPacketSize)
{
  _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor; // rax
  _USBD_INTERFACE_LIST_ENTRY *_a2; // rdi
  _FX_DRIVER_GLOBALS *v8; // r11
  unsigned __int16 v9; // cx
  unsigned __int8 v10; // dl
  signed int v11; // ecx
  unsigned int _a3; // r9d
  __int64 v13; // r10
  unsigned __int16 v14; // si
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  unsigned __int16 *v18; // rdx
  _USB_INTERFACE_DESCRIPTOR *v19; // r8
  int v20; // r9d
  _DWORD *v21; // rcx
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int16 size; // [rsp+80h] [rbp+18h] BYREF

  InterfaceDescriptor = InterfaceList->InterfaceDescriptor;
  _a2 = InterfaceList;
  v8 = FxDriverGlobals;
  if ( InterfaceList->InterfaceDescriptor )
  {
    v9 = 40;
    for ( size = 40; ; v9 = size )
    {
      v11 = RtlUShortAdd(v9, 24 * (InterfaceDescriptor->bNumEndpoints + 1), &size);
      if ( v11 < 0 )
        break;
      InterfaceDescriptor = *(_USB_INTERFACE_DESCRIPTOR **)(v13 + 16);
      if ( !InterfaceDescriptor )
      {
        v14 = size;
        goto LABEL_9;
      }
    }
    WPP_IFR_SF_qDd(v8, v10, 0xEu, 0x10u, WPP_usbutil_cpp_Traceguids, _a2, _a3, v11);
    return 0LL;
  }
  else
  {
    v14 = 88;
LABEL_9:
    v16 = FxPoolAllocator(v8, &v8->FxPoolFrameworks, ExDefaultNonPagedPoolType, v14, v8->Tag, retaddr);
    v17 = v16;
    if ( v16 )
    {
      memset(v16, 0, v14);
      v18 = (unsigned __int16 *)(v17 + 5);
      while ( _a2->InterfaceDescriptor )
      {
        v19 = _a2->InterfaceDescriptor;
        v20 = 0;
        *((_BYTE *)v18 + 2) = _a2->InterfaceDescriptor->bInterfaceNumber;
        *((_BYTE *)v18 + 3) = v19->bAlternateSetting;
        *((_DWORD *)v18 + 4) = v19->bNumEndpoints;
        *v18 = 24 * (v19->bNumEndpoints + 1);
        if ( v19->bNumEndpoints )
        {
          v21 = v18 + 20;
          do
          {
            v21[1] = 0;
            ++v20;
            *v21 = DefaultMaxPacketSize;
            v21 += 6;
          }
          while ( v20 < v19->bNumEndpoints );
        }
        _a2->Interface = (_USBD_INTERFACE_INFORMATION *)v18;
        ++_a2;
        v18 = (unsigned __int16 *)((char *)v18 + *v18);
      }
      *(_WORD *)v17 = v14;
      *((_WORD *)v17 + 1) = 0;
      v17[3] = ConfigDesc;
    }
    return (_URB *)v17;
  }
}
