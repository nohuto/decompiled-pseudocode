/*
 * XREFs of ??1FxIoContext@@UEAA@XZ @ 0x1C0065430
 * Callers:
 *     FxIoTargetSendIo @ 0x1C00867C0 (FxIoTargetSendIo.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C0091484 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C0094880 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxIoContext::~FxIoContext(FxIoContext *this)
{
  _QWORD *m_BufferToFree; // rcx
  _MDL *m_MdlToFree; // rcx

  this->__vftable = (FxIoContext_vtbl *)FxIoContext::`vftable';
  m_BufferToFree = this->m_BufferToFree;
  if ( m_BufferToFree )
  {
    FxPoolFree(m_BufferToFree);
    this->m_BufferToFree = 0LL;
  }
  this->m_BufferToFreeLength = 0LL;
  m_MdlToFree = this->m_MdlToFree;
  this->m_CopyBackToBuffer = 0;
  if ( m_MdlToFree )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_MdlToFree);
      this->m_UnlockPages = 0;
    }
    if ( BYTE4(this->m_OriginalMdl[6].MappedSystemVa) )
      FxMdlFreeDebug(this->m_DriverGlobals, this->m_MdlToFree);
    else
      IoFreeMdl(this->m_MdlToFree);
    this->m_MdlToFree = 0LL;
  }
  this->__vftable = (FxIoContext_vtbl *)FxRequestContext::`vftable';
}
