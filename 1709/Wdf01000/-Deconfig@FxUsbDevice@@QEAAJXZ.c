/*
 * XREFs of ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C009151C
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C008C960 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0005DB0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00239F0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C00640B8 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C00641E0 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C008FC80 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C0091B28 (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxUsbDevice::Deconfig(FxUsbDevice *this)
{
  unsigned __int8 v2; // dl
  int v3; // ebx
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+20h] [rbp-E8h] BYREF
  FxSyncRequest request; // [rsp+30h] [rbp-D8h] BYREF
  _URB_SELECT_CONFIGURATION urb_8; // [rsp+168h] [rbp+60h] OVERLAPPED BYREF

  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, this->m_Globals, 0LL, 0LL);
  v3 = FxRequestBase::ValidateTarget(*(FxRequestBase **)&request.m_ClearContextOnDestroy, (unsigned __int64)this);
  if ( v3 >= 0 )
  {
    FxUsbDevice::PipesGotoRemoveState(this, v2);
    memset(&urb_8, 0, sizeof(urb_8));
    *(_DWORD *)&urb_8.Hdr.Length = 88;
    urb_8.ConfigurationDescriptor = 0LL;
    FxFormatUsbRequest(
      *(FxRequestBase **)&request.m_ClearContextOnDestroy,
      (_FILE_OBJECT *)&urb_8,
      FxUrbTypeLegacy,
      0LL);
    options.Timeout = 0x400000010LL;
    request.__vftable = 0LL;
    v3 = FxIoTarget::SubmitSync(
           this,
           *(FxRequest **)&request.m_ClearContextOnDestroy,
           (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
           0LL);
  }
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return (unsigned int)v3;
}
