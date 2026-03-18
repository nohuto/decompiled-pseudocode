/*
 * XREFs of ??1FxUsbInterface@@MEAA@XZ @ 0x1C0092BE4
 * Callers:
 *     ??_EFxUsbInterface@@MEAAPEAXI@Z @ 0x1C0092CA0 (--_EFxUsbInterface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0017EC8 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

void __fastcall FxUsbInterface::~FxUsbInterface(FxUsbInterface *this)
{
  FxUsbDevice *m_UsbDevice; // rdx
  FxUsbInterface **m_Interfaces; // rcx
  unsigned __int8 m_NumInterfaces; // r8
  unsigned __int8 v5; // al
  FxUsbPipe **m_ConfiguredPipes; // rcx
  FxUsbInterfaceSetting *m_Settings; // rcx
  unsigned int v8; // edx
  unsigned int v9; // r8d

  m_UsbDevice = this->m_UsbDevice;
  this->__vftable = (FxUsbInterface_vtbl *)FxUsbInterface::`vftable';
  m_Interfaces = m_UsbDevice->m_Interfaces;
  if ( m_Interfaces )
  {
    m_NumInterfaces = m_UsbDevice->m_NumInterfaces;
    v5 = 0;
    if ( m_NumInterfaces )
    {
      while ( m_Interfaces[v5] != this )
      {
        if ( ++v5 >= m_NumInterfaces )
          goto LABEL_7;
      }
      m_Interfaces[v5] = 0LL;
    }
  }
LABEL_7:
  m_ConfiguredPipes = this->m_ConfiguredPipes;
  if ( m_ConfiguredPipes )
  {
    FxPoolFree(m_ConfiguredPipes);
    this->m_ConfiguredPipes = 0LL;
  }
  m_Settings = this->m_Settings;
  this->m_NumberOfConfiguredPipes = 0;
  if ( m_Settings )
  {
    FxPoolFree(m_Settings);
    this->m_Settings = 0LL;
  }
  this->m_UsbDevice->Release(
    this->m_UsbDevice,
    this,
    76,
    "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbinterface.cpp");
  FxNonPagedObject::~FxNonPagedObject(this, v8, v9);
}
