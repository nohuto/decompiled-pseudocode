/*
 * XREFs of imp_WdfDeviceEnqueueRequest @ 0x1C0001F90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0008980 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

int __fastcall imp_WdfDeviceEnqueueRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int64 Request)
{
  WDFDEVICE__ *v4; // rsi
  FxDevice *v5; // rdi
  __int64 v6; // r15
  FxDevice *Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  FxRequest *v9; // rcx
  FxDevice *pDevice; // [rsp+68h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+78h] [rbp+20h] BYREF

  v4 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  v5 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v6) = 0;
  Offset = v5;
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    Device = LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    Offset = (FxDevice *)((char *)v5 - Device);
  }
  if ( Offset->m_Type == 4098 )
  {
    pDevice = Offset;
  }
  else
  {
    FxObjectHandleGetPtrQI(Offset, (void **)&pDevice, v4, 0x1002u, Device);
    Offset = pDevice;
  }
  m_Globals = Offset->m_Globals;
  LOWORD(Offset) = 0;
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    Offset = (FxDevice *)LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v5 = (FxDevice *)((char *)v5 - (__int64)Offset);
  }
  if ( v5->m_Type == 4098 )
  {
    pDevice = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pDevice, v4, 0x1002u, (unsigned __int16)Offset);
    v5 = pDevice;
  }
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v9 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v6 = LOWORD(v9->__vftable);
    v9 = (FxRequest *)((char *)v9 - v6);
  }
  if ( v9->m_Type == 4104 )
  {
    pRequest = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pRequest, (void *)Request, 0x1008u, v6);
    v9 = pRequest;
    v5 = pDevice;
  }
  return FxPkgIo::EnqueueRequest(v5->m_PkgIo, v5, v9);
}
