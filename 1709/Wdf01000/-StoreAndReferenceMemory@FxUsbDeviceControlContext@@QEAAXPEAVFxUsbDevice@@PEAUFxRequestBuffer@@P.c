/*
 * XREFs of ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C0094DC8
 * Callers:
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C0093AF8 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 * Callees:
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C0037720 (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C00A5E78 (-AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z.c)
 */

void __fastcall FxUsbDeviceControlContext::StoreAndReferenceMemory(
        FxUsbDeviceControlContext *this,
        FxUsbDevice *Device,
        FxRequestBuffer *Buffer,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket)
{
  _MDL *m_PartialMdl; // rcx

  this->m_CompletionParams.Type = WdfRequestTypeUsb;
  this->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&this->m_UsbParameters;
  this->m_UsbParameters.Type = WdfUsbRequestTypeDeviceControlTransfer;
  memset(this->m_Urb, 0, sizeof(_URB_CONTROL_TRANSFER));
  this->m_Urb->Hdr.Function = 8;
  this->m_Urb->Hdr.Length = 136;
  FxRequestContext::_StoreAndReferenceMemoryWorker(this, &this->m_RequestMemory, Buffer);
  FxRequestBuffer::AssignValues(
    Buffer,
    &this->m_Urb->TransferBuffer,
    &this->m_Urb->TransferBufferMDL,
    &this->m_Urb->TransferBufferLength);
  *(_WDF_USB_CONTROL_SETUP_PACKET *)this->m_Urb->SetupPacket = *SetupPacket;
  *(_WORD *)&this->m_Urb->SetupPacket[6] = this->m_Urb->TransferBufferLength;
  this->m_Urb->TransferFlags = 2;
  if ( (SetupPacket->Packet.bm.Byte & 0x80u) != 0 )
    this->m_Urb->TransferFlags |= 1u;
  if ( Device->m_OnUSBD )
    this->m_Urb->PipeHandle = Device->m_ControlPipe;
  else
    this->m_Urb->TransferFlags |= 8u;
  m_PartialMdl = this->m_PartialMdl;
  if ( m_PartialMdl )
    this->m_Urb->TransferBufferMDL = m_PartialMdl;
}
