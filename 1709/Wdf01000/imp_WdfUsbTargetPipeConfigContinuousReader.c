/*
 * XREFs of imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0089EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qLd @ 0x1C0035194 (WPP_IFR_SF_qLd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0066444 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qDd @ 0x1C0073AB8 (WPP_IFR_SF_qDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C008D720 (-_UsbdPipeTypeToWdf@FxUsbPipe@@SA-AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008EAD0 (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 */

int __fastcall imp_WdfUsbTargetPipeConfigContinuousReader(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config)
{
  unsigned __int8 v5; // dl
  unsigned __int16 v6; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v8; // esi
  int result; // eax
  unsigned __int16 v10; // r9
  int v11; // edi
  unsigned __int64 TransferLength; // rax
  unsigned __int64 HeaderLength; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int16 v17; // r9
  unsigned __int64 v18; // rcx
  _WDF_USB_PIPE_TYPE _a3; // eax
  unsigned __int8 v20; // dl
  FxUsbPipe *v21; // r9
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  FxUsbPipe *pUsbPipe; // [rsp+70h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(pUsbPipe->m_Globals, retaddr);
  if ( Config->Size != 72 )
  {
    v8 = -1073741820;
    WPP_IFR_SF_qddd(m_Globals, v5, 0xEu, 0xFu, WPP_FxUsbPipeAPI_cpp_Traceguids, Config, Config->Size, 72, -1073741820);
    return v8;
  }
  if ( !Config->EvtUsbTargetPipeReadComplete )
  {
    v10 = 16;
LABEL_8:
    v11 = -1073741811;
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v10, WPP_FxUsbPipeAPI_cpp_Traceguids, -1073741811);
    return v11;
  }
  TransferLength = Config->TransferLength;
  if ( !TransferLength )
  {
    v10 = 17;
    goto LABEL_8;
  }
  HeaderLength = Config->HeaderLength;
  v14 = -1LL;
  v15 = HeaderLength + TransferLength;
  v16 = -1LL;
  if ( v15 >= HeaderLength )
    v16 = v15;
  v8 = v15 < HeaderLength ? 0xC0000095 : 0;
  if ( v15 < HeaderLength )
  {
    v17 = 18;
LABEL_16:
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v17, WPP_FxUsbPipeAPI_cpp_Traceguids, v8);
    return v8;
  }
  v18 = v16 + Config->TrailerLength;
  if ( v18 >= v16 )
    v14 = v16 + Config->TrailerLength;
  v8 = v18 < v16 ? 0xC0000095 : 0;
  if ( v18 < v16 )
  {
    v17 = 19;
    goto LABEL_16;
  }
  result = FxValidateObjectAttributes(pUsbPipe->m_Globals, Config->BufferAttributes, 1, v6);
  if ( result >= 0 )
  {
    _a3 = FxUsbPipe::_UsbdPipeTypeToWdf(pUsbPipe->m_PipeInformation.PipeType);
    if ( (unsigned int)(_a3 - 3) > 1 )
    {
      v11 = -1073741808;
      WPP_IFR_SF_qLd(m_Globals, v20, 0xEu, 0x14u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a3, -1073741808);
      return v11;
    }
    if ( (v21->m_PipeInformation.EndpointAddress & 0x80u) == 0 )
    {
      v11 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, -1073741808);
      return v11;
    }
    if ( v21->m_CheckPacketSize )
    {
      v22 = Config->TransferLength;
      v23 = v22 % v21->m_PipeInformation.MaximumPacketSize;
      if ( v23 )
      {
        v11 = -1073741306;
        WPP_IFR_SF_qDd(
          m_Globals,
          v23,
          0xEu,
          0x16u,
          WPP_FxUsbPipeAPI_cpp_Traceguids,
          (const void *)v22,
          v21->m_PipeInformation.MaximumPacketSize,
          0xC0000206);
        return v11;
      }
    }
    return FxUsbPipe::InitContinuousReader(v21, Config, v14);
  }
  return result;
}
