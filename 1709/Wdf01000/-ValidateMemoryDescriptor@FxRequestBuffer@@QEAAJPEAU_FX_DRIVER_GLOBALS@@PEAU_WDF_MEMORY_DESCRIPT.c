/*
 * XREFs of ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0024520
 * Callers:
 *     FxIoTargetSendIoctl @ 0x1C0024710 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C00867C0 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0087410 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C008CD90 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C008F770 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C00246B0 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_D @ 0x1C006E904 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxRequestBuffer::ValidateMemoryDescriptor(
        FxRequestBuffer *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_MEMORY_DESCRIPTOR *Descriptor,
        char Flags)
{
  IFxMemory *Buffer; // rcx
  unsigned int Length; // eax
  unsigned int _a1; // edi
  void *v11; // rdx
  _WDFMEMORY_OFFSET *Offsets; // rax
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned int v16; // eax
  unsigned __int16 v17; // r9
  IFxMemory *pMemory; // [rsp+60h] [rbp+18h] BYREF

  if ( Descriptor )
  {
    switch ( Descriptor->Type )
    {
      case WdfMemoryDescriptorTypeBuffer:
        Buffer = (IFxMemory *)Descriptor->u.BufferType.Buffer;
        if ( Buffer )
        {
LABEL_4:
          Length = Descriptor->u.BufferType.Length;
          this->DataType = FxRequestBufferBuffer;
LABEL_5:
          _a1 = 0;
          this->u.Mdl.Length = Length;
          this->u.Memory.Memory = Buffer;
          return _a1;
        }
        if ( (Flags & 2) == 0 )
        {
          WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xBu, WPP_FxRequestBuffer_cpp_Traceguids);
          return 3221225485LL;
        }
        v16 = Descriptor->u.BufferType.Length;
        if ( !v16 )
          goto LABEL_4;
        v17 = 12;
        goto LABEL_34;
      case WdfMemoryDescriptorTypeMdl:
        Buffer = (IFxMemory *)Descriptor->u.BufferType.Buffer;
        if ( Buffer )
          goto LABEL_29;
        if ( (Flags & 2) == 0 )
        {
          WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xDu, WPP_FxRequestBuffer_cpp_Traceguids);
          return 3221225485LL;
        }
        v16 = Descriptor->u.BufferType.Length;
        if ( !v16 )
        {
LABEL_29:
          Length = Descriptor->u.BufferType.Length;
          this->DataType = FxRequestBufferMdl;
          goto LABEL_5;
        }
        v17 = 14;
LABEL_34:
        WPP_IFR_SF_D(
          FxDriverGlobals,
          (unsigned __int8)FxDriverGlobals,
          6u,
          v17,
          WPP_FxRequestBuffer_cpp_Traceguids,
          v16);
        return 3221225485LL;
      case WdfMemoryDescriptorTypeHandle:
        v11 = Descriptor->u.BufferType.Buffer;
        _a1 = 0;
        pMemory = 0LL;
        if ( v11 )
        {
          FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)v11, 0x100Au, (void **)&pMemory);
          Offsets = Descriptor->u.HandleType.Offsets;
          if ( !Offsets )
            goto LABEL_11;
          BufferLength = Offsets->BufferLength;
          v14 = BufferLength + Offsets->BufferOffset;
          if ( v14 >= BufferLength )
          {
            v15 = BufferLength + Offsets->BufferOffset;
            if ( v15 <= pMemory->GetBufferSize(pMemory) )
            {
LABEL_11:
              if ( pMemory )
                FxRequestBuffer::SetMemory(this, pMemory, Descriptor->u.HandleType.Offsets);
              return _a1;
            }
            _a1 = -1073741675;
          }
          else
          {
            _a1 = v14 < BufferLength ? 0xC0000095 : 0;
          }
          WPP_IFR_SF_d(FxDriverGlobals, 2u, 6u, 0x10u, WPP_FxRequestBuffer_cpp_Traceguids, _a1);
          return _a1;
        }
        if ( (Flags & 2) != 0 )
          return _a1;
        WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xFu, WPP_FxRequestBuffer_cpp_Traceguids);
        break;
    }
    return (unsigned int)-1073741811;
  }
  if ( (Flags & 1) != 0 )
    return 0LL;
  WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xAu, WPP_FxRequestBuffer_cpp_Traceguids);
  return 3221225485LL;
}
