/*
 * XREFs of ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0094950
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C008C960 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     WPP_IFR_SF_qddd @ 0x1C0066444 (WPP_IFR_SF_qddd.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C008FD38 (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@EE@Z @ 0x1C008FF1C (-FxUsbParseConfigurationDescriptor@@YAPEAU_USB_INTERFACE_DESCRIPTOR@@PEAU_USB_CONFIGURATION_DESC.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C0091F00 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C00932E8 (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigMulti(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  unsigned __int8 *p_NumberOfConfiguredInterfaces; // rbp
  _FX_DRIVER_GLOBALS **p_m_Globals; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _POOL_TYPE v8; // r8d
  _WDF_OBJECT_ATTRIBUTES *v9; // r13
  unsigned __int8 v10; // si
  unsigned int v11; // ebx
  _USBD_INTERFACE_LIST_ENTRY *v12; // rax
  _USBD_INTERFACE_LIST_ENTRY *v13; // r14
  unsigned __int8 v15; // r11
  __int64 v16; // rbx
  _USB_INTERFACE_DESCRIPTOR *SettingDescriptor; // rax
  char v18; // r11
  FxUsbInterface *v19; // rcx
  __int64 m_ObjectSize; // rax
  const void *v21; // rdi
  unsigned int v22; // ebx
  unsigned __int8 v23; // bp
  _USB_INTERFACE_DESCRIPTOR **v24; // rbx
  unsigned __int8 v25; // r13
  unsigned __int8 v26; // al
  unsigned __int8 v27; // r8
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rcx
  _USB_COMMON_DESCRIPTOR *v29; // rax
  unsigned __int8 m_NumInterfaces; // al
  int _a4; // ecx
  unsigned __int16 v32; // r9
  int v33; // edx
  unsigned __int16 v34; // ax
  const void *v35; // rdi
  _FILE_OBJECT *ConfigRequest; // rax
  _FX_URB_TYPE v37; // r9
  _FILE_OBJECT *v38; // rsi
  unsigned __int8 v39; // [rsp+50h] [rbp-168h]
  void *PPObject; // [rsp+58h] [rbp-160h] BYREF
  _WDF_OBJECT_ATTRIBUTES *v41; // [rsp+60h] [rbp-158h]
  unsigned __int8 *v42; // [rsp+68h] [rbp-150h]
  unsigned __int8 bitArray[256]; // [rsp+70h] [rbp-148h] BYREF
  void *Caller; // [rsp+1B8h] [rbp+0h]

  p_NumberOfConfiguredInterfaces = &Params->Types.MultiInterface.NumberOfConfiguredInterfaces;
  p_m_Globals = &this->m_Globals;
  v41 = PipesAttributes;
  m_Globals = this->m_Globals;
  v8 = ExDefaultNonPagedPoolType;
  v9 = PipesAttributes;
  v10 = 0;
  v42 = p_NumberOfConfiguredInterfaces;
  *p_NumberOfConfiguredInterfaces = 0;
  v11 = 16 * (this->m_NumInterfaces + 1);
  v12 = (_USBD_INTERFACE_LIST_ENTRY *)FxPoolAllocator(
                                        m_Globals,
                                        &m_Globals->FxPoolFrameworks,
                                        v8,
                                        v11,
                                        m_Globals->Tag,
                                        Caller);
  v13 = v12;
  if ( !v12 )
    return 3221225626LL;
  memset(v12, 0, v11);
  if ( Params->Type == WdfUsbTargetDeviceSelectConfigTypeMultiInterface )
  {
    v15 = 0;
    if ( this->m_NumInterfaces )
    {
      while ( 1 )
      {
        v16 = v15;
        SettingDescriptor = FxUsbInterface::GetSettingDescriptor(this->m_Interfaces[v15], 0);
        v13[(unsigned int)v16].InterfaceDescriptor = SettingDescriptor;
        if ( !SettingDescriptor )
          break;
        v15 = v18 + 1;
        if ( v15 >= this->m_NumInterfaces )
          goto LABEL_24;
      }
      v19 = this->m_Interfaces[v16];
      m_ObjectSize = this->m_ObjectSize;
      v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)m_ObjectSize )
        v21 = 0LL;
      WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xEu, 0x1Du, WPP_FxusbDeviceKm_cpp_Traceguids, v21, v19->m_InterfaceNumber);
      v22 = -1073741811;
      goto $Done_57;
    }
LABEL_24:
    ConfigRequest = (_FILE_OBJECT *)FxUsbCreateConfigRequest(*p_m_Globals, this->m_ConfigDescriptor, v13, 0xFFFFFFFF);
    v38 = ConfigRequest;
    if ( ConfigRequest )
    {
      v22 = FxUsbDevice::SelectConfig(this, v9, ConfigRequest, v37, p_NumberOfConfiguredInterfaces);
      FxPoolFree(v38);
    }
    else
    {
      v22 = -1073741670;
    }
    goto $Done_57;
  }
  memset(bitArray, 0, 0xFFuLL);
  v23 = 0;
  if ( !Params->Types.SingleInterface.NumberConfiguredPipes )
  {
LABEL_17:
    m_NumInterfaces = this->m_NumInterfaces;
    if ( m_NumInterfaces > v10 )
    {
      v22 = -1073741811;
      _a4 = m_NumInterfaces;
      v32 = 31;
      v33 = v10;
      goto LABEL_20;
    }
    p_NumberOfConfiguredInterfaces = v42;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v24 = &Params->Types.Descriptor.InterfaceDescriptors[2 * v23];
    FxObjectHandleGetPtr(*p_m_Globals, (unsigned __int64)*v24, 0x1204u, &PPObject);
    v39 = *((_BYTE *)v24 + 8);
    v25 = *((_BYTE *)PPObject + 146);
    v26 = bitArray[v25];
    if ( (v26 & 1) == 0 )
      break;
LABEL_15:
    if ( ++v23 >= Params->Types.SingleInterface.NumberConfiguredPipes )
    {
      v9 = v41;
      goto LABEL_17;
    }
  }
  v27 = *((_BYTE *)v24 + 8);
  m_ConfigDescriptor = this->m_ConfigDescriptor;
  bitArray[*((unsigned __int8 *)PPObject + 146)] = v26 | 1;
  v29 = FxUsbParseConfigurationDescriptor(m_ConfigDescriptor, v25, v27);
  v13[v10].InterfaceDescriptor = (_USB_INTERFACE_DESCRIPTOR *)v29;
  if ( v29 )
  {
    ++v10;
    goto LABEL_15;
  }
  v22 = -1073741811;
  v33 = v39;
  v32 = 30;
  _a4 = v25;
LABEL_20:
  v34 = this->m_ObjectSize;
  v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v34 )
    v35 = 0LL;
  WPP_IFR_SF_qddd(*p_m_Globals, v33, 0xEu, v32, WPP_FxusbDeviceKm_cpp_Traceguids, v35, v33, _a4, -1073741811);
$Done_57:
  FxPoolFree(v13);
  return v22;
}
