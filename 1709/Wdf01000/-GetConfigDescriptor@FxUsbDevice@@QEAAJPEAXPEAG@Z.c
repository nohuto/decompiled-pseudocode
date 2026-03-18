/*
 * XREFs of ?GetConfigDescriptor@FxUsbDevice@@QEAAJPEAXPEAG@Z @ 0x1C0091788
 * Callers:
 *     imp_WdfUsbTargetDeviceRetrieveConfigDescriptor @ 0x1C008C840 (imp_WdfUsbTargetDeviceRetrieveConfigDescriptor.c)
 * Callees:
 *     memmove @ 0x1C003D680 (memmove.c)
 */

__int64 __fastcall FxUsbDevice::GetConfigDescriptor(
        FxUsbDevice *this,
        void *ConfigDescriptor,
        unsigned __int16 *ConfigDescriptorLength)
{
  __int64 result; // rax
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rdx
  unsigned __int16 v8; // cx
  unsigned __int16 wTotalLength; // ax
  unsigned __int16 v10; // r8
  unsigned int v11; // ebx

  if ( ConfigDescriptor )
  {
    m_ConfigDescriptor = this->m_ConfigDescriptor;
    v8 = *ConfigDescriptorLength;
    wTotalLength = m_ConfigDescriptor->wTotalLength;
    v10 = wTotalLength;
    if ( v8 < wTotalLength )
      v10 = v8;
    v11 = v8 < wTotalLength ? 0xC0000023 : 0;
    memmove(ConfigDescriptor, m_ConfigDescriptor, v10);
    result = v11;
    *ConfigDescriptorLength = this->m_ConfigDescriptor->wTotalLength;
  }
  else
  {
    result = 3221225507LL;
    *ConfigDescriptorLength = this->m_ConfigDescriptor->wTotalLength;
  }
  return result;
}
