/*
 * XREFs of ??0FxRequestFromLookaside@@QEAA@PEAVFxDevice@@PEAU_IRP@@@Z @ 0x1C0037F44
 * Callers:
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0037E90 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C0005200 (--0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestCo.c)
 */

void __fastcall FxRequestFromLookaside::FxRequestFromLookaside(
        FxRequestFromLookaside *this,
        FxDevice *Device,
        _IRP *Irp)
{
  FxRequestBase::FxRequestBase(
    this,
    Device->m_Globals,
    0x168u,
    Irp,
    FxRequestDoesNotOwnIrp,
    FxRequestConstructorCallerIsFx,
    FxObjectTypeExternal);
  this->m_SystemBuffer.FxRequest::__vftable = (FxRequestSystemBuffer_vtbl *)FxRequestSystemBuffer::`vftable';
  this->m_SystemBuffer.m_Buffer = 0LL;
  this->m_OutputBuffer.FxRequest::__vftable = (FxRequestOutputBuffer_vtbl *)FxRequestOutputBuffer::`vftable';
  this->m_OutputBuffer.m_Buffer = 0LL;
  this->m_OutputBufferOffset = 232;
  this->m_SystemBufferOffset = 216;
  this->m_IoQueue = 0LL;
  this->m_PowerStopState = 0;
  this->m_OwnerListEntry.Blink = &this->m_OwnerListEntry;
  this->m_OwnerListEntry.Flink = &this->m_OwnerListEntry;
  this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
  this->m_OwnerListEntry2.Flink = &this->m_OwnerListEntry2;
  this->m_ForwardProgressList.Blink = &this->m_ForwardProgressList;
  this->m_ForwardProgressList.Flink = &this->m_ForwardProgressList;
  this->__vftable = (FxRequestFromLookaside_vtbl *)FxRequestFromLookaside::`vftable';
  this->m_Presented = 0;
  *(_WORD *)&this->m_Reserved = 0;
  this->m_ForwardProgressQueue = 0LL;
  this->m_InternalContext = 0LL;
  this->m_DeviceBase = Device->m_DeviceBase;
}
