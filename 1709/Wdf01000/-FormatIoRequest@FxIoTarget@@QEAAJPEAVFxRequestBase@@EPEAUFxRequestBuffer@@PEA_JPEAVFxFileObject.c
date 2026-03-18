/*
 * XREFs of ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0089524
 * Callers:
 *     FxIoTargetFormatIo @ 0x1C00865CC (FxIoTargetFormatIo.c)
 *     FxIoTargetSendIo @ 0x1C00867C0 (FxIoTargetSendIo.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0005DB0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C00245E8 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0024654 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0037920 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0037A24 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0064414 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C00654C8 (--0FxIoContext@@QEAA@XZ.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C00655A0 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 */

__int64 __fastcall FxIoTarget::FormatIoRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 MajorCode,
        FxRequestBuffer *IoBuffer,
        _LARGE_INTEGER *DeviceOffset)
{
  char v9; // r15
  __int64 result; // rax
  int v11; // esi
  FxRequestContext *m_RequestContext; // rdi
  FxIoContext *v13; // rax
  FxRequestContext *v14; // rax
  unsigned int BufferLength; // eax
  size_t v16; // r14
  const void *v17; // rcx
  int Buffer; // eax
  unsigned __int16 v19; // r9
  _IRP::<unnamed_type_AssociatedIrp> v20; // rcx
  FxRequestContext_vtbl *v21; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  void *pBuffer[2]; // [rsp+40h] [rbp-38h] BYREF
  void *Caller; // [rsp+78h] [rbp+0h]

  pBuffer[0] = 0LL;
  v9 = 0;
  result = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v11 = result;
  if ( (int)result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 1 )
    {
      v13 = (FxIoContext *)FxPoolAllocator(
                             this->m_Globals,
                             &this->m_Globals->FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             0xB0uLL,
                             this->m_Globals->Tag,
                             Caller);
      if ( v13 )
      {
        FxIoContext::FxIoContext(v13);
        m_RequestContext = v14;
      }
      else
      {
        m_RequestContext = 0LL;
      }
      if ( !m_RequestContext )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetKm_cpp_Traceguids);
        return 3221225626LL;
      }
      FxRequestBase::SetContext(Request, m_RequestContext);
    }
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, IoBuffer);
    memset(&Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1], 0, 0x38uLL);
    if ( !Request->m_IrpAllocation )
    {
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    }
    if ( !this->m_InStack )
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = MajorCode;
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 35) = MajorCode;
    BufferLength = FxRequestBuffer::GetBufferLength(IoBuffer);
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 34) = 1;
    v16 = BufferLength;
    *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
    m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
    m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
    *((_DWORD *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
    switch ( this->m_TargetIoType )
    {
      case 1u:
        Buffer = FxRequestBuffer::GetBuffer(IoBuffer, (IFxMemory **)pBuffer);
        v11 = Buffer;
        if ( Buffer >= 0 )
        {
          Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
          goto LABEL_45;
        }
        v19 = 14;
        break;
      case 2u:
        Request->m_Irp.m_Irp->UserBuffer = 0LL;
        if ( !BufferLength )
        {
          Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
          goto LABEL_45;
        }
        if ( m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset >= BufferLength
          && (v20.MasterIrp = (_IRP *)m_RequestContext[1].__vftable) != 0LL )
        {
          Request->m_Irp.m_Irp->AssociatedIrp = v20;
        }
        else
        {
          Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                    this->m_Globals,
                                                                    &this->m_Globals->FxPoolFrameworks,
                                                                    ExDefaultNonPagedPoolType,
                                                                    BufferLength,
                                                                    this->m_Globals->Tag,
                                                                    Caller);
          if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
          {
            WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xBu, WPP_FxIoTargetKm_cpp_Traceguids);
            v11 = -1073741670;
LABEL_52:
            FxRequestBase::ContextReleaseAndRestore(Request);
            return (unsigned int)v11;
          }
          v9 = 1;
        }
        Buffer = FxRequestBuffer::GetBuffer(IoBuffer, (IFxMemory **)pBuffer);
        v11 = Buffer;
        if ( Buffer >= 0 )
        {
          if ( MajorCode == 4 )
          {
            if ( pBuffer[0] )
              memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, pBuffer[0], v16);
          }
          else
          {
            Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
          }
          if ( v9 )
          {
            v21 = m_RequestContext[1].__vftable;
            m_RequestContext[1].__vftable = (FxRequestContext_vtbl *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
            m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset = v16;
            *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
            if ( v21 )
              FxPoolFree(v21);
            v9 = 0;
          }
          else
          {
            *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
          }
LABEL_45:
          if ( v11 < 0 )
          {
            if ( v9 )
            {
              FxPoolFree(&Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp->Type);
              Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
            }
            goto LABEL_52;
          }
          goto LABEL_46;
        }
        v19 = 12;
        break;
      case 3u:
        Buffer = FxRequestBuffer::GetOrAllocateMdl(
                   IoBuffer,
                   this->m_Globals,
                   &Request->m_Irp.m_Irp->MdlAddress,
                   (_MDL **)&m_RequestContext[1].m_CompletionParams.IoStatus.Information,
                   (unsigned __int8 *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 33,
                   (_LOCK_OPERATION)(MajorCode == 3),
                   m_RequestContext[1].m_CompletionParams.IoStatus.Information != 0,
                   &m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument4.Value);
        v11 = Buffer;
        if ( Buffer >= 0 )
        {
LABEL_46:
          Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = v16;
          CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
          if ( DeviceOffset )
            CurrentStackLocation[-1].Parameters.Read.ByteOffset = *DeviceOffset;
          else
            CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = 0LL;
          FxRequestBase::VerifierSetFormatted(Request);
          return (unsigned int)v11;
        }
        v19 = 13;
        break;
      default:
        v11 = -1073741436;
        v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v17 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxIoTargetKm_cpp_Traceguids, v17, -1073741436);
        goto LABEL_52;
    }
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v19, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
    goto LABEL_45;
  }
  return result;
}
