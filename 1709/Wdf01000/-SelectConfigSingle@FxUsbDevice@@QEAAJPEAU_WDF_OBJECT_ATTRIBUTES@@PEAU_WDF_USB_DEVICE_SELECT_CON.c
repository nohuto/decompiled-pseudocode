/*
 * XREFs of ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0094C30
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C008C960 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     WPP_IFR_SF_qdd @ 0x1C00701C4 (WPP_IFR_SF_qdd.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C008FD38 (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C0091F00 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C00932E8 (-GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z.c)
 */

__int64 __fastcall FxUsbDevice::SelectConfigSingle(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *PipeAttributes,
        _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS *Params)
{
  unsigned __int8 m_NumInterfaces; // al
  int _a2; // r8d
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rdx
  __int64 v13; // r11
  const void *v14; // rcx
  _FILE_OBJECT *ConfigRequest; // rax
  _FX_URB_TYPE v16; // r9
  _FILE_OBJECT *v17; // rbp
  int v18; // esi
  FxUsbInterface *v19; // rdx
  unsigned __int16 v20; // cx
  _USB_INTERFACE_DESCRIPTOR **v21; // rdx
  _USBD_INTERFACE_LIST_ENTRY listEntry[2]; // [rsp+40h] [rbp-28h] BYREF

  Params->Types.Descriptor.ConfigurationDescriptor = 0LL;
  Params->Types.Descriptor.InterfaceDescriptors = 0LL;
  m_NumInterfaces = this->m_NumInterfaces;
  if ( m_NumInterfaces > 1u )
  {
    _a2 = m_NumInterfaces;
    m_ObjectSize = this->m_ObjectSize;
    m_Globals = this->m_Globals;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xEu, 0x1Bu, WPP_FxusbDeviceKm_cpp_Traceguids, _a1, _a2, -1073741811);
    return 3221225485LL;
  }
  memset(listEntry, 0, sizeof(listEntry));
  listEntry[0].InterfaceDescriptor = FxUsbInterface::GetSettingDescriptor(*this->m_Interfaces, 0);
  if ( !listEntry[0].InterfaceDescriptor )
  {
    v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v14 = 0LL;
    WPP_IFR_SF_qd(
      this->m_Globals,
      2u,
      0xEu,
      0x1Cu,
      WPP_FxusbDeviceKm_cpp_Traceguids,
      v14,
      *(unsigned __int8 *)(*(_QWORD *)v13 + 146LL));
    return 3221225485LL;
  }
  ConfigRequest = (_FILE_OBJECT *)FxUsbCreateConfigRequest(
                                    this->m_Globals,
                                    this->m_ConfigDescriptor,
                                    listEntry,
                                    0xFFFFFFFF);
  v17 = ConfigRequest;
  if ( ConfigRequest )
  {
    v18 = FxUsbDevice::SelectConfig(this, PipeAttributes, ConfigRequest, v16, 0LL);
    if ( v18 >= 0 )
    {
      Params->Types.SingleInterface.NumberConfiguredPipes = (*this->m_Interfaces)->m_NumberOfConfiguredPipes;
      v19 = *this->m_Interfaces;
      v20 = v19->m_ObjectSize;
      v21 = (_USB_INTERFACE_DESCRIPTOR **)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v20 )
        v21 = 0LL;
      Params->Types.Descriptor.InterfaceDescriptors = v21;
    }
    FxPoolFree(v17);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v18;
}
